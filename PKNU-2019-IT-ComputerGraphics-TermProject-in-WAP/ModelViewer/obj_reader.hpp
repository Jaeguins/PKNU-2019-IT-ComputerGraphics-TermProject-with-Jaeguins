#pragma once
#ifndef CHILDH
#define CHILDH
#include <string>
#include <vector>
#include "gl_vectors.hpp"
#include "gl_object.hpp"

namespace model_viewer
{
    class viewport;
    using namespace advanced_gl;
    using namespace std;

    class obj_reader :public gl_object
    {
    public:
        obj_reader(viewport* parent, const char* path);
        viewport* parent;
        bool load(string path);
        string path;
        std::vector<gl_vec_3f>vertices;
        std::vector<gl_vec_2f>uvs;
        std::vector<gl_vec_3f>normals;
        std::vector<gl_face>faces;
    };

}
#endif