; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004aa290(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_004a1d00 at 004a3a25
;   FUN_004a70d0 at 004a8d9d
;
; Called Functions:
;   FUN_004aa3b0
;   FUN_004aa400
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aa290
        ;   Label: FUN_004aa290
    MOV EBX,dword ptr [ESP + 0x8]       ; 004aa291
    PUSH EBX                            ; 004aa295
    CALL FUN_004aa400                   ; 004aa296
        ;   XREF to: 004aa400 (UNCONDITIONAL_CALL)  ; undefined FUN_004aa400()
    ADD ESP,0x4                         ; 004aa29b
    MOV EDX,dword ptr [ESP + 0xc]       ; 004aa29e
    PUSH EDX                            ; 004aa2a2
    PUSH EBX                            ; 004aa2a3
    CALL FUN_004aa3b0                   ; 004aa2a4
        ;   XREF to: 004aa3b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004aa3b0()
    ADD ESP,0x8                         ; 004aa2a9
    TEST EAX,EAX                        ; 004aa2ac
    JL 0x004aa2c3                       ; 004aa2ae
        ;   XREF to: 004aa2c3 (CONDITIONAL_JUMP)  ; LAB_004aa2c3
    MOV EDX,EAX                         ; 004aa2b0
    SHL EAX,0x3                         ; 004aa2b2
    ADD EAX,EDX                         ; 004aa2b5
    SHL EAX,0x5                         ; 004aa2b7
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x3acc] ; 004aa2ba
    POP EBX                             ; 004aa2c1
    RET                                 ; 004aa2c2
    XOR EAX,EAX                         ; 004aa2c3
        ;   Label: LAB_004aa2c3
    POP EBX                             ; 004aa2c5
    RET                                 ; 004aa2c6

