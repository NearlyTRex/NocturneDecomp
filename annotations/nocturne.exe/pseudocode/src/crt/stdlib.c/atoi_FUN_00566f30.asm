; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdlib_c_atoi_FUN_00566f30(byte *param_1)
;
;
; XREF[2]:
;   FUN_0055a510 at 0055a5f0
;   core_texlist.cpp_CTextureList_load_FUN_00544950 at 00544aa4
;
; Referenced Globals:
;   undefined4 DAT_005c168c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566f30
        ;   Label: crt_stdlib.c_atoi_FUN_00566f30
    MOV EAX,dword ptr [ESP + 0x8]       ; 00566f31
    MOV DL,byte ptr [EAX]               ; 00566f35
        ;   Label: LAB_00566f35
    INC DL                              ; 00566f37
    AND EDX,0xff                        ; 00566f39
    TEST byte ptr [EDX + 0x5c168c],0x2  ; 00566f3f | DAT_005c168c
    JZ 0x00566f4b                       ; 00566f46
        ;   XREF to: 00566f4b (CONDITIONAL_JUMP)  ; LAB_00566f4b
    INC EAX                             ; 00566f48
    JMP 0x00566f35                      ; 00566f49
        ;   XREF to: 00566f35 (UNCONDITIONAL_JUMP)  ; LAB_00566f35
    MOV CL,byte ptr [EAX]               ; 00566f4b
        ;   Label: LAB_00566f4b
    CMP CL,0x2b                         ; 00566f4d
    JZ 0x00566f57                       ; 00566f50
        ;   XREF to: 00566f57 (CONDITIONAL_JUMP)  ; LAB_00566f57
    CMP CL,0x2d                         ; 00566f52
    JNZ 0x00566f58                      ; 00566f55
        ;   XREF to: 00566f58 (CONDITIONAL_JUMP)  ; LAB_00566f58
    INC EAX                             ; 00566f57
        ;   Label: LAB_00566f57
    XOR EDX,EDX                         ; 00566f58
        ;   Label: LAB_00566f58
    MOV BL,byte ptr [EAX]               ; 00566f5a
        ;   Label: LAB_00566f5a
    INC BL                              ; 00566f5c
    AND EBX,0xff                        ; 00566f5e
    TEST byte ptr [EBX + 0x5c168c],0x20 ; 00566f64 | DAT_005c168c
    JZ 0x00566f7c                       ; 00566f6b
        ;   XREF to: 00566f7c (CONDITIONAL_JUMP)  ; LAB_00566f7c
    IMUL EDX,EDX,0xa                    ; 00566f6d
    XOR EBX,EBX                         ; 00566f70
    MOV BL,byte ptr [EAX]               ; 00566f72
    ADD EDX,EBX                         ; 00566f74
    INC EAX                             ; 00566f76
    SUB EDX,0x30                        ; 00566f77
    JMP 0x00566f5a                      ; 00566f7a
        ;   XREF to: 00566f5a (UNCONDITIONAL_JUMP)  ; LAB_00566f5a
    CMP CL,0x2d                         ; 00566f7c
        ;   Label: LAB_00566f7c
    JNZ 0x00566f83                      ; 00566f7f
        ;   XREF to: 00566f83 (CONDITIONAL_JUMP)  ; LAB_00566f83
    NEG EDX                             ; 00566f81
    MOV EAX,EDX                         ; 00566f83
        ;   Label: LAB_00566f83
    POP EBX                             ; 00566f85
    RET                                 ; 00566f86

