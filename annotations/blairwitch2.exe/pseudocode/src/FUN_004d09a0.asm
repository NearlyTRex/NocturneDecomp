; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d09a0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f83f4
;   undefined4 DAT_005f84e0
;
; Called Functions:
;   FUN_00408930
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d09a0
        ;   Label: FUN_004d09a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d09a1
    TEST byte ptr [ESP + 0xc],0x4       ; 004d09a5
    JNZ 0x004d09d0                      ; 004d09aa
        ;   XREF to: 004d09d0 (CONDITIONAL_JUMP)  ; LAB_004d09d0
    PUSH 0x1                            ; 004d09ac
    PUSH EBX                            ; 004d09ae
    MOV dword ptr [EBX + 0x2b0],0x5f83f4 ; 004d09af | DAT_005f83f4
    CALL FUN_00408930                   ; 004d09b9
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 004d09be
    MOV DL,byte ptr [ESP + 0xc]         ; 004d09c1
    MOV EBX,EAX                         ; 004d09c5
    TEST DL,0x2                         ; 004d09c7
    JNZ 0x004d09eb                      ; 004d09ca
        ;   XREF to: 004d09eb (CONDITIONAL_JUMP)  ; LAB_004d09eb
    MOV EAX,EBX                         ; 004d09cc
    POP EBX                             ; 004d09ce
    RET                                 ; 004d09cf
    PUSH 0x5f84e0                       ; 004d09d0 | DAT_005f84e0
        ;   Label: LAB_004d09d0
    PUSH EBX                            ; 004d09d5
    CALL FUN_005b7fa7                   ; 004d09d6
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 004d09db
    PUSH EAX                            ; 004d09de
    CALL FUN_005b7fce                   ; 004d09df
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 004d09e4
    MOV EAX,EBX                         ; 004d09e7
    POP EBX                             ; 004d09e9
    RET                                 ; 004d09ea
    PUSH EAX                            ; 004d09eb
        ;   Label: LAB_004d09eb
    CALL FUN_005b7fdc                   ; 004d09ec
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 004d09f1
    MOV EAX,EBX                         ; 004d09f4
    POP EBX                             ; 004d09f6
    RET                                 ; 004d09f7

