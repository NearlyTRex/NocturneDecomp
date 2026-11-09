; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005a6007(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005a5ff7 at 005a5ffb
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005a7f3c_006079a0 = 005a7f3c
;
; Called Functions:
;   crt_unknown.c_FUN_005a6033
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005a6007
        ;   Label: crt_unknown.c_FUN_005a6007
    CMP EAX,ESP                         ; 005a6008
    JNC 0x005a6026                      ; 005a600a
        ;   XREF to: 005a6026 (CONDITIONAL_JUMP)
    SUB EAX,ESP                         ; 005a600c
    NEG EAX                             ; 005a600e
    PUSH ESI                            ; 005a6010
    PUSH EAX                            ; 005a6011
    CALL dword ptr [0x006079a0]         ; 005a6012 | PTR_crt_unknown.c_FUN_005a7f3c_006079a0
    MOV ESI,EAX                         ; 005a6018
    POP EAX                             ; 005a601a
    CMP EAX,dword ptr [ESI]             ; 005a601b
    POP ESI                             ; 005a601d
    JBE 0x005a6026                      ; 005a601e
        ;   XREF to: 005a6026 (CONDITIONAL_JUMP)
    CALL crt_unknown.c_FUN_005a6033     ; 005a6020
        ;   XREF to: 005a6033 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a6033()
    RET                                 ; 005a6025

