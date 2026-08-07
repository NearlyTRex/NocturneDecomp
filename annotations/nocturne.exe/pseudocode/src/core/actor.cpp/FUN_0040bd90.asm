; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_FUN_0040bd90(char *param_1)
;
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_00577819
;   TerminatedCString s_NULL_actor_pointer_detec_0057782b
;   TerminatedCString s_core_actor_cpp_00577853
;   TerminatedCString s_Invalid_actor_pointer_08_00577865
;   TerminatedCString s_core_actor_cpp_00577898
;   TerminatedCString s_Dangling_corrupt_actor_p_005778aa
;   TerminatedCString s_core_actor_cpp_00577908
;   TerminatedCString s_Dangling_corrupt_actor_p_0057791a
;   TerminatedCString s_core_actor_cpp_00577975
;   TerminatedCString s_Dangling_corrupt_actor_p_00577987
;   undefined4 DAT_005779d5
;   uchar[257] g_CharacterClassificationTable
;   undefined4 DAT_00763e10
;   undefined1 DAT_00763e14
;   undefined4 DAT_0078a123
;   ... and 2 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040bd90
        ;   Label: core_actor.cpp_FUN_0040bd90
    PUSH ESI                            ; 0040bd91
    PUSH EDI                            ; 0040bd92
    PUSH EBP                            ; 0040bd93
    MOV EBP,ESP                         ; 0040bd94
    SUB ESP,0x8                         ; 0040bd96
    MOV EBX,dword ptr [EBP + 0x14]      ; 0040bd99
    TEST EBX,EBX                        ; 0040bd9c
    JZ 0x0040bf8e                       ; 0040bd9e
        ;   XREF to: 0040bf8e (CONDITIONAL_JUMP)  ; LAB_0040bf8e
    CMP EBX,0xff000000                  ; 0040bda4
        ;   Label: LAB_0040bda4
    JC 0x0040bfbe                       ; 0040bdaa
        ;   XREF to: 0040bfbe (CONDITIONAL_JUMP)  ; LAB_0040bfbe
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0040bdb0
        ;   Label: LAB_0040bdb0
    PUSH ECX                            ; 0040bdb3
    MOV ESI,dword ptr [EBP + 0x18]      ; 0040bdb4
    PUSH ESI                            ; 0040bdb7
    PUSH EBX                            ; 0040bdb8
    MOV EAX,0x577853                    ; 0040bdb9 | = "..\\core\\actor.cpp"
    MOV EDX,0x71d                       ; 0040bdbe
    PUSH 0x577865                       ; 0040bdc3 | = "Invalid actor pointer %08X detected a..."
    MOV [0x01cc4800],EAX                ; 0040bdc8 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDX      ; 0040bdcd | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0040bdd3
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x10                        ; 0040bdd8
    MOV EDI,dword ptr [EBX + 0x68]      ; 0040bddb
        ;   Label: LAB_0040bddb
    CMP EDI,0x78a123                    ; 0040bdde | DAT_0078a123
    JZ 0x0040be40                       ; 0040bde4
        ;   XREF to: 0040be40 (CONDITIONAL_JUMP)  ; LAB_0040be40
    PUSH EDI                            ; 0040bde6
    PUSH 0x32                           ; 0040bde7
    MOV EAX,0x577898                    ; 0040bde9 | = "..\\core\\actor.cpp"
    PUSH 0x0                            ; 0040bdee
    MOV EDX,0x727                       ; 0040bdf0
    MOV ESI,EBX                         ; 0040bdf5
    PUSH 0x763e10                       ; 0040bdf7 | DAT_00763e10
    MOV [0x01cc4800],EAX                ; 0040bdfc | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDX      ; 0040be01 | g_CurrentLineNumber
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0040be07
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0040be0c
    MOV EDI,0x763e10                    ; 0040be0f | DAT_00763e10
    MOV ECX,0x31                        ; 0040be14
    PUSH EDI                            ; 0040be19 | DAT_00763e10
    MOV EAX,ECX                         ; 0040be1a
    SHR ECX,0x2                         ; 0040be1c
    MOVSD.REP ES:EDI,ESI                ; 0040be1f | DAT_00763e10 | DAT_00763e14
    MOV CL,AL                           ; 0040be21
    AND CL,0x3                          ; 0040be23
    MOVSB.REP ES:EDI,ESI                ; 0040be26 | DAT_00763e14
    POP EDI                             ; 0040be28
    PUSH EDI                            ; 0040be29 | DAT_00763e10
    PUSH EBX                            ; 0040be2a
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0040be2b
    PUSH ESI                            ; 0040be2e
    MOV EDI,dword ptr [EBP + 0x18]      ; 0040be2f
    PUSH EDI                            ; 0040be32
    PUSH 0x5778aa                       ; 0040be33 | = "Dangling/corrupt actor pointer detect..."
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0040be38
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x18                        ; 0040be3d
    LEA EAX,[EBX + 0x20]                ; 0040be40
        ;   Label: LAB_0040be40
    FLD float ptr [EAX + 0x4]           ; 0040be43
    FMUL ST0                            ; 0040be46
    FLD float ptr [EAX]                 ; 0040be48
    FMUL ST0                            ; 0040be4a
    FADDP                               ; 0040be4c
    FLD float ptr [EAX + 0x8]           ; 0040be4e
    FMUL ST0                            ; 0040be51
    FADDP                               ; 0040be53
    FSQRT                               ; 0040be55
    FCOMP float ptr [0x005779d5]        ; 0040be57 | DAT_005779d5
    FNSTSW AX                           ; 0040be5d
    SAHF                                ; 0040be5f
    JBE 0x0040bed6                      ; 0040be60
        ;   XREF to: 0040bed6 (CONDITIONAL_JUMP)  ; LAB_0040bed6
    SUB ESP,0x8                         ; 0040be62
    FLD float ptr [EBX + 0x28]          ; 0040be65
    FSTP double ptr [ESP]               ; 0040be68
    SUB ESP,0x8                         ; 0040be6b
    FLD float ptr [EBX + 0x24]          ; 0040be6e
    FSTP double ptr [ESP]               ; 0040be71
    SUB ESP,0x8                         ; 0040be74
    FLD float ptr [EBX + 0x20]          ; 0040be77
    FSTP double ptr [ESP]               ; 0040be7a
    PUSH 0x32                           ; 0040be7d
    MOV EAX,0x577908                    ; 0040be7f | = "..\\core\\actor.cpp"
    PUSH 0x0                            ; 0040be84
    MOV EDX,0x732                       ; 0040be86
    MOV EDI,0x763e10                    ; 0040be8b | DAT_00763e10
    PUSH 0x763e10                       ; 0040be90 | DAT_00763e10
    MOV [0x01cc4800],EAX                ; 0040be95 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDX      ; 0040be9a | g_CurrentLineNumber
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0040bea0
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0040bea5
    MOV ESI,EBX                         ; 0040bea8
    MOV ECX,0x31                        ; 0040beaa
    PUSH EDI                            ; 0040beaf | DAT_00763e10
    MOV EAX,ECX                         ; 0040beb0
    SHR ECX,0x2                         ; 0040beb2
    MOVSD.REP ES:EDI,ESI                ; 0040beb5 | DAT_00763e10 | DAT_00763e14
    MOV CL,AL                           ; 0040beb7
    AND CL,0x3                          ; 0040beb9
    MOVSB.REP ES:EDI,ESI                ; 0040bebc | DAT_00763e14
    POP EDI                             ; 0040bebe
    PUSH EDI                            ; 0040bebf | DAT_00763e10
    PUSH EBX                            ; 0040bec0
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0040bec1
    PUSH ECX                            ; 0040bec4
    MOV ESI,dword ptr [EBP + 0x18]      ; 0040bec5
    PUSH ESI                            ; 0040bec8
    PUSH 0x57791a                       ; 0040bec9 | = "Dangling/corrupt actor pointer detect..."
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0040bece
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x2c                        ; 0040bed3
    MOV dword ptr [EBP + -0x4],EBX      ; 0040bed6
        ;   Label: LAB_0040bed6
    XOR EDI,EDI                         ; 0040bed9
    MOV AH,byte ptr [EBX]               ; 0040bedb
    MOV dword ptr [EBP + -0x8],EDI      ; 0040bedd
    TEST AH,AH                          ; 0040bee0
    JZ 0x0040bf87                       ; 0040bee2
        ;   XREF to: 0040bf87 (CONDITIONAL_JUMP)  ; LAB_0040bf87
    CMP dword ptr [EBP + -0x8],0x1d     ; 0040bee8
        ;   Label: LAB_0040bee8
    JC 0x0040bfcf                       ; 0040beec
        ;   XREF to: 0040bfcf (CONDITIONAL_JUMP)  ; LAB_0040bfcf
    SUB ESP,0x8                         ; 0040bef2
        ;   Label: LAB_0040bef2
    FLD float ptr [EBX + 0x28]          ; 0040bef5
    FSTP double ptr [ESP]               ; 0040bef8
    SUB ESP,0x8                         ; 0040befb
    FLD float ptr [EBX + 0x24]          ; 0040befe
    FSTP double ptr [ESP]               ; 0040bf01
    SUB ESP,0x8                         ; 0040bf04
    FLD float ptr [EBX + 0x20]          ; 0040bf07
    FSTP double ptr [ESP]               ; 0040bf0a
    PUSH 0x32                           ; 0040bf0d
    PUSH 0x0                            ; 0040bf0f
    MOV ESI,0x577975                    ; 0040bf11 | = "..\\core\\actor.cpp"
    MOV EDI,0x740                       ; 0040bf16
    PUSH 0x763e10                       ; 0040bf1b | DAT_00763e10
    MOV dword ptr [0x01cc4800],ESI      ; 0040bf20 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDI      ; 0040bf26 | g_CurrentLineNumber
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0040bf2c
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0040bf31
    TEST EBX,EBX                        ; 0040bf34
    JZ 0x0040bf54                       ; 0040bf36
        ;   XREF to: 0040bf54 (CONDITIONAL_JUMP)  ; LAB_0040bf54
    MOV ECX,0x31                        ; 0040bf38
    MOV EDI,0x763e10                    ; 0040bf3d | DAT_00763e10
    MOV ESI,EBX                         ; 0040bf42
    PUSH EDI                            ; 0040bf44 | DAT_00763e10
    MOV EAX,ECX                         ; 0040bf45
    SHR ECX,0x2                         ; 0040bf47
    MOVSD.REP ES:EDI,ESI                ; 0040bf4a | DAT_00763e10 | DAT_00763e14
    MOV CL,AL                           ; 0040bf4c
    AND CL,0x3                          ; 0040bf4e
    MOVSB.REP ES:EDI,ESI                ; 0040bf51 | DAT_00763e14
    POP EDI                             ; 0040bf53
    PUSH 0x763e10                       ; 0040bf54 | DAT_00763e10
        ;   Label: LAB_0040bf54
    PUSH EBX                            ; 0040bf59
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0040bf5a
    PUSH EAX                            ; 0040bf5d
    MOV EDX,dword ptr [EBP + 0x18]      ; 0040bf5e
    PUSH EDX                            ; 0040bf61
    PUSH 0x577987                       ; 0040bf62 | = "Dangling/corrupt actor pointer detect..."
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0040bf67
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x2c                        ; 0040bf6c
    MOV EDX,dword ptr [EBP + -0x8]      ; 0040bf6f
        ;   Label: LAB_0040bf6f
    MOV EAX,dword ptr [EBP + -0x4]      ; 0040bf72
    INC EDX                             ; 0040bf75
    INC EAX                             ; 0040bf76
    MOV dword ptr [EBP + -0x8],EDX      ; 0040bf77
    MOV DL,byte ptr [EAX]               ; 0040bf7a
    MOV dword ptr [EBP + -0x4],EAX      ; 0040bf7c
    TEST DL,DL                          ; 0040bf7f
    JNZ 0x0040bee8                      ; 0040bf81
        ;   XREF to: 0040bee8 (CONDITIONAL_JUMP)  ; LAB_0040bee8
    MOV ESP,EBP                         ; 0040bf87
        ;   Label: LAB_0040bf87
    POP EBP                             ; 0040bf89
    POP EDI                             ; 0040bf8a
    POP ESI                             ; 0040bf8b
    POP EBX                             ; 0040bf8c
    RET                                 ; 0040bf8d
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0040bf8e
        ;   Label: LAB_0040bf8e
    PUSH ESI                            ; 0040bf91
    MOV EDI,dword ptr [EBP + 0x18]      ; 0040bf92
    PUSH EDI                            ; 0040bf95
    MOV EDX,0x577819                    ; 0040bf96 | = "..\\core\\actor.cpp"
    MOV ECX,0x719                       ; 0040bf9b
    PUSH 0x57782b                       ; 0040bfa0 | = "NULL actor pointer detected, %s line %d"
    MOV dword ptr [0x01cc4800],EDX      ; 0040bfa5 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 0040bfab | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0040bfb1
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0xc                         ; 0040bfb6
    JMP 0x0040bda4                      ; 0040bfb9
        ;   XREF to: 0040bda4 (UNCONDITIONAL_JUMP)  ; LAB_0040bda4
    CMP EBX,0x1000                      ; 0040bfbe
        ;   Label: LAB_0040bfbe
    JL 0x0040bdb0                       ; 0040bfc4
        ;   XREF to: 0040bdb0 (CONDITIONAL_JUMP)  ; LAB_0040bdb0
    JMP 0x0040bddb                      ; 0040bfca
        ;   XREF to: 0040bddb (UNCONDITIONAL_JUMP)  ; LAB_0040bddb
    MOV EAX,dword ptr [EBP + -0x4]      ; 0040bfcf
        ;   Label: LAB_0040bfcf
    MOV AL,byte ptr [EAX]               ; 0040bfd2
    INC AL                              ; 0040bfd4
    AND EAX,0xff                        ; 0040bfd6
    TEST byte ptr [EAX + 0x5c168c],0x8  ; 0040bfdb | g_CharacterClassificationTable
    JNZ 0x0040bf6f                      ; 0040bfe2
        ;   XREF to: 0040bf6f (CONDITIONAL_JUMP)  ; LAB_0040bf6f
    JMP 0x0040bef2                      ; 0040bfe4
        ;   XREF to: 0040bef2 (UNCONDITIONAL_JUMP)  ; LAB_0040bef2

