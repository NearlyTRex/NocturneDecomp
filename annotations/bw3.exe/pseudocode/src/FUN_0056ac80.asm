; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056ac80(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0046e690 at 0046e69a
;
; Referenced Globals:
;   undefined4 DAT_02cfd0d0
;
; Called Functions:
;   FUN_0056a690
;   FUN_0056aa10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056ac80
        ;   Label: FUN_0056ac80
    MOV EDX,dword ptr [ESP + 0x8]       ; 0056ac81
    PUSH EDX                            ; 0056ac85
    CALL FUN_0056aa10                   ; 0056ac86
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)  ; undefined FUN_0056aa10()
    ADD ESP,0x4                         ; 0056ac8b
    MOV ECX,dword ptr [ESP + 0x8]       ; 0056ac8e
    PUSH ECX                            ; 0056ac92
    MOV EBX,dword ptr [0x02cfd0d0]      ; 0056ac93 | DAT_02cfd0d0
    PUSH EBX                            ; 0056ac99
    CALL FUN_0056a690                   ; 0056ac9a
        ;   XREF to: 0056a690 (UNCONDITIONAL_CALL)  ; undefined FUN_0056a690()
    ADD ESP,0x8                         ; 0056ac9f
    POP EBX                             ; 0056aca2
    RET                                 ; 0056aca3

