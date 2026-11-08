; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b45e0(void)
;
;
; XREF[1]:
;   FUN_004b6f30 at 004b7340
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_01c6b5c0
;
; Called Functions:
;   FUN_004011a0
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 004b45e0
        ;   Label: FUN_004b45e0
    MOV EAX,[0x005fba18]                ; 004b45e2 | DAT_005fba18
    PUSH EDX                            ; 004b45e7
    DEC EAX                             ; 004b45e8
    PUSH EAX                            ; 004b45e9
    PUSH EDX                            ; 004b45ea
    PUSH EDX                            ; 004b45eb
    MOV dword ptr [0x01c6b5c0],EDX      ; 004b45ec | DAT_01c6b5c0
    CALL FUN_004011a0                   ; 004b45f2
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004011a0()
    ADD ESP,0x10                        ; 004b45f7
    MOV EAX,[0x005fba18]                ; 004b45fa | DAT_005fba18
    PUSH 0x1                            ; 004b45ff
    SUB EAX,0x2                         ; 004b4601
    PUSH EAX                            ; 004b4604
    PUSH 0x1                            ; 004b4605
    PUSH 0x1                            ; 004b4607
    CALL FUN_004011a0                   ; 004b4609
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004011a0()
    MOV EAX,[0x005fba1c]                ; 004b460e | DAT_005fba1c
    ADD ESP,0x10                        ; 004b4613
    DEC EAX                             ; 004b4616
    MOV EDX,dword ptr [0x005fba18]      ; 004b4617 | DAT_005fba18
    PUSH EAX                            ; 004b461d
    DEC EDX                             ; 004b461e
    PUSH EDX                            ; 004b461f
    PUSH EAX                            ; 004b4620
    PUSH 0x0                            ; 004b4621
    CALL FUN_004011a0                   ; 004b4623
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004011a0()
    MOV EAX,[0x005fba1c]                ; 004b4628 | DAT_005fba1c
    ADD ESP,0x10                        ; 004b462d
    SUB EAX,0x2                         ; 004b4630
    MOV EDX,dword ptr [0x005fba18]      ; 004b4633 | DAT_005fba18
    PUSH EAX                            ; 004b4639
    SUB EDX,0x2                         ; 004b463a
    PUSH EDX                            ; 004b463d
    PUSH EAX                            ; 004b463e
    PUSH 0x1                            ; 004b463f
    CALL FUN_004011a0                   ; 004b4641
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004011a0()
    MOV EAX,[0x005fba1c]                ; 004b4646 | DAT_005fba1c
    ADD ESP,0x10                        ; 004b464b
    SUB EAX,0x2                         ; 004b464e
    PUSH EAX                            ; 004b4651
    PUSH 0x0                            ; 004b4652
    PUSH 0x1                            ; 004b4654
    PUSH 0x0                            ; 004b4656
    CALL FUN_004011a0                   ; 004b4658
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004011a0()
    MOV EAX,[0x005fba1c]                ; 004b465d | DAT_005fba1c
    ADD ESP,0x10                        ; 004b4662
    SUB EAX,0x3                         ; 004b4665
    PUSH EAX                            ; 004b4668
    PUSH 0x1                            ; 004b4669
    PUSH 0x2                            ; 004b466b
    PUSH 0x1                            ; 004b466d
    CALL FUN_004011a0                   ; 004b466f
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004011a0()
    MOV EAX,[0x005fba1c]                ; 004b4674 | DAT_005fba1c
    ADD ESP,0x10                        ; 004b4679
    SUB EAX,0x2                         ; 004b467c
    PUSH EAX                            ; 004b467f
    MOV EAX,[0x005fba18]                ; 004b4680 | DAT_005fba18
    DEC EAX                             ; 004b4685
    PUSH EAX                            ; 004b4686
    PUSH 0x1                            ; 004b4687
    PUSH EAX                            ; 004b4689
    CALL FUN_004011a0                   ; 004b468a
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004011a0()
    MOV EAX,[0x005fba1c]                ; 004b468f | DAT_005fba1c
    ADD ESP,0x10                        ; 004b4694
    SUB EAX,0x3                         ; 004b4697
    PUSH EAX                            ; 004b469a
    MOV EAX,[0x005fba18]                ; 004b469b | DAT_005fba18
    SUB EAX,0x2                         ; 004b46a0
    PUSH EAX                            ; 004b46a3
    PUSH 0x2                            ; 004b46a4
    PUSH EAX                            ; 004b46a6
    CALL FUN_004011a0                   ; 004b46a7
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004011a0()
    ADD ESP,0x10                        ; 004b46ac
    RET                                 ; 004b46af

