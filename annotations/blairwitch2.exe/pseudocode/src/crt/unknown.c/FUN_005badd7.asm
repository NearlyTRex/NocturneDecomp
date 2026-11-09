; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005badd7(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005badc7 at 005badcb
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005bcdfc_0061f2a4 = 005bcdfc
;
; Called Functions:
;   crt_unknown.c_FUN_005bae03
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005badd7
        ;   Label: crt_unknown.c_FUN_005badd7
    CMP EAX,ESP                         ; 005badd8
    JNC 0x005badf6                      ; 005badda
        ;   XREF to: 005badf6 (CONDITIONAL_JUMP)
    SUB EAX,ESP                         ; 005baddc
    NEG EAX                             ; 005badde
    PUSH ESI                            ; 005bade0
    PUSH EAX                            ; 005bade1
    CALL dword ptr [0x0061f2a4]         ; 005bade2 | PTR_crt_unknown.c_FUN_005bcdfc_0061f2a4
    MOV ESI,EAX                         ; 005bade8
    POP EAX                             ; 005badea
    CMP EAX,dword ptr [ESI]             ; 005badeb
    POP ESI                             ; 005baded
    JBE 0x005badf6                      ; 005badee
        ;   XREF to: 005badf6 (CONDITIONAL_JUMP)
    CALL crt_unknown.c_FUN_005bae03     ; 005badf0
        ;   XREF to: 005bae03 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bae03()
    RET                                 ; 005badf5

