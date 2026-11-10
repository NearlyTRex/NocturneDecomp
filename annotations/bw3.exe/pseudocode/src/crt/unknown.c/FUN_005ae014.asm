; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005ae014(int *param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005ae418 at 005ae456
;
; Referenced Globals:
;   void* PTR_WriteFile_005b368c = 001b430e
;   TerminatedCString s_The_instruction_at_0x000_005da978
;   TerminatedCString s_The_instruction_at_0x000_005da9cc
;   TerminatedCString s_The_instruction_at_0x000_005daa20
;   TerminatedCString s_The_instruction_at_0x000_005daa74
;   TerminatedCString s_The_instruction_at_0x000_005daac8
;   TerminatedCString s_The_instruction_at_0x000_005dab1c
;   TerminatedCString s_The_instruction_at_0x000_005dab68
;   TerminatedCString s_The_instruction_at_0x000_005dabb8
;   TerminatedCString s_The_instruction_at_0x000_005dac10
;   TerminatedCString s_at_0x00000000_The_memory_005dac44
;   TerminatedCString s_read_005dac6c
;   TerminatedCString s_written_005dac74
;   TerminatedCString s_A_privileged_instruction_005dac80
;   TerminatedCString s_An_illegal_instruction_w_005dacc0
;   ... and 5 more
;
; Called Functions:
;   crt_unknown.c_FUN_005adf80
;   crt_unknown.c_FUN_005adfb8
;   crt_unknown.c_FUN_005afe5c
;   WriteFile
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ae014
        ;   Label: crt_unknown.c_FUN_005ae014
    PUSH ESI                            ; 005ae015
    PUSH EDI                            ; 005ae016
    PUSH EBP                            ; 005ae017
    SUB ESP,0x104                       ; 005ae018
    MOV EDI,dword ptr [ESP + 0x118]     ; 005ae01e
    MOV EBX,dword ptr [EDI]             ; 005ae025
    MOV EDI,dword ptr [EDI + 0x4]       ; 005ae027
    CALL crt_unknown.c_FUN_005adf80     ; 005ae02a
        ;   XREF to: 005adf80 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005adf80()
    TEST EAX,EAX                        ; 005ae02f
    JNZ 0x005ae03d                      ; 005ae031
        ;   XREF to: 005ae03d (CONDITIONAL_JUMP)  ; LAB_005ae03d
    CALL crt_unknown.c_FUN_005afe5c     ; 005ae033
        ;   XREF to: 005afe5c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005afe5c()
    CMP EAX,-0x1                        ; 005ae038
    JNZ 0x005ae044                      ; 005ae03b
        ;   XREF to: 005ae044 (CONDITIONAL_JUMP)  ; LAB_005ae044
    XOR EAX,EAX                         ; 005ae03d
        ;   Label: LAB_005ae03d
    JMP 0x005ae21e                      ; 005ae03f
        ;   XREF to: 005ae21e (UNCONDITIONAL_JUMP)  ; LAB_005ae21e
    XOR AH,AH                           ; 005ae044
        ;   Label: LAB_005ae044
    MOV byte ptr [ESP],AH               ; 005ae046
    MOV EAX,dword ptr [EBX]             ; 005ae049
    CMP EAX,0xc0000090                  ; 005ae04b
    JC 0x005ae09f                       ; 005ae050
        ;   XREF to: 005ae09f (CONDITIONAL_JUMP)  ; LAB_005ae09f
    JBE 0x005ae13a                      ; 005ae052
        ;   XREF to: 005ae13a (CONDITIONAL_JUMP)  ; LAB_005ae13a
    CMP EAX,0xc0000093                  ; 005ae058
    JC 0x005ae092                       ; 005ae05d
        ;   XREF to: 005ae092 (CONDITIONAL_JUMP)  ; LAB_005ae092
    JBE 0x005ae12c                      ; 005ae05f
        ;   XREF to: 005ae12c (CONDITIONAL_JUMP)  ; LAB_005ae12c
    CMP EAX,0xc0000096                  ; 005ae065
    JC 0x005ae082                       ; 005ae06a
        ;   XREF to: 005ae082 (CONDITIONAL_JUMP)  ; LAB_005ae082
    JBE 0x005ae18e                      ; 005ae06c
        ;   XREF to: 005ae18e (CONDITIONAL_JUMP)  ; LAB_005ae18e
    CMP EAX,0xc00000fd                  ; 005ae072
    JZ 0x005ae1af                       ; 005ae077
        ;   XREF to: 005ae1af (CONDITIONAL_JUMP)  ; LAB_005ae1af
    JMP 0x005ae1ba                      ; 005ae07d
        ;   XREF to: 005ae1ba (UNCONDITIONAL_JUMP)  ; LAB_005ae1ba
    CMP EAX,0xc0000094                  ; 005ae082
        ;   Label: LAB_005ae082
    JZ 0x005ae1a4                       ; 005ae087
        ;   XREF to: 005ae1a4 (CONDITIONAL_JUMP)  ; LAB_005ae1a4
    JMP 0x005ae1ba                      ; 005ae08d
        ;   XREF to: 005ae1ba (UNCONDITIONAL_JUMP)  ; LAB_005ae1ba
    CMP EAX,0xc0000091                  ; 005ae092
        ;   Label: LAB_005ae092
    JBE 0x005ae11e                      ; 005ae097
        ;   XREF to: 005ae11e (CONDITIONAL_JUMP)  ; LAB_005ae11e
    JMP 0x005ae0d2                      ; 005ae09d
        ;   XREF to: 005ae0d2 (UNCONDITIONAL_JUMP)  ; LAB_005ae0d2
    CMP EAX,0xc000008d                  ; 005ae09f
        ;   Label: LAB_005ae09f
    JC 0x005ae0b1                       ; 005ae0a4
        ;   XREF to: 005ae0b1 (CONDITIONAL_JUMP)  ; LAB_005ae0b1
    JBE 0x005ae0f4                      ; 005ae0a6
        ;   XREF to: 005ae0f4 (CONDITIONAL_JUMP)  ; LAB_005ae0f4
    CMP EAX,0xc000008e                  ; 005ae0a8
    JBE 0x005ae102                      ; 005ae0ad
        ;   XREF to: 005ae102 (CONDITIONAL_JUMP)  ; LAB_005ae102
    JMP 0x005ae110                      ; 005ae0af
        ;   XREF to: 005ae110 (UNCONDITIONAL_JUMP)  ; LAB_005ae110
    CMP EAX,0xc0000005                  ; 005ae0b1
        ;   Label: LAB_005ae0b1
    JC 0x005ae1ba                       ; 005ae0b6
        ;   XREF to: 005ae1ba (CONDITIONAL_JUMP)  ; LAB_005ae1ba
    JBE 0x005ae148                      ; 005ae0bc
        ;   XREF to: 005ae148 (CONDITIONAL_JUMP)  ; LAB_005ae148
    CMP EAX,0xc000001d                  ; 005ae0c2
    JZ 0x005ae199                       ; 005ae0c7
        ;   XREF to: 005ae199 (CONDITIONAL_JUMP)  ; LAB_005ae199
    JMP 0x005ae1ba                      ; 005ae0cd
        ;   XREF to: 005ae1ba (UNCONDITIONAL_JUMP)  ; LAB_005ae1ba
    TEST byte ptr [EDI + 0x21],0x2      ; 005ae0d2
        ;   Label: LAB_005ae0d2
    JZ 0x005ae0e6                       ; 005ae0d6
        ;   XREF to: 005ae0e6 (CONDITIONAL_JUMP)  ; LAB_005ae0e6
    MOV EAX,dword ptr [EBX + 0xc]       ; 005ae0d8
    PUSH EAX                            ; 005ae0db
    PUSH 0x5da978                       ; 005ae0dc | = "The instruction at 0x00000000 caused ..."
    JMP 0x005ae1d8                      ; 005ae0e1
        ;   XREF to: 005ae1d8 (UNCONDITIONAL_JUMP)  ; LAB_005ae1d8
    MOV EBP,dword ptr [EBX + 0xc]       ; 005ae0e6
        ;   Label: LAB_005ae0e6
    PUSH EBP                            ; 005ae0e9
    PUSH 0x5da9cc                       ; 005ae0ea | = "The instruction at 0x00000000 caused ..."
    JMP 0x005ae1d8                      ; 005ae0ef
        ;   XREF to: 005ae1d8 (UNCONDITIONAL_JUMP)  ; LAB_005ae1d8
    MOV EBP,dword ptr [EBX + 0xc]       ; 005ae0f4
        ;   Label: LAB_005ae0f4
    PUSH EBP                            ; 005ae0f7
    PUSH 0x5daa20                       ; 005ae0f8 | = "The instruction at 0x00000000 caused ..."
    JMP 0x005ae1d8                      ; 005ae0fd
        ;   XREF to: 005ae1d8 (UNCONDITIONAL_JUMP)  ; LAB_005ae1d8
    MOV EDI,dword ptr [EBX + 0xc]       ; 005ae102
        ;   Label: LAB_005ae102
    PUSH EDI                            ; 005ae105
    PUSH 0x5daa74                       ; 005ae106 | = "The instruction at 0x00000000 caused ..."
    JMP 0x005ae1d8                      ; 005ae10b
        ;   XREF to: 005ae1d8 (UNCONDITIONAL_JUMP)  ; LAB_005ae1d8
    MOV ESI,dword ptr [EBX + 0xc]       ; 005ae110
        ;   Label: LAB_005ae110
    PUSH ESI                            ; 005ae113
    PUSH 0x5daac8                       ; 005ae114 | = "The instruction at 0x00000000 caused ..."
    JMP 0x005ae1d8                      ; 005ae119
        ;   XREF to: 005ae1d8 (UNCONDITIONAL_JUMP)  ; LAB_005ae1d8
    MOV EDX,dword ptr [EBX + 0xc]       ; 005ae11e
        ;   Label: LAB_005ae11e
    PUSH EDX                            ; 005ae121
    PUSH 0x5dab1c                       ; 005ae122 | = "The instruction at 0x00000000 caused ..."
    JMP 0x005ae1d8                      ; 005ae127
        ;   XREF to: 005ae1d8 (UNCONDITIONAL_JUMP)  ; LAB_005ae1d8
    MOV EDI,dword ptr [EBX + 0xc]       ; 005ae12c
        ;   Label: LAB_005ae12c
    PUSH EDI                            ; 005ae12f
    PUSH 0x5dab68                       ; 005ae130 | = "The instruction at 0x00000000 caused ..."
    JMP 0x005ae1d8                      ; 005ae135
        ;   XREF to: 005ae1d8 (UNCONDITIONAL_JUMP)  ; LAB_005ae1d8
    MOV ECX,dword ptr [EBX + 0xc]       ; 005ae13a
        ;   Label: LAB_005ae13a
    PUSH ECX                            ; 005ae13d
    PUSH 0x5dabb8                       ; 005ae13e | = "The instruction at 0x00000000 caused ..."
    JMP 0x005ae1d8                      ; 005ae143
        ;   XREF to: 005ae1d8 (UNCONDITIONAL_JUMP)  ; LAB_005ae1d8
    MOV EDX,dword ptr [EBX + 0xc]       ; 005ae148
        ;   Label: LAB_005ae148
    PUSH EDX                            ; 005ae14b
    PUSH 0x5dac10                       ; 005ae14c | = "The instruction at 0x00000000 referen..."
    LEA EAX,[ESP + 0x8]                 ; 005ae151
    PUSH EAX                            ; 005ae155
    CALL crt_unknown.c_FUN_005adfb8     ; 005ae156
        ;   XREF to: 005adfb8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005adfb8()
    ADD ESP,0xc                         ; 005ae15b
    MOV ECX,dword ptr [EBX + 0x18]      ; 005ae15e
    PUSH ECX                            ; 005ae161
    PUSH 0x5dac44                       ; 005ae162 | = "at 0x00000000.\nThe memory could not be "
    LEA EAX,[ESP + 0x8]                 ; 005ae167
    PUSH EAX                            ; 005ae16b
    CALL crt_unknown.c_FUN_005adfb8     ; 005ae16c
        ;   XREF to: 005adfb8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005adfb8()
    MOV ESI,dword ptr [EBX + 0x14]      ; 005ae171
    ADD ESP,0xc                         ; 005ae174
    TEST ESI,ESI                        ; 005ae177
    JNZ 0x005ae184                      ; 005ae179
        ;   XREF to: 005ae184 (CONDITIONAL_JUMP)  ; LAB_005ae184
    PUSH ESI                            ; 005ae17b
    MOV EAX,0x5dac6c                    ; 005ae17c | = "read.\n"
    PUSH EAX                            ; 005ae181 | = "read.\n"
    JMP 0x005ae1d8                      ; 005ae182
        ;   XREF to: 005ae1d8 (UNCONDITIONAL_JUMP)  ; LAB_005ae1d8
    PUSH 0x0                            ; 005ae184
        ;   Label: LAB_005ae184
    MOV EAX,0x5dac74                    ; 005ae186 | = "written.\n"
    PUSH EAX                            ; 005ae18b | = "written.\n"
    JMP 0x005ae1d8                      ; 005ae18c
        ;   XREF to: 005ae1d8 (UNCONDITIONAL_JUMP)  ; LAB_005ae1d8
    MOV ECX,dword ptr [EBX + 0xc]       ; 005ae18e
        ;   Label: LAB_005ae18e
    PUSH ECX                            ; 005ae191
    PUSH 0x5dac80                       ; 005ae192 | = "A privileged instruction was executed..."
    JMP 0x005ae1d8                      ; 005ae197
        ;   XREF to: 005ae1d8 (UNCONDITIONAL_JUMP)  ; LAB_005ae1d8
    MOV EAX,dword ptr [EBX + 0xc]       ; 005ae199
        ;   Label: LAB_005ae199
    PUSH EAX                            ; 005ae19c
    PUSH 0x5dacc0                       ; 005ae19d | = "An illegal instruction was executed a..."
    JMP 0x005ae1d8                      ; 005ae1a2
        ;   XREF to: 005ae1d8 (UNCONDITIONAL_JUMP)  ; LAB_005ae1d8
    MOV ESI,dword ptr [EBX + 0xc]       ; 005ae1a4
        ;   Label: LAB_005ae1a4
    PUSH ESI                            ; 005ae1a7
    PUSH 0x5dacfc                       ; 005ae1a8 | = "An integer divide by zero was encount..."
    JMP 0x005ae1d8                      ; 005ae1ad
        ;   XREF to: 005ae1d8 (UNCONDITIONAL_JUMP)  ; LAB_005ae1d8
    MOV EDX,dword ptr [EBX + 0xc]       ; 005ae1af
        ;   Label: LAB_005ae1af
    PUSH EDX                            ; 005ae1b2
    PUSH 0x5dad40                       ; 005ae1b3 | = "A stack overflow was encountered at a..."
    JMP 0x005ae1d8                      ; 005ae1b8
        ;   XREF to: 005ae1d8 (UNCONDITIONAL_JUMP)  ; LAB_005ae1d8
    MOV EDI,dword ptr [EBX]             ; 005ae1ba
        ;   Label: LAB_005ae1ba
    PUSH EDI                            ; 005ae1bc
    PUSH 0x5dad7c                       ; 005ae1bd | = "The program encountered exception 0x0..."
    LEA EAX,[ESP + 0x8]                 ; 005ae1c2
    PUSH EAX                            ; 005ae1c6
    CALL crt_unknown.c_FUN_005adfb8     ; 005ae1c7
        ;   XREF to: 005adfb8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005adfb8()
    ADD ESP,0xc                         ; 005ae1cc
    MOV EBP,dword ptr [EBX + 0xc]       ; 005ae1cf
    PUSH EBP                            ; 005ae1d2
    PUSH 0x5dadb0                       ; 005ae1d3 | = "address 0x00000000 and\ncannot contin..."
    LEA EAX,[ESP + 0x8]                 ; 005ae1d8
        ;   Label: LAB_005ae1d8
    PUSH EAX                            ; 005ae1dc
    CALL crt_unknown.c_FUN_005adfb8     ; 005ae1dd
        ;   XREF to: 005adfb8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005adfb8()
    ADD ESP,0xc                         ; 005ae1e2
    PUSH 0x0                            ; 005ae1e5
    LEA EAX,[ESP + 0x104]               ; 005ae1e7
    PUSH EAX                            ; 005ae1ee
    LEA EDI,[ESP + 0x8]                 ; 005ae1ef
    PUSH ES                             ; 005ae1f3
    MOV AX,DS                           ; 005ae1f4
    MOV ES,AX                           ; 005ae1f6
    SUB ECX,ECX                         ; 005ae1f8
    DEC ECX                             ; 005ae1fa
    XOR EAX,EAX                         ; 005ae1fb
    SCASB.REPNE ES:EDI                  ; 005ae1fd
    NOT ECX                             ; 005ae1ff
    DEC ECX                             ; 005ae201
    POP ES                              ; 005ae202
    PUSH ECX                            ; 005ae203
    LEA EAX,[ESP + 0xc]                 ; 005ae204
    PUSH EAX                            ; 005ae208
    MOV EAX,[0x00607bdc]                ; 005ae209 | DAT_00607bdc
    MOV EDX,dword ptr [EAX + 0x8]       ; 005ae20e
    PUSH EDX                            ; 005ae211
    CALL dword ptr CS:[0x5b368c]        ; 005ae212 | PTR_WriteFile_005b368c
    MOV EAX,0x1                         ; 005ae219
    ADD ESP,0x104                       ; 005ae21e
        ;   Label: LAB_005ae21e
    POP EBP                             ; 005ae224
    POP EDI                             ; 005ae225
    POP ESI                             ; 005ae226
    POP EBX                             ; 005ae227
    RET 0x4                             ; 005ae228

