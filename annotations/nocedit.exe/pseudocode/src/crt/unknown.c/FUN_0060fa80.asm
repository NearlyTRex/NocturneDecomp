; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void crt_unknown_c_FUN_0060fa80(void)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_0060eb4b at 0060eb50
;   crt_unknown.c_FUN_0060eb57 at 0060eb62
;
; Referenced Globals:
;   void* PTR_FUN_0068502b = 00604824
;
; Called Functions:
;   crt_unknown.c_FUN_00604824
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 0060fa80
        ;   Label: crt_unknown.c_FUN_0060fa80
    CALL dword ptr [0x0068502b]         ; 0060fa81 | PTR_FUN_0068502b
    ADD ESP,0x4                         ; 0060fa87
    RET                                 ; 0060fa8a

