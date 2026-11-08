; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004605e0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00618170
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01d182f0
;   undefined4 DAT_01d192f8
;   undefined4 DAT_01e661b8
;
; Called Functions:
;   FUN_0045f030
;   FUN_00538020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004605e0
        ;   Label: FUN_004605e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004605e1
    MOV EAX,[0x00618170]                ; 004605e5 | DAT_00618170 | DAT_01d182f0
    CMP dword ptr [EAX + 0x1008],0x0    ; 004605ea | DAT_01d192f8
    JNZ 0x004605fc                      ; 004605f1
        ;   XREF to: 004605fc (CONDITIONAL_JUMP)  ; LAB_004605fc
    CMP dword ptr [EBX + 0x43c],0x0     ; 004605f3
    JZ 0x004605fe                       ; 004605fa
        ;   XREF to: 004605fe (CONDITIONAL_JUMP)  ; LAB_004605fe
    POP EBX                             ; 004605fc
        ;   Label: LAB_004605fc
    RET                                 ; 004605fd
    PUSH EBX                            ; 004605fe
        ;   Label: LAB_004605fe
    CALL FUN_0045f030                   ; 004605ff
        ;   XREF to: 0045f030 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f030()
    ADD ESP,0x4                         ; 00460604
    PUSH EBX                            ; 00460607
    MOV EBX,dword ptr [0x0061b5a8]      ; 00460608 | DAT_0061b5a8
    PUSH EBX                            ; 0046060e | DAT_01e661b8
    CALL FUN_00538020                   ; 0046060f
        ;   XREF to: 00538020 (UNCONDITIONAL_CALL)  ; undefined FUN_00538020()
    ADD ESP,0x8                         ; 00460614
    POP EBX                             ; 00460617
    RET                                 ; 00460618

