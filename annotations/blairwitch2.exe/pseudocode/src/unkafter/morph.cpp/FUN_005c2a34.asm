; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_morph_cpp_FUN_005c2a34(int param_1)
;
;
; XREF[2]:
;   unkafter_2d.cpp_FUN_005c68a8 at 005c68be
;   unkafter_morph.cpp_FUN_005c2a88 at 005c2a8a
;
; Referenced Globals:
;   void* PTR_CloseHandle_005c850c = 001c8c32
;   void* PTR_TlsGetValue_005c8654 = 001c922a
;   void* PTR_TlsSetValue_005c8658 = 001c9238
;   undefined4 DAT_0061f2a0
;
; Called Functions:
;   CloseHandle
;   TlsGetValue
;   TlsSetValue
;   unkafter_morph.cpp_FUN_005c4bcc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2a34
        ;   Label: unkafter_morph.cpp_FUN_005c2a34
    PUSH ESI                            ; 005c2a35
    MOV EDX,dword ptr [0x0061f2a0]      ; 005c2a36 | DAT_0061f2a0
    CMP EDX,-0x1                        ; 005c2a3c
    JZ 0x005c2a85                       ; 005c2a3f
        ;   XREF to: 005c2a85 (CONDITIONAL_JUMP)  ; LAB_005c2a85
    PUSH EDX                            ; 005c2a41
    CALL dword ptr CS:[0x5c8654]        ; 005c2a42 | PTR_TlsGetValue_005c8654
    TEST EAX,EAX                        ; 005c2a49
    JZ 0x005c2a85                       ; 005c2a4b
        ;   XREF to: 005c2a85 (CONDITIONAL_JUMP)  ; LAB_005c2a85
    MOV ECX,dword ptr [EAX + 0xda]      ; 005c2a4d
    PUSH ECX                            ; 005c2a53
    MOV EBX,dword ptr [EAX + 0xde]      ; 005c2a54
    CALL unkafter_morph.cpp_FUN_005c4bcc ; 005c2a5a
        ;   XREF to: 005c4bcc (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c4bcc()
    ADD ESP,0x4                         ; 005c2a5f
    PUSH 0x0                            ; 005c2a62
    MOV ESI,dword ptr [0x0061f2a0]      ; 005c2a64 | DAT_0061f2a0
    PUSH ESI                            ; 005c2a6a
    CALL dword ptr CS:[0x5c8658]        ; 005c2a6b | PTR_TlsSetValue_005c8658
    TEST EBX,EBX                        ; 005c2a72
    JZ 0x005c2a85                       ; 005c2a74
        ;   XREF to: 005c2a85 (CONDITIONAL_JUMP)  ; LAB_005c2a85
    CMP dword ptr [ESP + 0xc],0x0       ; 005c2a76
    JZ 0x005c2a85                       ; 005c2a7b
        ;   XREF to: 005c2a85 (CONDITIONAL_JUMP)  ; LAB_005c2a85
    PUSH EBX                            ; 005c2a7d
    CALL dword ptr CS:[0x5c850c]        ; 005c2a7e | PTR_CloseHandle_005c850c
    POP ESI                             ; 005c2a85
        ;   Label: LAB_005c2a85
    POP EBX                             ; 005c2a86
    RET                                 ; 005c2a87

