# -----------------------------------------------------------------------------
# The decompiled game: one OBJECT library per module, nocturne_<module>, listed
# in _module_libs for the executable to link. Only with NOCTURNE_BUILD_EXE.
# -----------------------------------------------------------------------------

# PCH: every decompiled TU opens with #include "nocturne.h", which pulls in
# the full type/global/prototype tree. Precompiling it once and REUSE_FROM
# across every module OBJECT library cuts full-rebuild cost dramatically.
set(_pch_source "")
set(_module_libs "")
foreach(_module IN LISTS NOCTURNE_MODULES)
    file(STRINGS "${NOCTURNE_GEN_DIR}/sources_${_module}.txt" _sources)
    if(_sources)
        set_source_files_properties(${_sources} PROPERTIES LANGUAGE CXX)
        add_library(nocturne_${_module} OBJECT ${_sources})
        target_include_directories(nocturne_${_module} PRIVATE
            "${NOCTURNE_INCLUDE_DIR}" "${NOCTURNE_SHIMS_DIR}")
        target_compile_options(nocturne_${_module} PRIVATE
            ${NOCTURNE_COMMON_WARNINGS}
            ${NOCTURNE_SANITIZE_FLAGS})
        target_compile_features(nocturne_${_module} PRIVATE cxx_std_17)

        # Performance: the software renderer's per-pixel and per-polygon
        # loops — span rasterizers, lightmap blends, the 3D pipeline, alpha
        # rows, lines and the iris fade. At the Debug build's -O0 they
        # dominate framerate — e.g. the flashlight volumetric halo blends ~19
        # near screen-filling additive quads/frame. Build just these files at
        # -O2 so the rest of the tree stays -O0/debuggable. Only rendering:
        # nothing here steps the simulation. Output is bit-identical: -fwrapv
        # (global) preserves signed-overflow wrap, and -fno-strict-aliasing
        # keeps the decompiler's pervasive pointer type-punning
        # (framebuffer/z reads, packed-channel casts) valid that -O2 would
        # otherwise miscompile. -g and ASan still apply.
        foreach(_src IN LISTS _sources)
            if(_src MATCHES "Scanline(16|32)_FUN_"
               OR _src MATCHES "/src/core/dstrender\\.cpp/"
               OR _src MATCHES "/src/engine/3d\\.c/"
               OR _src MATCHES "/src/core/door\\.cpp/CDoor_render"
               OR _src MATCHES "/src/core/flame\\.cpp/CFlame_(render|updateGlobe)"
               OR _src MATCHES "/src/core/dpart\\.cpp/(CDemonPart_renderFaces|setup|findEdgeByYStart)"
               OR _src MATCHES "/src/engine/font\\.cpp/drawAlphaBlendedPixels_"
               OR _src MATCHES "/src/engine/special\\.cpp/render(AlphaRow32|Scanline)_"
               OR _src MATCHES "/src/engine/2d\\.c/(plotPixel|drawHLine)_"
               OR _src MATCHES "/src/core/dcamera\\.cpp/CDemonCamera_(addLightmapToCorona|compositeLightmapToFramebuffer|blendLightmapPixel32)_"
               OR _src MATCHES "/src/core/game\\.cpp/CGame_renderIrisFade_")
                # SKIP_PRECOMPILE_HEADERS: the shared PCH is built at -O0, so a
                # file at -O2 can't REUSE_FROM it (__OPTIMIZE__ mismatch). These
                # few files just re-include nocturne.h directly.
                set_source_files_properties("${_src}" PROPERTIES
                    COMPILE_OPTIONS "-O2;-fno-strict-aliasing"
                    SKIP_PRECOMPILE_HEADERS ON)
            endif()
        endforeach()

        if(_pch_source STREQUAL "")
            target_precompile_headers(nocturne_${_module} PRIVATE
                "${NOCTURNE_INCLUDE_DIR}/nocturne.h")
            set(_pch_source nocturne_${_module})
        else()
            target_precompile_headers(nocturne_${_module}
                REUSE_FROM ${_pch_source})
        endif()

        list(APPEND _module_libs nocturne_${_module})
    endif()
endforeach()

# A platform whose SDL runs the app from an entry point of its own has
# main.cpp's main named SDL_main for it to call (main/main.cpp). That file
# alone sees SDL's headers for it, so it leaves the shared PCH, as the -O2
# files above do.
if(NOCTURNE_PLATFORM_SDL_MAIN)
    set_source_files_properties("${NOCTURNE_MAIN_DIR}/main.cpp" PROPERTIES
        COMPILE_DEFINITIONS "NOCTURNE_SDL_MAIN=1"
        INCLUDE_DIRECTORIES "${SDL2_INCLUDE_DIRS}"
        SKIP_PRECOMPILE_HEADERS ON)
endif()
