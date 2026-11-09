; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f0980(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   engine_mini3d.cpp_FUN_004f1020 at 004f10b8
;   engine_mini3d.cpp_FUN_004f1190 at 004f11f9
;   engine_mini3d.cpp_FUN_004f2a10 at 004f2adc
;
; Referenced Globals:
;   void* PTR_caseD_1_004f0968 = 004f0a2e
;   void* PTR_caseD_3_004f0970 = 004f0a0c
;   undefined4 DAT_01d76f6c
;   undefined4 DAT_01d76f70
;   undefined4 DAT_01d76f7c
;   undefined4 DAT_01d76f80
;   undefined4 DAT_01d76f84
;   undefined4 DAT_01d76fbc
;   undefined4 DAT_01d76fc4
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004f05e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f0980
        ;   Label: engine_mini3d.cpp_FUN_004f0980
    PUSH ESI                            ; 004f0981
    PUSH EDI                            ; 004f0982
    PUSH EBP                            ; 004f0983
    SUB ESP,0x8                         ; 004f0984
    MOV EBX,dword ptr [0x01d76f70]      ; 004f0987 | DAT_01d76f70
    XOR EDX,EDX                         ; 004f098d
    MOV ECX,dword ptr [0x01d76f6c]      ; 004f098f | DAT_01d76f6c
    MOV dword ptr [ESP],EDX             ; 004f0995
    TEST ECX,ECX                        ; 004f0998
    JLE 0x004f0a20                      ; 004f099a
        ;   XREF to: 004f0a20 (CONDITIONAL_JUMP)  ; LAB_004f0a20
    MOV EBP,0x1d76f7c                   ; 004f09a0
    MOV ECX,dword ptr [ESP]             ; 004f09a5
        ;   Label: LAB_004f09a5
    MOV EAX,[0x01d76f6c]                ; 004f09a8 | DAT_01d76f6c
    INC ECX                             ; 004f09ad
    CMP ECX,EAX                         ; 004f09ae
    JNZ 0x004f09b4                      ; 004f09b0
        ;   XREF to: 004f09b4 (CONDITIONAL_JUMP)  ; LAB_004f09b4
    XOR ECX,EAX                         ; 004f09b2
    FLD float ptr [EBP + 0x8]           ; 004f09b4 | DAT_01d76f84 | DAT_01d76fc4
        ;   Label: LAB_004f09b4
    MOV ESI,0x1d76f7c                   ; 004f09b7
    SHL ECX,0x6                         ; 004f09bc
    MOV EDX,EBP                         ; 004f09bf
    ADD ESI,ECX                         ; 004f09c1
    FCHS                                ; 004f09c3
    MOV dword ptr [ESP + 0x4],ESI       ; 004f09c5
    XOR ECX,ECX                         ; 004f09c9
    FCOMP float ptr [EBP]               ; 004f09cb | DAT_01d76f7c | DAT_01d76fbc
    FNSTSW AX                           ; 004f09ce
    SAHF                                ; 004f09d0
    JC 0x004f09d8                       ; 004f09d1
        ;   XREF to: 004f09d8 (CONDITIONAL_JUMP)  ; LAB_004f09d8
    MOV ECX,0x1                         ; 004f09d3
    MOV ESI,dword ptr [ESP + 0x4]       ; 004f09d8
        ;   Label: LAB_004f09d8
    FLD float ptr [ESI + 0x8]           ; 004f09dc | DAT_01d76f84
    FCHS                                ; 004f09df
    FCOMP float ptr [ESI]               ; 004f09e1 | DAT_01d76f7c
    FNSTSW AX                           ; 004f09e3
    SAHF                                ; 004f09e5
    JC 0x004f09eb                       ; 004f09e6
        ;   XREF to: 004f09eb (CONDITIONAL_JUMP)  ; LAB_004f09eb
    OR CL,0x2                           ; 004f09e8
    CMP ECX,0x3                         ; 004f09eb
        ;   Label: LAB_004f09eb
    JA 0x004f0a0c                       ; 004f09ee
        ;   XREF to: 004f0a0c (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4f0964]  ; 004f09f0 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ESI,EBX                         ; 004f09f7
        ;   Label: caseD_0
    SHL ESI,0x6                         ; 004f09f9
    MOV ECX,0x10                        ; 004f09fc
    LEA EDI,[ESI + 0x1d77f7c]           ; 004f0a01
    MOV ESI,EDX                         ; 004f0a07
    INC EBX                             ; 004f0a09
    MOVSD.REP ES:EDI,ESI                ; 004f0a0a | DAT_01d76f7c | DAT_01d76f80
    MOV ESI,dword ptr [ESP]             ; 004f0a0c
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x01d76f6c]      ; 004f0a0f | DAT_01d76f6c
    INC ESI                             ; 004f0a15
    ADD EBP,0x40                        ; 004f0a16
    MOV dword ptr [ESP],ESI             ; 004f0a19
    CMP ESI,EDI                         ; 004f0a1c
    JL 0x004f09a5                       ; 004f0a1e
        ;   XREF to: 004f09a5 (CONDITIONAL_JUMP)  ; LAB_004f09a5
    MOV dword ptr [0x01d76f70],EBX      ; 004f0a20 | DAT_01d76f70
        ;   Label: LAB_004f0a20
    ADD ESP,0x8                         ; 004f0a26
    POP EBP                             ; 004f0a29
    POP EDI                             ; 004f0a2a
    POP ESI                             ; 004f0a2b
    POP EBX                             ; 004f0a2c
    RET                                 ; 004f0a2d
    MOV ECX,EBX                         ; 004f0a2e
        ;   Label: caseD_1
    SHL ECX,0x6                         ; 004f0a30
    ADD ECX,0x1d77f7c                   ; 004f0a33
    PUSH ECX                            ; 004f0a39
    PUSH EDX                            ; 004f0a3a | DAT_01d76f7c
    MOV ESI,dword ptr [ESP + 0xc]       ; 004f0a3b
    PUSH ESI                            ; 004f0a3f
    MOV dword ptr [0x01d76f70],EBX      ; 004f0a40 | DAT_01d76f70
    CALL engine_mini3d.cpp_FUN_004f05e0 ; 004f0a46
        ;   XREF to: 004f05e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f05e0()
    MOV EBX,dword ptr [0x01d76f70]      ; 004f0a4b | DAT_01d76f70
    ADD ESP,0xc                         ; 004f0a51
    INC EBX                             ; 004f0a54
    JMP 0x004f0a0c                      ; 004f0a55
        ;   XREF to: 004f0a0c (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV ESI,EBX                         ; 004f0a57
        ;   Label: caseD_2
    SHL ESI,0x6                         ; 004f0a59
    MOV ECX,0x10                        ; 004f0a5c
    LEA EDI,[ESI + 0x1d77f7c]           ; 004f0a61
    MOV ESI,EDX                         ; 004f0a67
    INC EBX                             ; 004f0a69
    MOVSD.REP ES:EDI,ESI                ; 004f0a6a | DAT_01d76f7c | DAT_01d76f80
    MOV ECX,EBX                         ; 004f0a6c
    SHL ECX,0x6                         ; 004f0a6e
    ADD ECX,0x1d77f7c                   ; 004f0a71
    PUSH ECX                            ; 004f0a77
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f0a78
    PUSH ECX                            ; 004f0a7c
    PUSH EDX                            ; 004f0a7d | DAT_01d76f7c
    MOV dword ptr [0x01d76f70],EBX      ; 004f0a7e | DAT_01d76f70
    CALL engine_mini3d.cpp_FUN_004f05e0 ; 004f0a84
        ;   XREF to: 004f05e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f05e0()
    MOV EBX,dword ptr [0x01d76f70]      ; 004f0a89 | DAT_01d76f70
    ADD ESP,0xc                         ; 004f0a8f
    INC EBX                             ; 004f0a92
    JMP 0x004f0a0c                      ; 004f0a93
        ;   XREF to: 004f0a0c (UNCONDITIONAL_JUMP)  ; caseD_3

