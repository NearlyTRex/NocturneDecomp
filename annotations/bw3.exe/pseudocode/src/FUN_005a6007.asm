; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a6007(void)
;
;
; XREF[1]:
;   FUN_005a5ff7 at 005a5ffb
;
; Referenced Globals:
;   void* PTR_FUN_006079a0 = 005a7f3c
;
; Called Functions:
;   FUN_005a6033
;   FUN_005acde0
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005a6007
        ;   Label: FUN_005a6007
    CMP EAX,ESP                         ; 005a6008
    JNC 0x005a6026                      ; 005a600a
        ;   XREF to: 005a6026 (CONDITIONAL_JUMP)  ; LAB_005a6026
    SUB EAX,ESP                         ; 005a600c
    NEG EAX                             ; 005a600e
    PUSH ESI                            ; 005a6010
    PUSH EAX                            ; 005a6011
    CALL dword ptr [0x006079a0]         ; 005a6012 | PTR_FUN_006079a0
    MOV ESI,EAX                         ; 005a6018
    POP EAX                             ; 005a601a
    CMP EAX,dword ptr [ESI]             ; 005a601b
    POP ESI                             ; 005a601d
    JBE 0x005a6026                      ; 005a601e
        ;   XREF to: 005a6026 (CONDITIONAL_JUMP)  ; LAB_005a6026
    CALL FUN_005a6033                   ; 005a6020
        ;   XREF to: 005a6033 (UNCONDITIONAL_CALL)  ; undefined FUN_005a6033()
    RET                                 ; 005a6025
    POP EAX                             ; 005a6026
        ;   Label: LAB_005a6026
    PUSH 0x1                            ; 005a6027
    PUSH 0x607888                       ; 005a6029
    CALL FUN_005acde0                   ; 005a602e
        ;   XREF to: 005acde0 (UNCONDITIONAL_CALL)  ; undefined FUN_005acde0()

