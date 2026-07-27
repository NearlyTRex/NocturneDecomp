; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcube_cpp_FUN_0044ae80(void)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0044ae80
        ;   Label: core_dcube.cpp_FUN_0044ae80
    MOV ECX,dword ptr [ESP + 0xc]       ; 0044ae84
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044ae88
    ADD EAX,0x8                         ; 0044ae8c
    CMP EAX,EDX                         ; 0044ae8f
    JNZ 0x0044ae9f                      ; 0044ae91
        ;   XREF to: 0044ae9f (CONDITIONAL_JUMP)  ; LAB_0044ae9f
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044ae93
    ADD EAX,0x14                        ; 0044ae97
    CMP EAX,ECX                         ; 0044ae9a
    JNZ 0x0044aebd                      ; 0044ae9c
        ;   XREF to: 0044aebd (CONDITIONAL_JUMP)  ; LAB_0044aebd
    RET                                 ; 0044ae9e
    PUSH EBX                            ; 0044ae9f
        ;   Label: LAB_0044ae9f
    MOV EBX,dword ptr [EDX]             ; 0044aea0
    MOV dword ptr [EAX],EBX             ; 0044aea2
    MOV EBX,dword ptr [EDX + 0x4]       ; 0044aea4
    MOV dword ptr [EAX + 0x4],EBX       ; 0044aea7
    MOV EBX,dword ptr [EDX + 0x8]       ; 0044aeaa
    MOV dword ptr [EAX + 0x8],EBX       ; 0044aead
    POP EBX                             ; 0044aeb0
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044aeb1
    ADD EAX,0x14                        ; 0044aeb5
    CMP EAX,ECX                         ; 0044aeb8
    JNZ 0x0044aebd                      ; 0044aeba
        ;   XREF to: 0044aebd (CONDITIONAL_JUMP)  ; LAB_0044aebd
    RET                                 ; 0044aebc
    MOV EDX,dword ptr [ECX]             ; 0044aebd
        ;   Label: LAB_0044aebd
    MOV dword ptr [EAX],EDX             ; 0044aebf
    MOV EDX,dword ptr [ECX + 0x4]       ; 0044aec1
    MOV dword ptr [EAX + 0x4],EDX       ; 0044aec4
    MOV EDX,dword ptr [ECX + 0x8]       ; 0044aec7
    MOV dword ptr [EAX + 0x8],EDX       ; 0044aeca
    RET                                 ; 0044aecd

