# The core-profile GL header, so platform/gl compiles without SDL and without a system GL
# package. Neither registry tags releases, so each file is pinned by commit and hash.

set(_khronos_include "${FETCHCONTENT_BASE_DIR}/khronos/include")

function(_khronos_download url path sha256)
    if(EXISTS "${_khronos_include}/${path}")
        file(SHA256 "${_khronos_include}/${path}" _actual)
        if(_actual STREQUAL sha256)
            return()
        endif()
    endif()
    file(DOWNLOAD "${url}" "${_khronos_include}/${path}"
         EXPECTED_HASH SHA256=${sha256} TLS_VERIFY ON STATUS _status)
    list(GET _status 0 _code)
    if(NOT _code EQUAL 0)
        message(FATAL_ERROR "downloading ${path}: ${_status}")
    endif()
endfunction()

_khronos_download(
    https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/1cdd228e34966dd6b95bd203e9f84faba0f371a1/api/GL/glcorearb.h
    GL/glcorearb.h
    65fae555a8b3b5709099837001e0c14228b3e45651e2d0fa2ad22649833921e1)
_khronos_download(
    https://raw.githubusercontent.com/KhronosGroup/EGL-Registry/5961a7fe64cf8a126890ced6f13d69e0a1e1b83e/api/KHR/khrplatform.h
    KHR/khrplatform.h
    7b1e01aaa7ad8f6fc34b5c7bdf79ebf5189bb09e2c4d2e79fc5d350623d11e83)

add_library(nocturne_khronos INTERFACE)
target_include_directories(nocturne_khronos SYSTEM INTERFACE "${_khronos_include}")
