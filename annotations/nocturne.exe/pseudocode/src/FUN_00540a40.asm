; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00540a40(void)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00540a40
        ;   Label: FUN_00540a40
    MOV EAX,dword ptr [ESP + 0x4]       ; 00540a44
    ADD EAX,0x3ab24                     ; 00540a48
    CMP EAX,EDX                         ; 00540a4d
    JNZ 0x00540a52                      ; 00540a4f
        ;   XREF to: 00540a52 (CONDITIONAL_JUMP)  ; LAB_00540a52
    RET                                 ; 00540a51
    MOV ECX,dword ptr [EDX]             ; 00540a52
        ;   Label: LAB_00540a52
    MOV dword ptr [EAX],ECX             ; 00540a54
    MOV ECX,dword ptr [EDX + 0x4]       ; 00540a56
    MOV dword ptr [EAX + 0x4],ECX       ; 00540a59
    MOV ECX,dword ptr [EDX + 0x8]       ; 00540a5c
    MOV dword ptr [EAX + 0x8],ECX       ; 00540a5f
    RET                                 ; 00540a62

