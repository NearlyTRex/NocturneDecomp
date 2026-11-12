; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_CExternalRenderer_validate_FUN_00582d60(CExternalRenderer *this_ptr,CExternalRenderer *capabilities)
;
; Parameters:
; CExternalRenderer * Stack[0x4]:4   this_ptr
; CExternalRenderer * Stack[0x8]:4   capabilities
;
; XREF[1]:
;   engine_special.cpp_loadExternalRenderer_FUN_00581310 at 005813b5
;
; Called Functions:
;   crt_string.c__strcmp_FUN_005c0f80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00582d60
        ;   Label: engine_special.cpp_CExternalRenderer_validate_FUN_00582d60
    PUSH ESI                            ; 00582d61
    PUSH EDI                            ; 00582d62
    MOV EDI,dword ptr [ESP + 0x10]      ; 00582d63
    MOV ESI,dword ptr [ESP + 0x14]      ; 00582d67
    TEST ESI,ESI                        ; 00582d6b
    SETZ AL                             ; 00582d6d
    XOR EBX,EBX                         ; 00582d70
    MOV BL,AL                           ; 00582d72
    TEST ESI,ESI                        ; 00582d74
    JZ 0x00582e78                       ; 00582d76
        ;   XREF to: 00582e78 (CONDITIONAL_JUMP)  ; LAB_00582e78
    MOV DX,word ptr [EDI + 0x204]       ; 00582d7c
    CMP DX,word ptr [ESI + 0x204]       ; 00582d83
    JNZ 0x00582e7e                      ; 00582d8a
        ;   XREF to: 00582e7e (CONDITIONAL_JUMP)  ; LAB_00582e7e
    MOV EAX,0x1                         ; 00582d90
        ;   Label: LAB_00582d90
    MOV EBX,EAX                         ; 00582d95
        ;   Label: LAB_00582d95
    TEST EAX,EAX                        ; 00582d97
    JZ 0x00582db1                       ; 00582d99
        ;   XREF to: 00582db1 (CONDITIONAL_JUMP)  ; LAB_00582db1
    MOV EAX,dword ptr [EDI + 0x208]     ; 00582d9b
    MOV EDX,dword ptr [ESI + 0x208]     ; 00582da1
    NOT EAX                             ; 00582da7
    AND EAX,EDX                         ; 00582da9
    JNZ 0x00582e8f                      ; 00582dab
        ;   XREF to: 00582e8f (CONDITIONAL_JUMP)  ; LAB_00582e8f
    TEST EBX,EBX                        ; 00582db1
        ;   Label: LAB_00582db1
    JZ 0x00582e0f                       ; 00582db3
        ;   XREF to: 00582e0f (CONDITIONAL_JUMP)  ; LAB_00582e0f
    CMP word ptr [ESI + 0x200],0x0      ; 00582db5
    JZ 0x00582de0                       ; 00582dbd
        ;   XREF to: 00582de0 (CONDITIONAL_JUMP)  ; LAB_00582de0
    MOV EAX,dword ptr [EDI + 0x1fe]     ; 00582dbf
    MOV EDX,dword ptr [ESI + 0x1fe]     ; 00582dc5
    SAR EAX,0x10                        ; 00582dcb
    SAR EDX,0x10                        ; 00582dce
    SAR EAX,0x8                         ; 00582dd1
    SAR EDX,0x8                         ; 00582dd4
    XOR EBX,EBX                         ; 00582dd7
    CMP EAX,EDX                         ; 00582dd9
    SETZ AL                             ; 00582ddb
    MOV BL,AL                           ; 00582dde
    TEST EBX,EBX                        ; 00582de0
        ;   Label: LAB_00582de0
    JZ 0x00582e0f                       ; 00582de2
        ;   XREF to: 00582e0f (CONDITIONAL_JUMP)  ; LAB_00582e0f
    CMP word ptr [ESI + 0x202],0x0      ; 00582de4
    JZ 0x00582e0f                       ; 00582dec
        ;   XREF to: 00582e0f (CONDITIONAL_JUMP)  ; LAB_00582e0f
    MOV EDX,dword ptr [EDI + 0x200]     ; 00582dee
    MOV EAX,dword ptr [ESI + 0x200]     ; 00582df4
    SAR EDX,0x10                        ; 00582dfa
    SAR EAX,0x10                        ; 00582dfd
    SAR EDX,0x8                         ; 00582e00
    SAR EAX,0x8                         ; 00582e03
    XOR EBX,EBX                         ; 00582e06
    CMP EDX,EAX                         ; 00582e08
    SETZ AL                             ; 00582e0a
    MOV BL,AL                           ; 00582e0d
    TEST EBX,EBX                        ; 00582e0f
        ;   Label: LAB_00582e0f
    JZ 0x00582e3b                       ; 00582e11
        ;   XREF to: 00582e3b (CONDITIONAL_JUMP)  ; LAB_00582e3b
    CMP byte ptr [ESI + 0x100],0x0      ; 00582e13
    JZ 0x00582e3b                       ; 00582e1a
        ;   XREF to: 00582e3b (CONDITIONAL_JUMP)  ; LAB_00582e3b
    LEA EAX,[EDI + 0x100]               ; 00582e1c
    PUSH EAX                            ; 00582e22
    LEA EAX,[ESI + 0x100]               ; 00582e23
    PUSH EAX                            ; 00582e29
    XOR EBX,EBX                         ; 00582e2a
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 00582e2c
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 00582e31
    TEST EAX,EAX                        ; 00582e34
    SETZ AL                             ; 00582e36
    MOV BL,AL                           ; 00582e39
    TEST EBX,EBX                        ; 00582e3b
        ;   Label: LAB_00582e3b
    JZ 0x00582e78                       ; 00582e3d
        ;   XREF to: 00582e78 (CONDITIONAL_JUMP)  ; LAB_00582e78
    CMP dword ptr [EDI + 0x20c],0x10    ; 00582e3f
    JNZ 0x00582e8f                      ; 00582e46
        ;   XREF to: 00582e8f (CONDITIONAL_JUMP)  ; LAB_00582e8f
    XOR EDX,EDX                         ; 00582e48
    TEST EBX,EBX                        ; 00582e4a
    JZ 0x00582e78                       ; 00582e4c
        ;   XREF to: 00582e78 (CONDITIONAL_JUMP)  ; LAB_00582e78
    MOV EAX,ESI                         ; 00582e4e
    MOV ECX,EDI                         ; 00582e50
    MOV EDI,dword ptr [ECX + 0x210]     ; 00582e52
        ;   Label: LAB_00582e52
    MOV ESI,dword ptr [EAX + 0x210]     ; 00582e58
    ADD ECX,0x4                         ; 00582e5e
    CMP ESI,EDI                         ; 00582e61
    SETZ BL                             ; 00582e63
    ADD EAX,0x4                         ; 00582e66
    MOVZX ESI,BL                        ; 00582e69
    INC EDX                             ; 00582e6c
    MOV EBX,ESI                         ; 00582e6d
    CMP EDX,0x10                        ; 00582e6f
    JGE 0x00582e78                      ; 00582e72
        ;   XREF to: 00582e78 (CONDITIONAL_JUMP)  ; LAB_00582e78
    TEST ESI,ESI                        ; 00582e74
    JNZ 0x00582e52                      ; 00582e76
        ;   XREF to: 00582e52 (CONDITIONAL_JUMP)  ; LAB_00582e52
    MOV EAX,EBX                         ; 00582e78
        ;   Label: LAB_00582e78
    POP EDI                             ; 00582e7a
    POP ESI                             ; 00582e7b
    POP EBX                             ; 00582e7c
    RET                                 ; 00582e7d
    CMP DX,-0x1                         ; 00582e7e
        ;   Label: LAB_00582e7e
    JZ 0x00582d90                       ; 00582e82
        ;   XREF to: 00582d90 (CONDITIONAL_JUMP)  ; LAB_00582d90
    XOR EAX,EAX                         ; 00582e88
    JMP 0x00582d95                      ; 00582e8a
        ;   XREF to: 00582d95 (UNCONDITIONAL_JUMP)  ; LAB_00582d95
    XOR EBX,EBX                         ; 00582e8f
        ;   Label: LAB_00582e8f
    MOV EAX,EBX                         ; 00582e91
    POP EDI                             ; 00582e93
    POP ESI                             ; 00582e94
    POP EBX                             ; 00582e95
    RET                                 ; 00582e96

