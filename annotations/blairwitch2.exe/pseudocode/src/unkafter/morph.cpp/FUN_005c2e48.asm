; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_morph_cpp_FUN_005c2e48(char *param_1,char *param_2,uint param_3)
;
;
; XREF[1]:
;   unkafter_morph.cpp_FUN_005c2ea4 at 005c2fe6
;
; Referenced Globals:
;   TerminatedCString s_s_0123456789abcdef_0061f6d4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2e48
        ;   Label: unkafter_morph.cpp_FUN_005c2e48
    PUSH ESI                            ; 005c2e49
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c2e4a
    MOV EDX,dword ptr [ESP + 0x10]      ; 005c2e4e
    MOV CL,byte ptr [EAX]               ; 005c2e52
    XOR EBX,EBX                         ; 005c2e54
    TEST CL,CL                          ; 005c2e56
    JZ 0x005c2e62                       ; 005c2e58
        ;   XREF to: 005c2e62 (CONDITIONAL_JUMP)  ; LAB_005c2e62
    MOV CH,byte ptr [EAX + 0x1]         ; 005c2e5a
        ;   Label: LAB_005c2e5a
    INC EAX                             ; 005c2e5d
    TEST CH,CH                          ; 005c2e5e
    JNZ 0x005c2e5a                      ; 005c2e60
        ;   XREF to: 005c2e5a (CONDITIONAL_JUMP)  ; LAB_005c2e5a
    LEA ESI,[EAX + 0x9]                 ; 005c2e62
        ;   Label: LAB_005c2e62
    MOV CL,byte ptr [EDX]               ; 005c2e65
        ;   Label: LAB_005c2e65
    MOV byte ptr [EAX],CL               ; 005c2e67
    TEST CL,CL                          ; 005c2e69
    JZ 0x005c2e7f                       ; 005c2e6b
        ;   XREF to: 005c2e7f (CONDITIONAL_JUMP)  ; LAB_005c2e7f
    CMP CL,0x30                         ; 005c2e6d
    JNZ 0x005c2e7a                      ; 005c2e70
        ;   XREF to: 005c2e7a (CONDITIONAL_JUMP)  ; LAB_005c2e7a
    CMP byte ptr [EDX + 0x1],0x78       ; 005c2e72
    JNZ 0x005c2e7a                      ; 005c2e76
        ;   XREF to: 005c2e7a (CONDITIONAL_JUMP)  ; LAB_005c2e7a
    MOV EBX,ESI                         ; 005c2e78
    INC ESI                             ; 005c2e7a
        ;   Label: LAB_005c2e7a
    INC EAX                             ; 005c2e7b
    INC EDX                             ; 005c2e7c
    JMP 0x005c2e65                      ; 005c2e7d
        ;   XREF to: 005c2e65 (UNCONDITIONAL_JUMP)  ; LAB_005c2e65
    TEST EBX,EBX                        ; 005c2e7f
        ;   Label: LAB_005c2e7f
    JZ 0x005c2ea1                       ; 005c2e81
        ;   XREF to: 005c2ea1 (CONDITIONAL_JUMP)  ; LAB_005c2ea1
    MOV EAX,dword ptr [ESP + 0x14]      ; 005c2e83
    TEST EAX,EAX                        ; 005c2e87
    JZ 0x005c2ea1                       ; 005c2e89
        ;   XREF to: 005c2ea1 (CONDITIONAL_JUMP)  ; LAB_005c2ea1
    MOV EDX,EAX                         ; 005c2e8b
        ;   Label: LAB_005c2e8b
    AND EDX,0xf                         ; 005c2e8d
    DEC EBX                             ; 005c2e90
    MOV DL,byte ptr [EDX + 0x61f6d4]    ; 005c2e91 | = "0123456789abcdef"
    SHR EAX,0x4                         ; 005c2e97
    MOV byte ptr [EBX + 0x1],DL         ; 005c2e9a
    TEST EAX,EAX                        ; 005c2e9d
    JNZ 0x005c2e8b                      ; 005c2e9f
        ;   XREF to: 005c2e8b (CONDITIONAL_JUMP)  ; LAB_005c2e8b
    POP ESI                             ; 005c2ea1
        ;   Label: LAB_005c2ea1
    POP EBX                             ; 005c2ea2
    RET                                 ; 005c2ea3

