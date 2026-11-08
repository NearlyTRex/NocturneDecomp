; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059c590(undefined1 *param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_0052e120 at 0052e493
;   FUN_0059c830 at 0059c83c
;
; Referenced Globals:
;   TerminatedCString s_d_d_d_d_005f8316
;
; Called Functions:
;   FUN_005bfb40
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059c590
        ;   Label: FUN_0059c590
    XOR EDX,EDX                         ; 0059c594
    MOV DL,byte ptr [EAX + 0x3]         ; 0059c596
    PUSH EDX                            ; 0059c599
    XOR EDX,EDX                         ; 0059c59a
    MOV DL,byte ptr [EAX + 0x2]         ; 0059c59c
    PUSH EDX                            ; 0059c59f
    XOR EDX,EDX                         ; 0059c5a0
    MOV DL,byte ptr [EAX + 0x1]         ; 0059c5a2
    PUSH EDX                            ; 0059c5a5
    MOV AL,byte ptr [EAX]               ; 0059c5a6
    AND EAX,0xff                        ; 0059c5a8
    PUSH EAX                            ; 0059c5ad
    PUSH 0x5f8316                       ; 0059c5ae | = "%d.%d.%d.%d"
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0059c5b3
    PUSH EDX                            ; 0059c5b7
    CALL FUN_005bfb40                   ; 0059c5b8
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x18                        ; 0059c5bd
    RET                                 ; 0059c5c0

