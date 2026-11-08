; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00571460(int param_1,float param_2)
;
;
; XREF[1]:
;   FUN_00570510 at 005705e8
;
; Referenced Globals:
;   undefined4 DAT_0264bf7c
;   undefined4 DAT_0264bf80
;
; Called Functions:
;   FUN_0042aa00
;   FUN_005030c0
;   FUN_00571500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571460
        ;   Label: FUN_00571460
    PUSH ESI                            ; 00571461
    PUSH EDI                            ; 00571462
    PUSH EBP                            ; 00571463
    MOV EBP,ESP                         ; 00571464
    AND ESP,0xfffffff8                  ; 00571466
    MOV EBX,dword ptr [EBP + 0x14]      ; 00571469
    LEA ESI,[EBX + 0x2b4]               ; 0057146c
    LEA EAX,[EBP + 0x18]                ; 00571472
        ;   Label: LAB_00571472
    PUSH EAX                            ; 00571475
    PUSH ESI                            ; 00571476
    CALL FUN_005030c0                   ; 00571477
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030c0()
    ADD ESP,0x8                         ; 0057147c
    MOV EDX,EAX                         ; 0057147f
    CMP EAX,0x64                        ; 00571481
    JC 0x005714db                       ; 00571484
        ;   XREF to: 005714db (CONDITIONAL_JUMP)  ; LAB_005714db
    JA 0x005714e7                       ; 00571486
        ;   XREF to: 005714e7 (CONDITIONAL_JUMP)  ; LAB_005714e7
    MOV EDI,dword ptr [0x0264bf7c]      ; 00571488 | DAT_0264bf7c
    PUSH EDI                            ; 0057148e
    PUSH EBX                            ; 0057148f
    CALL FUN_00571500                   ; 00571490
        ;   XREF to: 00571500 (UNCONDITIONAL_CALL)  ; undefined FUN_00571500()
    MOV EDX,dword ptr [EBX + 0x25644]   ; 00571495
    ADD ESP,0x8                         ; 0057149b
    TEST EDX,EDX                        ; 0057149e
    SETZ AL                             ; 005714a0
        ;   Label: LAB_005714a0
    AND EAX,0xff                        ; 005714a3
    MOV dword ptr [EBX + 0x25644],EAX   ; 005714a8
    FLD float ptr [EBP + 0x18]          ; 005714ae
        ;   Label: LAB_005714ae
    FLDZ                                ; 005714b1
    FCOMPP                              ; 005714b3
    FNSTSW AX                           ; 005714b5
    SAHF                                ; 005714b7
    JC 0x00571472                       ; 005714b8
        ;   XREF to: 00571472 (CONDITIONAL_JUMP)  ; LAB_00571472
    MOV ESP,EBP                         ; 005714ba
    POP EBP                             ; 005714bc
    POP EDI                             ; 005714bd
    POP ESI                             ; 005714be
    POP EBX                             ; 005714bf
    RET                                 ; 005714c0
    MOV EDX,dword ptr [0x0264bf80]      ; 005714c1 | DAT_0264bf80
        ;   Label: LAB_005714c1
    PUSH EDX                            ; 005714c7
    PUSH EBX                            ; 005714c8
    CALL FUN_00571500                   ; 005714c9
        ;   XREF to: 00571500 (UNCONDITIONAL_CALL)  ; undefined FUN_00571500()
    MOV ECX,dword ptr [EBX + 0x25644]   ; 005714ce
    ADD ESP,0x8                         ; 005714d4
    TEST ECX,ECX                        ; 005714d7
    JMP 0x005714a0                      ; 005714d9
        ;   XREF to: 005714a0 (UNCONDITIONAL_JUMP)  ; LAB_005714a0
    PUSH EDX                            ; 005714db
        ;   Label: LAB_005714db
    PUSH EBX                            ; 005714dc
    CALL FUN_0042aa00                   ; 005714dd
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; undefined FUN_0042aa00()
    ADD ESP,0x8                         ; 005714e2
    JMP 0x005714ae                      ; 005714e5
        ;   XREF to: 005714ae (UNCONDITIONAL_JUMP)  ; LAB_005714ae
    CMP EAX,0x65                        ; 005714e7
        ;   Label: LAB_005714e7
    JZ 0x005714c1                       ; 005714ea
        ;   XREF to: 005714c1 (CONDITIONAL_JUMP)  ; LAB_005714c1
    PUSH EDX                            ; 005714ec
    PUSH EBX                            ; 005714ed
    CALL FUN_0042aa00                   ; 005714ee
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; undefined FUN_0042aa00()
    ADD ESP,0x8                         ; 005714f3
    JMP 0x005714ae                      ; 005714f6
        ;   XREF to: 005714ae (UNCONDITIONAL_JUMP)  ; LAB_005714ae

