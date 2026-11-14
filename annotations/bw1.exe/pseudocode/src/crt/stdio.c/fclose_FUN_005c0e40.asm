; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl crt_stdio_c_fclose_FUN_005c0e40(_FILE *param_1,int param_2)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005c0d54 at 005c0d5f
;   crt_unknown.c_FUN_005c1594 at 005c15b8
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626600 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626604 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50e8_0062660c = 005c50e8
;
; Called Functions:
;   crt_stdio.c_ftell_FUN_005c2e90
;   crt_unknown.c_FUN_005c09f0
;   crt_unknown.c_FUN_005c0d8c
;   crt_unknown.c_FUN_005c25c0
;   crt_unknown.c_FUN_005c50d4
;   crt_unknown.c_FUN_005c50e8
;   crt_unknown.c_FUN_005c6d50
;   crt_unknown.c_FUN_005c6e80
;   crt_unknown.c_FUN_005c6f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c0e40
        ;   Label: crt_stdio.c_fclose_FUN_005c0e40
    PUSH ESI                            ; 005c0e41
    PUSH EDI                            ; 005c0e42
    PUSH EBP                            ; 005c0e43
    SUB ESP,0x114                       ; 005c0e44
    MOV EBX,dword ptr [ESP + 0x128]     ; 005c0e4a
    CMP dword ptr [EBX + 0xc],0x0       ; 005c0e51
    JNZ 0x005c0e61                      ; 005c0e55
        ;   XREF to: 005c0e61 (CONDITIONAL_JUMP)  ; LAB_005c0e61
    MOV EAX,0xffffffff                  ; 005c0e57
    JMP 0x005c0f27                      ; 005c0e5c
        ;   XREF to: 005c0f27 (UNCONDITIONAL_JUMP)  ; LAB_005c0f27
    MOV AH,byte ptr [EBX + 0xd]         ; 005c0e61
        ;   Label: LAB_005c0e61
    XOR ESI,ESI                         ; 005c0e64
    TEST AH,0x10                        ; 005c0e66
    JZ 0x005c0e76                       ; 005c0e69
        ;   XREF to: 005c0e76 (CONDITIONAL_JUMP)  ; LAB_005c0e76
    PUSH EBX                            ; 005c0e6b
    CALL crt_unknown.c_FUN_005c6d50     ; 005c0e6c
        ;   XREF to: 005c6d50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6d50()
    ADD ESP,0x4                         ; 005c0e71
    MOV ESI,EAX                         ; 005c0e74
    MOV ECX,dword ptr [EBX + 0x10]      ; 005c0e76
        ;   Label: LAB_005c0e76
    PUSH ECX                            ; 005c0e79
    CALL dword ptr [0x00626600]         ; 005c0e7a | PTR_crt_unknown.c_FUN_005c50d4_00626600
    ADD ESP,0x4                         ; 005c0e80
    PUSH EBX                            ; 005c0e83
    CALL crt_stdio.c_ftell_FUN_005c2e90 ; 005c0e84
        ;   XREF to: 005c2e90 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_005c2e90(_FILE * file_handle)
    ADD ESP,0x4                         ; 005c0e89
    CMP EAX,-0x1                        ; 005c0e8c
    JZ 0x005c0ea0                       ; 005c0e8f
        ;   XREF to: 005c0ea0 (CONDITIONAL_JUMP)  ; LAB_005c0ea0
    PUSH 0x0                            ; 005c0e91
    PUSH EAX                            ; 005c0e93
    MOV EDI,dword ptr [EBX + 0x10]      ; 005c0e94
    PUSH EDI                            ; 005c0e97
    CALL crt_unknown.c_FUN_005c6e80     ; 005c0e98
        ;   XREF to: 005c6e80 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6e80()
    ADD ESP,0xc                         ; 005c0e9d
    CMP dword ptr [ESP + 0x12c],0x0     ; 005c0ea0
        ;   Label: LAB_005c0ea0
    JZ 0x005c0eb8                       ; 005c0ea8
        ;   XREF to: 005c0eb8 (CONDITIONAL_JUMP)  ; LAB_005c0eb8
    MOV EAX,dword ptr [EBX + 0x10]      ; 005c0eaa
    PUSH EAX                            ; 005c0ead
    CALL crt_unknown.c_FUN_005c6f10     ; 005c0eae
        ;   XREF to: 005c6f10 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6f10()
    ADD ESP,0x4                         ; 005c0eb3
    OR ESI,EAX                          ; 005c0eb6
    TEST byte ptr [EBX + 0xc],0x8       ; 005c0eb8
        ;   Label: LAB_005c0eb8
    JZ 0x005c0ed7                       ; 005c0ebc
        ;   XREF to: 005c0ed7 (CONDITIONAL_JUMP)  ; LAB_005c0ed7
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c0ebe
    MOV EDX,dword ptr [EAX + 0x8]       ; 005c0ec1
    PUSH EDX                            ; 005c0ec4
    CALL crt_unknown.c_FUN_005c09f0     ; 005c0ec5
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c0eca
    ADD ESP,0x4                         ; 005c0ecd
    MOV dword ptr [EAX + 0x8],0x0       ; 005c0ed0
    TEST byte ptr [EBX + 0xd],0x8       ; 005c0ed7
        ;   Label: LAB_005c0ed7
    JZ 0x005c0f01                       ; 005c0edb
        ;   XREF to: 005c0f01 (CONDITIONAL_JUMP)  ; LAB_005c0f01
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c0edd
    MOV AL,byte ptr [EAX + 0x14]        ; 005c0ee0
    AND EAX,0xff                        ; 005c0ee3
    PUSH EAX                            ; 005c0ee8
    LEA EAX,[ESP + 0x4]                 ; 005c0ee9
    PUSH EAX                            ; 005c0eed
    CALL crt_unknown.c_FUN_005c0d8c     ; 005c0eee
        ;   XREF to: 005c0d8c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0d8c()
    ADD ESP,0x8                         ; 005c0ef3
    MOV EAX,ESP                         ; 005c0ef6
    PUSH EAX                            ; 005c0ef8
    CALL crt_unknown.c_FUN_005c25c0     ; 005c0ef9
        ;   XREF to: 005c25c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_FUN_005c25c0(char * filename)
    ADD ESP,0x4                         ; 005c0efe
    MOV ECX,dword ptr [EBX + 0x10]      ; 005c0f01
        ;   Label: LAB_005c0f01
    PUSH ECX                            ; 005c0f04
    CALL dword ptr [0x00626604]         ; 005c0f05 | PTR_crt_unknown.c_FUN_005c50d4_00626604
    ADD ESP,0x4                         ; 005c0f0b
    CMP dword ptr [ESP + 0x12c],0x0     ; 005c0f0e
    JZ 0x005c0f25                       ; 005c0f16
        ;   XREF to: 005c0f25 (CONDITIONAL_JUMP)  ; LAB_005c0f25
    MOV EBP,dword ptr [EBX + 0x10]      ; 005c0f18
    PUSH EBP                            ; 005c0f1b
    CALL dword ptr [0x0062660c]         ; 005c0f1c | PTR_crt_unknown.c_FUN_005c50e8_0062660c
    ADD ESP,0x4                         ; 005c0f22
    MOV EAX,ESI                         ; 005c0f25
        ;   Label: LAB_005c0f25
    ADD ESP,0x114                       ; 005c0f27
        ;   Label: LAB_005c0f27
    POP EBP                             ; 005c0f2d
    POP EDI                             ; 005c0f2e
    POP ESI                             ; 005c0f2f
    POP EBX                             ; 005c0f30
    RET                                 ; 005c0f31

