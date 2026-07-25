; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046d4c0(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0046d4c0
        ;   Label: FUN_0046d4c0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0046d4c4
    CMP EAX,EDX                         ; 0046d4c8
    JNZ 0x0046d4cd                      ; 0046d4ca
        ;   XREF to: 0046d4cd (CONDITIONAL_JUMP)  ; LAB_0046d4cd
    RET                                 ; 0046d4cc
    MOV ECX,dword ptr [EDX]             ; 0046d4cd
        ;   Label: LAB_0046d4cd
    MOV dword ptr [EAX],ECX             ; 0046d4cf
    MOV ECX,dword ptr [EDX + 0x4]       ; 0046d4d1
    MOV dword ptr [EAX + 0x4],ECX       ; 0046d4d4
    MOV ECX,dword ptr [EDX + 0x8]       ; 0046d4d7
    MOV dword ptr [EAX + 0x8],ECX       ; 0046d4da
    RET                                 ; 0046d4dd

