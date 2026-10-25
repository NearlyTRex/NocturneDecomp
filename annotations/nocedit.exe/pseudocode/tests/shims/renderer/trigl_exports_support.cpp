// =============================================================================
// TRIGL EXPORTS SUPPORT — trigl.dll's export table, as the registry sees it
// =============================================================================
//
// The registry asks trigl's provider for its table and searches it; the real
// table points into the GL renderer. These two rows are what the tests look up.

#include "renderer/builtin_dll.h"

namespace {

int trigl_init(void) {
    return 1;
}
int trigl_information(void) {
    return 2;
}

const NocturneBuiltinExport kExports[] = {
    {"APIDLLinit", (void *)trigl_init},
    {"APIDLLInformation", (void *)trigl_information},
};

} // namespace

extern "C" void *nocturne_test_trigl_init(void) {
    return (void *)trigl_init;
}
extern "C" void *nocturne_test_trigl_information(void) {
    return (void *)trigl_information;
}

extern "C" const NocturneBuiltinExport *nocturne_trigl_native_exports(int *count) {
    *count = (int)(sizeof(kExports) / sizeof(kExports[0]));
    return kExports;
}
