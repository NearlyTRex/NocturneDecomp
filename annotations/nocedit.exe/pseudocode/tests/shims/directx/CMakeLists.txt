# The DirectX shims on SDL's dummy video driver, which shows no window, and its
# disk audio driver, which writes the sound to a file for the tests to read.
# The presenter and the game's window are stood in for by directx_support.cpp.
nocturne_test_suite(shims_directx
    SUBJECTS
        shims/directx/ddraw.cpp
        shims/directx/dsound.cpp
        src/globals/globals_610000.cpp
    SUPPORT
        directx_support.cpp
    LIBRARIES ${SDL2_LIBRARIES}
)
