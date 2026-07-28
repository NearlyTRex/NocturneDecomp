; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_CExternalRenderer_validate_FUN_00532df0(CExternalRenderer *this_ptr,CExternalRenderer *capabilities)
;
; Parameters:
; CExternalRenderer * Stack[0x4]:4   this_ptr
; CExternalRenderer * Stack[0x8]:4   capabilities
;
; XREF[2]:
;   engine_special.cpp_FUN_00530e60 at 00530ed0
;   engine_special.cpp_loadExternalRenderer_FUN_00531780 at 00531823
;
; Called Functions:
;   crt_string.c__strcmp_FUN_005649c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00532df0
        ;   Label: engine_special.cpp_CExternalRenderer_validate_FUN_00532df0
    PUSH ESI                            ; 00532df1
    PUSH EDI                            ; 00532df2
    MOV EDI,dword ptr [ESP + 0x10]      ; 00532df3
    MOV ESI,dword ptr [ESP + 0x14]      ; 00532df7
    TEST ESI,ESI                        ; 00532dfb
    SETZ AL                             ; 00532dfd
    XOR EBX,EBX                         ; 00532e00
    MOV BL,AL                           ; 00532e02
    TEST ESI,ESI                        ; 00532e04
    JZ 0x00532f08                       ; 00532e06
        ;   XREF to: 00532f08 (CONDITIONAL_JUMP)  ; LAB_00532f08
    MOV DX,word ptr [EDI + 0x204]       ; 00532e0c
    CMP DX,word ptr [ESI + 0x204]       ; 00532e13
    JNZ 0x00532f0e                      ; 00532e1a
        ;   XREF to: 00532f0e (CONDITIONAL_JUMP)  ; LAB_00532f0e
    MOV EAX,0x1                         ; 00532e20
        ;   Label: LAB_00532e20
    MOV EBX,EAX                         ; 00532e25
        ;   Label: LAB_00532e25
    TEST EAX,EAX                        ; 00532e27
    JZ 0x00532e41                       ; 00532e29
        ;   XREF to: 00532e41 (CONDITIONAL_JUMP)  ; LAB_00532e41
    MOV EAX,dword ptr [EDI + 0x208]     ; 00532e2b
    MOV EDX,dword ptr [ESI + 0x208]     ; 00532e31
    NOT EAX                             ; 00532e37
    AND EAX,EDX                         ; 00532e39
    JNZ 0x00532f1f                      ; 00532e3b
        ;   XREF to: 00532f1f (CONDITIONAL_JUMP)  ; LAB_00532f1f
    TEST EBX,EBX                        ; 00532e41
        ;   Label: LAB_00532e41
    JZ 0x00532e9f                       ; 00532e43
        ;   XREF to: 00532e9f (CONDITIONAL_JUMP)  ; LAB_00532e9f
    CMP word ptr [ESI + 0x200],0x0      ; 00532e45
    JZ 0x00532e70                       ; 00532e4d
        ;   XREF to: 00532e70 (CONDITIONAL_JUMP)  ; LAB_00532e70
    MOV EAX,dword ptr [EDI + 0x1fe]     ; 00532e4f
    MOV EDX,dword ptr [ESI + 0x1fe]     ; 00532e55
    SAR EAX,0x10                        ; 00532e5b
    SAR EDX,0x10                        ; 00532e5e
    SAR EAX,0x8                         ; 00532e61
    SAR EDX,0x8                         ; 00532e64
    XOR EBX,EBX                         ; 00532e67
    CMP EAX,EDX                         ; 00532e69
    SETZ AL                             ; 00532e6b
    MOV BL,AL                           ; 00532e6e
    TEST EBX,EBX                        ; 00532e70
        ;   Label: LAB_00532e70
    JZ 0x00532e9f                       ; 00532e72
        ;   XREF to: 00532e9f (CONDITIONAL_JUMP)  ; LAB_00532e9f
    CMP word ptr [ESI + 0x202],0x0      ; 00532e74
    JZ 0x00532e9f                       ; 00532e7c
        ;   XREF to: 00532e9f (CONDITIONAL_JUMP)  ; LAB_00532e9f
    MOV EDX,dword ptr [EDI + 0x200]     ; 00532e7e
    MOV EAX,dword ptr [ESI + 0x200]     ; 00532e84
    SAR EDX,0x10                        ; 00532e8a
    SAR EAX,0x10                        ; 00532e8d
    SAR EDX,0x8                         ; 00532e90
    SAR EAX,0x8                         ; 00532e93
    XOR EBX,EBX                         ; 00532e96
    CMP EDX,EAX                         ; 00532e98
    SETZ AL                             ; 00532e9a
    MOV BL,AL                           ; 00532e9d
    TEST EBX,EBX                        ; 00532e9f
        ;   Label: LAB_00532e9f
    JZ 0x00532ecb                       ; 00532ea1
        ;   XREF to: 00532ecb (CONDITIONAL_JUMP)  ; LAB_00532ecb
    CMP byte ptr [ESI + 0x100],0x0      ; 00532ea3
    JZ 0x00532ecb                       ; 00532eaa
        ;   XREF to: 00532ecb (CONDITIONAL_JUMP)  ; LAB_00532ecb
    LEA EAX,[EDI + 0x100]               ; 00532eac
    PUSH EAX                            ; 00532eb2
    LEA EAX,[ESI + 0x100]               ; 00532eb3
    PUSH EAX                            ; 00532eb9
    XOR EBX,EBX                         ; 00532eba
    CALL crt_string.c__strcmp_FUN_005649c0 ; 00532ebc
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005649c0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00532ec1
    TEST EAX,EAX                        ; 00532ec4
    SETZ AL                             ; 00532ec6
    MOV BL,AL                           ; 00532ec9
    TEST EBX,EBX                        ; 00532ecb
        ;   Label: LAB_00532ecb
    JZ 0x00532f08                       ; 00532ecd
        ;   XREF to: 00532f08 (CONDITIONAL_JUMP)  ; LAB_00532f08
    CMP dword ptr [EDI + 0x20c],0x10    ; 00532ecf
    JNZ 0x00532f1f                      ; 00532ed6
        ;   XREF to: 00532f1f (CONDITIONAL_JUMP)  ; LAB_00532f1f
    XOR EDX,EDX                         ; 00532ed8
    TEST EBX,EBX                        ; 00532eda
    JZ 0x00532f08                       ; 00532edc
        ;   XREF to: 00532f08 (CONDITIONAL_JUMP)  ; LAB_00532f08
    MOV EAX,ESI                         ; 00532ede
    MOV ECX,EDI                         ; 00532ee0
    MOV EDI,dword ptr [ECX + 0x210]     ; 00532ee2
        ;   Label: LAB_00532ee2
    MOV ESI,dword ptr [EAX + 0x210]     ; 00532ee8
    ADD ECX,0x4                         ; 00532eee
    CMP ESI,EDI                         ; 00532ef1
    SETZ BL                             ; 00532ef3
    ADD EAX,0x4                         ; 00532ef6
    MOVZX ESI,BL                        ; 00532ef9
    INC EDX                             ; 00532efc
    MOV EBX,ESI                         ; 00532efd
    CMP EDX,0x10                        ; 00532eff
    JGE 0x00532f08                      ; 00532f02
        ;   XREF to: 00532f08 (CONDITIONAL_JUMP)  ; LAB_00532f08
    TEST ESI,ESI                        ; 00532f04
    JNZ 0x00532ee2                      ; 00532f06
        ;   XREF to: 00532ee2 (CONDITIONAL_JUMP)  ; LAB_00532ee2
    MOV EAX,EBX                         ; 00532f08
        ;   Label: LAB_00532f08
    POP EDI                             ; 00532f0a
    POP ESI                             ; 00532f0b
    POP EBX                             ; 00532f0c
    RET                                 ; 00532f0d
    CMP DX,-0x1                         ; 00532f0e
        ;   Label: LAB_00532f0e
    JZ 0x00532e20                       ; 00532f12
        ;   XREF to: 00532e20 (CONDITIONAL_JUMP)  ; LAB_00532e20
    XOR EAX,EAX                         ; 00532f18
    JMP 0x00532e25                      ; 00532f1a
        ;   XREF to: 00532e25 (UNCONDITIONAL_JUMP)  ; LAB_00532e25
    XOR EBX,EBX                         ; 00532f1f
        ;   Label: LAB_00532f1f
    MOV EAX,EBX                         ; 00532f21
    POP EDI                             ; 00532f23
    POP ESI                             ; 00532f24
    POP EBX                             ; 00532f25
    RET                                 ; 00532f26

