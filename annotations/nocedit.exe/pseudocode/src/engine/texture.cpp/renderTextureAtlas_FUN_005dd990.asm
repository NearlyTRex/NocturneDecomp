; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_texture_cpp_renderTextureAtlas_FUN_005dd990(void)
;
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   CTextureCache* g_TextureCacheInstance
;
; Called Functions:
;   engine_texture.cpp_CTextureCache_renderAllTextures_FUN_005dd580
;   wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630
;   wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02d03e94],0x0      ; 005dd990 | g_UseExternalRenderer
        ;   Label: engine_texture.cpp_renderTextureAtlas_FUN_005dd990
    JNZ 0x005dd99a                      ; 005dd997
        ;   XREF to: 005dd99a (CONDITIONAL_JUMP)  ; LAB_005dd99a
    RET                                 ; 005dd999
    PUSH EBX                            ; 005dd99a
        ;   Label: LAB_005dd99a
    CALL wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580 ; 005dd99b
        ;   XREF to: 005ed580 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580()
    MOV ECX,dword ptr [0x03f87358]      ; 005dd9a0 | g_TextureCacheInstance
    PUSH ECX                            ; 005dd9a6
    CALL engine_texture.cpp_CTextureCache_renderAllTextures_FUN_005dd580 ; 005dd9a7
        ;   XREF to: 005dd580 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_CTextureCache_renderAllTextures_FUN_005dd580(CTextureCache * this_ptr)
    ADD ESP,0x4                         ; 005dd9ac
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 005dd9af
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    CALL wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630 ; 005dd9b4
        ;   XREF to: 005ed630 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630()
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 005dd9b9
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    POP EBX                             ; 005dd9be
    RET                                 ; 005dd9bf

