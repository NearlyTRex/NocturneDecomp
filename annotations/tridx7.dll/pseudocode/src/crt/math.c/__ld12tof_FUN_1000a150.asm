; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; INTRNCVT_STATUS __cdecl crt_math_c___ld12tof_FUN_1000a150(_LDBL12 *ifp,_CRT_FLOAT *f)
;
; Parameters:
; _LDBL12 *        Stack[0x4]:4   ifp
; _CRT_FLOAT *     Stack[0x8]:4   f
;
; XREF[1]:
;   crt_math.c__atoflt_FUN_1000a280 at 1000a2ac
;
; Referenced Globals:
;   undefined4 DAT_100176b8
;
; Called Functions:
;   crt_math.c__ld12cvt_FUN_10009f60
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 1000a150
        ;   Label: crt_math.c___ld12tof_FUN_1000a150
    PUSH 0x100176b8                     ; 1000a154 | DAT_100176b8
    MOV ECX,dword ptr [ESP + 0x8]       ; 1000a159
    PUSH EAX                            ; 1000a15d
    PUSH ECX                            ; 1000a15e
    CALL crt_math.c__ld12cvt_FUN_10009f60 ; 1000a15f
        ;   XREF to: 10009f60 (UNCONDITIONAL_CALL)  ; int crt_math.c__ld12cvt_FUN_10009f60(ushort * ld, uint * result, int * prec)
    ADD ESP,0xc                         ; 1000a164
    RET                                 ; 1000a167

