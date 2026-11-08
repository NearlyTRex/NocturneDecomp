; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0056aa90(int param_1)
;
;
; Called Functions:
;   FUN_0056aa10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0056aa90
        ;   Label: FUN_0056aa90
    PUSH EDX                            ; 0056aa94
    CALL FUN_0056aa10                   ; 0056aa95
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)  ; undefined FUN_0056aa10()
    ADD ESP,0x4                         ; 0056aa9a
    MOV EAX,dword ptr [ESP + 0x4]       ; 0056aa9d
    ADD EAX,0x48                        ; 0056aaa1
    RET                                 ; 0056aaa4

