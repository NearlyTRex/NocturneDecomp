; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f0be0(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   engine_mini3d.cpp_FUN_004f1020 at 004f10d4
;   engine_mini3d.cpp_FUN_004f1190 at 004f1215
;   engine_mini3d.cpp_FUN_004f2a10 at 004f2af6
;
; Referenced Globals:
;   void* PTR_caseD_1_004f0bcc = 004f0c8f
;   void* PTR_caseD_3_004f0bd4 = 004f0c6d
;   undefined4 DAT_01d76f74
;   undefined4 DAT_01d76f78
;   undefined4 DAT_01d7877c
;   undefined4 DAT_01d78780
;   undefined4 DAT_01d78784
;   undefined4 DAT_01d787c0
;   undefined4 DAT_01d787c4
;   undefined4 DAT_01d78f7c
;   undefined4 DAT_01d78f80
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004f0770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f0be0
        ;   Label: engine_mini3d.cpp_FUN_004f0be0
    PUSH ESI                            ; 004f0be1
    PUSH EDI                            ; 004f0be2
    PUSH EBP                            ; 004f0be3
    SUB ESP,0x8                         ; 004f0be4
    MOV EBX,dword ptr [0x01d76f78]      ; 004f0be7 | DAT_01d76f78
    XOR EDX,EDX                         ; 004f0bed
    MOV ECX,dword ptr [0x01d76f74]      ; 004f0bef | DAT_01d76f74
    MOV dword ptr [ESP],EDX             ; 004f0bf5
    TEST ECX,ECX                        ; 004f0bf8
    JLE 0x004f0c81                      ; 004f0bfa
        ;   XREF to: 004f0c81 (CONDITIONAL_JUMP)  ; LAB_004f0c81
    MOV EBP,0x1d7877c                   ; 004f0c00
    MOV ECX,dword ptr [ESP]             ; 004f0c05
        ;   Label: LAB_004f0c05
    MOV EAX,[0x01d76f74]                ; 004f0c08 | DAT_01d76f74
    INC ECX                             ; 004f0c0d
    CMP ECX,EAX                         ; 004f0c0e
    JNZ 0x004f0c14                      ; 004f0c10
        ;   XREF to: 004f0c14 (CONDITIONAL_JUMP)  ; LAB_004f0c14
    XOR ECX,EAX                         ; 004f0c12
    FLD float ptr [EBP + 0x8]           ; 004f0c14 | DAT_01d78784 | DAT_01d787c4
        ;   Label: LAB_004f0c14
    MOV ESI,0x1d7877c                   ; 004f0c17
    SHL ECX,0x6                         ; 004f0c1c
    MOV EDX,EBP                         ; 004f0c1f
    ADD ESI,ECX                         ; 004f0c21
    FCHS                                ; 004f0c23
    MOV dword ptr [ESP + 0x4],ESI       ; 004f0c25
    XOR ECX,ECX                         ; 004f0c29
    FCOMP float ptr [EBP + 0x4]         ; 004f0c2b | DAT_01d78780 | DAT_01d787c0
    FNSTSW AX                           ; 004f0c2e
    SAHF                                ; 004f0c30
    JC 0x004f0c38                       ; 004f0c31
        ;   XREF to: 004f0c38 (CONDITIONAL_JUMP)  ; LAB_004f0c38
    MOV ECX,0x1                         ; 004f0c33
    MOV ESI,dword ptr [ESP + 0x4]       ; 004f0c38
        ;   Label: LAB_004f0c38
    FLD float ptr [ESI + 0x8]           ; 004f0c3c | DAT_01d78784
    FCHS                                ; 004f0c3f
    FCOMP float ptr [ESI + 0x4]         ; 004f0c41 | DAT_01d78780
    FNSTSW AX                           ; 004f0c44
    SAHF                                ; 004f0c46
    JC 0x004f0c4c                       ; 004f0c47
        ;   XREF to: 004f0c4c (CONDITIONAL_JUMP)  ; LAB_004f0c4c
    OR CL,0x2                           ; 004f0c49
    CMP ECX,0x3                         ; 004f0c4c
        ;   Label: LAB_004f0c4c
    JA 0x004f0c6d                       ; 004f0c4f
        ;   XREF to: 004f0c6d (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4f0bc8]  ; 004f0c51 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ESI,EBX                         ; 004f0c58
        ;   Label: caseD_0
    SHL ESI,0x6                         ; 004f0c5a
    MOV ECX,0x10                        ; 004f0c5d
    LEA EDI,[ESI + 0x1d78f7c]           ; 004f0c62
    MOV ESI,EDX                         ; 004f0c68
    INC EBX                             ; 004f0c6a
    MOVSD.REP ES:EDI,ESI                ; 004f0c6b | DAT_01d7877c | DAT_01d78f7c | DAT_01d78780
    MOV ESI,dword ptr [ESP]             ; 004f0c6d
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x01d76f74]      ; 004f0c70 | DAT_01d76f74
    INC ESI                             ; 004f0c76
    ADD EBP,0x40                        ; 004f0c77
    MOV dword ptr [ESP],ESI             ; 004f0c7a
    CMP ESI,EDI                         ; 004f0c7d
    JL 0x004f0c05                       ; 004f0c7f
        ;   XREF to: 004f0c05 (CONDITIONAL_JUMP)  ; LAB_004f0c05
    MOV dword ptr [0x01d76f78],EBX      ; 004f0c81 | DAT_01d76f78
        ;   Label: LAB_004f0c81
    ADD ESP,0x8                         ; 004f0c87
    POP EBP                             ; 004f0c8a
    POP EDI                             ; 004f0c8b
    POP ESI                             ; 004f0c8c
    POP EBX                             ; 004f0c8d
    RET                                 ; 004f0c8e
    MOV ECX,EBX                         ; 004f0c8f
        ;   Label: caseD_1
    SHL ECX,0x6                         ; 004f0c91
    ADD ECX,0x1d78f7c                   ; 004f0c94
    PUSH ECX                            ; 004f0c9a
    PUSH EDX                            ; 004f0c9b | DAT_01d7877c
    MOV ESI,dword ptr [ESP + 0xc]       ; 004f0c9c
    PUSH ESI                            ; 004f0ca0
    MOV dword ptr [0x01d76f78],EBX      ; 004f0ca1 | DAT_01d76f78
    CALL engine_mini3d.cpp_FUN_004f0770 ; 004f0ca7
        ;   XREF to: 004f0770 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f0770()
    MOV EBX,dword ptr [0x01d76f78]      ; 004f0cac | DAT_01d76f78
    ADD ESP,0xc                         ; 004f0cb2
    INC EBX                             ; 004f0cb5
    JMP 0x004f0c6d                      ; 004f0cb6
        ;   XREF to: 004f0c6d (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV ESI,EBX                         ; 004f0cb8
        ;   Label: caseD_2
    SHL ESI,0x6                         ; 004f0cba
    MOV ECX,0x10                        ; 004f0cbd
    LEA EDI,[ESI + 0x1d78f7c]           ; 004f0cc2
    MOV ESI,EDX                         ; 004f0cc8
    INC EBX                             ; 004f0cca
    MOVSD.REP ES:EDI,ESI                ; 004f0ccb | DAT_01d7877c | DAT_01d78f7c | DAT_01d78780
    MOV ECX,EBX                         ; 004f0ccd
    SHL ECX,0x6                         ; 004f0ccf
    ADD ECX,0x1d78f7c                   ; 004f0cd2
    PUSH ECX                            ; 004f0cd8
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f0cd9
    PUSH ECX                            ; 004f0cdd
    PUSH EDX                            ; 004f0cde | DAT_01d7877c
    MOV dword ptr [0x01d76f78],EBX      ; 004f0cdf | DAT_01d76f78
    CALL engine_mini3d.cpp_FUN_004f0770 ; 004f0ce5
        ;   XREF to: 004f0770 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f0770()
    MOV EBX,dword ptr [0x01d76f78]      ; 004f0cea | DAT_01d76f78
    ADD ESP,0xc                         ; 004f0cf0
    INC EBX                             ; 004f0cf3
    JMP 0x004f0c6d                      ; 004f0cf4
        ;   XREF to: 004f0c6d (UNCONDITIONAL_JUMP)  ; caseD_3

