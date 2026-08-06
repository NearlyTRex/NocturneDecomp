; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_texture_cpp_renderTextureAtlas_FUN_00545aa0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c02594
;   undefined4 DAT_02dd0f84
;
; Called Functions:
;   engine_special.cpp_clearScreen_FUN_0052ee70
;   engine_texture.cpp_CTextureCache_FUN_00545700
;   wincore_wddvmem.cpp_closeScreenDevice_FUN_00553520
;   wincore_wddvmem.cpp_openScreenDevice_FUN_00553470
;   wincore_wddvmem.cpp_swapBuffers_FUN_00553910
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c02594],0x0      ; 00545aa0 | DAT_01c02594
        ;   Label: engine_texture.cpp_renderTextureAtlas_FUN_00545aa0
    JNZ 0x00545aaa                      ; 00545aa7
        ;   XREF to: 00545aaa (CONDITIONAL_JUMP)  ; LAB_00545aaa
    RET                                 ; 00545aa9
    PUSH EBX                            ; 00545aaa
        ;   Label: LAB_00545aaa
    CALL wincore_wddvmem.cpp_openScreenDevice_FUN_00553470 ; 00545aab
        ;   XREF to: 00553470 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_openScreenDevice_FUN_00553470()
    MOV ECX,dword ptr [0x02dd0f84]      ; 00545ab0 | DAT_02dd0f84
    PUSH ECX                            ; 00545ab6
    CALL engine_texture.cpp_CTextureCache_FUN_00545700 ; 00545ab7
        ;   XREF to: 00545700 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_CTextureCache_FUN_00545700(CTextureCache * this_ptr)
    ADD ESP,0x4                         ; 00545abc
    CALL engine_special.cpp_clearScreen_FUN_0052ee70 ; 00545abf
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0052ee70()
    CALL wincore_wddvmem.cpp_closeScreenDevice_FUN_00553520 ; 00545ac4
        ;   XREF to: 00553520 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_closeScreenDevice_FUN_00553520()
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 00545ac9
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    POP EBX                             ; 00545ace
    RET                                 ; 00545acf

