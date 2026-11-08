; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b6ea0(int param_1)
;
;
; XREF[1]:
;   FUN_005b6e80 at 005b6e85
;
; Called Functions:
;   FUN_005b6030
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005b6ea0
        ;   Label: FUN_005b6ea0
    PUSH EDX                            ; 005b6ea4
    CALL FUN_005b6030                   ; 005b6ea5
        ;   XREF to: 005b6030 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6030()
    ADD ESP,0x4                         ; 005b6eaa
    MOV EAX,dword ptr [ESP + 0x4]       ; 005b6ead
    ADD EAX,0x608                       ; 005b6eb1
    PUSH EAX                            ; 005b6eb6
    CALL FUN_005b6030                   ; 005b6eb7
        ;   XREF to: 005b6030 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6030()
    ADD ESP,0x4                         ; 005b6ebc
    RET                                 ; 005b6ebf

