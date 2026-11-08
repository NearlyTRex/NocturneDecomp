; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004f08a0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00602460
;
; Called Functions:
;   FUN_00408730
;   FUN_0040ee30
;   FUN_00441ca0
;   FUN_005673f0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f08a0
        ;   Label: FUN_004f08a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f08a1
    TEST byte ptr [ESP + 0xc],0x4       ; 004f08a5
    JNZ 0x004f08fd                      ; 004f08aa
        ;   XREF to: 004f08fd (CONDITIONAL_JUMP)  ; LAB_004f08fd
    PUSH 0x0                            ; 004f08ac
    ADD EBX,0x35dc                      ; 004f08ae
    PUSH EBX                            ; 004f08b4
    CALL FUN_0040ee30                   ; 004f08b5
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ee30()
    ADD ESP,0x8                         ; 004f08ba
    PUSH 0x0                            ; 004f08bd
    SUB EAX,0x93c                       ; 004f08bf
    PUSH EAX                            ; 004f08c4
    CALL FUN_00441ca0                   ; 004f08c5
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ca0()
    ADD ESP,0x8                         ; 004f08ca
    PUSH 0x0                            ; 004f08cd
    SUB EAX,0x2b48                      ; 004f08cf
    PUSH EAX                            ; 004f08d4
    CALL FUN_005673f0                   ; 004f08d5
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 004f08da
    PUSH 0x1                            ; 004f08dd
    LEA EBX,[EAX + 0xfffffea8]          ; 004f08df
    PUSH EBX                            ; 004f08e5
    CALL FUN_00408730                   ; 004f08e6
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 004f08eb
    MOV DL,byte ptr [ESP + 0xc]         ; 004f08ee
    MOV EBX,EAX                         ; 004f08f2
    TEST DL,0x2                         ; 004f08f4
    JNZ 0x004f0918                      ; 004f08f7
        ;   XREF to: 004f0918 (CONDITIONAL_JUMP)  ; LAB_004f0918
    MOV EAX,EBX                         ; 004f08f9
    POP EBX                             ; 004f08fb
    RET                                 ; 004f08fc
    PUSH 0x602460                       ; 004f08fd | DAT_00602460
        ;   Label: LAB_004f08fd
    PUSH EBX                            ; 004f0902
    CALL FUN_005c030f                   ; 004f0903
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 004f0908
    PUSH EAX                            ; 004f090b
    CALL FUN_005c0336                   ; 004f090c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 004f0911
    MOV EAX,EBX                         ; 004f0914
    POP EBX                             ; 004f0916
    RET                                 ; 004f0917
    PUSH EAX                            ; 004f0918
        ;   Label: LAB_004f0918
    CALL FUN_005c0344                   ; 004f0919
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 004f091e
    MOV EAX,EBX                         ; 004f0921
    POP EBX                             ; 004f0923
    RET                                 ; 004f0924

