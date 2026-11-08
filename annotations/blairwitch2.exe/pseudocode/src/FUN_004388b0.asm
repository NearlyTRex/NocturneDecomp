; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004388b0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f4940
;
; Called Functions:
;   FUN_00408930
;   FUN_00438a70
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004388b0
        ;   Label: FUN_004388b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004388b1
    TEST byte ptr [ESP + 0xc],0x4       ; 004388b5
    JNZ 0x004388ed                      ; 004388ba
        ;   XREF to: 004388ed (CONDITIONAL_JUMP)  ; LAB_004388ed
    PUSH 0x0                            ; 004388bc
    ADD EBX,0x46c                       ; 004388be
    PUSH EBX                            ; 004388c4
    CALL FUN_00438a70                   ; 004388c5
        ;   XREF to: 00438a70 (UNCONDITIONAL_CALL)  ; undefined FUN_00438a70()
    ADD ESP,0x8                         ; 004388ca
    PUSH 0x1                            ; 004388cd
    LEA EBX,[EAX + 0xfffffb94]          ; 004388cf
    PUSH EBX                            ; 004388d5
    CALL FUN_00408930                   ; 004388d6
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 004388db
    MOV DL,byte ptr [ESP + 0xc]         ; 004388de
    MOV EBX,EAX                         ; 004388e2
    TEST DL,0x2                         ; 004388e4
    JNZ 0x00438908                      ; 004388e7
        ;   XREF to: 00438908 (CONDITIONAL_JUMP)  ; LAB_00438908
    MOV EAX,EBX                         ; 004388e9
    POP EBX                             ; 004388eb
    RET                                 ; 004388ec
    PUSH 0x5f4940                       ; 004388ed | DAT_005f4940
        ;   Label: LAB_004388ed
    PUSH EBX                            ; 004388f2
    CALL FUN_005b7fa7                   ; 004388f3
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 004388f8
    PUSH EAX                            ; 004388fb
    CALL FUN_005b7fce                   ; 004388fc
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 00438901
    MOV EAX,EBX                         ; 00438904
    POP EBX                             ; 00438906
    RET                                 ; 00438907
    PUSH EAX                            ; 00438908
        ;   Label: LAB_00438908
    CALL FUN_005b7fdc                   ; 00438909
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0043890e
    MOV EAX,EBX                         ; 00438911
    POP EBX                             ; 00438913
    RET                                 ; 00438914

