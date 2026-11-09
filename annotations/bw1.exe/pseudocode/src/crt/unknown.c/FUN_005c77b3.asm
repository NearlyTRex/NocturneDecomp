; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c77b3(void)
;
;
; XREF[2]:
;   crt_math.c_pow_FUN_005c18f4 at 005c19d7
;   unkafter_zombie.cpp_FUN_005cbf70 at 005cc006
;
; Referenced Globals:
;   undefined1* PTR_crt_unknown.c_FUN_005c77bd_00628bcc = 005c77bd
;
; *****************************************************************************

section .text

    SUB ESP,0x2c                        ; 005c77b3
        ;   Label: crt_unknown.c_FUN_005c77b3
    JMP dword ptr [EAX*0x4 + 0x628bcc]  ; 005c77b6 | PTR_crt_unknown.c_FUN_005c77bd_00628bcc

