; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c8eb0(void)
;
; Local Variables:
; undefined        Stack[-0x110]:1  local_110
;
; Referenced Globals:
;   TerminatedCString s_load_d_00587e78
;   TerminatedCString s_In_stores_10_26_99_00587e7f
;   TerminatedCString s_www_nocturnegame_com_00587e92
;   TerminatedCString s_Press_any_key_to_continu_00587ea7
;   int INT_005bac64 = 0x1cc30e4
;   undefined4 DAT_014b98f8
;   undefined4 DAT_014b9900
;   undefined4 DAT_01bd1d80
;   undefined4 DAT_01cc30e4
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_stdlib.c_rand_FUN_0056488c
;   engine_2d.c_clearInputAndWait_FUN_00403f50
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710
;   engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040e360
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0
;   engine_font.cpp_CBitFont_drawText_FUN_00490980
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0
;   support_newmsg.cpp_getLocalizedString_FUN_004ee370
;   wincore_wddvmem.cpp_swapBuffers_FUN_00553910
;   wincore_windll.cpp_clearScreen_FUN_0052ee70
;   wincore_winrun.cpp_getNextKeypress_FUN_00558b00
;   wincore_winrun.cpp_getTime_FUN_00558a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c8eb0
        ;   Label: FUN_004c8eb0
    PUSH ESI                            ; 004c8eb1
    PUSH EDI                            ; 004c8eb2
    PUSH EBP                            ; 004c8eb3
    SUB ESP,0x100                       ; 004c8eb4
    PUSH 0x58                           ; 004c8eba
    MOV EDX,dword ptr [0x014b9900]      ; 004c8ebc | DAT_014b9900
    PUSH EDX                            ; 004c8ec2
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 004c8ec3
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0()
    ADD ESP,0x8                         ; 004c8ec8
    MOV ESI,EAX                         ; 004c8ecb
    MOV EDI,EAX                         ; 004c8ecd
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004c8ecf
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 004c8ed4
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_clearInputAndWait_FUN_00403f50()
    CALL crt_stdlib.c_rand_FUN_0056488c ; 004c8ed9
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c_rand_FUN_0056488c()
    AND EAX,0x3                         ; 004c8ede
    INC EAX                             ; 004c8ee1
    PUSH EAX                            ; 004c8ee2
    PUSH 0x587e78                       ; 004c8ee3 | = "load%d"
    LEA EAX,[ESP + 0x8]                 ; 004c8ee8
    PUSH EAX                            ; 004c8eec
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004c8eed
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 004c8ef2
    PUSH 0x1e0                          ; 004c8ef5
    PUSH 0x280                          ; 004c8efa
    LEA EAX,[ESP + 0x8]                 ; 004c8eff
    PUSH EAX                            ; 004c8f03
    PUSH 0x1cc480c                      ; 004c8f04
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 ; 004c8f09
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0()
    ADD ESP,0x10                        ; 004c8f0e
    CALL wincore_windll.cpp_clearScreen_FUN_0052ee70 ; 004c8f11
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_clearScreen_FUN_0052ee70()
    PUSH 0xffff                         ; 004c8f16
    PUSH 0x0                            ; 004c8f1b
    PUSH 0x0                            ; 004c8f1d
    PUSH 0x1cc480c                      ; 004c8f1f
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710 ; 004c8f24
        ;   XREF to: 0040e710 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710()
    ADD ESP,0x10                        ; 004c8f29
    PUSH 0x587e7f                       ; 004c8f2c | = "In stores 10/26/99"
    MOV ECX,dword ptr [0x014b98f8]      ; 004c8f31 | DAT_014b98f8
    PUSH ECX                            ; 004c8f37
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 004c8f38
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0()
    MOV EDX,EAX                         ; 004c8f3d
    SAR EDX,0x1f                        ; 004c8f3f
    SUB EAX,EDX                         ; 004c8f42
    SAR EAX,0x1                         ; 004c8f44
    ADD ESP,0x8                         ; 004c8f46
    PUSH 0x0                            ; 004c8f49
    PUSH 0x7                            ; 004c8f4b
    MOV EDX,0x140                       ; 004c8f4d
    PUSH 0xdc                           ; 004c8f52
    SUB EDX,EAX                         ; 004c8f57
    PUSH EDX                            ; 004c8f59
    PUSH 0x587e7f                       ; 004c8f5a | = "In stores 10/26/99"
    MOV EBX,dword ptr [0x014b98f8]      ; 004c8f5f | DAT_014b98f8
    PUSH EBX                            ; 004c8f65
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004c8f66
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    ADD ESP,0x18                        ; 004c8f6b
    MOV EBX,0x1e0                       ; 004c8f6e
    PUSH 0x587e92                       ; 004c8f73 | = "www.nocturnegame.com"
    SUB EBX,ESI                         ; 004c8f78
    MOV ESI,dword ptr [0x014b98f8]      ; 004c8f7a | DAT_014b98f8
    PUSH ESI                            ; 004c8f80
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 004c8f81
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0()
    MOV EDX,EAX                         ; 004c8f86
    SAR EDX,0x1f                        ; 004c8f88
    SUB EAX,EDX                         ; 004c8f8b
    SAR EAX,0x1                         ; 004c8f8d
    ADD ESP,0x8                         ; 004c8f8f
    PUSH 0x0                            ; 004c8f92
    PUSH 0x7                            ; 004c8f94
    MOV EDX,0x140                       ; 004c8f96
    PUSH EBX                            ; 004c8f9b
    SUB EDX,EAX                         ; 004c8f9c
    PUSH EDX                            ; 004c8f9e
    PUSH 0x587e92                       ; 004c8f9f | = "www.nocturnegame.com"
    MOV EBP,dword ptr [0x014b98f8]      ; 004c8fa4 | DAT_014b98f8
    PUSH EBP                            ; 004c8faa
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004c8fab
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    ADD ESP,0x18                        ; 004c8fb0
    MOV EBX,0xa0000                     ; 004c8fb3
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 004c8fb8
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004c8fbd
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV ESI,EAX                         ; 004c8fc2
    XOR EBP,EBP                         ; 004c8fc4
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 004c8fc6
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
        ;   Label: LAB_004c8fc6
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004c8fcb
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV ECX,EAX                         ; 004c8fd0
    SUB EAX,ESI                         ; 004c8fd2
    MOV EDX,EAX                         ; 004c8fd4
    MOV ESI,0x12                        ; 004c8fd6
    SAR EDX,0x1f                        ; 004c8fdb
    IDIV ESI                            ; 004c8fde
    MOV [0x01bd1d80],EAX                ; 004c8fe0 | DAT_01bd1d80
    CMP EBP,EAX                         ; 004c8fe5
    JG 0x004c90b3                       ; 004c8fe7
        ;   XREF to: 004c90b3 (CONDITIONAL_JUMP)  ; LAB_004c90b3
    MOV EDX,dword ptr [0x01bd1d80]      ; 004c8fed | DAT_01bd1d80
        ;   Label: LAB_004c8fed
    MOV ESI,ECX                         ; 004c8ff3
    CMP EDX,0x4000                      ; 004c8ff5
    JLE 0x004c9007                      ; 004c8ffb
        ;   XREF to: 004c9007 (CONDITIONAL_JUMP)  ; LAB_004c9007
    MOV dword ptr [0x01bd1d80],0x4000   ; 004c8ffd | DAT_01bd1d80
    MOV EAX,[0x01bd1d80]                ; 004c9007 | DAT_01bd1d80
        ;   Label: LAB_004c9007
    PUSH 0x2a                           ; 004c900c
    SUB EBX,EAX                         ; 004c900e
    MOV EAX,[0x005bac64]                ; 004c9010 | INT_005bac64
    PUSH EAX                            ; 004c9015 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004c9016 | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 004c9018
    ADD ESP,0x8                         ; 004c901a
    TEST EAX,EAX                        ; 004c901d
    JNZ 0x004c90be                      ; 004c901f
        ;   XREF to: 004c90be (CONDITIONAL_JUMP)  ; LAB_004c90be
    TEST EBX,EBX                        ; 004c9025
        ;   Label: LAB_004c9025
    JG 0x004c8fc6                       ; 004c9027
        ;   XREF to: 004c8fc6 (CONDITIONAL_JUMP)  ; LAB_004c8fc6
    MOV EAX,0x1e0                       ; 004c9029
        ;   Label: LAB_004c9029
    LEA ESI,[EDI + EDI*0x1]             ; 004c902e
    SUB EAX,ESI                         ; 004c9031
    PUSH 0x587ea7                       ; 004c9033 | = "Press any key to continue..."
    MOV ESI,EAX                         ; 004c9038
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004c903a
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004c903f
    PUSH EAX                            ; 004c9042
    MOV EDX,dword ptr [0x014b98f8]      ; 004c9043 | DAT_014b98f8
    PUSH EDX                            ; 004c9049
    MOV EBX,EAX                         ; 004c904a
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 004c904c
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0()
    MOV EDX,EAX                         ; 004c9051
    SAR EDX,0x1f                        ; 004c9053
    SUB EAX,EDX                         ; 004c9056
    SAR EAX,0x1                         ; 004c9058
    ADD ESP,0x8                         ; 004c905a
    PUSH 0x0                            ; 004c905d
    PUSH 0x7                            ; 004c905f
    MOV EDX,0x140                       ; 004c9061
    PUSH ESI                            ; 004c9066
    SUB EDX,EAX                         ; 004c9067
    PUSH EDX                            ; 004c9069
    PUSH EBX                            ; 004c906a
    MOV ECX,dword ptr [0x014b98f8]      ; 004c906b | DAT_014b98f8
    PUSH ECX                            ; 004c9071
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004c9072
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    ADD ESP,0x18                        ; 004c9077
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 004c907a
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 004c907f
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_clearInputAndWait_FUN_00403f50()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_00558b00 ; 004c9084
        ;   XREF to: 00558b00 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getNextKeypress_FUN_00558b00()
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 004c9089
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_clearInputAndWait_FUN_00403f50()
    PUSH 0x1cc480c                      ; 004c908e
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040e360 ; 004c9093
        ;   XREF to: 0040e360 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040e360()
    ADD ESP,0x4                         ; 004c9098
    PUSH 0x1cc4820                      ; 004c909b
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040e360 ; 004c90a0
        ;   XREF to: 0040e360 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040e360()
    ADD ESP,0x4                         ; 004c90a5
    ADD ESP,0x100                       ; 004c90a8
    POP EBP                             ; 004c90ae
    POP EDI                             ; 004c90af
    POP ESI                             ; 004c90b0
    POP EBX                             ; 004c90b1
    RET                                 ; 004c90b2
    MOV dword ptr [0x01bd1d80],EBP      ; 004c90b3 | DAT_01bd1d80
        ;   Label: LAB_004c90b3
    JMP 0x004c8fed                      ; 004c90b9
        ;   XREF to: 004c8fed (UNCONDITIONAL_JUMP)  ; LAB_004c8fed
    PUSH 0x1                            ; 004c90be
        ;   Label: LAB_004c90be
    MOV EAX,[0x005bac64]                ; 004c90c0 | INT_005bac64
    PUSH EAX                            ; 004c90c5 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004c90c6 | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 004c90c8
    ADD ESP,0x8                         ; 004c90ca
    TEST EAX,EAX                        ; 004c90cd
    JNZ 0x004c9029                      ; 004c90cf
        ;   XREF to: 004c9029 (CONDITIONAL_JUMP)  ; LAB_004c9029
    JMP 0x004c9025                      ; 004c90d5
        ;   XREF to: 004c9025 (UNCONDITIONAL_JUMP)  ; LAB_004c9025

