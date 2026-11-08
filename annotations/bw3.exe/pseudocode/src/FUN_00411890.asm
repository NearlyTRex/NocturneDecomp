; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00411890(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005dbde0
;
; Called Functions:
;   FUN_0057aed0
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411890
        ;   Label: FUN_00411890
    MOV EBX,dword ptr [ESP + 0x8]       ; 00411891
    TEST byte ptr [ESP + 0xc],0x4       ; 00411895
    JNZ 0x004118b6                      ; 0041189a
        ;   XREF to: 004118b6 (CONDITIONAL_JUMP)  ; LAB_004118b6
    PUSH 0x1                            ; 0041189c
    PUSH EBX                            ; 0041189e
    CALL FUN_0057aed0                   ; 0041189f
        ;   XREF to: 0057aed0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057aed0()
    ADD ESP,0x8                         ; 004118a4
    MOV DL,byte ptr [ESP + 0xc]         ; 004118a7
    MOV EBX,EAX                         ; 004118ab
    TEST DL,0x2                         ; 004118ad
    JNZ 0x004118d1                      ; 004118b0
        ;   XREF to: 004118d1 (CONDITIONAL_JUMP)  ; LAB_004118d1
    MOV EAX,EBX                         ; 004118b2
    POP EBX                             ; 004118b4
    RET                                 ; 004118b5
    PUSH 0x5dbde0                       ; 004118b6 | DAT_005dbde0
        ;   Label: LAB_004118b6
    PUSH EBX                            ; 004118bb
    CALL FUN_005a308f                   ; 004118bc
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 004118c1
    PUSH EAX                            ; 004118c4
    CALL FUN_005a30b6                   ; 004118c5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 004118ca
    MOV EAX,EBX                         ; 004118cd
    POP EBX                             ; 004118cf
    RET                                 ; 004118d0
    PUSH EAX                            ; 004118d1
        ;   Label: LAB_004118d1
    CALL FUN_005a30c4                   ; 004118d2
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 004118d7
    MOV EAX,EBX                         ; 004118da
    POP EBX                             ; 004118dc
    RET                                 ; 004118dd

