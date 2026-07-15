; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; INTRNCVT_STATUS __cdecl crt_math_c___ld12tod_FUN_1000a130(_LDBL12 *ifp,_CRT_DOUBLE *d)
;
; Parameters:
; _LDBL12 *        Stack[0x4]:4   ifp
; _CRT_DOUBLE *    Stack[0x8]:4   d
;
; XREF[1]:
;   crt_math.c__atodbl_FUN_1000a200 at 1000a22c
;
; Referenced Globals:
;   undefined4 DAT_100176a0
;
; Called Functions:
;   crt_math.c__ld12cvt_FUN_10009f60
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 1000a130
        ;   Label: crt_math.c___ld12tod_FUN_1000a130
    PUSH 0x100176a0                     ; 1000a134 | DAT_100176a0
    MOV ECX,dword ptr [ESP + 0x8]       ; 1000a139
    PUSH EAX                            ; 1000a13d
    PUSH ECX                            ; 1000a13e
    CALL crt_math.c__ld12cvt_FUN_10009f60 ; 1000a13f
        ;   XREF to: 10009f60 (UNCONDITIONAL_CALL)  ; int crt_math.c__ld12cvt_FUN_10009f60(ushort * ld, uint * result, int * prec)
    ADD ESP,0xc                         ; 1000a144
    RET                                 ; 1000a147

