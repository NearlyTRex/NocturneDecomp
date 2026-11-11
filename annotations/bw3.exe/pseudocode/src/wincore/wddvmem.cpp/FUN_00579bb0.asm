; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 wincore_wddvmem_cpp_FUN_00579bb0(int param_1,int param_2,int param_3)
;
;
; XREF[7]:
;   core_game.cpp_CGame_setGameRes_FUN_004b7de0 at 004b7e0f
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004b7ee0 at 004b7f0b
;   core_main.c_FUN_004e44e0 at 004e45e7
;   engine_2d.c_initGraphicsSystem_FUN_00401010 at 0040103d
;   wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_0057a2f0 at 0057a3b1
;   wincore_wddvmem.cpp_resetGraphicsSystem_FUN_0057a0e0 at 0057a244
;   wincore_wddvmem.cpp_videoRestore_FUN_0057ab70 at 0057ac62
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_005d73f1
;   TerminatedCString s_WDDVMEM_Fatal_out_of_fra_005d7408
;   TerminatedCString s_wincore_wddvmem_cpp_005d7434
;   TerminatedCString s_WDDVMEM_Fatal_out_of_Z_b_005d744b
;   TerminatedCString s_wincore_wddvmem_cpp_005d7473
;   TerminatedCString s_setScreenResolution_Crea_005d748a
;   TerminatedCString s_wincore_wddvmem_cpp_005d74bb
;   TerminatedCString s_Clear_of_back_buffer_fai_005d74d2
;   TerminatedCString s_wincore_wddvmem_cpp_005d74ee
;   TerminatedCString s_Unlock_of_back_buffer_cl_005d7505
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fba20
;   undefined4 DAT_0060b010
;   undefined4 DAT_0072ffac
;   ... and 17 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_memory.c_malloc_FUN_005a3650
;   crt_memory.c_memset_FUN_005a28f0
;   crt_unknown.c_FUN_005a3770
;   engine_2d.c_setupViewportAndClipping_FUN_00401810
;   wincore_wddvmem.cpp_setupColorPalette_FUN_0057a770
;   wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00579bb0
        ;   Label: wincore_wddvmem.cpp_FUN_00579bb0
    PUSH ESI                            ; 00579bb1
    PUSH EDI                            ; 00579bb2
    PUSH EBP                            ; 00579bb3
    SUB ESP,0xe0                        ; 00579bb4
    MOV EBX,dword ptr [ESP + 0xfc]      ; 00579bba
    MOV EDX,dword ptr [0x02d0bcec]      ; 00579bc1 | DAT_02d0bcec
    TEST EDX,EDX                        ; 00579bc7
    JNZ 0x00579dcf                      ; 00579bc9
        ;   XREF to: 00579dcf (CONDITIONAL_JUMP)  ; LAB_00579dcf
    MOV ESI,dword ptr [0x02d0bce8]      ; 00579bcf | DAT_02d0bce8
        ;   Label: LAB_00579bcf
    TEST ESI,ESI                        ; 00579bd5
    JZ 0x00579be7                       ; 00579bd7
        ;   XREF to: 00579be7 (CONDITIONAL_JUMP)  ; LAB_00579be7
    PUSH ESI                            ; 00579bd9
    MOV EDX,dword ptr [ESI]             ; 00579bda
    XOR EDI,EDI                         ; 00579bdc
    CALL dword ptr [EDX + 0x8]          ; 00579bde
    MOV dword ptr [0x02d0bce8],EDI      ; 00579be1 | DAT_02d0bce8
    MOV EBP,dword ptr [0x02d0bce4]      ; 00579be7 | DAT_02d0bce4
        ;   Label: LAB_00579be7
    TEST EBP,EBP                        ; 00579bed
    JZ 0x00579bff                       ; 00579bef
        ;   XREF to: 00579bff (CONDITIONAL_JUMP)  ; LAB_00579bff
    PUSH EBP                            ; 00579bf1
    MOV EDX,dword ptr [EBP]             ; 00579bf2
    CALL dword ptr [EDX + 0x8]          ; 00579bf5
    XOR EAX,EAX                         ; 00579bf8
    MOV [0x02d0bce4],EAX                ; 00579bfa | DAT_02d0bce4
    CMP EBX,0x8                         ; 00579bff
        ;   Label: LAB_00579bff
    JZ 0x00579c12                       ; 00579c02
        ;   XREF to: 00579c12 (CONDITIONAL_JUMP)  ; LAB_00579c12
    CMP EBX,0x10                        ; 00579c04
    JZ 0x00579c12                       ; 00579c07
        ;   XREF to: 00579c12 (CONDITIONAL_JUMP)  ; LAB_00579c12
    CMP EBX,0x20                        ; 00579c09
    JNZ 0x00579dc2                      ; 00579c0c
        ;   XREF to: 00579dc2 (CONDITIONAL_JUMP)  ; LAB_00579dc2
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00579c12
        ;   Label: LAB_00579c12
    MOV EDI,dword ptr [0x0060b010]      ; 00579c19 | DAT_0060b010
    MOV dword ptr [0x005fba20],EBX      ; 00579c1f | DAT_005fba20
    MOV dword ptr [0x02d0bd08],EBX      ; 00579c25 | DAT_02d0bd08
    XOR EDX,EDX                         ; 00579c2b
    MOV [0x005fba18],EAX                ; 00579c2d | DAT_005fba18
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00579c32
    MOV dword ptr [0x02d0bd0c],EDX      ; 00579c39 | DAT_02d0bd0c
    MOV [0x005fba1c],EAX                ; 00579c3f | DAT_005fba1c
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00579c44
    MOV dword ptr [0x02d0bd10],EDX      ; 00579c4b | DAT_02d0bd10
    MOV [0x02d0bd00],EAX                ; 00579c51 | DAT_02d0bd00
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00579c56
    MOV dword ptr [0x02d0bcfc],EDX      ; 00579c5d | DAT_02d0bcfc
    MOV [0x02d0bd04],EAX                ; 00579c63 | DAT_02d0bd04
    TEST EDI,EDI                        ; 00579c68
    JZ 0x00579c7c                       ; 00579c6a
        ;   XREF to: 00579c7c (CONDITIONAL_JUMP)  ; LAB_00579c7c
    PUSH EDI                            ; 00579c6c
    CALL crt_unknown.c_FUN_005a3770     ; 00579c6d
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    XOR EAX,EAX                         ; 00579c72
    ADD ESP,0x4                         ; 00579c74
    MOV [0x0060b010],EAX                ; 00579c77 | DAT_0060b010
    MOV EDX,dword ptr [0x02d0bcf0]      ; 00579c7c | DAT_02d0bcf0
        ;   Label: LAB_00579c7c
    TEST EDX,EDX                        ; 00579c82
    JZ 0x00579c97                       ; 00579c84
        ;   XREF to: 00579c97 (CONDITIONAL_JUMP)  ; LAB_00579c97
    PUSH EDX                            ; 00579c86
    CALL crt_unknown.c_FUN_005a3770     ; 00579c87
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    XOR ESI,ESI                         ; 00579c8c
    ADD ESP,0x4                         ; 00579c8e
    MOV dword ptr [0x0072ffac],ESI      ; 00579c91 | DAT_0072ffac
    MOV EAX,[0x005fba20]                ; 00579c97 | DAT_005fba20
        ;   Label: LAB_00579c97
    MOV EDX,EAX                         ; 00579c9c
    SAR EDX,0x1f                        ; 00579c9e
    SHL EDX,0x3                         ; 00579ca1
    SBB EAX,EDX                         ; 00579ca4
    SAR EAX,0x3                         ; 00579ca6
    MOV ECX,dword ptr [0x005fba18]      ; 00579ca9 | DAT_005fba18
    IMUL ECX,dword ptr [0x005fba1c]     ; 00579caf | DAT_005fba1c
    IMUL EAX,ECX                        ; 00579cb6
    PUSH EAX                            ; 00579cb9
    CALL crt_memory.c_malloc_FUN_005a3650 ; 00579cba
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 00579cbf
    MOV [0x0060b010],EAX                ; 00579cc2 | DAT_0060b010
    TEST EAX,EAX                        ; 00579cc7
    JNZ 0x00579ced                      ; 00579cc9
        ;   XREF to: 00579ced (CONDITIONAL_JUMP)  ; LAB_00579ced
    MOV EBP,0x5d73f1                    ; 00579ccb | = "..\\wincore\\wddvmem.cpp"
    MOV EAX,0xed                        ; 00579cd0
    PUSH 0x5d7408                       ; 00579cd5 | = "WDDVMEM: Fatal - out of frame buffer ..."
    MOV dword ptr [0x01d71de0],EBP      ; 00579cda | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00579ce0 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00579ce5
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00579cea
    MOV EAX,[0x005fba18]                ; 00579ced | DAT_005fba18
        ;   Label: LAB_00579ced
    IMUL EAX,dword ptr [0x005fba1c]     ; 00579cf2 | DAT_005fba1c
    SHL EAX,0x2                         ; 00579cf9
    ADD EAX,0x40                        ; 00579cfc
    PUSH EAX                            ; 00579cff
    CALL crt_memory.c_malloc_FUN_005a3650 ; 00579d00
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 00579d05
    MOV [0x02d0bcf0],EAX                ; 00579d08 | DAT_02d0bcf0
    TEST EAX,EAX                        ; 00579d0d
    JNZ 0x00579d34                      ; 00579d0f
        ;   XREF to: 00579d34 (CONDITIONAL_JUMP)  ; LAB_00579d34
    MOV ECX,0x5d7434                    ; 00579d11 | = "..\\wincore\\wddvmem.cpp"
    MOV ESI,0xf2                        ; 00579d16
    PUSH 0x5d744b                       ; 00579d1b | = "WDDVMEM: Fatal - out of Z buffer memory"
    MOV dword ptr [0x01d71de0],ECX      ; 00579d20 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00579d26 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00579d2c
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00579d31
    MOV EAX,[0x02d0bcf0]                ; 00579d34 | DAT_02d0bcf0
        ;   Label: LAB_00579d34
    PUSH EBX                            ; 00579d39
    MOV EDI,dword ptr [ESP + 0xfc]      ; 00579d3a
    ADD EAX,0x10                        ; 00579d41
    PUSH EDI                            ; 00579d44
    MOV EBP,dword ptr [ESP + 0xfc]      ; 00579d45
    AND AL,0xf0                         ; 00579d4c
    PUSH EBP                            ; 00579d4e
    MOV [0x0072ffac],EAX                ; 00579d4f | DAT_0072ffac
    MOV EAX,[0x02d0bce0]                ; 00579d54 | DAT_02d0bce0
    PUSH EAX                            ; 00579d59
    MOV EDX,dword ptr [EAX]             ; 00579d5a
    CALL dword ptr [EDX + 0x54]         ; 00579d5c
    MOV EDX,EAX                         ; 00579d5f
    TEST EAX,EAX                        ; 00579d61
    JZ 0x00579db9                       ; 00579d63
        ;   XREF to: 00579db9 (CONDITIONAL_JUMP)  ; LAB_00579db9
    CMP EDI,0x1e0                       ; 00579d65
    JGE 0x00579db9                      ; 00579d6b
        ;   XREF to: 00579db9 (CONDITIONAL_JUMP)  ; LAB_00579db9
    MOV EDX,0x280                       ; 00579d6d
    MOV dword ptr [0x02d0bd00],EDX      ; 00579d72 | DAT_02d0bd00
    SUB EDX,EBP                         ; 00579d78
    MOV EAX,EDX                         ; 00579d7a
    SAR EDX,0x1f                        ; 00579d7c
    SUB EAX,EDX                         ; 00579d7f
    SAR EAX,0x1                         ; 00579d81
    MOV ECX,0x1e0                       ; 00579d83
    MOV EDX,ECX                         ; 00579d88
    SUB EDX,EDI                         ; 00579d8a
    MOV [0x02d0bd0c],EAX                ; 00579d8c | DAT_02d0bd0c
    MOV EAX,EDX                         ; 00579d91
    SAR EDX,0x1f                        ; 00579d93
    SUB EAX,EDX                         ; 00579d96
    SAR EAX,0x1                         ; 00579d98
    PUSH EBX                            ; 00579d9a
    PUSH ECX                            ; 00579d9b
    PUSH 0x280                          ; 00579d9c
    MOV [0x02d0bd10],EAX                ; 00579da1 | DAT_02d0bd10
    MOV EAX,[0x02d0bce0]                ; 00579da6 | DAT_02d0bce0
    PUSH EAX                            ; 00579dab
    MOV EDX,dword ptr [EAX]             ; 00579dac
    MOV dword ptr [0x02d0bd04],ECX      ; 00579dae | DAT_02d0bd04
    CALL dword ptr [EDX + 0x54]         ; 00579db4
    MOV EDX,EAX                         ; 00579db7
    TEST EDX,EDX                        ; 00579db9
        ;   Label: LAB_00579db9
    JZ 0x00579e19                       ; 00579dbb
        ;   XREF to: 00579e19 (CONDITIONAL_JUMP)  ; LAB_00579e19
    CMP EBX,0x20                        ; 00579dbd
    JZ 0x00579de4                       ; 00579dc0
        ;   XREF to: 00579de4 (CONDITIONAL_JUMP)  ; LAB_00579de4
    XOR EAX,EAX                         ; 00579dc2
        ;   Label: LAB_00579dc2
    ADD ESP,0xe0                        ; 00579dc4
    POP EBP                             ; 00579dca
    POP EDI                             ; 00579dcb
    POP ESI                             ; 00579dcc
    POP EBX                             ; 00579dcd
    RET                                 ; 00579dce
    MOV EAX,EDX                         ; 00579dcf
        ;   Label: LAB_00579dcf
    PUSH EAX                            ; 00579dd1
    MOV EDX,dword ptr [EDX]             ; 00579dd2
    CALL dword ptr [EDX + 0x8]          ; 00579dd4
    XOR ECX,ECX                         ; 00579dd7
    MOV dword ptr [0x02d0bcec],ECX      ; 00579dd9 | DAT_02d0bcec
    JMP 0x00579bcf                      ; 00579ddf
        ;   XREF to: 00579bcf (UNCONDITIONAL_JUMP)  ; LAB_00579bcf
    PUSH 0x18                           ; 00579de4
        ;   Label: LAB_00579de4
    MOV EBP,dword ptr [0x02d0bd04]      ; 00579de6 | DAT_02d0bd04
    PUSH EBP                            ; 00579dec
    MOV ECX,dword ptr [0x02d0bd00]      ; 00579ded | DAT_02d0bd00
    MOV EAX,[0x02d0bce0]                ; 00579df3 | DAT_02d0bce0
    PUSH ECX                            ; 00579df8
    MOV EDX,dword ptr [EAX]             ; 00579df9
    PUSH EAX                            ; 00579dfb
    CALL dword ptr [EDX + 0x54]         ; 00579dfc
    TEST EAX,EAX                        ; 00579dff
    JNZ 0x00579dc2                      ; 00579e01
        ;   XREF to: 00579dc2 (CONDITIONAL_JUMP)  ; LAB_00579dc2
    MOV ESI,0x18                        ; 00579e03
    MOV EBX,0x1                         ; 00579e08
    MOV dword ptr [0x02d0bd08],ESI      ; 00579e0d | DAT_02d0bd08
    MOV dword ptr [0x02d0bcfc],EBX      ; 00579e13 | DAT_02d0bcfc
    PUSH 0x6c                           ; 00579e19
        ;   Label: LAB_00579e19
    PUSH 0x0                            ; 00579e1b
    LEA EAX,[ESP + 0x8]                 ; 00579e1d
    PUSH EAX                            ; 00579e21
    MOV EDI,0x6c                        ; 00579e22
    MOV EBP,0x21                        ; 00579e27
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00579e2c
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00579e31
    MOV EAX,0x6218                      ; 00579e34
    MOV EDX,0x2                         ; 00579e39
    PUSH 0x0                            ; 00579e3e
    MOV dword ptr [ESP + 0x4],EDI       ; 00579e40
    MOV dword ptr [ESP + 0x6c],EAX      ; 00579e44
    MOV dword ptr [ESP + 0x18],EDX      ; 00579e48
    PUSH 0x2d0bce4                      ; 00579e4c | DAT_02d0bce4
    LEA EDX,[ESP + 0x8]                 ; 00579e51
    MOV EAX,[0x02d0bce0]                ; 00579e55 | DAT_02d0bce0
    MOV dword ptr [ESP + 0xc],EBP       ; 00579e5a
    PUSH EDX                            ; 00579e5e
    MOV ECX,dword ptr [EAX]             ; 00579e5f
    PUSH EAX                            ; 00579e61
    CALL dword ptr [ECX + 0x18]         ; 00579e62
    TEST EAX,EAX                        ; 00579e65
    JZ 0x00579eb5                       ; 00579e67
        ;   XREF to: 00579eb5 (CONDITIONAL_JUMP)  ; LAB_00579eb5
    PUSH 0x0                            ; 00579e69
    MOV ECX,0x1                         ; 00579e6b
    PUSH 0x2d0bce4                      ; 00579e70 | DAT_02d0bce4
    MOV dword ptr [ESP + 0x1c],ECX      ; 00579e75
    LEA ECX,[ESP + 0x8]                 ; 00579e79
    MOV EAX,[0x02d0bce0]                ; 00579e7d | DAT_02d0bce0
    PUSH ECX                            ; 00579e82
    MOV EDX,dword ptr [EAX]             ; 00579e83
    PUSH EAX                            ; 00579e85
    CALL dword ptr [EDX + 0x18]         ; 00579e86
    TEST EAX,EAX                        ; 00579e89
    JZ 0x00579eb5                       ; 00579e8b
        ;   XREF to: 00579eb5 (CONDITIONAL_JUMP)  ; LAB_00579eb5
    PUSH 0x0                            ; 00579e8d
    MOV EBX,0xa18                       ; 00579e8f
    LEA ECX,[ESP + 0x4]                 ; 00579e94
    PUSH 0x2d0bce4                      ; 00579e98 | DAT_02d0bce4
    MOV EAX,[0x02d0bce0]                ; 00579e9d | DAT_02d0bce0
    MOV dword ptr [ESP + 0x70],EBX      ; 00579ea2
    PUSH ECX                            ; 00579ea6
    MOV EDX,dword ptr [EAX]             ; 00579ea7
    PUSH EAX                            ; 00579ea9
    CALL dword ptr [EDX + 0x18]         ; 00579eaa
    TEST EAX,EAX                        ; 00579ead
    JNZ 0x00579dc2                      ; 00579eaf
        ;   XREF to: 00579dc2 (CONDITIONAL_JUMP)  ; LAB_00579dc2
    PUSH 0x4                            ; 00579eb5
        ;   Label: LAB_00579eb5
    PUSH 0x0                            ; 00579eb7
    LEA EAX,[ESP + 0xe0]                ; 00579eb9
    PUSH EAX                            ; 00579ec0
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00579ec1
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00579ec6
    MOV ESI,0x4                         ; 00579ec9
    LEA ECX,[ESP + 0xd8]                ; 00579ece
    PUSH 0x2d0bce8                      ; 00579ed5 | DAT_02d0bce8
    MOV EAX,[0x02d0bce4]                ; 00579eda | DAT_02d0bce4
    MOV dword ptr [ESP + 0xdc],ESI      ; 00579edf
    PUSH ECX                            ; 00579ee6
    MOV EDX,dword ptr [EAX]             ; 00579ee7
    PUSH EAX                            ; 00579ee9
    CALL dword ptr [EDX + 0x30]         ; 00579eea
    TEST EAX,EAX                        ; 00579eed
    JNZ 0x0057a0a3                      ; 00579eef
        ;   XREF to: 0057a0a3 (CONDITIONAL_JUMP)  ; LAB_0057a0a3
    MOV EDI,dword ptr [0x005fba1c]      ; 00579ef5 | DAT_005fba1c
    XOR EBX,EBX                         ; 00579efb
    TEST EDI,EDI                        ; 00579efd
    JLE 0x00579f80                      ; 00579eff
        ;   XREF to: 00579f80 (CONDITIONAL_JUMP)  ; LAB_00579f80
    MOV EAX,[0x005fba20]                ; 00579f05 | DAT_005fba20
    MOV EDX,EAX                         ; 00579f0a
    SAR EDX,0x1f                        ; 00579f0c
    SHL EDX,0x3                         ; 00579f0f
    SBB EAX,EDX                         ; 00579f12
    SAR EAX,0x3                         ; 00579f14
    MOV ECX,EAX                         ; 00579f17
    MOV EAX,[0x005fba18]                ; 00579f19 | DAT_005fba18
    SHL EAX,0x2                         ; 00579f1e
    MOV EBP,dword ptr [0x005fba18]      ; 00579f21 | DAT_005fba18
    MOV dword ptr [ESP + 0xdc],EAX      ; 00579f27
    XOR EAX,EAX                         ; 00579f2e
    IMUL EDX,EBP,0x0                    ; 00579f30
    MOV ESI,dword ptr [0x005fba18]      ; 00579f33 | DAT_005fba18
        ;   Label: LAB_00579f33
    IMUL ESI,EBX                        ; 00579f39
    IMUL ESI,ECX                        ; 00579f3c
    MOV EDI,dword ptr [0x0060b010]      ; 00579f3f | DAT_0060b010
    ADD ESI,EDI                         ; 00579f45
    MOV dword ptr [EAX + 0x1c5faec],ESI ; 00579f47 | DAT_01c5faec | DAT_01c5faf0
    MOV ESI,dword ptr [0x0072ffac]      ; 00579f4d | DAT_0072ffac
    ADD EAX,0x4                         ; 00579f53
    ADD ESI,EDX                         ; 00579f56
    INC EBX                             ; 00579f58
    MOV dword ptr [EAX + 0x1c60da8],ESI ; 00579f59 | DAT_01c60dac
    MOV ESI,dword ptr [ESP + 0xdc]      ; 00579f5f
    MOV EDI,dword ptr [0x005fba1c]      ; 00579f66 | DAT_005fba1c
    ADD EDX,ESI                         ; 00579f6c
    CMP EBX,EDI                         ; 00579f6e
    JL 0x00579f33                       ; 00579f70
        ;   XREF to: 00579f33 (CONDITIONAL_JUMP)  ; LAB_00579f33
    LEA EAX,[EAX]                       ; 00579f72
    LEA EDX,[EDX]                       ; 00579f78
    MOV EAX,EAX                         ; 00579f7e
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00579f80
        ;   Label: LAB_00579f80
    DEC EAX                             ; 00579f87
    PUSH EAX                            ; 00579f88
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00579f89
    DEC EAX                             ; 00579f90
    PUSH EAX                            ; 00579f91
    PUSH 0x0                            ; 00579f92
    PUSH 0x0                            ; 00579f94
    CALL engine_2d.c_setupViewportAndClipping_FUN_00401810 ; 00579f96
        ;   XREF to: 00401810 (UNCONDITIONAL_CALL)  ; void engine_2d.c_setupViewportAndClipping_FUN_00401810(int left, int top, int right, int bottom)
    ADD ESP,0x10                        ; 00579f9b
    XOR EDI,EDI                         ; 00579f9e
    CALL wincore_wddvmem.cpp_setupColorPalette_FUN_0057a770 ; 00579fa0
        ;   XREF to: 0057a770 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_setupColorPalette_FUN_0057a770()
    XOR EBP,EBP                         ; 00579fa5
    PUSH 0x6c                           ; 00579fa7
        ;   Label: LAB_00579fa7
    PUSH EBP                            ; 00579fa9
    LEA EAX,[ESP + 0x74]                ; 00579faa
    PUSH EAX                            ; 00579fae
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00579faf
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00579fb4
    PUSH EBP                            ; 00579fb7
    PUSH 0x1                            ; 00579fb8
    LEA EDX,[ESP + 0x74]                ; 00579fba
    MOV EAX,0x6c                        ; 00579fbe
    PUSH EDX                            ; 00579fc3
    MOV dword ptr [ESP + 0x78],EAX      ; 00579fc4
    MOV EAX,[0x02d0bce8]                ; 00579fc8 | DAT_02d0bce8
    PUSH EBP                            ; 00579fcd
    MOV EBX,dword ptr [EAX]             ; 00579fce
    PUSH EAX                            ; 00579fd0
    CALL dword ptr [EBX + 0x64]         ; 00579fd1
    TEST EAX,EAX                        ; 00579fd4
    JZ 0x00579ffb                       ; 00579fd6
        ;   XREF to: 00579ffb (CONDITIONAL_JUMP)  ; LAB_00579ffb
    MOV EDX,0x5d74bb                    ; 00579fd8 | = "..\\wincore\\wddvmem.cpp"
    MOV ECX,0x1ec                       ; 00579fdd
    PUSH 0x5d74d2                       ; 00579fe2 | = "Clear of back buffer failed"
    MOV dword ptr [0x01d71de0],EDX      ; 00579fe7 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00579fed | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00579ff3
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00579ff8
    MOV EBX,dword ptr [ESP + 0x90]      ; 00579ffb
        ;   Label: LAB_00579ffb
    MOV EAX,[0x02d0bd04]                ; 0057a002 | DAT_02d0bd04
    MOV ESI,EBP                         ; 0057a007
    CMP EBP,EAX                         ; 0057a009
    JGE 0x0057a045                      ; 0057a00b
        ;   XREF to: 0057a045 (CONDITIONAL_JUMP)  ; LAB_0057a045
    MOV EDX,dword ptr [0x02d0bd00]      ; 0057a00d | DAT_02d0bd00
        ;   Label: LAB_0057a00d
    MOV ECX,dword ptr [0x02d0bd08]      ; 0057a013 | DAT_02d0bd08
    IMUL EDX,ECX                        ; 0057a019
    MOV EAX,EDX                         ; 0057a01c
    SAR EDX,0x1f                        ; 0057a01e
    SHL EDX,0x3                         ; 0057a021
    SBB EAX,EDX                         ; 0057a024
    SAR EAX,0x3                         ; 0057a026
    PUSH EAX                            ; 0057a029
    PUSH EBP                            ; 0057a02a
    PUSH EBX                            ; 0057a02b
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0057a02c
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0057a031
    INC ESI                             ; 0057a034
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0057a035
    MOV EDX,dword ptr [0x02d0bd04]      ; 0057a039 | DAT_02d0bd04
    ADD EBX,EAX                         ; 0057a03f
    CMP ESI,EDX                         ; 0057a041
    JL 0x0057a00d                       ; 0057a043
        ;   XREF to: 0057a00d (CONDITIONAL_JUMP)  ; LAB_0057a00d
    PUSH EBP                            ; 0057a045
        ;   Label: LAB_0057a045
    MOV EAX,[0x02d0bce8]                ; 0057a046 | DAT_02d0bce8
    PUSH EAX                            ; 0057a04b
    MOV EDX,dword ptr [EAX]             ; 0057a04c
    CALL dword ptr [EDX + 0x80]         ; 0057a04e
    TEST EAX,EAX                        ; 0057a054
    JZ 0x0057a07b                       ; 0057a056
        ;   XREF to: 0057a07b (CONDITIONAL_JUMP)  ; LAB_0057a07b
    MOV ECX,0x5d74ee                    ; 0057a058 | = "..\\wincore\\wddvmem.cpp"
    MOV EBX,0x1f6                       ; 0057a05d
    PUSH 0x5d7505                       ; 0057a062 | = "Unlock of back buffer clear failed"
    MOV dword ptr [0x01d71de0],ECX      ; 0057a067 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0057a06d | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0057a073
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0057a078
    MOV ESI,0x1                         ; 0057a07b
        ;   Label: LAB_0057a07b
    MOV dword ptr [0x02d0bcf4],ESI      ; 0057a080 | DAT_02d0bcf4
    ADD EDI,ESI                         ; 0057a086
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0 ; 0057a088
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0()
    CMP EDI,0x3                         ; 0057a08d
    JL 0x00579fa7                       ; 0057a090
        ;   XREF to: 00579fa7 (CONDITIONAL_JUMP)  ; LAB_00579fa7
    MOV EAX,ESI                         ; 0057a096
    ADD ESP,0xe0                        ; 0057a098
    POP EBP                             ; 0057a09e
    POP EDI                             ; 0057a09f
    POP ESI                             ; 0057a0a0
    POP EBX                             ; 0057a0a1
    RET                                 ; 0057a0a2
    MOV EBP,0x5d7473                    ; 0057a0a3 | = "..\\wincore\\wddvmem.cpp"
        ;   Label: LAB_0057a0a3
    MOV EAX,0x1d1                       ; 0057a0a8
    PUSH 0x5d748a                       ; 0057a0ad | = "setScreenResolution - Create back buf..."
    MOV dword ptr [0x01d71de0],EBP      ; 0057a0b2 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0057a0b8 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0057a0bd
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0057a0c2
    XOR EAX,EAX                         ; 0057a0c5
    ADD ESP,0xe0                        ; 0057a0c7
    POP EBP                             ; 0057a0cd
    POP EDI                             ; 0057a0ce
    POP ESI                             ; 0057a0cf
    POP EBX                             ; 0057a0d0
    RET                                 ; 0057a0d1

