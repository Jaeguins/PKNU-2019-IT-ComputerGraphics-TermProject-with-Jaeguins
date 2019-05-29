#pragma once
#include <vector>
#include "gl_object.hpp"
#include "obj_reader.hpp"
#include "viewport.hpp"

namespace model_viewer
{
    using namespace advanced_gl;

    

    class obj_viewer
    {
    public:
        viewport* viewport;
        obj_reader readed;
        gl_object converted;
        void convert();
        void read(string filename);
        void clear();
        obj_viewer(int,char**);
    };
}