; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004c1240(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f7750
;
; Called Functions:
;   FUN_00408930
;   FUN_0040f2b0
;   FUN_00544d50
;   FUN_0059df70
;   FUN_005b1480
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c1240
        ;   Label: FUN_004c1240
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c1241
    TEST byte ptr [ESP + 0xc],0x4       ; 004c1245
    JNZ 0x004c12ad                      ; 004c124a
        ;   XREF to: 004c12ad (CONDITIONAL_JUMP)  ; LAB_004c12ad
    PUSH 0x0                            ; 004c124c
    ADD EBX,0x3a20                      ; 004c124e
    PUSH EBX                            ; 004c1254
    CALL FUN_0040f2b0                   ; 004c1255
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2b0()
    ADD ESP,0x8                         ; 004c125a
    PUSH 0x0                            ; 004c125d
    SUB EAX,0x9c8                       ; 004c125f
    PUSH EAX                            ; 004c1264
    CALL FUN_0059df70                   ; 004c1265
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059df70()
    ADD ESP,0x8                         ; 004c126a
    PUSH 0x0                            ; 004c126d
    SUB EAX,0x34c                       ; 004c126f
    PUSH EAX                            ; 004c1274
    CALL FUN_005b1480                   ; 004c1275
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1480()
    ADD ESP,0x8                         ; 004c127a
    PUSH 0x0                            ; 004c127d
    SUB EAX,0x2a58                      ; 004c127f
    PUSH EAX                            ; 004c1284
    CALL FUN_00544d50                   ; 004c1285
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 004c128a
    PUSH 0x1                            ; 004c128d
    LEA EBX,[EAX + 0xfffffd4c]          ; 004c128f
    PUSH EBX                            ; 004c1295
    CALL FUN_00408930                   ; 004c1296
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 004c129b
    MOV DL,byte ptr [ESP + 0xc]         ; 004c129e
    MOV EBX,EAX                         ; 004c12a2
    TEST DL,0x2                         ; 004c12a4
    JNZ 0x004c12c8                      ; 004c12a7
        ;   XREF to: 004c12c8 (CONDITIONAL_JUMP)  ; LAB_004c12c8
    MOV EAX,EBX                         ; 004c12a9
    POP EBX                             ; 004c12ab
    RET                                 ; 004c12ac
    PUSH 0x5f7750                       ; 004c12ad | DAT_005f7750
        ;   Label: LAB_004c12ad
    PUSH EBX                            ; 004c12b2
    CALL FUN_005b7fa7                   ; 004c12b3
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 004c12b8
    PUSH EAX                            ; 004c12bb
    CALL FUN_005b7fce                   ; 004c12bc
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 004c12c1
    MOV EAX,EBX                         ; 004c12c4
    POP EBX                             ; 004c12c6
    RET                                 ; 004c12c7
    PUSH EAX                            ; 004c12c8
        ;   Label: LAB_004c12c8
    CALL FUN_005b7fdc                   ; 004c12c9
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 004c12ce
    MOV EAX,EBX                         ; 004c12d1
    POP EBX                             ; 004c12d3
    RET                                 ; 004c12d4

