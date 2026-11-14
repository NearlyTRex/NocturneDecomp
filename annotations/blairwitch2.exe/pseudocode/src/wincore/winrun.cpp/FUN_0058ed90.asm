; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; LRESULT __stdcall wincore_winrun_cpp_FUN_0058ed90(HWND hWnd,UINT message,WPARAM wParam,LPARAM lParam)
;
; Parameters:
; HWND             Stack[0x4]:4   hWnd
; UINT             Stack[0x8]:4   message
; WPARAM           Stack[0xc]:4   wParam
; LPARAM           Stack[0x10]:4   lParam
;
; XREF[1]:
;   wincore_winrun.cpp_winMain_FUN_0058f310 at 0058f485
;
; Referenced Globals:
;   void* PTR_DefWindowProcA_005c84a0 = 001c8a86
;   void* PTR_PostQuitMessage_005c84dc = 001c8b7a
;   void* PTR_SetCursor_005c84ec = 001c8bc2
;   void* PTR_GetCurrentProcess_005c8578 = 001c8e18
;   void* PTR_SetThreadPriority_005c863c = 001c91c2
;   undefined4 DAT_006141cc
;   undefined4 DAT_0061e98c
;   undefined4 DAT_0061e994
;   undefined4 DAT_01c2a37c
;   undefined4 DAT_01c2a380
;   undefined4 DAT_01c2a384
;   undefined4 DAT_01c37790
;   undefined4 DAT_01c37990
;   undefined4 DAT_01c37991
;   undefined4 DAT_01c3799c
;   ... and 9 more
;
; Called Functions:
;   DefWindowProcA
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   GetCurrentProcess
;   PostQuitMessage
;   SetCursor
;   SetThreadPriority
;   wincore_wddvmem.cpp_restoreVideoAndMinimizeWindow_FUN_005897b0
;   wincore_wddvmem.cpp_stubFunction_FUN_005898e0
;   wincore_wddvmem.cpp_videoRestore_FUN_005897e0
;   wincore_winrun.cpp_enqueueInput_FUN_0058eb70
;   wincore_winvideo.cpp_closeMovie_FUN_00590e40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058ed90
        ;   Label: wincore_winrun.cpp_FUN_0058ed90
    PUSH ESI                            ; 0058ed91
    PUSH EDI                            ; 0058ed92
    PUSH EBP                            ; 0058ed93
    MOV EBP,dword ptr [ESP + 0x14]      ; 0058ed94
    MOV EDI,dword ptr [ESP + 0x18]      ; 0058ed98
    CMP EBP,dword ptr [0x02664628]      ; 0058ed9c | DAT_02664628
    JNZ 0x0058ee32                      ; 0058eda2
        ;   XREF to: 0058ee32 (CONDITIONAL_JUMP)  ; LAB_0058ee32
    MOV ECX,dword ptr [0x02664fa8]      ; 0058eda8 | DAT_02664fa8
    XOR EBX,EBX                         ; 0058edae
    TEST ECX,ECX                        ; 0058edb0
    JLE 0x0058edde                      ; 0058edb2
        ;   XREF to: 0058edde (CONDITIONAL_JUMP)  ; LAB_0058edde
    XOR ESI,ESI                         ; 0058edb4
    MOV EDX,dword ptr [ESP + 0x20]      ; 0058edb6
        ;   Label: LAB_0058edb6
    PUSH EDX                            ; 0058edba
    MOV ECX,dword ptr [ESP + 0x20]      ; 0058edbb
    PUSH ECX                            ; 0058edbf
    PUSH EDI                            ; 0058edc0
    MOV EAX,ESI                         ; 0058edc1
    PUSH EBP                            ; 0058edc3
    CALL dword ptr [EAX + 0x2664fac]    ; 0058edc4
    ADD ESP,0x10                        ; 0058edca
    TEST EAX,EAX                        ; 0058edcd
    JNZ 0x0058ee3e                      ; 0058edcf
        ;   XREF to: 0058ee3e (CONDITIONAL_JUMP)  ; LAB_0058ee3e
    MOV EAX,[0x02664fa8]                ; 0058edd1 | DAT_02664fa8
    INC EBX                             ; 0058edd6
    ADD ESI,0x4                         ; 0058edd7
    CMP EBX,EAX                         ; 0058edda
    JL 0x0058edb6                       ; 0058eddc
        ;   XREF to: 0058edb6 (CONDITIONAL_JUMP)  ; LAB_0058edb6
    MOV EAX,EDI                         ; 0058edde
        ;   Label: LAB_0058edde
    CMP EDI,0x112                       ; 0058ede0
    JNC 0x0058f12a                      ; 0058ede6
        ;   XREF to: 0058f12a (CONDITIONAL_JUMP)  ; LAB_0058f12a
    CMP EDI,0x20                        ; 0058edec
    JNC 0x0058f1da                      ; 0058edef
        ;   XREF to: 0058f1da (CONDITIONAL_JUMP)  ; LAB_0058f1da
    CMP EDI,0x2                         ; 0058edf5
    JC 0x0058ee14                       ; 0058edf8
        ;   XREF to: 0058ee14 (CONDITIONAL_JUMP)  ; LAB_0058ee14
    JA 0x0058f245                       ; 0058edfa
        ;   XREF to: 0058f245 (CONDITIONAL_JUMP)  ; LAB_0058f245
    PUSH 0x0                            ; 0058ee00
    MOV EBX,0x1                         ; 0058ee02
    CALL dword ptr CS:[0x5c84dc]        ; 0058ee07 | PTR_PostQuitMessage_005c84dc
    MOV dword ptr [0x02664630],EBX      ; 0058ee0e | DAT_02664630
    MOV ESI,dword ptr [ESP + 0x20]      ; 0058ee14
        ;   Label: LAB_0058ee14
    PUSH ESI                            ; 0058ee18
    MOV EAX,dword ptr [ESP + 0x20]      ; 0058ee19
    PUSH EAX                            ; 0058ee1d
    PUSH EDI                            ; 0058ee1e
        ;   Label: LAB_0058ee1e
    PUSH EBP                            ; 0058ee1f
    CALL dword ptr CS:[0x5c84a0]        ; 0058ee20 | PTR_DefWindowProcA_005c84a0
    MOV EDI,EAX                         ; 0058ee27
    MOV EAX,EDI                         ; 0058ee29
    POP EBP                             ; 0058ee2b
    POP EDI                             ; 0058ee2c
    POP ESI                             ; 0058ee2d
    POP EBX                             ; 0058ee2e
    RET 0x10                            ; 0058ee2f
    MOV EBX,dword ptr [ESP + 0x20]      ; 0058ee32
        ;   Label: LAB_0058ee32
    PUSH EBX                            ; 0058ee36
    MOV ESI,dword ptr [ESP + 0x20]      ; 0058ee37
    PUSH ESI                            ; 0058ee3b
    JMP 0x0058ee1e                      ; 0058ee3c
        ;   XREF to: 0058ee1e (UNCONDITIONAL_JUMP)  ; LAB_0058ee1e
    XOR EDI,EDI                         ; 0058ee3e
        ;   Label: LAB_0058ee3e
    MOV EAX,EDI                         ; 0058ee40
    POP EBP                             ; 0058ee42
    POP EDI                             ; 0058ee43
    POP ESI                             ; 0058ee44
    POP EBX                             ; 0058ee45
    RET 0x10                            ; 0058ee46
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0058ee49
        ;   Label: LAB_0058ee49
    CMP EAX,0xf140                      ; 0058ee4d
    JC 0x0058ee14                       ; 0058ee52
        ;   XREF to: 0058ee14 (CONDITIONAL_JUMP)  ; LAB_0058ee14
    JBE 0x0058ee3e                      ; 0058ee54
        ;   XREF to: 0058ee3e (CONDITIONAL_JUMP)  ; LAB_0058ee3e
    CMP EAX,0xf170                      ; 0058ee56
    JZ 0x0058ee3e                       ; 0058ee5b
        ;   XREF to: 0058ee3e (CONDITIONAL_JUMP)  ; LAB_0058ee3e
    JMP 0x0058ee14                      ; 0058ee5d
        ;   XREF to: 0058ee14 (UNCONDITIONAL_JUMP)  ; LAB_0058ee14
    MOV EAX,[0x0061e98c]                ; 0058ee5f | DAT_0061e98c
        ;   Label: LAB_0058ee5f
    MOV [0x0061e994],EAX                ; 0058ee64 | DAT_0061e994
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0058ee69
    MOV [0x0061e98c],EAX                ; 0058ee6d | DAT_0061e98c
    MOV EAX,[0x0061e994]                ; 0058ee72 | DAT_0061e994
    CMP EAX,dword ptr [0x0061e98c]      ; 0058ee77 | DAT_0061e98c
    JZ 0x0058ee14                       ; 0058ee7d
        ;   XREF to: 0058ee14 (CONDITIONAL_JUMP)  ; LAB_0058ee14
    CALL dword ptr CS:[0x5c8578]        ; 0058ee7f | PTR_GetCurrentProcess_005c8578
    MOV ESI,dword ptr [0x0061e98c]      ; 0058ee86 | DAT_0061e98c
    MOV EBX,EAX                         ; 0058ee8c
    TEST ESI,ESI                        ; 0058ee8e
    JZ 0x0058eec2                       ; 0058ee90
        ;   XREF to: 0058eec2 (CONDITIONAL_JUMP)  ; LAB_0058eec2
    PUSH 0x1                            ; 0058ee92
    PUSH EAX                            ; 0058ee94
    CALL dword ptr CS:[0x5c863c]        ; 0058ee95 | PTR_SetThreadPriority_005c863c
    CALL wincore_wddvmem.cpp_videoRestore_FUN_005897e0 ; 0058ee9c
        ;   XREF to: 005897e0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_videoRestore_FUN_005897e0()
    CMP dword ptr [0x0061e994],-0x1     ; 0058eea1 | DAT_0061e994
    JZ 0x0058ee14                       ; 0058eea8
        ;   XREF to: 0058ee14 (CONDITIONAL_JUMP)  ; LAB_0058ee14
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0058eeae
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    MOV dword ptr [0x02664634],0x1      ; 0058eeb3 | DAT_02664634
    JMP 0x0058ee14                      ; 0058eebd
        ;   XREF to: 0058ee14 (UNCONDITIONAL_JUMP)  ; LAB_0058ee14
    CALL wincore_wddvmem.cpp_restoreVideoAndMinimizeWindow_FUN_005897b0 ; 0058eec2
        ;   XREF to: 005897b0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_restoreVideoAndMinimizeWindow_FUN_005897b0()
        ;   Label: LAB_0058eec2
    PUSH -0xf                           ; 0058eec7
    PUSH EBX                            ; 0058eec9
    CALL dword ptr CS:[0x5c863c]        ; 0058eeca | PTR_SetThreadPriority_005c863c
    MOV dword ptr [0x02664634],ESI      ; 0058eed1 | DAT_02664634
    JMP 0x0058ee14                      ; 0058eed7
        ;   XREF to: 0058ee14 (UNCONDITIONAL_JUMP)  ; LAB_0058ee14
    PUSH 0x0                            ; 0058eedc
        ;   Label: LAB_0058eedc
    MOV EDI,0x1                         ; 0058eede
    CALL dword ptr CS:[0x5c84ec]        ; 0058eee3 | PTR_SetCursor_005c84ec
    MOV EAX,EDI                         ; 0058eeea
    POP EBP                             ; 0058eeec
    POP EDI                             ; 0058eeed
    POP ESI                             ; 0058eeee
    POP EBX                             ; 0058eeef
    RET 0x10                            ; 0058eef0
    CMP EBP,dword ptr [ESP + 0x1c]      ; 0058eef3
        ;   Label: LAB_0058eef3
    JZ 0x0058ee14                       ; 0058eef7
        ;   XREF to: 0058ee14 (CONDITIONAL_JUMP)  ; LAB_0058ee14
    CALL wincore_wddvmem.cpp_stubFunction_FUN_005898e0 ; 0058eefd
        ;   XREF to: 005898e0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_stubFunction_FUN_005898e0()
        ;   Label: LAB_0058eefd
    JMP 0x0058ee14                      ; 0058ef02
        ;   XREF to: 0058ee14 (UNCONDITIONAL_JUMP)  ; LAB_0058ee14
    CALL wincore_wddvmem.cpp_stubFunction_FUN_005898e0 ; 0058ef07
        ;   XREF to: 005898e0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_stubFunction_FUN_005898e0()
        ;   Label: LAB_0058ef07
    JMP 0x0058ee14                      ; 0058ef0c
        ;   XREF to: 0058ee14 (UNCONDITIONAL_JUMP)  ; LAB_0058ee14
    MOV EAX,dword ptr [ESP + 0x20]      ; 0058ef11
        ;   Label: LAB_0058ef11
    MOV EDX,dword ptr [0x006141cc]      ; 0058ef15 | DAT_006141cc
    SAR EAX,0x10                        ; 0058ef1b
    XOR ECX,ECX                         ; 0058ef1e
    AND EAX,EDX                         ; 0058ef20
    MOV DL,0x1                          ; 0058ef22
    MOV dword ptr [0x02664fa0],ECX      ; 0058ef24 | DAT_02664fa0
    MOV byte ptr [EAX + 0x1c37790],DL   ; 0058ef2a | DAT_01c37790
    CMP EAX,0x3e                        ; 0058ef30
    JNZ 0x0058ee14                      ; 0058ef33
        ;   XREF to: 0058ee14 (CONDITIONAL_JUMP)  ; LAB_0058ee14
    XOR EDI,EDI                         ; 0058ef39
    MOV EAX,EDI                         ; 0058ef3b
    POP EBP                             ; 0058ef3d
    POP EDI                             ; 0058ef3e
    POP ESI                             ; 0058ef3f
    POP EBX                             ; 0058ef40
    RET 0x10                            ; 0058ef41
    XOR EAX,EDI                         ; 0058ef44
        ;   Label: LAB_0058ef44
    MOV AL,byte ptr [ESP + 0x1c]        ; 0058ef46
    TEST EAX,EAX                        ; 0058ef4a
    JZ 0x0058ee14                       ; 0058ef4c
        ;   XREF to: 0058ee14 (CONDITIONAL_JUMP)  ; LAB_0058ee14
    AND EAX,0xffff                      ; 0058ef52
    PUSH EAX                            ; 0058ef57
    CALL wincore_winrun.cpp_enqueueInput_FUN_0058eb70 ; 0058ef58
        ;   XREF to: 0058eb70 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_enqueueInput_FUN_0058eb70(int input_value)
    ADD ESP,0x4                         ; 0058ef5d
    JMP 0x0058ee14                      ; 0058ef60
        ;   XREF to: 0058ee14 (UNCONDITIONAL_JUMP)  ; LAB_0058ee14
    XOR EBX,EBX                         ; 0058ef65
        ;   Label: LAB_0058ef65
    MOV BX,word ptr [ESP + 0x20]        ; 0058ef67
    MOV dword ptr [0x01c2a37c],EBX      ; 0058ef6c | DAT_01c2a37c
    AND EAX,0xffff                      ; 0058ef72
    XOR EDI,EDI                         ; 0058ef77
    MOV [0x01c2a380],EAX                ; 0058ef79 | DAT_01c2a380
    MOV dword ptr [0x02664fa4],EDI      ; 0058ef7e | DAT_02664fa4
    MOV EAX,EDI                         ; 0058ef84
    POP EBP                             ; 0058ef86
    POP EDI                             ; 0058ef87
    POP ESI                             ; 0058ef88
    POP EBX                             ; 0058ef89
    RET 0x10                            ; 0058ef8a
    XOR EBX,EBX                         ; 0058ef8d
        ;   Label: LAB_0058ef8d
    MOV BX,word ptr [ESP + 0x20]        ; 0058ef8f
    MOV dword ptr [0x01c2a37c],EBX      ; 0058ef94 | DAT_01c2a37c
    AND EAX,0xffff                      ; 0058ef9a
    MOV [0x01c2a380],EAX                ; 0058ef9f | DAT_01c2a380
    MOV AL,[0x01c2a384]                 ; 0058efa4 | DAT_01c2a384
    XOR ESI,ESI                         ; 0058efa9
    OR AL,0x1                           ; 0058efab
    XOR EDI,EDI                         ; 0058efad
    MOV [0x01c2a384],AL                 ; 0058efaf | DAT_01c2a384
    MOV AH,0x1                          ; 0058efb4
    MOV dword ptr [0x02664fa4],ESI      ; 0058efb6 | DAT_02664fa4
    MOV byte ptr [0x01c37990],AH        ; 0058efbc | DAT_01c37990
    MOV EAX,EDI                         ; 0058efc2
    POP EBP                             ; 0058efc4
    POP EDI                             ; 0058efc5
    POP ESI                             ; 0058efc6
    POP EBX                             ; 0058efc7
    RET 0x10                            ; 0058efc8
    XOR EBX,EBX                         ; 0058efcb
        ;   Label: LAB_0058efcb
    MOV BX,word ptr [ESP + 0x20]        ; 0058efcd
    MOV dword ptr [0x01c2a37c],EBX      ; 0058efd2 | DAT_01c2a37c
    MOV CH,byte ptr [0x01c2a384]        ; 0058efd8 | DAT_01c2a384
    AND EAX,0xffff                      ; 0058efde
    XOR EBX,EBX                         ; 0058efe3
    XOR EDI,EDI                         ; 0058efe5
    AND CH,0xfe                         ; 0058efe7
    MOV [0x01c2a380],EAX                ; 0058efea | DAT_01c2a380
    MOV byte ptr [0x01c2a384],CH        ; 0058efef | DAT_01c2a384
    MOV ECX,0x1                         ; 0058eff5
    MOV dword ptr [0x02664fa4],EBX      ; 0058effa | DAT_02664fa4
    MOV dword ptr [0x02664e40],ECX      ; 0058f000 | DAT_02664e40
    MOV EAX,EDI                         ; 0058f006
    POP EBP                             ; 0058f008
    POP EDI                             ; 0058f009
    POP ESI                             ; 0058f00a
    POP EBX                             ; 0058f00b
    RET 0x10                            ; 0058f00c
    XOR EBX,EBX                         ; 0058f00f
        ;   Label: LAB_0058f00f
    MOV BX,word ptr [ESP + 0x20]        ; 0058f011
    MOV dword ptr [0x01c2a37c],EBX      ; 0058f016 | DAT_01c2a37c
    MOV CL,0x1                          ; 0058f01c
    MOV BH,byte ptr [0x01c2a384]        ; 0058f01e | DAT_01c2a384
    AND EAX,0xffff                      ; 0058f024
    XOR EDX,EDX                         ; 0058f029
    XOR EDI,EDI                         ; 0058f02b
    MOV [0x01c2a380],EAX                ; 0058f02d | DAT_01c2a380
    OR BH,0x2                           ; 0058f032
    MOV byte ptr [0x01c37991],CL        ; 0058f035 | DAT_01c37991
    MOV dword ptr [0x02664fa4],EDX      ; 0058f03b | DAT_02664fa4
    MOV byte ptr [0x01c2a384],BH        ; 0058f041 | DAT_01c2a384
    MOV EAX,EDI                         ; 0058f047
    POP EBP                             ; 0058f049
    POP EDI                             ; 0058f04a
    POP ESI                             ; 0058f04b
    POP EBX                             ; 0058f04c
    RET 0x10                            ; 0058f04d
    XOR EBX,EBX                         ; 0058f050
        ;   Label: LAB_0058f050
    MOV BX,word ptr [ESP + 0x20]        ; 0058f052
    MOV dword ptr [0x01c2a37c],EBX      ; 0058f057 | DAT_01c2a37c
    MOV EBP,0x1                         ; 0058f05d
    MOV BL,byte ptr [0x01c2a384]        ; 0058f062 | DAT_01c2a384
    AND EAX,0xffff                      ; 0058f068
    XOR EDI,EDI                         ; 0058f06d
    MOV [0x01c2a380],EAX                ; 0058f06f | DAT_01c2a380
    AND BL,0xfd                         ; 0058f074
    MOV dword ptr [0x02664e44],EBP      ; 0058f077 | DAT_02664e44
    XOR EAX,EAX                         ; 0058f07d
    MOV byte ptr [0x01c2a384],BL        ; 0058f07f | DAT_01c2a384
    MOV [0x02664fa4],EAX                ; 0058f085 | DAT_02664fa4
    MOV EAX,EDI                         ; 0058f08a
    POP EBP                             ; 0058f08c
    POP EDI                             ; 0058f08d
    POP ESI                             ; 0058f08e
    POP EBX                             ; 0058f08f
    RET 0x10                            ; 0058f090
    XOR EBX,EBX                         ; 0058f093
        ;   Label: LAB_0058f093
    MOV BX,word ptr [ESP + 0x20]        ; 0058f095
    MOV dword ptr [0x01c2a37c],EBX      ; 0058f09a | DAT_01c2a37c
    MOV DL,byte ptr [0x01c2a384]        ; 0058f0a0 | DAT_01c2a384
    AND EAX,0xffff                      ; 0058f0a6
    XOR EDI,EDI                         ; 0058f0ab
    OR DL,0x4                           ; 0058f0ad
    MOV [0x01c2a380],EAX                ; 0058f0b0 | DAT_01c2a380
    MOV byte ptr [0x01c2a384],DL        ; 0058f0b5 | DAT_01c2a384
    MOV DH,0x1                          ; 0058f0bb
    MOV dword ptr [0x02664fa4],EDI      ; 0058f0bd | DAT_02664fa4
    MOV byte ptr [0x01c3799c],DH        ; 0058f0c3 | DAT_01c3799c
    MOV EAX,EDI                         ; 0058f0c9
    POP EBP                             ; 0058f0cb
    POP EDI                             ; 0058f0cc
    POP ESI                             ; 0058f0cd
    POP EBX                             ; 0058f0ce
    RET 0x10                            ; 0058f0cf
    XOR EBX,EBX                         ; 0058f0d2
        ;   Label: LAB_0058f0d2
    MOV BX,word ptr [ESP + 0x20]        ; 0058f0d4
    MOV dword ptr [0x01c2a37c],EBX      ; 0058f0d9 | DAT_01c2a37c
    MOV EBX,0x1                         ; 0058f0df
    AND EAX,0xffff                      ; 0058f0e4
    XOR ESI,ESI                         ; 0058f0e9
    XOR EDI,EDI                         ; 0058f0eb
    MOV [0x01c2a380],EAX                ; 0058f0ed | DAT_01c2a380
    MOV AH,byte ptr [0x01c2a384]        ; 0058f0f2 | DAT_01c2a384
    MOV dword ptr [0x02664e70],EBX      ; 0058f0f8 | DAT_02664e70
    AND AH,0xfb                         ; 0058f0fe
    MOV dword ptr [0x02664fa4],ESI      ; 0058f101 | DAT_02664fa4
    MOV byte ptr [0x01c2a384],AH        ; 0058f107 | DAT_01c2a384
    MOV EAX,EDI                         ; 0058f10d
    POP EBP                             ; 0058f10f
    POP EDI                             ; 0058f110
    POP ESI                             ; 0058f111
    POP EBX                             ; 0058f112
    RET 0x10                            ; 0058f113
    MOV EDX,dword ptr [0x02664628]      ; 0058f116 | DAT_02664628
        ;   Label: LAB_0058f116
    PUSH EDX                            ; 0058f11c
    CALL wincore_winvideo.cpp_closeMovie_FUN_00590e40 ; 0058f11d
        ;   XREF to: 00590e40 (UNCONDITIONAL_CALL)  ; void wincore_winvideo.cpp_closeMovie_FUN_00590e40(HWND window_handle)
    ADD ESP,0x4                         ; 0058f122
    JMP 0x0058ee14                      ; 0058f125
        ;   XREF to: 0058ee14 (UNCONDITIONAL_JUMP)  ; LAB_0058ee14
    JBE 0x0058ee49                      ; 0058f12a
        ;   XREF to: 0058ee49 (CONDITIONAL_JUMP)  ; LAB_0058ee49
        ;   Label: LAB_0058f12a
    MOV EAX,dword ptr [ESP + 0x20]      ; 0058f130
    SHR EAX,0x10                        ; 0058f134
    AND EAX,0xffff                      ; 0058f137
    CMP EDI,0x205                       ; 0058f13c
    JNC 0x0058f15d                      ; 0058f142
        ;   XREF to: 0058f15d (CONDITIONAL_JUMP)  ; LAB_0058f15d
    CMP EDI,0x201                       ; 0058f144
    JNC 0x0058f1b7                      ; 0058f14a
        ;   XREF to: 0058f1b7 (CONDITIONAL_JUMP)  ; LAB_0058f1b7
    CMP EDI,0x200                       ; 0058f14c
    JZ 0x0058ef65                       ; 0058f152
        ;   XREF to: 0058ef65 (CONDITIONAL_JUMP)  ; LAB_0058ef65
    JMP 0x0058ee14                      ; 0058f158
        ;   XREF to: 0058ee14 (UNCONDITIONAL_JUMP)  ; LAB_0058ee14
    JBE 0x0058f050                      ; 0058f15d
        ;   XREF to: 0058f050 (CONDITIONAL_JUMP)  ; LAB_0058f050
        ;   Label: LAB_0058f15d
    CMP EDI,0x30f                       ; 0058f163
    JNC 0x0058f18e                      ; 0058f169
        ;   XREF to: 0058f18e (CONDITIONAL_JUMP)  ; LAB_0058f18e
    CMP EDI,0x207                       ; 0058f16b
    JC 0x0058ee14                       ; 0058f171
        ;   XREF to: 0058ee14 (CONDITIONAL_JUMP)  ; LAB_0058ee14
    JBE 0x0058f093                      ; 0058f177
        ;   XREF to: 0058f093 (CONDITIONAL_JUMP)  ; LAB_0058f093
    CMP EDI,0x208                       ; 0058f17d
    JZ 0x0058f0d2                       ; 0058f183
        ;   XREF to: 0058f0d2 (CONDITIONAL_JUMP)  ; LAB_0058f0d2
    JMP 0x0058ee14                      ; 0058f189
        ;   XREF to: 0058ee14 (UNCONDITIONAL_JUMP)  ; LAB_0058ee14
    JBE 0x0058eefd                      ; 0058f18e
        ;   XREF to: 0058eefd (CONDITIONAL_JUMP)  ; LAB_0058eefd
        ;   Label: LAB_0058f18e
    CMP EDI,0x311                       ; 0058f194
    JC 0x0058ee14                       ; 0058f19a
        ;   XREF to: 0058ee14 (CONDITIONAL_JUMP)  ; LAB_0058ee14
    JBE 0x0058eef3                      ; 0058f1a0
        ;   XREF to: 0058eef3 (CONDITIONAL_JUMP)  ; LAB_0058eef3
    CMP EDI,0x3b9                       ; 0058f1a6
    JZ 0x0058f116                       ; 0058f1ac
        ;   XREF to: 0058f116 (CONDITIONAL_JUMP)  ; LAB_0058f116
    JMP 0x0058ee14                      ; 0058f1b2
        ;   XREF to: 0058ee14 (UNCONDITIONAL_JUMP)  ; LAB_0058ee14
    JBE 0x0058ef8d                      ; 0058f1b7
        ;   XREF to: 0058ef8d (CONDITIONAL_JUMP)  ; LAB_0058ef8d
        ;   Label: LAB_0058f1b7
    CMP EDI,0x202                       ; 0058f1bd
    JBE 0x0058efcb                      ; 0058f1c3
        ;   XREF to: 0058efcb (CONDITIONAL_JUMP)  ; LAB_0058efcb
    CMP EDI,0x204                       ; 0058f1c9
    JZ 0x0058f00f                       ; 0058f1cf
        ;   XREF to: 0058f00f (CONDITIONAL_JUMP)  ; LAB_0058f00f
    JMP 0x0058ee14                      ; 0058f1d5
        ;   XREF to: 0058ee14 (UNCONDITIONAL_JUMP)  ; LAB_0058ee14
    JBE 0x0058eedc                      ; 0058f1da
        ;   XREF to: 0058eedc (CONDITIONAL_JUMP)  ; LAB_0058eedc
        ;   Label: LAB_0058f1da
    CMP EDI,0x102                       ; 0058f1e0
    JNC 0x0058f220                      ; 0058f1e6
        ;   XREF to: 0058f220 (CONDITIONAL_JUMP)  ; LAB_0058f220
    CMP EDI,0x100                       ; 0058f1e8
    JC 0x0058ee14                       ; 0058f1ee
        ;   XREF to: 0058ee14 (CONDITIONAL_JUMP)  ; LAB_0058ee14
    JBE 0x0058ef11                      ; 0058f1f4
        ;   XREF to: 0058ef11 (CONDITIONAL_JUMP)  ; LAB_0058ef11
    MOV EAX,dword ptr [ESP + 0x20]      ; 0058f1fa
        ;   Label: LAB_0058f1fa
    MOV EBX,dword ptr [0x006141cc]      ; 0058f1fe | DAT_006141cc
    SAR EAX,0x10                        ; 0058f204
    AND EAX,EBX                         ; 0058f207
    MOV dword ptr [EAX*0x4 + 0x2664640],0x1 ; 0058f209
    XOR EAX,EAX                         ; 0058f214
    MOV [0x02664fa0],EAX                ; 0058f216 | DAT_02664fa0
    JMP 0x0058ee14                      ; 0058f21b
        ;   XREF to: 0058ee14 (UNCONDITIONAL_JUMP)  ; LAB_0058ee14
    JBE 0x0058ef44                      ; 0058f220
        ;   XREF to: 0058ef44 (CONDITIONAL_JUMP)  ; LAB_0058ef44
        ;   Label: LAB_0058f220
    CMP EDI,0x104                       ; 0058f226
    JC 0x0058ee14                       ; 0058f22c
        ;   XREF to: 0058ee14 (CONDITIONAL_JUMP)  ; LAB_0058ee14
    JBE 0x0058ef11                      ; 0058f232
        ;   XREF to: 0058ef11 (CONDITIONAL_JUMP)  ; LAB_0058ef11
    CMP EDI,0x105                       ; 0058f238
    JZ 0x0058f1fa                       ; 0058f23e
        ;   XREF to: 0058f1fa (CONDITIONAL_JUMP)  ; LAB_0058f1fa
    JMP 0x0058ee14                      ; 0058f240
        ;   XREF to: 0058ee14 (UNCONDITIONAL_JUMP)  ; LAB_0058ee14
    CMP EDI,0xf                         ; 0058f245
        ;   Label: LAB_0058f245
    JC 0x0058ee14                       ; 0058f248
        ;   XREF to: 0058ee14 (CONDITIONAL_JUMP)  ; LAB_0058ee14
    JBE 0x0058ef07                      ; 0058f24e
        ;   XREF to: 0058ef07 (CONDITIONAL_JUMP)  ; LAB_0058ef07
    CMP EDI,0x1c                        ; 0058f254
    JZ 0x0058ee5f                       ; 0058f257
        ;   XREF to: 0058ee5f (CONDITIONAL_JUMP)  ; LAB_0058ee5f
    JMP 0x0058ee14                      ; 0058f25d
        ;   XREF to: 0058ee14 (UNCONDITIONAL_JUMP)  ; LAB_0058ee14

