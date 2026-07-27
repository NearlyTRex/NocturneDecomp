; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcamera_cpp_CDemonCamera_endScene_FUN_00440a20(int param_1,int param_2)
;
;
; XREF[4]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 at 00508c15
;   core_set.cpp_FUN_00507f80 at 00508070
;   core_set.cpp_FUN_00509a80 at 00509f95
;   core_set.cpp_FUN_0050aba0 at 0050acde
;
; Referenced Globals:
;   TerminatedCString s_core_dcamera_cpp_0057b704
;   TerminatedCString s_CDemonCamera_endScene_Sc_0057b718
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01bd4260
;   undefined4 DAT_01c02594
;   char* PTR_01cc4800
;   int INT_01cc4804
;   int INT_02dc9d60
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_00440270
;   core_main.c_FUN_004c8440
;   crt_watcom.c__memcpy_FUN_00481a28
;   engine_drender.cpp_CDemonRenderer_popViewport_FUN_00460e70
;   engine_special.cpp_endScene_FUN_00532360
;   engine_special.cpp_masterZBuffer_FUN_00532c70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440a20
        ;   Label: core_dcamera.cpp_CDemonCamera_endScene_FUN_00440a20
    PUSH ESI                            ; 00440a21
    PUSH EBP                            ; 00440a22
    MOV EBX,dword ptr [ESP + 0x10]      ; 00440a23
    CMP dword ptr [EBX + 0x11e4],0x0    ; 00440a27
    JZ 0x00440adc                       ; 00440a2e
        ;   XREF to: 00440adc (CONDITIONAL_JUMP)  ; LAB_00440adc
    MOV dword ptr [EBX + 0x11e4],0x0    ; 00440a34
    CMP dword ptr [0x02dc9d60],0x0      ; 00440a3e | INT_02dc9d60
        ;   Label: LAB_00440a3e
    JZ 0x00440a4c                       ; 00440a45
        ;   XREF to: 00440a4c (CONDITIONAL_JUMP)  ; LAB_00440a4c
    CALL engine_special.cpp_endScene_FUN_00532360 ; 00440a47
        ;   XREF to: 00532360 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_endScene_FUN_00532360()
    MOV EBP,dword ptr [EBX + 0x168]     ; 00440a4c
        ;   Label: LAB_00440a4c
    TEST EBP,EBP                        ; 00440a52
    JNZ 0x00440ac0                      ; 00440a54
        ;   XREF to: 00440ac0 (CONDITIONAL_JUMP)  ; LAB_00440ac0
    CMP dword ptr [ESP + 0x14],0x0      ; 00440a5a
    JNZ 0x00440ac0                      ; 00440a5f
        ;   XREF to: 00440ac0 (CONDITIONAL_JUMP)  ; LAB_00440ac0
    CMP dword ptr [0x01c02594],0x0      ; 00440a61 | DAT_01c02594
    JNZ 0x00440b04                      ; 00440a68
        ;   XREF to: 00440b04 (CONDITIONAL_JUMP)  ; LAB_00440b04
    MOV ECX,dword ptr [EBX + 0x140]     ; 00440a6e
        ;   Label: LAB_00440a6e
    XOR ESI,ESI                         ; 00440a74
    TEST ECX,ECX                        ; 00440a76
    JLE 0x00440ac0                      ; 00440a78
        ;   XREF to: 00440ac0 (CONDITIONAL_JUMP)  ; LAB_00440ac0
    MOV EDX,dword ptr [EBX + 0x13c]     ; 00440a7a
        ;   Label: LAB_00440a7a
    SHL EDX,0x2                         ; 00440a80
    PUSH EDX                            ; 00440a83
    MOV EDX,dword ptr [EBX + 0x148]     ; 00440a84
    MOV ECX,dword ptr [EBX + 0x144]     ; 00440a8a
    ADD EDX,ESI                         ; 00440a90
    SHL ECX,0x2                         ; 00440a92
    MOV EDX,dword ptr [EDX*0x4 + 0x1bd4260] ; 00440a95 | DAT_01bd4260
    ADD EDX,ECX                         ; 00440a9c
    MOV ECX,dword ptr [EBX + 0x13c]     ; 00440a9e
    IMUL ECX,ESI                        ; 00440aa4
    MOV EAX,dword ptr [EBX + 0x15c]     ; 00440aa7
    SHL ECX,0x2                         ; 00440aad
    ADD ECX,EAX                         ; 00440ab0
    INC ESI                             ; 00440ab2
    CALL crt_watcom.c__memcpy_FUN_00481a28 ; 00440ab3
        ;   XREF to: 00481a28 (UNCONDITIONAL_CALL)  ; undefined crt_watcom.c__memcpy_FUN_00481a28()
    CMP ESI,dword ptr [EBX + 0x140]     ; 00440ab8
    JL 0x00440a7a                       ; 00440abe
        ;   XREF to: 00440a7a (CONDITIONAL_JUMP)  ; LAB_00440a7a
    MOV EBP,dword ptr [0x005ae704]      ; 00440ac0 | DAT_005ae704
        ;   Label: LAB_00440ac0
    PUSH EBP                            ; 00440ac6 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_popViewport_FUN_00460e70 ; 00440ac7
        ;   XREF to: 00460e70 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_popViewport_FUN_00460e70()
    ADD ESP,0x4                         ; 00440acc
    PUSH EBX                            ; 00440acf
    CALL core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_00440270 ; 00440ad0
        ;   XREF to: 00440270 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_00440270()
    ADD ESP,0x4                         ; 00440ad5
    POP EBP                             ; 00440ad8
    POP ESI                             ; 00440ad9
    POP EBX                             ; 00440ada
    RET                                 ; 00440adb
    MOV ECX,0x57b704                    ; 00440adc | = "..\\core\\dcamera.cpp"
        ;   Label: LAB_00440adc
    MOV ESI,0x3f9                       ; 00440ae1
    PUSH 0x57b718                       ; 00440ae6 | = "CDemonCamera::endScene - Scene not open!"
    MOV dword ptr [0x01cc4800],ECX      ; 00440aeb | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00440af1 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00440af7
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00440afc
    JMP 0x00440a3e                      ; 00440aff
        ;   XREF to: 00440a3e (UNCONDITIONAL_JUMP)  ; LAB_00440a3e
    PUSH EBP                            ; 00440b04
        ;   Label: LAB_00440b04
    CALL engine_special.cpp_masterZBuffer_FUN_00532c70 ; 00440b05
        ;   XREF to: 00532c70 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_masterZBuffer_FUN_00532c70()
    ADD ESP,0x4                         ; 00440b0a
    JMP 0x00440a6e                      ; 00440b0d
        ;   XREF to: 00440a6e (UNCONDITIONAL_JUMP)  ; LAB_00440a6e

