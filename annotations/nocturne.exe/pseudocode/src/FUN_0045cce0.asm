; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045cce0(void)
;
;
; Called Functions:
;   FUN_0045cc70
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0045cce0
        ;   Label: FUN_0045cce0
    MOV EAX,dword ptr [EDX + 0x4]       ; 0045cce4
    DEC EAX                             ; 0045cce7
    PUSH EAX                            ; 0045cce8
    MOV EAX,dword ptr [EDX]             ; 0045cce9
    DEC EAX                             ; 0045cceb
    PUSH EAX                            ; 0045ccec
    PUSH 0x0                            ; 0045cced
    PUSH 0x0                            ; 0045ccef
    PUSH EDX                            ; 0045ccf1
    CALL FUN_0045cc70                   ; 0045ccf2
        ;   XREF to: 0045cc70 (UNCONDITIONAL_CALL)  ; undefined FUN_0045cc70()
    ADD ESP,0x14                        ; 0045ccf7
    RET                                 ; 0045ccfa

