; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_script_cpp_FUN_00529a10(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_script.cpp_FUN_00522350 at 00524f15
;
; Referenced Globals:
;   undefined4 DAT_005e4df0
;   undefined4 DAT_005e4df3
;
; Called Functions:
;   crt_string.c__strnicmp_FUN_005b8da0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00529a10
        ;   Label: core_script.cpp_FUN_00529a10
    PUSH ESI                            ; 00529a11
    PUSH EDI                            ; 00529a12
    PUSH EBP                            ; 00529a13
    SUB ESP,0x4                         ; 00529a14
    MOV EBP,dword ptr [ESP + 0x18]      ; 00529a17
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00529a1b
    MOV EDX,0x1                         ; 00529a1f
    MOV ECX,dword ptr [EBP + 0x2c]      ; 00529a24
    XOR ESI,ESI                         ; 00529a27
    MOV dword ptr [ESP],EDX             ; 00529a29
    CMP EBX,ECX                         ; 00529a2c
    JGE 0x00529a50                      ; 00529a2e
        ;   XREF to: 00529a50 (CONDITIONAL_JUMP)  ; LAB_00529a50
    MOV EDI,dword ptr [EBP + 0x30]      ; 00529a30
        ;   Label: LAB_00529a30
    MOV EDI,dword ptr [EDI + EBX*0x8 + 0x4] ; 00529a33
    MOV AH,byte ptr [EDI]               ; 00529a37
    CMP AH,0x7b                         ; 00529a39
    JNZ 0x00529a5f                      ; 00529a3c
        ;   XREF to: 00529a5f (CONDITIONAL_JUMP)  ; LAB_00529a5f
    INC EBX                             ; 00529a3e
    INC ESI                             ; 00529a3f
    TEST EBX,EBX                        ; 00529a40
        ;   Label: LAB_00529a40
    JL 0x00529a50                       ; 00529a42
        ;   XREF to: 00529a50 (CONDITIONAL_JUMP)  ; LAB_00529a50
    XOR EDI,EDI                         ; 00529a44
    MOV EAX,dword ptr [EBP + 0x2c]      ; 00529a46
    MOV dword ptr [ESP],EDI             ; 00529a49
    CMP EBX,EAX                         ; 00529a4c
    JL 0x00529a30                       ; 00529a4e
        ;   XREF to: 00529a30 (CONDITIONAL_JUMP)  ; LAB_00529a30
    MOV EBX,0xffffffff                  ; 00529a50
        ;   Label: LAB_00529a50
    MOV EAX,EBX                         ; 00529a55
        ;   Label: LAB_00529a55
    ADD ESP,0x4                         ; 00529a57
    POP EBP                             ; 00529a5a
    POP EDI                             ; 00529a5b
    POP ESI                             ; 00529a5c
    POP EBX                             ; 00529a5d
    RET                                 ; 00529a5e
    CMP AH,0x7d                         ; 00529a5f
        ;   Label: LAB_00529a5f
    JNZ 0x00529a7d                      ; 00529a62
        ;   XREF to: 00529a7d (CONDITIONAL_JUMP)  ; LAB_00529a7d
    TEST ESI,ESI                        ; 00529a64
    JNZ 0x00529a79                      ; 00529a66
        ;   XREF to: 00529a79 (CONDITIONAL_JUMP)  ; LAB_00529a79
    CMP dword ptr [ESP],0x0             ; 00529a68
    JZ 0x00529a55                       ; 00529a6c
        ;   XREF to: 00529a55 (CONDITIONAL_JUMP)  ; LAB_00529a55
    INC EBX                             ; 00529a6e
    MOV EAX,EBX                         ; 00529a6f
    ADD ESP,0x4                         ; 00529a71
    POP EBP                             ; 00529a74
    POP EDI                             ; 00529a75
    POP ESI                             ; 00529a76
    POP EBX                             ; 00529a77
    RET                                 ; 00529a78
    INC EBX                             ; 00529a79
        ;   Label: LAB_00529a79
    DEC ESI                             ; 00529a7a
    JMP 0x00529a40                      ; 00529a7b
        ;   XREF to: 00529a40 (UNCONDITIONAL_JUMP)  ; LAB_00529a40
    TEST ESI,ESI                        ; 00529a7d
        ;   Label: LAB_00529a7d
    JG 0x00529a87                       ; 00529a7f
        ;   XREF to: 00529a87 (CONDITIONAL_JUMP)  ; LAB_00529a87
    CMP dword ptr [ESP],0x0             ; 00529a81
    JZ 0x00529a9b                       ; 00529a85
        ;   XREF to: 00529a9b (CONDITIONAL_JUMP)  ; LAB_00529a9b
    PUSH 0x2                            ; 00529a87
        ;   Label: LAB_00529a87
    PUSH 0x5e4df0                       ; 00529a89 | DAT_005e4df0
    PUSH EDI                            ; 00529a8e
    CALL crt_string.c__strnicmp_FUN_005b8da0 ; 00529a8f
        ;   XREF to: 005b8da0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005b8da0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00529a94
    TEST EAX,EAX                        ; 00529a97
    JZ 0x00529acf                       ; 00529a99
        ;   XREF to: 00529acf (CONDITIONAL_JUMP)  ; LAB_00529acf
    TEST ESI,ESI                        ; 00529a9b
        ;   Label: LAB_00529a9b
    JG 0x00529aa6                       ; 00529a9d
        ;   XREF to: 00529aa6 (CONDITIONAL_JUMP)  ; LAB_00529aa6
    CMP dword ptr [ESP + 0x20],0x0      ; 00529a9f
    JZ 0x00529aba                       ; 00529aa4
        ;   XREF to: 00529aba (CONDITIONAL_JUMP)  ; LAB_00529aba
    PUSH 0x4                            ; 00529aa6
        ;   Label: LAB_00529aa6
    PUSH 0x5e4df3                       ; 00529aa8 | DAT_005e4df3
    PUSH EDI                            ; 00529aad
    CALL crt_string.c__strnicmp_FUN_005b8da0 ; 00529aae
        ;   XREF to: 005b8da0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005b8da0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00529ab3
    TEST EAX,EAX                        ; 00529ab6
    JZ 0x00529ae3                       ; 00529ab8
        ;   XREF to: 00529ae3 (CONDITIONAL_JUMP)  ; LAB_00529ae3
    TEST ESI,ESI                        ; 00529aba
        ;   Label: LAB_00529aba
    JNZ 0x00529af7                      ; 00529abc
        ;   XREF to: 00529af7 (CONDITIONAL_JUMP)  ; LAB_00529af7
    CMP dword ptr [ESP],0x0             ; 00529abe
    JZ 0x00529a55                       ; 00529ac2
        ;   XREF to: 00529a55 (CONDITIONAL_JUMP)  ; LAB_00529a55
    INC EBX                             ; 00529ac4
    MOV EAX,EBX                         ; 00529ac5
    ADD ESP,0x4                         ; 00529ac7
    POP EBP                             ; 00529aca
    POP EDI                             ; 00529acb
    POP ESI                             ; 00529acc
    POP EBX                             ; 00529acd
    RET                                 ; 00529ace
    PUSH 0x1                            ; 00529acf
        ;   Label: LAB_00529acf
    INC EBX                             ; 00529ad1
    PUSH EBX                            ; 00529ad2
    PUSH EBP                            ; 00529ad3
    CALL core_script.cpp_FUN_00529a10   ; 00529ad4
        ;   XREF to: 00529a10 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00529a10()
    MOV EBX,EAX                         ; 00529ad9
    ADD ESP,0xc                         ; 00529adb
    JMP 0x00529a40                      ; 00529ade
        ;   XREF to: 00529a40 (UNCONDITIONAL_JUMP)  ; LAB_00529a40
    PUSH 0x1                            ; 00529ae3
        ;   Label: LAB_00529ae3
    INC EBX                             ; 00529ae5
    PUSH EBX                            ; 00529ae6
    PUSH EBP                            ; 00529ae7
    CALL core_script.cpp_FUN_00529a10   ; 00529ae8
        ;   XREF to: 00529a10 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00529a10()
    ADD ESP,0xc                         ; 00529aed
    MOV EBX,EAX                         ; 00529af0
    JMP 0x00529a40                      ; 00529af2
        ;   XREF to: 00529a40 (UNCONDITIONAL_JUMP)  ; LAB_00529a40
    INC EBX                             ; 00529af7
        ;   Label: LAB_00529af7
    JMP 0x00529a40                      ; 00529af8
        ;   XREF to: 00529a40 (UNCONDITIONAL_JUMP)  ; LAB_00529a40

