; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __FillZeroMan(undefined4 *param_1)
;
;
; XREF[1]:
;   __ld12cvt at 10009fd0
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 10009e80
        ;   Label: __FillZeroMan
    XOR EAX,EAX                         ; 10009e84
    MOV dword ptr [ECX],EAX             ; 10009e86
    MOV dword ptr [ECX + 0x4],EAX       ; 10009e88
    MOV dword ptr [ECX + 0x8],EAX       ; 10009e8b
    RET                                 ; 10009e8e

