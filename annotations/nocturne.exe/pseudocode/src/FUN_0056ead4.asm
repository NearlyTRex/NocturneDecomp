; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0056ead4(int *param_1)
;
; Local Variables:
; undefined1       Stack[-0x114]:1  local_114
; undefined        Stack[-0x14]:1  local_14
;
; XREF[1]:
;   FUN_0056eed8 at 0056ef16
;
; Referenced Globals:
;   void* PTR_WriteFile_005755ec = 0017613e
;   TerminatedCString s_The_instruction_at_0x000_00598c80
;   TerminatedCString s_The_instruction_at_0x000_00598cd4
;   TerminatedCString s_The_instruction_at_0x000_00598d28
;   TerminatedCString s_The_instruction_at_0x000_00598d7c
;   TerminatedCString s_The_instruction_at_0x000_00598dd0
;   TerminatedCString s_The_instruction_at_0x000_00598e24
;   TerminatedCString s_The_instruction_at_0x000_00598e70
;   TerminatedCString s_The_instruction_at_0x000_00598ec0
;   TerminatedCString s_The_instruction_at_0x000_00598f18
;   TerminatedCString s_at_0x00000000_The_memory_00598f4c
;   TerminatedCString s_read_00598f74
;   TerminatedCString s_written_00598f7c
;   TerminatedCString s_A_privileged_instruction_00598f88
;   TerminatedCString s_An_illegal_instruction_w_00598fc8
;   ... and 5 more
;
; Called Functions:
;   FUN_0056ea40
;   FUN_0056ea78
;   FUN_005714ec
;   WriteFile
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056ead4
        ;   Label: FUN_0056ead4
    PUSH ESI                            ; 0056ead5
    PUSH EDI                            ; 0056ead6
    PUSH EBP                            ; 0056ead7
    SUB ESP,0x104                       ; 0056ead8
    MOV EDI,dword ptr [ESP + 0x118]     ; 0056eade
    MOV EBX,dword ptr [EDI]             ; 0056eae5
    MOV EDI,dword ptr [EDI + 0x4]       ; 0056eae7
    CALL FUN_0056ea40                   ; 0056eaea
        ;   XREF to: 0056ea40 (UNCONDITIONAL_CALL)  ; undefined FUN_0056ea40()
    TEST EAX,EAX                        ; 0056eaef
    JNZ 0x0056eafd                      ; 0056eaf1
        ;   XREF to: 0056eafd (CONDITIONAL_JUMP)  ; LAB_0056eafd
    CALL FUN_005714ec                   ; 0056eaf3
        ;   XREF to: 005714ec (UNCONDITIONAL_CALL)  ; undefined FUN_005714ec()
    CMP EAX,-0x1                        ; 0056eaf8
    JNZ 0x0056eb04                      ; 0056eafb
        ;   XREF to: 0056eb04 (CONDITIONAL_JUMP)  ; LAB_0056eb04
    XOR EAX,EAX                         ; 0056eafd
        ;   Label: LAB_0056eafd
    JMP 0x0056ecde                      ; 0056eaff
        ;   XREF to: 0056ecde (UNCONDITIONAL_JUMP)  ; LAB_0056ecde
    XOR AH,AH                           ; 0056eb04
        ;   Label: LAB_0056eb04
    MOV byte ptr [ESP],AH               ; 0056eb06
    MOV EAX,dword ptr [EBX]             ; 0056eb09
    CMP EAX,0xc0000090                  ; 0056eb0b
    JC 0x0056eb5f                       ; 0056eb10
        ;   XREF to: 0056eb5f (CONDITIONAL_JUMP)  ; LAB_0056eb5f
    JBE 0x0056ebfa                      ; 0056eb12
        ;   XREF to: 0056ebfa (CONDITIONAL_JUMP)  ; LAB_0056ebfa
    CMP EAX,0xc0000093                  ; 0056eb18
    JC 0x0056eb52                       ; 0056eb1d
        ;   XREF to: 0056eb52 (CONDITIONAL_JUMP)  ; LAB_0056eb52
    JBE 0x0056ebec                      ; 0056eb1f
        ;   XREF to: 0056ebec (CONDITIONAL_JUMP)  ; LAB_0056ebec
    CMP EAX,0xc0000096                  ; 0056eb25
    JC 0x0056eb42                       ; 0056eb2a
        ;   XREF to: 0056eb42 (CONDITIONAL_JUMP)  ; LAB_0056eb42
    JBE 0x0056ec4e                      ; 0056eb2c
        ;   XREF to: 0056ec4e (CONDITIONAL_JUMP)  ; LAB_0056ec4e
    CMP EAX,0xc00000fd                  ; 0056eb32
    JZ 0x0056ec6f                       ; 0056eb37
        ;   XREF to: 0056ec6f (CONDITIONAL_JUMP)  ; LAB_0056ec6f
    JMP 0x0056ec7a                      ; 0056eb3d
        ;   XREF to: 0056ec7a (UNCONDITIONAL_JUMP)  ; LAB_0056ec7a
    CMP EAX,0xc0000094                  ; 0056eb42
        ;   Label: LAB_0056eb42
    JZ 0x0056ec64                       ; 0056eb47
        ;   XREF to: 0056ec64 (CONDITIONAL_JUMP)  ; LAB_0056ec64
    JMP 0x0056ec7a                      ; 0056eb4d
        ;   XREF to: 0056ec7a (UNCONDITIONAL_JUMP)  ; LAB_0056ec7a
    CMP EAX,0xc0000091                  ; 0056eb52
        ;   Label: LAB_0056eb52
    JBE 0x0056ebde                      ; 0056eb57
        ;   XREF to: 0056ebde (CONDITIONAL_JUMP)  ; LAB_0056ebde
    JMP 0x0056eb92                      ; 0056eb5d
        ;   XREF to: 0056eb92 (UNCONDITIONAL_JUMP)  ; LAB_0056eb92
    CMP EAX,0xc000008d                  ; 0056eb5f
        ;   Label: LAB_0056eb5f
    JC 0x0056eb71                       ; 0056eb64
        ;   XREF to: 0056eb71 (CONDITIONAL_JUMP)  ; LAB_0056eb71
    JBE 0x0056ebb4                      ; 0056eb66
        ;   XREF to: 0056ebb4 (CONDITIONAL_JUMP)  ; LAB_0056ebb4
    CMP EAX,0xc000008e                  ; 0056eb68
    JBE 0x0056ebc2                      ; 0056eb6d
        ;   XREF to: 0056ebc2 (CONDITIONAL_JUMP)  ; LAB_0056ebc2
    JMP 0x0056ebd0                      ; 0056eb6f
        ;   XREF to: 0056ebd0 (UNCONDITIONAL_JUMP)  ; LAB_0056ebd0
    CMP EAX,0xc0000005                  ; 0056eb71
        ;   Label: LAB_0056eb71
    JC 0x0056ec7a                       ; 0056eb76
        ;   XREF to: 0056ec7a (CONDITIONAL_JUMP)  ; LAB_0056ec7a
    JBE 0x0056ec08                      ; 0056eb7c
        ;   XREF to: 0056ec08 (CONDITIONAL_JUMP)  ; LAB_0056ec08
    CMP EAX,0xc000001d                  ; 0056eb82
    JZ 0x0056ec59                       ; 0056eb87
        ;   XREF to: 0056ec59 (CONDITIONAL_JUMP)  ; LAB_0056ec59
    JMP 0x0056ec7a                      ; 0056eb8d
        ;   XREF to: 0056ec7a (UNCONDITIONAL_JUMP)  ; LAB_0056ec7a
    TEST byte ptr [EDI + 0x21],0x2      ; 0056eb92
        ;   Label: LAB_0056eb92
    JZ 0x0056eba6                       ; 0056eb96
        ;   XREF to: 0056eba6 (CONDITIONAL_JUMP)  ; LAB_0056eba6
    MOV EAX,dword ptr [EBX + 0xc]       ; 0056eb98
    PUSH EAX                            ; 0056eb9b
    PUSH 0x598c80                       ; 0056eb9c | = "The instruction at 0x00000000 caused ..."
    JMP 0x0056ec98                      ; 0056eba1
        ;   XREF to: 0056ec98 (UNCONDITIONAL_JUMP)  ; LAB_0056ec98
    MOV EBP,dword ptr [EBX + 0xc]       ; 0056eba6
        ;   Label: LAB_0056eba6
    PUSH EBP                            ; 0056eba9
    PUSH 0x598cd4                       ; 0056ebaa | = "The instruction at 0x00000000 caused ..."
    JMP 0x0056ec98                      ; 0056ebaf
        ;   XREF to: 0056ec98 (UNCONDITIONAL_JUMP)  ; LAB_0056ec98
    MOV EBP,dword ptr [EBX + 0xc]       ; 0056ebb4
        ;   Label: LAB_0056ebb4
    PUSH EBP                            ; 0056ebb7
    PUSH 0x598d28                       ; 0056ebb8 | = "The instruction at 0x00000000 caused ..."
    JMP 0x0056ec98                      ; 0056ebbd
        ;   XREF to: 0056ec98 (UNCONDITIONAL_JUMP)  ; LAB_0056ec98
    MOV EDI,dword ptr [EBX + 0xc]       ; 0056ebc2
        ;   Label: LAB_0056ebc2
    PUSH EDI                            ; 0056ebc5
    PUSH 0x598d7c                       ; 0056ebc6 | = "The instruction at 0x00000000 caused ..."
    JMP 0x0056ec98                      ; 0056ebcb
        ;   XREF to: 0056ec98 (UNCONDITIONAL_JUMP)  ; LAB_0056ec98
    MOV ESI,dword ptr [EBX + 0xc]       ; 0056ebd0
        ;   Label: LAB_0056ebd0
    PUSH ESI                            ; 0056ebd3
    PUSH 0x598dd0                       ; 0056ebd4 | = "The instruction at 0x00000000 caused ..."
    JMP 0x0056ec98                      ; 0056ebd9
        ;   XREF to: 0056ec98 (UNCONDITIONAL_JUMP)  ; LAB_0056ec98
    MOV EDX,dword ptr [EBX + 0xc]       ; 0056ebde
        ;   Label: LAB_0056ebde
    PUSH EDX                            ; 0056ebe1
    PUSH 0x598e24                       ; 0056ebe2 | = "The instruction at 0x00000000 caused ..."
    JMP 0x0056ec98                      ; 0056ebe7
        ;   XREF to: 0056ec98 (UNCONDITIONAL_JUMP)  ; LAB_0056ec98
    MOV EDI,dword ptr [EBX + 0xc]       ; 0056ebec
        ;   Label: LAB_0056ebec
    PUSH EDI                            ; 0056ebef
    PUSH 0x598e70                       ; 0056ebf0 | = "The instruction at 0x00000000 caused ..."
    JMP 0x0056ec98                      ; 0056ebf5
        ;   XREF to: 0056ec98 (UNCONDITIONAL_JUMP)  ; LAB_0056ec98
    MOV ECX,dword ptr [EBX + 0xc]       ; 0056ebfa
        ;   Label: LAB_0056ebfa
    PUSH ECX                            ; 0056ebfd
    PUSH 0x598ec0                       ; 0056ebfe | = "The instruction at 0x00000000 caused ..."
    JMP 0x0056ec98                      ; 0056ec03
        ;   XREF to: 0056ec98 (UNCONDITIONAL_JUMP)  ; LAB_0056ec98
    MOV EDX,dword ptr [EBX + 0xc]       ; 0056ec08
        ;   Label: LAB_0056ec08
    PUSH EDX                            ; 0056ec0b
    PUSH 0x598f18                       ; 0056ec0c | = "The instruction at 0x00000000 referen..."
    LEA EAX,[ESP + 0x8]                 ; 0056ec11
    PUSH EAX                            ; 0056ec15
    CALL FUN_0056ea78                   ; 0056ec16
        ;   XREF to: 0056ea78 (UNCONDITIONAL_CALL)  ; undefined FUN_0056ea78()
    ADD ESP,0xc                         ; 0056ec1b
    MOV ECX,dword ptr [EBX + 0x18]      ; 0056ec1e
    PUSH ECX                            ; 0056ec21
    PUSH 0x598f4c                       ; 0056ec22 | = "at 0x00000000.\nThe memory could not be "
    LEA EAX,[ESP + 0x8]                 ; 0056ec27
    PUSH EAX                            ; 0056ec2b
    CALL FUN_0056ea78                   ; 0056ec2c
        ;   XREF to: 0056ea78 (UNCONDITIONAL_CALL)  ; undefined FUN_0056ea78()
    MOV ESI,dword ptr [EBX + 0x14]      ; 0056ec31
    ADD ESP,0xc                         ; 0056ec34
    TEST ESI,ESI                        ; 0056ec37
    JNZ 0x0056ec44                      ; 0056ec39
        ;   XREF to: 0056ec44 (CONDITIONAL_JUMP)  ; LAB_0056ec44
    PUSH ESI                            ; 0056ec3b
    MOV EAX,0x598f74                    ; 0056ec3c | = "read.\n"
    PUSH EAX                            ; 0056ec41 | = "read.\n"
    JMP 0x0056ec98                      ; 0056ec42
        ;   XREF to: 0056ec98 (UNCONDITIONAL_JUMP)  ; LAB_0056ec98
    PUSH 0x0                            ; 0056ec44
        ;   Label: LAB_0056ec44
    MOV EAX,0x598f7c                    ; 0056ec46 | = "written.\n"
    PUSH EAX                            ; 0056ec4b | = "written.\n"
    JMP 0x0056ec98                      ; 0056ec4c
        ;   XREF to: 0056ec98 (UNCONDITIONAL_JUMP)  ; LAB_0056ec98
    MOV ECX,dword ptr [EBX + 0xc]       ; 0056ec4e
        ;   Label: LAB_0056ec4e
    PUSH ECX                            ; 0056ec51
    PUSH 0x598f88                       ; 0056ec52 | = "A privileged instruction was executed..."
    JMP 0x0056ec98                      ; 0056ec57
        ;   XREF to: 0056ec98 (UNCONDITIONAL_JUMP)  ; LAB_0056ec98
    MOV EAX,dword ptr [EBX + 0xc]       ; 0056ec59
        ;   Label: LAB_0056ec59
    PUSH EAX                            ; 0056ec5c
    PUSH 0x598fc8                       ; 0056ec5d | = "An illegal instruction was executed a..."
    JMP 0x0056ec98                      ; 0056ec62
        ;   XREF to: 0056ec98 (UNCONDITIONAL_JUMP)  ; LAB_0056ec98
    MOV ESI,dword ptr [EBX + 0xc]       ; 0056ec64
        ;   Label: LAB_0056ec64
    PUSH ESI                            ; 0056ec67
    PUSH 0x599004                       ; 0056ec68 | = "An integer divide by zero was encount..."
    JMP 0x0056ec98                      ; 0056ec6d
        ;   XREF to: 0056ec98 (UNCONDITIONAL_JUMP)  ; LAB_0056ec98
    MOV EDX,dword ptr [EBX + 0xc]       ; 0056ec6f
        ;   Label: LAB_0056ec6f
    PUSH EDX                            ; 0056ec72
    PUSH 0x599048                       ; 0056ec73 | = "A stack overflow was encountered at a..."
    JMP 0x0056ec98                      ; 0056ec78
        ;   XREF to: 0056ec98 (UNCONDITIONAL_JUMP)  ; LAB_0056ec98
    MOV EDI,dword ptr [EBX]             ; 0056ec7a
        ;   Label: LAB_0056ec7a
    PUSH EDI                            ; 0056ec7c
    PUSH 0x599084                       ; 0056ec7d | = "The program encountered exception 0x0..."
    LEA EAX,[ESP + 0x8]                 ; 0056ec82
    PUSH EAX                            ; 0056ec86
    CALL FUN_0056ea78                   ; 0056ec87
        ;   XREF to: 0056ea78 (UNCONDITIONAL_CALL)  ; undefined FUN_0056ea78()
    ADD ESP,0xc                         ; 0056ec8c
    MOV EBP,dword ptr [EBX + 0xc]       ; 0056ec8f
    PUSH EBP                            ; 0056ec92
    PUSH 0x5990b8                       ; 0056ec93 | = "address 0x00000000 and\ncannot contin..."
    LEA EAX,[ESP + 0x8]                 ; 0056ec98
        ;   Label: LAB_0056ec98
    PUSH EAX                            ; 0056ec9c
    CALL FUN_0056ea78                   ; 0056ec9d
        ;   XREF to: 0056ea78 (UNCONDITIONAL_CALL)  ; undefined FUN_0056ea78()
    ADD ESP,0xc                         ; 0056eca2
    PUSH 0x0                            ; 0056eca5
    LEA EAX,[ESP + 0x104]               ; 0056eca7
    PUSH EAX                            ; 0056ecae
    LEA EDI,[ESP + 0x8]                 ; 0056ecaf
    PUSH ES                             ; 0056ecb3
    MOV AX,DS                           ; 0056ecb4
    MOV ES,AX                           ; 0056ecb6
    SUB ECX,ECX                         ; 0056ecb8
    DEC ECX                             ; 0056ecba
    XOR EAX,EAX                         ; 0056ecbb
    SCASB.REPNE ES:EDI                  ; 0056ecbd
    NOT ECX                             ; 0056ecbf
    DEC ECX                             ; 0056ecc1
    POP ES                              ; 0056ecc2
    PUSH ECX                            ; 0056ecc3
    LEA EAX,[ESP + 0xc]                 ; 0056ecc4
    PUSH EAX                            ; 0056ecc8
    MOV EAX,[0x005c1f54]                ; 0056ecc9 | DAT_005c1f54
    MOV EDX,dword ptr [EAX + 0x8]       ; 0056ecce
    PUSH EDX                            ; 0056ecd1
    CALL dword ptr CS:[0x5755ec]        ; 0056ecd2 | PTR_WriteFile_005755ec
    MOV EAX,0x1                         ; 0056ecd9
    ADD ESP,0x104                       ; 0056ecde
        ;   Label: LAB_0056ecde
    POP EBP                             ; 0056ece4
    POP EDI                             ; 0056ece5
    POP ESI                             ; 0056ece6
    POP EBX                             ; 0056ece7
    RET 0x4                             ; 0056ece8

