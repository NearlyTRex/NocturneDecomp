; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_FUN_00427b00(void)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00427b00
        ;   Label: core_bugs.cpp_FUN_00427b00
    MOV EAX,dword ptr [ESP + 0x8]       ; 00427b04
    CMP EDX,EAX                         ; 00427b08
    JNZ 0x00427b14                      ; 00427b0a
        ;   XREF to: 00427b14 (CONDITIONAL_JUMP)  ; LAB_00427b14
    ADD EDX,0xc                         ; 00427b0c
    CMP EDX,EAX                         ; 00427b0f
    JNZ 0x00427b2c                      ; 00427b11
        ;   XREF to: 00427b2c (CONDITIONAL_JUMP)  ; LAB_00427b2c
    RET                                 ; 00427b13
    MOV ECX,dword ptr [EAX]             ; 00427b14
        ;   Label: LAB_00427b14
    MOV dword ptr [EDX],ECX             ; 00427b16
    MOV ECX,dword ptr [EAX + 0x4]       ; 00427b18
    MOV dword ptr [EDX + 0x4],ECX       ; 00427b1b
    MOV ECX,dword ptr [EAX + 0x8]       ; 00427b1e
    MOV dword ptr [EDX + 0x8],ECX       ; 00427b21
    ADD EDX,0xc                         ; 00427b24
    CMP EDX,EAX                         ; 00427b27
    JNZ 0x00427b2c                      ; 00427b29
        ;   XREF to: 00427b2c (CONDITIONAL_JUMP)  ; LAB_00427b2c
    RET                                 ; 00427b2b
    MOV ECX,dword ptr [EAX]             ; 00427b2c
        ;   Label: LAB_00427b2c
    MOV dword ptr [EDX],ECX             ; 00427b2e
    MOV ECX,dword ptr [EAX + 0x4]       ; 00427b30
    MOV dword ptr [EDX + 0x4],ECX       ; 00427b33
    MOV ECX,dword ptr [EAX + 0x8]       ; 00427b36
    MOV dword ptr [EDX + 0x8],ECX       ; 00427b39
    RET                                 ; 00427b3c

