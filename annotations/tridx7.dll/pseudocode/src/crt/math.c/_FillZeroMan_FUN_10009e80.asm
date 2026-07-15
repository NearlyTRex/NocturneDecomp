; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_math_c__FillZeroMan_FUN_10009e80(int *man)
;
; Parameters:
; int *            Stack[0x4]:4   man
;
; XREF[1]:
;   crt_math.c__ld12cvt_FUN_10009f60 at 10009fd0
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 10009e80
        ;   Label: crt_math.c__FillZeroMan_FUN_10009e80
    XOR EAX,EAX                         ; 10009e84
    MOV dword ptr [ECX],EAX             ; 10009e86
    MOV dword ptr [ECX + 0x4],EAX       ; 10009e88
    MOV dword ptr [ECX + 0x8],EAX       ; 10009e8b
    RET                                 ; 10009e8e

