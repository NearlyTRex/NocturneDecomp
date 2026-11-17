; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c68d0(void)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005c51be at 005c5dc4
;   crt_unknown.c_ldexp_FUN_005c5581 at 005c5dd6
;
; Referenced Globals:
;   void* g_PTR_0061f29b = 005bcce4
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005c68d0
        ;   Label: crt_unknown.c_FUN_005c68d0
    CALL dword ptr [0x0061f29b]         ; 005c68d1 | g_PTR_0061f29b
    ADD ESP,0x4                         ; 005c68d7
    RET                                 ; 005c68da

