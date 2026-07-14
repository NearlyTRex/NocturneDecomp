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
;   FID_conflict:__atodbl at 1000a2ac
;
; Referenced Globals:
;   undefined4 DAT_100176b8
;
; Called Functions:
;   __ld12cvt
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 1000a150
        ;   Label: FID_conflict:__ld12tod
    PUSH 0x100176b8                     ; 1000a154 | DAT_100176b8
    MOV ECX,dword ptr [ESP + 0x8]       ; 1000a159
    PUSH EAX                            ; 1000a15d
    PUSH ECX                            ; 1000a15e
    CALL __ld12cvt                      ; 1000a15f
        ;   XREF to: 10009f60 (UNCONDITIONAL_CALL)  ; undefined __ld12cvt()
    ADD ESP,0xc                         ; 1000a164
    RET                                 ; 1000a167

