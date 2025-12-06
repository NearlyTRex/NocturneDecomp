; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_game.cpp_CGame_FUN_004e0bf0(CGame * this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_FUN_00429870 at 0042994a
;   core_charactr.cpp_CCharacter_FUN_0042c3c0 at 0042c4ea
;   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 at 005e6b6d
;
; Called Functions:
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0bf0
        ;   Label: core_game.cpp_CGame_FUN_004e0bf0
    PUSH ESI                            ; 004e0bf1
    PUSH EDI                            ; 004e0bf2
    PUSH EBP                            ; 004e0bf3
    SUB ESP,0x4                         ; 004e0bf4
    MOV EBX,dword ptr [ESP + 0x18]      ; 004e0bf7
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004e0bfb
    FLD float ptr [ESP + 0x24]          ; 004e0bff
    FLDZ                                ; 004e0c03
    FCOMPP                              ; 004e0c05
    FNSTSW AX                           ; 004e0c07
    SAHF                                ; 004e0c09
    JNC 0x004e0c57                      ; 004e0c0a | LAB_004e0c57
        ;   XREF to: 004e0c57 (CONDITIONAL_JUMP)
    TEST EBP,EBP                        ; 004e0c0c
    JZ 0x004e0c57                       ; 004e0c0e | LAB_004e0c57
        ;   XREF to: 004e0c57 (CONDITIONAL_JUMP)
    CMP byte ptr [EBP],0x0              ; 004e0c10
    JZ 0x004e0c57                       ; 004e0c14 | LAB_004e0c57
        ;   XREF to: 004e0c57 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x38c]               ; 004e0c16
    MOV EDX,dword ptr [EBX + 0x388]     ; 004e0c1c
    XOR ESI,ESI                         ; 004e0c22
    MOV dword ptr [ESP],EAX             ; 004e0c24
    MOV EDI,EAX                         ; 004e0c27
    TEST EDX,EDX                        ; 004e0c29
    JLE 0x004e0c4c                      ; 004e0c2b | LAB_004e0c4c
        ;   XREF to: 004e0c4c (CONDITIONAL_JUMP)
    PUSH EBP                            ; 004e0c2d
        ;   Label: LAB_004e0c2d
    PUSH EDI                            ; 004e0c2e
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004e0c2f | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e0c34
    TEST EAX,EAX                        ; 004e0c37
    JZ 0x004e0c5f                       ; 004e0c39 | LAB_004e0c5f
        ;   XREF to: 004e0c5f (CONDITIONAL_JUMP)
    INC ESI                             ; 004e0c3b
    MOV ECX,dword ptr [EBX + 0x388]     ; 004e0c3c
    ADD EDI,0x100                       ; 004e0c42
    CMP ESI,ECX                         ; 004e0c48
    JL 0x004e0c2d                       ; 004e0c4a | LAB_004e0c2d
        ;   XREF to: 004e0c2d (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EBX + 0x388]     ; 004e0c4c
        ;   Label: LAB_004e0c4c
    CMP ESI,0x5                         ; 004e0c52
    JL 0x004e0c77                       ; 004e0c55 | LAB_004e0c77
        ;   XREF to: 004e0c77 (CONDITIONAL_JUMP)
    ADD ESP,0x4                         ; 004e0c57
        ;   Label: LAB_004e0c57
    POP EBP                             ; 004e0c5a
    POP EDI                             ; 004e0c5b
    POP ESI                             ; 004e0c5c
    POP EBX                             ; 004e0c5d
    RET                                 ; 004e0c5e
    MOV EAX,dword ptr [ESP + 0x20]      ; 004e0c5f
        ;   Label: LAB_004e0c5f
    MOV dword ptr [EBX + ESI*0x4 + 0x88c],EAX ; 004e0c63
    MOV EAX,dword ptr [ESP + 0x24]      ; 004e0c6a
    MOV dword ptr [EBX + ESI*0x4 + 0x8a0],EAX ; 004e0c6e
    JMP 0x004e0c57                      ; 004e0c75 | LAB_004e0c57
        ;   XREF to: 004e0c57 (UNCONDITIONAL_JUMP)
    MOV EDI,ESI                         ; 004e0c77
        ;   Label: LAB_004e0c77
    MOV EAX,dword ptr [ESP]             ; 004e0c79
    SHL EDI,0x8                         ; 004e0c7c
    MOV ESI,EBP                         ; 004e0c7f
    ADD EDI,EAX                         ; 004e0c81
    PUSH EDI                            ; 004e0c83
    MOV AL,byte ptr [ESI]               ; 004e0c84
        ;   Label: LAB_004e0c84
    MOV byte ptr [EDI],AL               ; 004e0c86
    CMP AL,0x0                          ; 004e0c88
    JZ 0x004e0c9c                       ; 004e0c8a | LAB_004e0c9c
        ;   XREF to: 004e0c9c (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004e0c8c
    ADD ESI,0x2                         ; 004e0c8f
    MOV byte ptr [EDI + 0x1],AL         ; 004e0c92
    ADD EDI,0x2                         ; 004e0c95
    CMP AL,0x0                          ; 004e0c98
    JNZ 0x004e0c84                      ; 004e0c9a | LAB_004e0c84
        ;   XREF to: 004e0c84 (CONDITIONAL_JUMP)
    POP EDI                             ; 004e0c9c
        ;   Label: LAB_004e0c9c
    MOV EAX,dword ptr [EBX + 0x388]     ; 004e0c9d
    MOV ESI,dword ptr [ESP + 0x20]      ; 004e0ca3
    MOV dword ptr [EBX + EAX*0x4 + 0x88c],ESI ; 004e0ca7
    MOV EAX,dword ptr [EBX + 0x388]     ; 004e0cae
    MOV ESI,dword ptr [ESP + 0x24]      ; 004e0cb4
    MOV dword ptr [EBX + EAX*0x4 + 0x8a0],ESI ; 004e0cb8
    INC dword ptr [EBX + 0x388]         ; 004e0cbf
    ADD ESP,0x4                         ; 004e0cc5
    POP EBP                             ; 004e0cc8
    POP EDI                             ; 004e0cc9
    POP ESI                             ; 004e0cca
    POP EBX                             ; 004e0ccb
    RET                                 ; 004e0ccc

