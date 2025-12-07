; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_startup.c_staticInit_FUN_0060aef4(void)
;
;
; Called Functions:
;   crt_startup.c_FUN_0060d230
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 0060aef4
        ;   Label: crt_startup.c_staticInit_FUN_0060aef4
    CALL crt_startup.c_FUN_0060d230     ; 0060aef6 | int crt_startup.c_FUN_0060d230(UINT cp)
        ;   XREF to: 0060d230 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0060aefb
    RET                                 ; 0060aefe

