; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c2ea4(int *param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c32a8 at 005c32e6
;
; Referenced Globals:
;   void* PTR_WriteFile_005c8678 = 001c92cc
;   TerminatedCString s_The_instruction_at_0x000_005f1b14
;   TerminatedCString s_The_instruction_at_0x000_005f1b68
;   TerminatedCString s_The_instruction_at_0x000_005f1bbc
;   TerminatedCString s_The_instruction_at_0x000_005f1c10
;   TerminatedCString s_The_instruction_at_0x000_005f1c64
;   TerminatedCString s_The_instruction_at_0x000_005f1cb8
;   TerminatedCString s_The_instruction_at_0x000_005f1d04
;   TerminatedCString s_The_instruction_at_0x000_005f1d54
;   TerminatedCString s_The_instruction_at_0x000_005f1dac
;   TerminatedCString s_at_0x00000000_The_memory_005f1de0
;   TerminatedCString s_read_005f1e08
;   TerminatedCString s_written_005f1e10
;   TerminatedCString s_A_privileged_instruction_005f1e1c
;   TerminatedCString s_An_illegal_instruction_w_005f1e5c
;   ... and 5 more
;
; Called Functions:
;   crt_unknown.c_FUN_005c2e10
;   crt_unknown.c_FUN_005c2e48
;   crt_unknown.c_FUN_005c4dcc
;   WriteFile
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2ea4
        ;   Label: crt_unknown.c_FUN_005c2ea4
    PUSH ESI                            ; 005c2ea5
    PUSH EDI                            ; 005c2ea6
    PUSH EBP                            ; 005c2ea7
    SUB ESP,0x104                       ; 005c2ea8
    MOV EDI,dword ptr [ESP + 0x118]     ; 005c2eae
    MOV EBX,dword ptr [EDI]             ; 005c2eb5
    MOV EDI,dword ptr [EDI + 0x4]       ; 005c2eb7
    CALL crt_unknown.c_FUN_005c2e10     ; 005c2eba
        ;   XREF to: 005c2e10 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2e10()
    TEST EAX,EAX                        ; 005c2ebf
    JNZ 0x005c2ecd                      ; 005c2ec1
        ;   XREF to: 005c2ecd (CONDITIONAL_JUMP)  ; LAB_005c2ecd
    CALL crt_unknown.c_FUN_005c4dcc     ; 005c2ec3
        ;   XREF to: 005c4dcc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c4dcc()
    CMP EAX,-0x1                        ; 005c2ec8
    JNZ 0x005c2ed4                      ; 005c2ecb
        ;   XREF to: 005c2ed4 (CONDITIONAL_JUMP)  ; LAB_005c2ed4
    XOR EAX,EAX                         ; 005c2ecd
        ;   Label: LAB_005c2ecd
    JMP 0x005c30ae                      ; 005c2ecf
        ;   XREF to: 005c30ae (UNCONDITIONAL_JUMP)  ; LAB_005c30ae
    XOR AH,AH                           ; 005c2ed4
        ;   Label: LAB_005c2ed4
    MOV byte ptr [ESP],AH               ; 005c2ed6
    MOV EAX,dword ptr [EBX]             ; 005c2ed9
    CMP EAX,0xc0000090                  ; 005c2edb
    JC 0x005c2f2f                       ; 005c2ee0
        ;   XREF to: 005c2f2f (CONDITIONAL_JUMP)  ; LAB_005c2f2f
    JBE 0x005c2fca                      ; 005c2ee2
        ;   XREF to: 005c2fca (CONDITIONAL_JUMP)  ; LAB_005c2fca
    CMP EAX,0xc0000093                  ; 005c2ee8
    JC 0x005c2f22                       ; 005c2eed
        ;   XREF to: 005c2f22 (CONDITIONAL_JUMP)  ; LAB_005c2f22
    JBE 0x005c2fbc                      ; 005c2eef
        ;   XREF to: 005c2fbc (CONDITIONAL_JUMP)  ; LAB_005c2fbc
    CMP EAX,0xc0000096                  ; 005c2ef5
    JC 0x005c2f12                       ; 005c2efa
        ;   XREF to: 005c2f12 (CONDITIONAL_JUMP)  ; LAB_005c2f12
    JBE 0x005c301e                      ; 005c2efc
        ;   XREF to: 005c301e (CONDITIONAL_JUMP)  ; LAB_005c301e
    CMP EAX,0xc00000fd                  ; 005c2f02
    JZ 0x005c303f                       ; 005c2f07
        ;   XREF to: 005c303f (CONDITIONAL_JUMP)  ; LAB_005c303f
    JMP 0x005c304a                      ; 005c2f0d
        ;   XREF to: 005c304a (UNCONDITIONAL_JUMP)  ; LAB_005c304a
    CMP EAX,0xc0000094                  ; 005c2f12
        ;   Label: LAB_005c2f12
    JZ 0x005c3034                       ; 005c2f17
        ;   XREF to: 005c3034 (CONDITIONAL_JUMP)  ; LAB_005c3034
    JMP 0x005c304a                      ; 005c2f1d
        ;   XREF to: 005c304a (UNCONDITIONAL_JUMP)  ; LAB_005c304a
    CMP EAX,0xc0000091                  ; 005c2f22
        ;   Label: LAB_005c2f22
    JBE 0x005c2fae                      ; 005c2f27
        ;   XREF to: 005c2fae (CONDITIONAL_JUMP)  ; LAB_005c2fae
    JMP 0x005c2f62                      ; 005c2f2d
        ;   XREF to: 005c2f62 (UNCONDITIONAL_JUMP)  ; LAB_005c2f62
    CMP EAX,0xc000008d                  ; 005c2f2f
        ;   Label: LAB_005c2f2f
    JC 0x005c2f41                       ; 005c2f34
        ;   XREF to: 005c2f41 (CONDITIONAL_JUMP)  ; LAB_005c2f41
    JBE 0x005c2f84                      ; 005c2f36
        ;   XREF to: 005c2f84 (CONDITIONAL_JUMP)  ; LAB_005c2f84
    CMP EAX,0xc000008e                  ; 005c2f38
    JBE 0x005c2f92                      ; 005c2f3d
        ;   XREF to: 005c2f92 (CONDITIONAL_JUMP)  ; LAB_005c2f92
    JMP 0x005c2fa0                      ; 005c2f3f
        ;   XREF to: 005c2fa0 (UNCONDITIONAL_JUMP)  ; LAB_005c2fa0
    CMP EAX,0xc0000005                  ; 005c2f41
        ;   Label: LAB_005c2f41
    JC 0x005c304a                       ; 005c2f46
        ;   XREF to: 005c304a (CONDITIONAL_JUMP)  ; LAB_005c304a
    JBE 0x005c2fd8                      ; 005c2f4c
        ;   XREF to: 005c2fd8 (CONDITIONAL_JUMP)  ; LAB_005c2fd8
    CMP EAX,0xc000001d                  ; 005c2f52
    JZ 0x005c3029                       ; 005c2f57
        ;   XREF to: 005c3029 (CONDITIONAL_JUMP)  ; LAB_005c3029
    JMP 0x005c304a                      ; 005c2f5d
        ;   XREF to: 005c304a (UNCONDITIONAL_JUMP)  ; LAB_005c304a
    TEST byte ptr [EDI + 0x21],0x2      ; 005c2f62
        ;   Label: LAB_005c2f62
    JZ 0x005c2f76                       ; 005c2f66
        ;   XREF to: 005c2f76 (CONDITIONAL_JUMP)  ; LAB_005c2f76
    MOV EAX,dword ptr [EBX + 0xc]       ; 005c2f68
    PUSH EAX                            ; 005c2f6b
    PUSH 0x5f1b14                       ; 005c2f6c | = "The instruction at 0x00000000 caused ..."
    JMP 0x005c3068                      ; 005c2f71
        ;   XREF to: 005c3068 (UNCONDITIONAL_JUMP)  ; LAB_005c3068
    MOV EBP,dword ptr [EBX + 0xc]       ; 005c2f76
        ;   Label: LAB_005c2f76
    PUSH EBP                            ; 005c2f79
    PUSH 0x5f1b68                       ; 005c2f7a | = "The instruction at 0x00000000 caused ..."
    JMP 0x005c3068                      ; 005c2f7f
        ;   XREF to: 005c3068 (UNCONDITIONAL_JUMP)  ; LAB_005c3068
    MOV EBP,dword ptr [EBX + 0xc]       ; 005c2f84
        ;   Label: LAB_005c2f84
    PUSH EBP                            ; 005c2f87
    PUSH 0x5f1bbc                       ; 005c2f88 | = "The instruction at 0x00000000 caused ..."
    JMP 0x005c3068                      ; 005c2f8d
        ;   XREF to: 005c3068 (UNCONDITIONAL_JUMP)  ; LAB_005c3068
    MOV EDI,dword ptr [EBX + 0xc]       ; 005c2f92
        ;   Label: LAB_005c2f92
    PUSH EDI                            ; 005c2f95
    PUSH 0x5f1c10                       ; 005c2f96 | = "The instruction at 0x00000000 caused ..."
    JMP 0x005c3068                      ; 005c2f9b
        ;   XREF to: 005c3068 (UNCONDITIONAL_JUMP)  ; LAB_005c3068
    MOV ESI,dword ptr [EBX + 0xc]       ; 005c2fa0
        ;   Label: LAB_005c2fa0
    PUSH ESI                            ; 005c2fa3
    PUSH 0x5f1c64                       ; 005c2fa4 | = "The instruction at 0x00000000 caused ..."
    JMP 0x005c3068                      ; 005c2fa9
        ;   XREF to: 005c3068 (UNCONDITIONAL_JUMP)  ; LAB_005c3068
    MOV EDX,dword ptr [EBX + 0xc]       ; 005c2fae
        ;   Label: LAB_005c2fae
    PUSH EDX                            ; 005c2fb1
    PUSH 0x5f1cb8                       ; 005c2fb2 | = "The instruction at 0x00000000 caused ..."
    JMP 0x005c3068                      ; 005c2fb7
        ;   XREF to: 005c3068 (UNCONDITIONAL_JUMP)  ; LAB_005c3068
    MOV EDI,dword ptr [EBX + 0xc]       ; 005c2fbc
        ;   Label: LAB_005c2fbc
    PUSH EDI                            ; 005c2fbf
    PUSH 0x5f1d04                       ; 005c2fc0 | = "The instruction at 0x00000000 caused ..."
    JMP 0x005c3068                      ; 005c2fc5
        ;   XREF to: 005c3068 (UNCONDITIONAL_JUMP)  ; LAB_005c3068
    MOV ECX,dword ptr [EBX + 0xc]       ; 005c2fca
        ;   Label: LAB_005c2fca
    PUSH ECX                            ; 005c2fcd
    PUSH 0x5f1d54                       ; 005c2fce | = "The instruction at 0x00000000 caused ..."
    JMP 0x005c3068                      ; 005c2fd3
        ;   XREF to: 005c3068 (UNCONDITIONAL_JUMP)  ; LAB_005c3068
    MOV EDX,dword ptr [EBX + 0xc]       ; 005c2fd8
        ;   Label: LAB_005c2fd8
    PUSH EDX                            ; 005c2fdb
    PUSH 0x5f1dac                       ; 005c2fdc | = "The instruction at 0x00000000 referen..."
    LEA EAX,[ESP + 0x8]                 ; 005c2fe1
    PUSH EAX                            ; 005c2fe5
    CALL crt_unknown.c_FUN_005c2e48     ; 005c2fe6
        ;   XREF to: 005c2e48 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2e48()
    ADD ESP,0xc                         ; 005c2feb
    MOV ECX,dword ptr [EBX + 0x18]      ; 005c2fee
    PUSH ECX                            ; 005c2ff1
    PUSH 0x5f1de0                       ; 005c2ff2 | = "at 0x00000000.\nThe memory could not be "
    LEA EAX,[ESP + 0x8]                 ; 005c2ff7
    PUSH EAX                            ; 005c2ffb
    CALL crt_unknown.c_FUN_005c2e48     ; 005c2ffc
        ;   XREF to: 005c2e48 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2e48()
    MOV ESI,dword ptr [EBX + 0x14]      ; 005c3001
    ADD ESP,0xc                         ; 005c3004
    TEST ESI,ESI                        ; 005c3007
    JNZ 0x005c3014                      ; 005c3009
        ;   XREF to: 005c3014 (CONDITIONAL_JUMP)  ; LAB_005c3014
    PUSH ESI                            ; 005c300b
    MOV EAX,0x5f1e08                    ; 005c300c | = "read.\n"
    PUSH EAX                            ; 005c3011 | = "read.\n"
    JMP 0x005c3068                      ; 005c3012
        ;   XREF to: 005c3068 (UNCONDITIONAL_JUMP)  ; LAB_005c3068
    PUSH 0x0                            ; 005c3014
        ;   Label: LAB_005c3014
    MOV EAX,0x5f1e10                    ; 005c3016 | = "written.\n"
    PUSH EAX                            ; 005c301b | = "written.\n"
    JMP 0x005c3068                      ; 005c301c
        ;   XREF to: 005c3068 (UNCONDITIONAL_JUMP)  ; LAB_005c3068
    MOV ECX,dword ptr [EBX + 0xc]       ; 005c301e
        ;   Label: LAB_005c301e
    PUSH ECX                            ; 005c3021
    PUSH 0x5f1e1c                       ; 005c3022 | = "A privileged instruction was executed..."
    JMP 0x005c3068                      ; 005c3027
        ;   XREF to: 005c3068 (UNCONDITIONAL_JUMP)  ; LAB_005c3068
    MOV EAX,dword ptr [EBX + 0xc]       ; 005c3029
        ;   Label: LAB_005c3029
    PUSH EAX                            ; 005c302c
    PUSH 0x5f1e5c                       ; 005c302d | = "An illegal instruction was executed a..."
    JMP 0x005c3068                      ; 005c3032
        ;   XREF to: 005c3068 (UNCONDITIONAL_JUMP)  ; LAB_005c3068
    MOV ESI,dword ptr [EBX + 0xc]       ; 005c3034
        ;   Label: LAB_005c3034
    PUSH ESI                            ; 005c3037
    PUSH 0x5f1e98                       ; 005c3038 | = "An integer divide by zero was encount..."
    JMP 0x005c3068                      ; 005c303d
        ;   XREF to: 005c3068 (UNCONDITIONAL_JUMP)  ; LAB_005c3068
    MOV EDX,dword ptr [EBX + 0xc]       ; 005c303f
        ;   Label: LAB_005c303f
    PUSH EDX                            ; 005c3042
    PUSH 0x5f1edc                       ; 005c3043 | = "A stack overflow was encountered at a..."
    JMP 0x005c3068                      ; 005c3048
        ;   XREF to: 005c3068 (UNCONDITIONAL_JUMP)  ; LAB_005c3068
    MOV EDI,dword ptr [EBX]             ; 005c304a
        ;   Label: LAB_005c304a
    PUSH EDI                            ; 005c304c
    PUSH 0x5f1f18                       ; 005c304d | = "The program encountered exception 0x0..."
    LEA EAX,[ESP + 0x8]                 ; 005c3052
    PUSH EAX                            ; 005c3056
    CALL crt_unknown.c_FUN_005c2e48     ; 005c3057
        ;   XREF to: 005c2e48 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2e48()
    ADD ESP,0xc                         ; 005c305c
    MOV EBP,dword ptr [EBX + 0xc]       ; 005c305f
    PUSH EBP                            ; 005c3062
    PUSH 0x5f1f4c                       ; 005c3063 | = "address 0x00000000 and\ncannot contin..."
    LEA EAX,[ESP + 0x8]                 ; 005c3068
        ;   Label: LAB_005c3068
    PUSH EAX                            ; 005c306c
    CALL crt_unknown.c_FUN_005c2e48     ; 005c306d
        ;   XREF to: 005c2e48 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2e48()
    ADD ESP,0xc                         ; 005c3072
    PUSH 0x0                            ; 005c3075
    LEA EAX,[ESP + 0x104]               ; 005c3077
    PUSH EAX                            ; 005c307e
    LEA EDI,[ESP + 0x8]                 ; 005c307f
    PUSH ES                             ; 005c3083
    MOV AX,DS                           ; 005c3084
    MOV ES,AX                           ; 005c3086
    SUB ECX,ECX                         ; 005c3088
    DEC ECX                             ; 005c308a
    XOR EAX,EAX                         ; 005c308b
    SCASB.REPNE ES:EDI                  ; 005c308d
    NOT ECX                             ; 005c308f
    DEC ECX                             ; 005c3091
    POP ES                              ; 005c3092
    PUSH ECX                            ; 005c3093
    LEA EAX,[ESP + 0xc]                 ; 005c3094
    PUSH EAX                            ; 005c3098
    MOV EAX,[0x0061f4d8]                ; 005c3099 | DAT_0061f4d8
    MOV EDX,dword ptr [EAX + 0x8]       ; 005c309e
    PUSH EDX                            ; 005c30a1
    CALL dword ptr CS:[0x5c8678]        ; 005c30a2 | PTR_WriteFile_005c8678
    MOV EAX,0x1                         ; 005c30a9
    ADD ESP,0x104                       ; 005c30ae
        ;   Label: LAB_005c30ae
    POP EBP                             ; 005c30b4
    POP EDI                             ; 005c30b5
    POP ESI                             ; 005c30b6
    POP EBX                             ; 005c30b7
    RET 0x4                             ; 005c30b8

