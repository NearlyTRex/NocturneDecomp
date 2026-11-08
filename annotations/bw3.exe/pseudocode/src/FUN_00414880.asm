; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00414880(int param_1,byte param_2)
;
;
; Referenced Globals:
;   void* PTR_FUN_005dbfe4 = 00414f60
;   undefined4 DAT_005dc100
;
; Called Functions:
;   FUN_00408770
;   FUN_00414910
;   FUN_00416dc0
;   FUN_0041adf0
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414880
        ;   Label: FUN_00414880
    MOV EBX,dword ptr [ESP + 0x8]       ; 00414881
    TEST byte ptr [ESP + 0xc],0x4       ; 00414885
    JNZ 0x004148e4                      ; 0041488a
        ;   XREF to: 004148e4 (CONDITIONAL_JUMP)  ; LAB_004148e4
    PUSH 0x0                            ; 0041488c
    PUSH 0x0                            ; 0041488e
    PUSH EBX                            ; 00414890
    MOV dword ptr [EBX + 0x154],0x5dbfe4 ; 00414891 | PTR_FUN_005dbfe4
    CALL FUN_00414910                   ; 0041489b
        ;   XREF to: 00414910 (UNCONDITIONAL_CALL)  ; undefined FUN_00414910()
    ADD ESP,0xc                         ; 004148a0
    PUSH 0x0                            ; 004148a3
    ADD EBX,0xcd0                       ; 004148a5
    PUSH EBX                            ; 004148ab
    CALL FUN_0041adf0                   ; 004148ac
        ;   XREF to: 0041adf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041adf0()
    ADD ESP,0x8                         ; 004148b1
    PUSH 0x0                            ; 004148b4
    SUB EAX,0x580                       ; 004148b6
    PUSH EAX                            ; 004148bb
    CALL FUN_00416dc0                   ; 004148bc
        ;   XREF to: 00416dc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00416dc0()
    ADD ESP,0x8                         ; 004148c1
    PUSH 0x1                            ; 004148c4
    LEA EBX,[EAX + 0xfffff8b0]          ; 004148c6
    PUSH EBX                            ; 004148cc
    CALL FUN_00408770                   ; 004148cd
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 004148d2
    MOV DL,byte ptr [ESP + 0xc]         ; 004148d5
    MOV EBX,EAX                         ; 004148d9
    TEST DL,0x2                         ; 004148db
    JNZ 0x004148ff                      ; 004148de
        ;   XREF to: 004148ff (CONDITIONAL_JUMP)  ; LAB_004148ff
    MOV EAX,EBX                         ; 004148e0
    POP EBX                             ; 004148e2
    RET                                 ; 004148e3
    PUSH 0x5dc100                       ; 004148e4 | DAT_005dc100
        ;   Label: LAB_004148e4
    PUSH EBX                            ; 004148e9
    CALL FUN_005a308f                   ; 004148ea
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 004148ef
    PUSH EAX                            ; 004148f2
    CALL FUN_005a30b6                   ; 004148f3
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 004148f8
    MOV EAX,EBX                         ; 004148fb
    POP EBX                             ; 004148fd
    RET                                 ; 004148fe
    PUSH EAX                            ; 004148ff
        ;   Label: LAB_004148ff
    CALL FUN_005a30c4                   ; 00414900
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 00414905
    MOV EAX,EBX                         ; 00414908
    POP EBX                             ; 0041490a
    RET                                 ; 0041490b

