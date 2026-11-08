; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057a4b0(void)
;
;
; XREF[4]:
;   FUN_004b6f30 at 004b79ec
;   FUN_004bec20 at 004bedf8
;   FUN_00566260 at 0056631a
;   FUN_0057a8a0 at 0057a93e
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_005d762e
;   TerminatedCString s_closeScreenDevice_Unable_005d7645
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fba20
;   undefined4 DAT_0060b010
;   undefined4 DAT_0072ffac
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c5faf0
;   undefined4 DAT_01c60dac
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02d0bce8
;   undefined4 DAT_02d0bcf4
;   ... and 1 more
;
; Called Functions:
;   FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0057a4b0
        ;   Label: FUN_0057a4b0
    CMP dword ptr [0x02d0bcfc],0x0      ; 0057a4b1 | DAT_02d0bcfc
    JNZ 0x0057a57a                      ; 0057a4b8
        ;   XREF to: 0057a57a (CONDITIONAL_JUMP)  ; LAB_0057a57a
    MOV ECX,dword ptr [0x01c6cee8]      ; 0057a4be | DAT_01c6cee8
    TEST ECX,ECX                        ; 0057a4c4
    JNZ 0x0057a57c                      ; 0057a4c6
        ;   XREF to: 0057a57c (CONDITIONAL_JUMP)  ; LAB_0057a57c
    PUSH EDI                            ; 0057a4cc
    PUSH ESI                            ; 0057a4cd
    CMP dword ptr [0x005fba1c],0x0      ; 0057a4ce | DAT_005fba1c
    JLE 0x0057a537                      ; 0057a4d5
        ;   XREF to: 0057a537 (CONDITIONAL_JUMP)  ; LAB_0057a537
    PUSH EBX                            ; 0057a4d7
    MOV EAX,[0x005fba20]                ; 0057a4d8 | DAT_005fba20
    MOV EDX,EAX                         ; 0057a4dd
    SAR EDX,0x1f                        ; 0057a4df
    SHL EDX,0x3                         ; 0057a4e2
    SBB EAX,EDX                         ; 0057a4e5
    SAR EAX,0x3                         ; 0057a4e7
    MOV EDI,EAX                         ; 0057a4ea
    IMUL EDX,dword ptr [0x005fba18],0x0 ; 0057a4ec | DAT_005fba18
    MOV EBP,dword ptr [0x005fba18]      ; 0057a4f3 | DAT_005fba18
    SHL EBP,0x2                         ; 0057a4f9
    XOR EAX,EAX                         ; 0057a4fc
    MOV ESI,dword ptr [0x005fba18]      ; 0057a4fe | DAT_005fba18
        ;   Label: LAB_0057a4fe
    IMUL ESI,ECX                        ; 0057a504
    IMUL ESI,EDI                        ; 0057a507
    MOV EBX,dword ptr [0x0060b010]      ; 0057a50a | DAT_0060b010
    ADD EBX,ESI                         ; 0057a510
    MOV dword ptr [EAX + 0x1c5faec],EBX ; 0057a512 | DAT_01c5faec | DAT_01c5faf0
    MOV EBX,dword ptr [0x0072ffac]      ; 0057a518 | DAT_0072ffac
    ADD EAX,0x4                         ; 0057a51e
    ADD EBX,EDX                         ; 0057a521
    INC ECX                             ; 0057a523
    MOV dword ptr [EAX + 0x1c60da8],EBX ; 0057a524 | DAT_01c60dac
    MOV EBX,dword ptr [0x005fba1c]      ; 0057a52a | DAT_005fba1c
    ADD EDX,EBP                         ; 0057a530
    CMP ECX,EBX                         ; 0057a532
    JL 0x0057a4fe                       ; 0057a534
        ;   XREF to: 0057a4fe (CONDITIONAL_JUMP)  ; LAB_0057a4fe
    POP EBX                             ; 0057a536
    PUSH 0x0                            ; 0057a537
        ;   Label: LAB_0057a537
    MOV EAX,[0x02d0bce8]                ; 0057a539 | DAT_02d0bce8
    PUSH EAX                            ; 0057a53e
    MOV EDX,dword ptr [EAX]             ; 0057a53f
    CALL dword ptr [EDX + 0x80]         ; 0057a541
    TEST EAX,EAX                        ; 0057a547
    JZ 0x0057a56e                       ; 0057a549
        ;   XREF to: 0057a56e (CONDITIONAL_JUMP)  ; LAB_0057a56e
    MOV ESI,0x5d762e                    ; 0057a54b | = "..\\wincore\\wddvmem.cpp"
    MOV EDI,0x28f                       ; 0057a550
    PUSH 0x5d7645                       ; 0057a555 | = "closeScreenDevice - Unable to unlock"
    MOV dword ptr [0x01d71de0],ESI      ; 0057a55a | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0057a560 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0057a566
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0057a56b
    MOV dword ptr [0x02d0bcf4],0x1      ; 0057a56e | DAT_02d0bcf4
        ;   Label: LAB_0057a56e
    POP ESI                             ; 0057a578
    POP EDI                             ; 0057a579
    POP EBP                             ; 0057a57a
        ;   Label: LAB_0057a57a
    RET                                 ; 0057a57b
    MOV dword ptr [0x02d0bcf4],0x1      ; 0057a57c | DAT_02d0bcf4
        ;   Label: LAB_0057a57c
    POP EBP                             ; 0057a586
    RET                                 ; 0057a587

