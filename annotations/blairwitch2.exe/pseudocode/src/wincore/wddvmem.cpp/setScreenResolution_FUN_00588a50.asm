; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_wddvmem_cpp_setScreenResolution_FUN_00588a50(int width,int height,int bits_per_pixel)
;
; Parameters:
; int              Stack[0x4]:4   width
; int              Stack[0x8]:4   height
; int              Stack[0xc]:4   bits_per_pixel
;
; XREF[7]:
;   core_game.cpp_CGame_setGameRes_FUN_004b5fd0 at 004b5fff
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004b60c0 at 004b60eb
;   core_main.c_initializeGameSystems_FUN_004e46c0 at 004e47c7
;   engine_2d.c_initGraphicsSystem_FUN_00401010 at 0040103d
;   wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_00588ff0 at 005890b1
;   wincore_wddvmem.cpp_resetGraphicsSystem_FUN_00588de0 at 00588f44
;   wincore_wddvmem.cpp_videoRestore_FUN_005897e0 at 005898b8
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_005ee121
;   TerminatedCString s_WDDVMEM_Fatal_out_of_fra_005ee138
;   TerminatedCString s_wincore_wddvmem_cpp_005ee164
;   TerminatedCString s_WDDVMEM_Fatal_out_of_Z_b_005ee17b
;   TerminatedCString s_wincore_wddvmem_cpp_005ee1a3
;   TerminatedCString s_setScreenResolution_Crea_005ee1ba
;   int g_INT_006141b8 = 0x140
;   int g_INT_006141bc = 0xc8
;   int g_INT_006141c0 = 0x8
;   void* g_PTR_00622010
;   void* g_SoftwareZBuffer
;   void*[1200] g_ScreenBufferArray
;   uint*[1200] g_ZBufferScanlineArray
;   char* g_CHAR_PTR_01d046a0
;   int g_INT_01d046a4
;   ... and 6 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004e4500
;   crt_memory.c_malloc_FUN_005b8580
;   crt_memory.c_memset_FUN_005b77c0
;   crt_unknown.c_debugFree_FUN_005b86a0
;   engine_2d.c_setupViewportAndClipping_FUN_00401810
;   engine_special.cpp_clearScreen_FUN_0055b1f0
;   wincore_wddvmem.cpp_setupColorPalette_FUN_00589430
;   wincore_wddvmem.cpp_swapBuffers_FUN_00589560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00588a50
        ;   Label: wincore_wddvmem.cpp_setScreenResolution_FUN_00588a50
    PUSH ESI                            ; 00588a51
    PUSH EDI                            ; 00588a52
    PUSH EBP                            ; 00588a53
    SUB ESP,0x74                        ; 00588a54
    MOV EBX,dword ptr [ESP + 0x90]      ; 00588a57
    MOV EDX,dword ptr [0x02661aec]      ; 00588a5e | g_DirectDrawUnknown
    TEST EDX,EDX                        ; 00588a64
    JNZ 0x00588be7                      ; 00588a66
        ;   XREF to: 00588be7 (CONDITIONAL_JUMP)  ; LAB_00588be7
    MOV ESI,dword ptr [0x02661ae8]      ; 00588a6c | g_SoftwareRenderSurface
        ;   Label: LAB_00588a6c
    TEST ESI,ESI                        ; 00588a72
    JZ 0x00588a84                       ; 00588a74
        ;   XREF to: 00588a84 (CONDITIONAL_JUMP)  ; LAB_00588a84
    PUSH ESI                            ; 00588a76
    MOV EDX,dword ptr [ESI]             ; 00588a77
    XOR EDI,EDI                         ; 00588a79
    CALL dword ptr [EDX + 0x8]          ; 00588a7b
    MOV dword ptr [0x02661ae8],EDI      ; 00588a7e | g_SoftwareRenderSurface
    MOV EBP,dword ptr [0x02661ae4]      ; 00588a84 | g_DirectDrawSurface
        ;   Label: LAB_00588a84
    TEST EBP,EBP                        ; 00588a8a
    JZ 0x00588a9c                       ; 00588a8c
        ;   XREF to: 00588a9c (CONDITIONAL_JUMP)  ; LAB_00588a9c
    PUSH EBP                            ; 00588a8e
    MOV EDX,dword ptr [EBP]             ; 00588a8f
    CALL dword ptr [EDX + 0x8]          ; 00588a92
    XOR EAX,EAX                         ; 00588a95
    MOV [0x02661ae4],EAX                ; 00588a97 | g_DirectDrawSurface
    CMP EBX,0x8                         ; 00588a9c
        ;   Label: LAB_00588a9c
    JZ 0x00588aaf                       ; 00588a9f
        ;   XREF to: 00588aaf (CONDITIONAL_JUMP)  ; LAB_00588aaf
    CMP EBX,0x10                        ; 00588aa1
    JZ 0x00588aaf                       ; 00588aa4
        ;   XREF to: 00588aaf (CONDITIONAL_JUMP)  ; LAB_00588aaf
    CMP EBX,0x20                        ; 00588aa6
    JNZ 0x00588bdd                      ; 00588aa9
        ;   XREF to: 00588bdd (CONDITIONAL_JUMP)  ; LAB_00588bdd
    MOV EAX,dword ptr [ESP + 0x88]      ; 00588aaf
        ;   Label: LAB_00588aaf
    MOV ECX,dword ptr [0x00622010]      ; 00588ab6 | g_PTR_00622010
    MOV dword ptr [0x006141c0],EBX      ; 00588abc | g_INT_006141c0
    XOR EDX,EDX                         ; 00588ac2
    MOV [0x006141b8],EAX                ; 00588ac4 | g_INT_006141b8
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00588ac9
    MOV dword ptr [0x02661afc],EDX      ; 00588ad0 | g_Display24BitFallback
    MOV [0x006141bc],EAX                ; 00588ad6 | g_INT_006141bc
    TEST ECX,ECX                        ; 00588adb
    JZ 0x00588af0                       ; 00588add
        ;   XREF to: 00588af0 (CONDITIONAL_JUMP)  ; LAB_00588af0
    PUSH ECX                            ; 00588adf
    CALL crt_unknown.c_debugFree_FUN_005b86a0 ; 00588ae0
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_debugFree_FUN_005b86a0(void * ptr)
    XOR EDI,EDI                         ; 00588ae5
    ADD ESP,0x4                         ; 00588ae7
    MOV dword ptr [0x00622010],EDI      ; 00588aea | g_PTR_00622010
    MOV EBP,dword ptr [0x02661af0]      ; 00588af0 | g_PTR_02661af0
        ;   Label: LAB_00588af0
    TEST EBP,EBP                        ; 00588af6
    JZ 0x00588b0b                       ; 00588af8
        ;   XREF to: 00588b0b (CONDITIONAL_JUMP)  ; LAB_00588b0b
    PUSH EBP                            ; 00588afa
    CALL crt_unknown.c_debugFree_FUN_005b86a0 ; 00588afb
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_debugFree_FUN_005b86a0(void * ptr)
    XOR EDX,EDX                         ; 00588b00
    ADD ESP,0x4                         ; 00588b02
    MOV dword ptr [0x0070c62c],EDX      ; 00588b05 | g_SoftwareZBuffer
    MOV EAX,[0x006141b8]                ; 00588b0b | g_INT_006141b8
        ;   Label: LAB_00588b0b
    MOV ECX,dword ptr [0x006141bc]      ; 00588b10 | g_INT_006141bc
    IMUL ECX,EAX                        ; 00588b16
    MOV EAX,[0x006141c0]                ; 00588b19 | g_INT_006141c0
    MOV EDX,EAX                         ; 00588b1e
    SAR EDX,0x1f                        ; 00588b20
    SHL EDX,0x3                         ; 00588b23
    SBB EAX,EDX                         ; 00588b26
    SAR EAX,0x3                         ; 00588b28
    IMUL EAX,ECX                        ; 00588b2b
    PUSH EAX                            ; 00588b2e
    CALL crt_memory.c_malloc_FUN_005b8580 ; 00588b2f
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 00588b34
    MOV [0x00622010],EAX                ; 00588b37 | g_PTR_00622010
    TEST EAX,EAX                        ; 00588b3c
    JNZ 0x00588b63                      ; 00588b3e
        ;   XREF to: 00588b63 (CONDITIONAL_JUMP)  ; LAB_00588b63
    MOV ESI,0x5ee121                    ; 00588b40 | = "..\\wincore\\wddvmem.cpp"
    MOV EDI,0xea                        ; 00588b45
    PUSH 0x5ee138                       ; 00588b4a | = "WDDVMEM: Fatal - out of frame buffer ..."
    MOV dword ptr [0x01d046a0],ESI      ; 00588b4f | g_CHAR_PTR_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00588b55 | g_INT_01d046a4
    CALL core_main.c_displayErrorAndQuit_FUN_004e4500 ; 00588b5b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4500(char * format)
    ADD ESP,0x4                         ; 00588b60
    MOV EAX,[0x006141b8]                ; 00588b63 | g_INT_006141b8
        ;   Label: LAB_00588b63
    IMUL EAX,dword ptr [0x006141bc]     ; 00588b68 | g_INT_006141bc
    SHL EAX,0x2                         ; 00588b6f
    ADD EAX,0x40                        ; 00588b72
    PUSH EAX                            ; 00588b75
    CALL crt_memory.c_malloc_FUN_005b8580 ; 00588b76
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 00588b7b
    MOV [0x02661af0],EAX                ; 00588b7e | g_PTR_02661af0
    TEST EAX,EAX                        ; 00588b83
    JNZ 0x00588ba9                      ; 00588b85
        ;   XREF to: 00588ba9 (CONDITIONAL_JUMP)  ; LAB_00588ba9
    MOV EAX,0x5ee164                    ; 00588b87 | = "..\\wincore\\wddvmem.cpp"
    MOV EDX,0xef                        ; 00588b8c
    PUSH 0x5ee17b                       ; 00588b91 | = "WDDVMEM: Fatal - out of Z buffer memory"
    MOV [0x01d046a0],EAX                ; 00588b96 | g_CHAR_PTR_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 00588b9b | g_INT_01d046a4
    CALL core_main.c_displayErrorAndQuit_FUN_004e4500 ; 00588ba1
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4500(char * format)
    ADD ESP,0x4                         ; 00588ba6
    MOV EAX,[0x02661af0]                ; 00588ba9 | g_PTR_02661af0
        ;   Label: LAB_00588ba9
    PUSH EBX                            ; 00588bae
    MOV ECX,dword ptr [ESP + 0x90]      ; 00588baf
    ADD EAX,0x10                        ; 00588bb6
    PUSH ECX                            ; 00588bb9
    MOV ESI,dword ptr [ESP + 0x90]      ; 00588bba
    AND AL,0xf0                         ; 00588bc1
    PUSH ESI                            ; 00588bc3
    MOV [0x0070c62c],EAX                ; 00588bc4 | g_SoftwareZBuffer
    MOV EAX,[0x02661ae0]                ; 00588bc9 | g_DirectDrawObject
    PUSH EAX                            ; 00588bce
    MOV EDX,dword ptr [EAX]             ; 00588bcf
    CALL dword ptr [EDX + 0x54]         ; 00588bd1
    TEST EAX,EAX                        ; 00588bd4
    JZ 0x00588c20                       ; 00588bd6
        ;   XREF to: 00588c20 (CONDITIONAL_JUMP)  ; LAB_00588c20
    CMP EBX,0x20                        ; 00588bd8
    JZ 0x00588bfc                       ; 00588bdb
        ;   XREF to: 00588bfc (CONDITIONAL_JUMP)  ; LAB_00588bfc
    XOR EAX,EAX                         ; 00588bdd
        ;   Label: LAB_00588bdd
    ADD ESP,0x74                        ; 00588bdf
    POP EBP                             ; 00588be2
    POP EDI                             ; 00588be3
    POP ESI                             ; 00588be4
    POP EBX                             ; 00588be5
    RET                                 ; 00588be6
    MOV EAX,EDX                         ; 00588be7
        ;   Label: LAB_00588be7
    PUSH EAX                            ; 00588be9
    MOV EDX,dword ptr [EDX]             ; 00588bea
    CALL dword ptr [EDX + 0x8]          ; 00588bec
    XOR ECX,ECX                         ; 00588bef
    MOV dword ptr [0x02661aec],ECX      ; 00588bf1 | g_DirectDrawUnknown
    JMP 0x00588a6c                      ; 00588bf7
        ;   XREF to: 00588a6c (UNCONDITIONAL_JUMP)  ; LAB_00588a6c
    PUSH 0x18                           ; 00588bfc
        ;   Label: LAB_00588bfc
    MOV EDI,dword ptr [ESP + 0x90]      ; 00588bfe
    PUSH EDI                            ; 00588c05
    MOV EAX,[0x02661ae0]                ; 00588c06 | g_DirectDrawObject
    PUSH ESI                            ; 00588c0b
    MOV EDX,dword ptr [EAX]             ; 00588c0c
    PUSH EAX                            ; 00588c0e
    CALL dword ptr [EDX + 0x54]         ; 00588c0f
    TEST EAX,EAX                        ; 00588c12
    JNZ 0x00588bdd                      ; 00588c14
        ;   XREF to: 00588bdd (CONDITIONAL_JUMP)  ; LAB_00588bdd
    MOV dword ptr [0x02661afc],0x1      ; 00588c16 | g_Display24BitFallback
    PUSH 0x6c                           ; 00588c20
        ;   Label: LAB_00588c20
    PUSH 0x0                            ; 00588c22
    LEA EAX,[ESP + 0x8]                 ; 00588c24
    PUSH EAX                            ; 00588c28
    MOV EBX,0x6218                      ; 00588c29
    MOV ESI,0x2                         ; 00588c2e
    CALL crt_memory.c_memset_FUN_005b77c0 ; 00588c33
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV EDX,0x6c                        ; 00588c38
    ADD ESP,0xc                         ; 00588c3d
    MOV ECX,0x21                        ; 00588c40
    MOV EAX,[0x02661ae0]                ; 00588c45 | g_DirectDrawObject
    PUSH 0x0                            ; 00588c4a
    MOV dword ptr [ESP + 0x4],EDX       ; 00588c4c
    MOV dword ptr [ESP + 0x8],ECX       ; 00588c50
    MOV dword ptr [ESP + 0x6c],EBX      ; 00588c54
    PUSH 0x2661ae4                      ; 00588c58 | g_DirectDrawSurface
    LEA EDX,[ESP + 0x8]                 ; 00588c5d
    MOV dword ptr [ESP + 0x1c],ESI      ; 00588c61
    PUSH EDX                            ; 00588c65
    MOV ECX,dword ptr [EAX]             ; 00588c66
    PUSH EAX                            ; 00588c68
    CALL dword ptr [ECX + 0x18]         ; 00588c69
    TEST EAX,EAX                        ; 00588c6c
    JZ 0x00588cbc                       ; 00588c6e
        ;   XREF to: 00588cbc (CONDITIONAL_JUMP)  ; LAB_00588cbc
    PUSH 0x0                            ; 00588c70
    MOV EDI,0x1                         ; 00588c72
    LEA EDX,[ESP + 0x4]                 ; 00588c77
    PUSH 0x2661ae4                      ; 00588c7b | g_DirectDrawSurface
    MOV EAX,[0x02661ae0]                ; 00588c80 | g_DirectDrawObject
    MOV dword ptr [ESP + 0x1c],EDI      ; 00588c85
    PUSH EDX                            ; 00588c89
    MOV ECX,dword ptr [EAX]             ; 00588c8a
    PUSH EAX                            ; 00588c8c
    CALL dword ptr [ECX + 0x18]         ; 00588c8d
    TEST EAX,EAX                        ; 00588c90
    JZ 0x00588cbc                       ; 00588c92
        ;   XREF to: 00588cbc (CONDITIONAL_JUMP)  ; LAB_00588cbc
    PUSH 0x0                            ; 00588c94
    MOV EBP,0xa18                       ; 00588c96
    LEA EDX,[ESP + 0x4]                 ; 00588c9b
    PUSH 0x2661ae4                      ; 00588c9f | g_DirectDrawSurface
    MOV EAX,[0x02661ae0]                ; 00588ca4 | g_DirectDrawObject
    MOV dword ptr [ESP + 0x70],EBP      ; 00588ca9
    PUSH EDX                            ; 00588cad
    MOV ECX,dword ptr [EAX]             ; 00588cae
    PUSH EAX                            ; 00588cb0
    CALL dword ptr [ECX + 0x18]         ; 00588cb1
    TEST EAX,EAX                        ; 00588cb4
    JNZ 0x00588bdd                      ; 00588cb6
        ;   XREF to: 00588bdd (CONDITIONAL_JUMP)  ; LAB_00588bdd
    PUSH 0x4                            ; 00588cbc
        ;   Label: LAB_00588cbc
    PUSH 0x0                            ; 00588cbe
    LEA EAX,[ESP + 0x74]                ; 00588cc0
    PUSH EAX                            ; 00588cc4
    CALL crt_memory.c_memset_FUN_005b77c0 ; 00588cc5
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00588cca
    PUSH 0x2661ae8                      ; 00588ccd | g_SoftwareRenderSurface
    LEA ECX,[ESP + 0x70]                ; 00588cd2
    MOV EAX,0x4                         ; 00588cd6
    PUSH ECX                            ; 00588cdb
    MOV dword ptr [ESP + 0x74],EAX      ; 00588cdc
    MOV EAX,[0x02661ae4]                ; 00588ce0 | g_DirectDrawSurface
    PUSH EAX                            ; 00588ce5
    MOV EDX,dword ptr [EAX]             ; 00588ce6
    CALL dword ptr [EDX + 0x30]         ; 00588ce8
    TEST EAX,EAX                        ; 00588ceb
    JNZ 0x00588db2                      ; 00588ced
        ;   XREF to: 00588db2 (CONDITIONAL_JUMP)  ; LAB_00588db2
    MOV EDX,dword ptr [0x006141bc]      ; 00588cf3 | g_INT_006141bc
    XOR ECX,ECX                         ; 00588cf9
    TEST EDX,EDX                        ; 00588cfb
    JLE 0x00588d70                      ; 00588cfd
        ;   XREF to: 00588d70 (CONDITIONAL_JUMP)  ; LAB_00588d70
    MOV EAX,[0x006141c0]                ; 00588cff | g_INT_006141c0
    MOV EDX,EAX                         ; 00588d04
    SAR EDX,0x1f                        ; 00588d06
    SHL EDX,0x3                         ; 00588d09
    SBB EAX,EDX                         ; 00588d0c
    SAR EAX,0x3                         ; 00588d0e
    MOV EDI,EAX                         ; 00588d11
    MOV EAX,[0x006141b8]                ; 00588d13 | g_INT_006141b8
    SHL EAX,0x2                         ; 00588d18
    MOV dword ptr [ESP + 0x70],EAX      ; 00588d1b
    IMUL EDX,dword ptr [0x006141b8],0x0 ; 00588d1f | g_INT_006141b8
    MOV EBX,dword ptr [0x00622010]      ; 00588d26 | g_PTR_00622010
    MOV EBP,dword ptr [0x006141bc]      ; 00588d2c | g_INT_006141bc
    XOR EAX,EAX                         ; 00588d32
    MOV ESI,dword ptr [0x006141b8]      ; 00588d34 | g_INT_006141b8
        ;   Label: LAB_00588d34
    IMUL ESI,ECX                        ; 00588d3a
    IMUL ESI,EDI                        ; 00588d3d
    ADD ESI,EBX                         ; 00588d40
    MOV dword ptr [EAX + 0x1c2a38c],ESI ; 00588d42 | g_ScreenBufferArray
    MOV ESI,dword ptr [0x0070c62c]      ; 00588d48 | g_SoftwareZBuffer
    ADD EAX,0x4                         ; 00588d4e
    ADD ESI,EDX                         ; 00588d51
    MOV dword ptr [EAX + 0x1c2b648],ESI ; 00588d53 | g_ZBufferScanlineArray
    MOV ESI,dword ptr [ESP + 0x70]      ; 00588d59
    INC ECX                             ; 00588d5d
    ADD EDX,ESI                         ; 00588d5e
    CMP ECX,EBP                         ; 00588d60
    JL 0x00588d34                       ; 00588d62
        ;   XREF to: 00588d34 (CONDITIONAL_JUMP)  ; LAB_00588d34
    LEA EAX,[EAX]                       ; 00588d64
    LEA EDX,[EDX]                       ; 00588d6a
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00588d70
        ;   Label: LAB_00588d70
    DEC EAX                             ; 00588d77
    PUSH EAX                            ; 00588d78
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00588d79
    DEC EAX                             ; 00588d80
    PUSH EAX                            ; 00588d81
    PUSH 0x0                            ; 00588d82
    PUSH 0x0                            ; 00588d84
    CALL engine_2d.c_setupViewportAndClipping_FUN_00401810 ; 00588d86
        ;   XREF to: 00401810 (UNCONDITIONAL_CALL)  ; void engine_2d.c_setupViewportAndClipping_FUN_00401810(int left, int top, int right, int bottom)
    ADD ESP,0x10                        ; 00588d8b
    XOR ESI,ESI                         ; 00588d8e
    CALL wincore_wddvmem.cpp_setupColorPalette_FUN_00589430 ; 00588d90
        ;   XREF to: 00589430 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_setupColorPalette_FUN_00589430()
    CALL engine_special.cpp_clearScreen_FUN_0055b1f0 ; 00588d95
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0055b1f0()
        ;   Label: LAB_00588d95
    INC ESI                             ; 00588d9a
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00589560 ; 00588d9b
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00589560()
    CMP ESI,0x3                         ; 00588da0
    JL 0x00588d95                       ; 00588da3
        ;   XREF to: 00588d95 (CONDITIONAL_JUMP)  ; LAB_00588d95
    MOV EAX,0x1                         ; 00588da5
    ADD ESP,0x74                        ; 00588daa
    POP EBP                             ; 00588dad
    POP EDI                             ; 00588dae
    POP ESI                             ; 00588daf
    POP EBX                             ; 00588db0
    RET                                 ; 00588db1
    MOV ECX,0x5ee1a3                    ; 00588db2 | = "..\\wincore\\wddvmem.cpp"
        ;   Label: LAB_00588db2
    MOV EBX,0x1bd                       ; 00588db7
    PUSH 0x5ee1ba                       ; 00588dbc | = "setScreenResolution - Create back buf..."
    MOV dword ptr [0x01d046a0],ECX      ; 00588dc1 | g_CHAR_PTR_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 00588dc7 | g_INT_01d046a4
    CALL core_main.c_displayErrorAndQuit_FUN_004e4500 ; 00588dcd
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4500(char * format)
    ADD ESP,0x4                         ; 00588dd2
    XOR EAX,EAX                         ; 00588dd5
    ADD ESP,0x74                        ; 00588dd7
    POP EBP                             ; 00588dda
    POP EDI                             ; 00588ddb
    POP ESI                             ; 00588ddc
    POP EBX                             ; 00588ddd
    RET                                 ; 00588dde

