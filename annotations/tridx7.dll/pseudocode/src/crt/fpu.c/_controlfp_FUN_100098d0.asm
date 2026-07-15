; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl crt_fpu_c__controlfp_FUN_100098d0(uint new_value,uint mask)
;
; Parameters:
; uint             Stack[0x4]:4   new_value
; uint             Stack[0x8]:4   mask
;
; XREF[1]:
;   crt_fpu.c__setdefaultprecision_FUN_10006d30 at 10006d3a
;
; Called Functions:
;   crt_fpu.c__control87_FUN_10009890
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 100098d0
        ;   Label: crt_fpu.c__controlfp_FUN_100098d0
    MOV ECX,dword ptr [ESP + 0x4]       ; 100098d4
    AND EAX,0xfff7ffff                  ; 100098d8
    PUSH EAX                            ; 100098dd
    PUSH ECX                            ; 100098de
    CALL crt_fpu.c__control87_FUN_10009890 ; 100098df
        ;   XREF to: 10009890 (UNCONDITIONAL_CALL)  ; uint crt_fpu.c__control87_FUN_10009890(uint new_value, uint mask)
    ADD ESP,0x8                         ; 100098e4
    RET                                 ; 100098e7

