#include "_scene.h"


_scene::_scene()
{
    //ctor
}

_scene::~_scene()
{
    //dtor
}
GLint _scene::initGL()
{
   glClearColor(1.0,1.0,1.0,1.0);
   glClearDepth(1.0);
   glEnable(GL_DEPTH_TEST);
   glDepthFunc(GL_LEQUAL);

   glEnable(GL_BLEND); // take off the transparent background
   glBlendFunc(GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);

   glEnable(GL_LIGHTING);
   glEnable(GL_LIGHT0);

  // glEnable(GL_COLOR_MATERIAL);
  // myLight->setLight(GL_LIGHT0);

   dim.x = GetSystemMetrics(SM_CXSCREEN);
   dim.y = GetSystemMetrics(SM_CYSCREEN);

   return true;
}

void _scene::reSize(GLint width, GLint height)
{
    GLfloat aspectRatio = (GLfloat)width/(GLfloat)height;
    // keep track of the resize window
    glViewport(0,0,width,height); // adjusting the viewport
    glMatrixMode(GL_PROJECTION);  // perspective projection settings
    glLoadIdentity();             // identity matrix
    gluPerspective(45,aspectRatio,0.1,100.0); // projection settings
    glMatrixMode(GL_MODELVIEW);   // camera and model settings
    glLoadIdentity();             // identity matrix

    dim.x = GetSystemMetrics(SM_CXSCREEN);
    dim.y = GetSystemMetrics(SM_CYSCREEN);
}

void _scene::drawScene()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
}


int _scene::winMsg(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch(uMsg)
    {
    case WM_KEYDOWN:

        break;

    case WM_KEYUP: break;

    case WM_LBUTTONDOWN:
    case WM_RBUTTONDOWN:

        break;
    case WM_LBUTTONUP:
    case WM_RBUTTONUP:
    case WM_MBUTTONUP:

        break;
    case WM_MOUSEMOVE:

        break;
    case WM_MOUSEWHEEL:

        break;
    }
}
