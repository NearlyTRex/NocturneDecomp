; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __CopyMan(undefined4 *param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   __ld12cvt at 10009ff0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 10009e60
        ;   Label: __CopyMan
    PUSH ESI                            ; 10009e64
    MOV ECX,dword ptr [ESP + 0x8]       ; 10009e65
    MOV EDX,0x3                         ; 10009e69
    MOV ESI,dword ptr [EAX]             ; 10009e6e
        ;   Label: LAB_10009e6e
    ADD EAX,0x4                         ; 10009e70
    MOV dword ptr [ECX],ESI             ; 10009e73
    ADD ECX,0x4                         ; 10009e75
    DEC EDX                             ; 10009e78
    JNZ 0x10009e6e                      ; 10009e79
        ;   XREF to: 10009e6e (CONDITIONAL_JUMP)  ; LAB_10009e6e
    POP ESI                             ; 10009e7b
    RET                                 ; 10009e7c

