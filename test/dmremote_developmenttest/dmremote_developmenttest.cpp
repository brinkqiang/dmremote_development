
#include "dmremote_development.h"

int main( int argc, char* argv[] ) {

    Idmremote_development* module = dmremote_developmentGetModule();
    if (module)
    {
        module->Test();
        module->Release();
    }
    return 0;
}
