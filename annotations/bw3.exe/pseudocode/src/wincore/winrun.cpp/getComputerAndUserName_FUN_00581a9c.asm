; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_getComputerAndUserName_FUN_00581a9c(char *buffer)
;
; Parameters:
; char *           Stack[0x4]:4   buffer
;
; Called Functions:
;   crt_env.c_getenv_FUN_005a5ec0
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 00581a9c
        ;   Label: wincore_winrun.cpp_getComputerAndUserName_FUN_00581a9c
    PUSH EBX                            ; 00581aa0
    PUSH ESI                            ; 00581aa1
    PUSH EDI                            ; 00581aa2
    SUB ESP,0x4                         ; 00581aa3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00581aa6
    PUSH 0x200                          ; 00581aaa
    PUSH 0x0                            ; 00581aaf
    PUSH EBX                            ; 00581ab1
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00581ab2
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00581ab7
    MOV EAX,ESP                         ; 00581aba
    MOV EDX,0x100                       ; 00581abc
    PUSH EAX                            ; 00581ac1
    LEA EDI,[EBX + EDX*0x1]             ; 00581ac2
    PUSH EDI                            ; 00581ac5
    MOV dword ptr [ESP + 0x8],EDX       ; 00581ac6
    CALL dword ptr CS:[0x5b357c]        ; 00581aca
    MOV EAX,ESP                         ; 00581ad1
    PUSH EAX                            ; 00581ad3
    MOV ECX,0x100                       ; 00581ad4
    PUSH EBX                            ; 00581ad9
    MOV dword ptr [ESP + 0x8],ECX       ; 00581ada
    CALL dword ptr CS:[0x5b33e4]        ; 00581ade
    CMP byte ptr [EBX + 0x100],0x0      ; 00581ae5
    JZ 0x00581afa                       ; 00581aec
        ;   XREF to: 00581afa (CONDITIONAL_JUMP)  ; LAB_00581afa
    CMP byte ptr [EBX],0x0              ; 00581aee
        ;   Label: LAB_00581aee
    JZ 0x00581b33                       ; 00581af1
        ;   XREF to: 00581b33 (CONDITIONAL_JUMP)  ; LAB_00581b33
    ADD ESP,0x4                         ; 00581af3
        ;   Label: LAB_00581af3
    POP EDI                             ; 00581af6
    POP ESI                             ; 00581af7
    POP EBX                             ; 00581af8
    RET                                 ; 00581af9
    PUSH 0x5d7ea3                       ; 00581afa
        ;   Label: LAB_00581afa
    CALL crt_env.c_getenv_FUN_005a5ec0  ; 00581aff
        ;   XREF to: 005a5ec0 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_005a5ec0(char * name)
    ADD ESP,0x4                         ; 00581b04
    TEST EAX,EAX                        ; 00581b07
    JZ 0x00581aee                       ; 00581b09
        ;   XREF to: 00581aee (CONDITIONAL_JUMP)  ; LAB_00581aee
    MOV ESI,EAX                         ; 00581b0b
    PUSH EDI                            ; 00581b0d
    MOV AL,byte ptr [ESI]               ; 00581b0e
        ;   Label: LAB_00581b0e
    MOV byte ptr [EDI],AL               ; 00581b10
    CMP AL,0x0                          ; 00581b12
    JZ 0x00581b26                       ; 00581b14
        ;   XREF to: 00581b26 (CONDITIONAL_JUMP)  ; LAB_00581b26
    MOV AL,byte ptr [ESI + 0x1]         ; 00581b16
    ADD ESI,0x2                         ; 00581b19
    MOV byte ptr [EDI + 0x1],AL         ; 00581b1c
    ADD EDI,0x2                         ; 00581b1f
    CMP AL,0x0                          ; 00581b22
    JNZ 0x00581b0e                      ; 00581b24
        ;   XREF to: 00581b0e (CONDITIONAL_JUMP)  ; LAB_00581b0e
    POP EDI                             ; 00581b26
        ;   Label: LAB_00581b26
    CMP byte ptr [EBX],0x0              ; 00581b27
    JZ 0x00581b33                       ; 00581b2a
        ;   XREF to: 00581b33 (CONDITIONAL_JUMP)  ; LAB_00581b33
    ADD ESP,0x4                         ; 00581b2c
    POP EDI                             ; 00581b2f
    POP ESI                             ; 00581b30
    POP EBX                             ; 00581b31
    RET                                 ; 00581b32
    PUSH 0x5d7eb0                       ; 00581b33
        ;   Label: LAB_00581b33
    CALL crt_env.c_getenv_FUN_005a5ec0  ; 00581b38
        ;   XREF to: 005a5ec0 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_005a5ec0(char * name)
    ADD ESP,0x4                         ; 00581b3d
    TEST EAX,EAX                        ; 00581b40
    JZ 0x00581af3                       ; 00581b42
        ;   XREF to: 00581af3 (CONDITIONAL_JUMP)  ; LAB_00581af3
    MOV ESI,EAX                         ; 00581b44
    MOV EDI,EBX                         ; 00581b46
    PUSH EDI                            ; 00581b48
    MOV AL,byte ptr [ESI]               ; 00581b49
        ;   Label: LAB_00581b49
    MOV byte ptr [EDI],AL               ; 00581b4b
    CMP AL,0x0                          ; 00581b4d
    JZ 0x00581b61                       ; 00581b4f
        ;   XREF to: 00581b61 (CONDITIONAL_JUMP)  ; LAB_00581b61
    MOV AL,byte ptr [ESI + 0x1]         ; 00581b51
    ADD ESI,0x2                         ; 00581b54
    MOV byte ptr [EDI + 0x1],AL         ; 00581b57
    ADD EDI,0x2                         ; 00581b5a
    CMP AL,0x0                          ; 00581b5d
    JNZ 0x00581b49                      ; 00581b5f
        ;   XREF to: 00581b49 (CONDITIONAL_JUMP)  ; LAB_00581b49
    POP EDI                             ; 00581b61
        ;   Label: LAB_00581b61
    ADD ESP,0x4                         ; 00581b62
    POP EDI                             ; 00581b65
    POP ESI                             ; 00581b66
    POP EBX                             ; 00581b67
    RET                                 ; 00581b68

