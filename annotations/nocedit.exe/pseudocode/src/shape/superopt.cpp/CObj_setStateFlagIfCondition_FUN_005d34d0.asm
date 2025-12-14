; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_superopt.cpp_CObj_setStateFlagIfCondition_FUN_005d34d0(CObj * this_ptr, uint flag_to_set, uint condition_mask)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flag_to_set
; uint             Stack[0xc]:4   condition_mask
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d34d0
        ;   Label: shape_superopt.cpp_CObj_setStateFlagIfCondition_FUN_005d34d0
    PUSH ESI                            ; 005d34d1
    PUSH EDI                            ; 005d34d2
    PUSH EBP                            ; 005d34d3
    MOV EDI,dword ptr [ESP + 0x18]      ; 005d34d4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005d34d8
    MOV EDX,dword ptr [ESP + 0x14]      ; 005d34dc
    MOV EBX,dword ptr [ESP + 0x14]      ; 005d34e0
    XOR EAX,EAX                         ; 005d34e4
    MOV ECX,dword ptr [EDX]             ; 005d34e6
    MOV EBX,dword ptr [EBX + 0x4]       ; 005d34e8
    TEST ECX,ECX                        ; 005d34eb
    JBE 0x005d3516                      ; 005d34ed
        ;   XREF to: 005d3516 (CONDITIONAL_JUMP)  ; LAB_005d3516
    MOV EDX,dword ptr [EBX + 0x34]      ; 005d34ef
        ;   Label: LAB_005d34ef
    AND EDX,ESI                         ; 005d34f2
    CMP EDX,ESI                         ; 005d34f4
    JZ 0x005d3568                       ; 005d34f6
        ;   XREF to: 005d3568 (CONDITIONAL_JUMP)  ; LAB_005d3568
    MOV EDX,EDI                         ; 005d34fc
    MOV ECX,dword ptr [EBX + 0x34]      ; 005d34fe
    NOT EDX                             ; 005d3501
    AND ECX,EDX                         ; 005d3503
    MOV dword ptr [EBX + 0x34],ECX      ; 005d3505
    MOV EDX,dword ptr [ESP + 0x14]      ; 005d3508
        ;   Label: LAB_005d3508
    INC EAX                             ; 005d350c
    MOV EBP,dword ptr [EDX]             ; 005d350d
    ADD EBX,0x38                        ; 005d350f
    CMP EAX,EBP                         ; 005d3512
    JC 0x005d34ef                       ; 005d3514
        ;   XREF to: 005d34ef (CONDITIONAL_JUMP)  ; LAB_005d34ef
    MOV EAX,dword ptr [ESP + 0x14]      ; 005d3516
        ;   Label: LAB_005d3516
    MOV EBX,dword ptr [ESP + 0x14]      ; 005d351a
    XOR EBP,EBP                         ; 005d351e
    MOV EDX,dword ptr [EAX + 0x8]       ; 005d3520
    MOV EBX,dword ptr [EBX + 0xc]       ; 005d3523
    TEST EDX,EDX                        ; 005d3526
    JBE 0x005d354f                      ; 005d3528
        ;   XREF to: 005d354f (CONDITIONAL_JUMP)  ; LAB_005d354f
    MOV EAX,dword ptr [EBX + 0x60]      ; 005d352a
        ;   Label: LAB_005d352a
    AND EAX,ESI                         ; 005d352d
    CMP EAX,ESI                         ; 005d352f
    JNZ 0x005d356d                      ; 005d3531
        ;   XREF to: 005d356d (CONDITIONAL_JUMP)  ; LAB_005d356d
    PUSH -0x1                           ; 005d3533
    PUSH EDI                            ; 005d3535
    MOV EAX,dword ptr [EBX + 0x64]      ; 005d3536
        ;   Label: LAB_005d3536
    PUSH EBX                            ; 005d3539
    CALL dword ptr [EAX + 0x20]         ; 005d353a
    ADD ESP,0xc                         ; 005d353d
    MOV EAX,dword ptr [ESP + 0x14]      ; 005d3540
    INC EBP                             ; 005d3544
    MOV EDX,dword ptr [EAX + 0x8]       ; 005d3545
    ADD EBX,0x68                        ; 005d3548
    CMP EBP,EDX                         ; 005d354b
    JC 0x005d352a                       ; 005d354d
        ;   XREF to: 005d352a (CONDITIONAL_JUMP)  ; LAB_005d352a
    MOV EAX,dword ptr [ESP + 0x14]      ; 005d354f
        ;   Label: LAB_005d354f
    MOV EAX,dword ptr [EAX + 0x10]      ; 005d3553
    AND EAX,ESI                         ; 005d3556
    CMP EAX,ESI                         ; 005d3558
    JNZ 0x005d3576                      ; 005d355a
        ;   XREF to: 005d3576 (CONDITIONAL_JUMP)  ; LAB_005d3576
    MOV EAX,dword ptr [ESP + 0x14]      ; 005d355c
    OR dword ptr [EAX + 0x10],EDI       ; 005d3560
    POP EBP                             ; 005d3563
    POP EDI                             ; 005d3564
    POP ESI                             ; 005d3565
    POP EBX                             ; 005d3566
    RET                                 ; 005d3567
    OR dword ptr [EBX + 0x34],EDI       ; 005d3568
        ;   Label: LAB_005d3568
    JMP 0x005d3508                      ; 005d356b
        ;   XREF to: 005d3508 (UNCONDITIONAL_JUMP)  ; LAB_005d3508
    MOV EDX,EDI                         ; 005d356d
        ;   Label: LAB_005d356d
    NOT EDX                             ; 005d356f
    PUSH EDX                            ; 005d3571
    PUSH 0x0                            ; 005d3572
    JMP 0x005d3536                      ; 005d3574
        ;   XREF to: 005d3536 (UNCONDITIONAL_JUMP)  ; LAB_005d3536
    MOV EAX,dword ptr [ESP + 0x14]      ; 005d3576
        ;   Label: LAB_005d3576
    NOT EDI                             ; 005d357a
    AND dword ptr [EAX + 0x10],EDI      ; 005d357c
    POP EBP                             ; 005d357f
    POP EDI                             ; 005d3580
    POP ESI                             ; 005d3581
    POP EBX                             ; 005d3582
    RET                                 ; 005d3583

