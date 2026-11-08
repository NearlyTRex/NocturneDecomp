# A package can come as a ZIP or a 7z, read with libarchive. Its compression comes from zlib
# (deflate) and liblzma (LZMA and LZMA2), fetched too so no system -dev package is needed; every
# other libarchive dependency is turned off. libarchive looks for the two with find_package, so
# the module's variables are set to the fetched targets beforehand. Their own tests aren't
# built or given to ctest.

set(BUILD_TESTING OFF)

FetchContent_Declare(zlib
    GIT_REPOSITORY https://github.com/madler/zlib.git
    GIT_TAG        v1.3.1
    GIT_SHALLOW    TRUE
    EXCLUDE_FROM_ALL
    SYSTEM)
set(ZLIB_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

FetchContent_Declare(xz
    GIT_REPOSITORY https://github.com/tukaani-project/xz.git
    GIT_TAG        v5.8.1
    GIT_SHALLOW    TRUE
    EXCLUDE_FROM_ALL
    SYSTEM)
set(XZ_NLS OFF CACHE BOOL "" FORCE)
set(XZ_DOC OFF CACHE BOOL "" FORCE)
foreach(_tool IN ITEMS XZDEC LZMADEC LZMAINFO XZ SCRIPTS SYMLINKS SYMLINKS_LZMA)
    set(XZ_TOOL_${_tool} OFF CACHE BOOL "" FORCE)
endforeach()

FetchContent_MakeAvailable(zlib xz)

# zlib's targets don't carry its headers, one of which it generates.
target_include_directories(zlibstatic SYSTEM INTERFACE "${zlib_SOURCE_DIR}" "${zlib_BINARY_DIR}")
add_library(ZLIB::ZLIB ALIAS zlibstatic)
set(ZLIB_INCLUDE_DIR "${zlib_SOURCE_DIR}" CACHE PATH "" FORCE)
set(ZLIB_LIBRARY zlibstatic CACHE STRING "" FORCE)
set(LIBLZMA_INCLUDE_DIR "${xz_SOURCE_DIR}/src/liblzma/api" CACHE PATH "" FORCE)
set(LIBLZMA_LIBRARY liblzma CACHE STRING "" FORCE)
# FindLibLZMA links a test program against the library to see these, which a target not yet
# built can't answer.
foreach(_check IN ITEMS AUTO_DECODER EASY_ENCODER LZMA_PRESET)
    set(LIBLZMA_HAS_${_check} TRUE CACHE INTERNAL "")
endforeach()

FetchContent_Declare(libarchive
    GIT_REPOSITORY https://github.com/libarchive/libarchive.git
    GIT_TAG        v3.8.1
    GIT_SHALLOW    TRUE
    EXCLUDE_FROM_ALL
    SYSTEM)
foreach(_option IN ITEMS OPENSSL MBEDTLS NETTLE LIBB2 LZ4 LZO ZSTD BZip2 LIBXML2 EXPAT
                         PCREPOSIX PCRE2POSIX LIBGCC CNG WIN32_XMLLITE TAR CPIO CAT UNZIP
                         XATTR ACL ICONV TEST INSTALL WERROR)
    set(ENABLE_${_option} OFF CACHE BOOL "" FORCE)
endforeach()
set(ENABLE_ZLIB ON CACHE BOOL "" FORCE)
set(ENABLE_LZMA ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(libarchive)
unset(BUILD_TESTING)

add_library(nocturne_libarchive INTERFACE)
target_link_libraries(nocturne_libarchive INTERFACE archive_static)
target_include_directories(nocturne_libarchive SYSTEM INTERFACE "${libarchive_SOURCE_DIR}/libarchive")
