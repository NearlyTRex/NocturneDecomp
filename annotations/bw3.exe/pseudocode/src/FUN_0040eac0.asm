; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040eac0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408600
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0040eac0
        ;   Label: FUN_0040eac0
    PUSH EDX                            ; 0040eac4
    CALL FUN_00408600                   ; 0040eac5
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; undefined FUN_00408600()
    MOV dword ptr [EAX + 0x154],0x5db674 ; 0040eaca
    MOV dword ptr [EAX + 0x160],0x40a00000 ; 0040ead4
    MOV byte ptr [EAX + 0x168],0x0      ; 0040eade
    MOV dword ptr [EAX + 0x164],0x1     ; 0040eae5
    ADD ESP,0x4                         ; 0040eaef
    MOV EDX,dword ptr [EAX + 0x160]     ; 0040eaf2
    MOV dword ptr [EAX + 0x15c],EDX     ; 0040eaf8
    MOV EDX,dword ptr [EAX + 0x15c]     ; 0040eafe
    MOV dword ptr [EAX + 0x158],EDX     ; 0040eb04
    RET                                 ; 0040eb0a

