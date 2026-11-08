; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004945b0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d539a
;   undefined4 DAT_00616494
;   undefined4 DAT_01c2a370
;   undefined4 DAT_01cb6900
;   undefined4 DAT_01cb6b84
;
; Called Functions:
;   FUN_004bd460
;   FUN_00510ef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004945b0
        ;   Label: FUN_004945b0
    PUSH EDI                            ; 004945b1
    PUSH EBP                            ; 004945b2
    SUB ESP,0x8                         ; 004945b3
    MOV EBX,dword ptr [ESP + 0x18]      ; 004945b6
    CMP dword ptr [EBX + 0x48],0x0      ; 004945ba
    JNZ 0x00494629                      ; 004945be
        ;   XREF to: 00494629 (CONDITIONAL_JUMP)  ; LAB_00494629
    MOV dword ptr [EBX + 0x48],0x1      ; 004945c0
    MOV EAX,[0x00616494]                ; 004945c7 | DAT_00616494
        ;   Label: LAB_004945c7
    MOV EAX,dword ptr [EAX + 0x284]     ; 004945cc | DAT_01cb6b84
    MOV EDX,dword ptr [0x01c2a370]      ; 004945d2 | DAT_01c2a370
    MOV dword ptr [ESP],EAX             ; 004945d8
    MOV EAX,dword ptr [EBX + 0x50]      ; 004945db
    IMUL EDX                            ; 004945de
    SHRD EAX,EDX,0x10                   ; 004945e0
    MOV dword ptr [ESP + 0x4],EAX       ; 004945e4
    FILD dword ptr [ESP + 0x4]          ; 004945e8
    FMUL double ptr [0x005d539a]        ; 004945ec | DAT_005d539a
    SUB ESP,0x4                         ; 004945f2
    MOV EDI,dword ptr [0x00616494]      ; 004945f5 | DAT_00616494
    FSTP float ptr [ESP]                ; 004945fb
    PUSH EDI                            ; 004945fe | DAT_01cb6900
    CALL FUN_004bd460                   ; 004945ff
        ;   XREF to: 004bd460 (UNCONDITIONAL_CALL)  ; undefined FUN_004bd460()
    ADD ESP,0x8                         ; 00494604
    PUSH EBX                            ; 00494607
    CALL FUN_00510ef0                   ; 00494608
        ;   XREF to: 00510ef0 (UNCONDITIONAL_CALL)  ; undefined FUN_00510ef0()
    ADD ESP,0x4                         ; 0049460d
    MOV EBP,dword ptr [0x00616494]      ; 00494610 | DAT_00616494
    PUSH dword ptr [ESP]                ; 00494616
    PUSH EBP                            ; 00494619 | DAT_01cb6900
    CALL FUN_004bd460                   ; 0049461a
        ;   XREF to: 004bd460 (UNCONDITIONAL_CALL)  ; undefined FUN_004bd460()
    ADD ESP,0x8                         ; 0049461f
    ADD ESP,0x8                         ; 00494622
    POP EBP                             ; 00494625
    POP EDI                             ; 00494626
    POP EBX                             ; 00494627
    RET                                 ; 00494628
    MOV EAX,[0x01c2a370]                ; 00494629 | DAT_01c2a370
        ;   Label: LAB_00494629
    MOV EDX,dword ptr [EBX + 0x50]      ; 0049462e
    MOV ECX,dword ptr [EBX + 0x44]      ; 00494631
    IMUL EDX                            ; 00494634
    SHRD EAX,EDX,0x10                   ; 00494636
    MOV EDX,EAX                         ; 0049463a
    MOV EAX,ECX                         ; 0049463c
    IMUL EDX                            ; 0049463e
    SHRD EAX,EDX,0x10                   ; 00494640
    MOV ECX,dword ptr [EBX + 0x40]      ; 00494644
    SUB ECX,EAX                         ; 00494647
    MOV dword ptr [EBX + 0x40],ECX      ; 00494649
    TEST ECX,ECX                        ; 0049464c
    JGE 0x004945c7                      ; 0049464e
        ;   XREF to: 004945c7 (CONDITIONAL_JUMP)  ; LAB_004945c7
    MOV dword ptr [EBX + 0x24],0x0      ; 00494654
    MOV dword ptr [EBX + 0x40],0x0      ; 0049465b
    JMP 0x004945c7                      ; 00494662
        ;   XREF to: 004945c7 (UNCONDITIONAL_JUMP)  ; LAB_004945c7

