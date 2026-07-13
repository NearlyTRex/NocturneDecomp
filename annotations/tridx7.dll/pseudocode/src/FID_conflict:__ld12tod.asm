; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; INTRNCVT_STATUS __cdecl FID_conflict___ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D)
;
; Parameters:
; _LDBL12 *        Stack[0x4]:4   _Ifp
; _CRT_DOUBLE *    Stack[0x8]:4   _D
;
; XREF[1]:
;   FID_conflict:__atodbl at 1000a22c
;
; Referenced Globals:
;   undefined4 DAT_100176a0
;
; Called Functions:
;   __ld12cvt
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 1000a130
        ;   Label: FID_conflict:__ld12tod
    PUSH 0x100176a0                     ; 1000a134 | DAT_100176a0
    MOV ECX,dword ptr [ESP + 0x8]       ; 1000a139
    PUSH EAX                            ; 1000a13d
    PUSH ECX                            ; 1000a13e
    CALL __ld12cvt                      ; 1000a13f
        ;   XREF to: 10009f60 (UNCONDITIONAL_CALL)  ; undefined __ld12cvt()
    ADD ESP,0xc                         ; 1000a144
    RET                                 ; 1000a147

