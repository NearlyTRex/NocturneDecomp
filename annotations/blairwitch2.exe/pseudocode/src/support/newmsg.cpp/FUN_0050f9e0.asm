; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_newmsg_cpp_FUN_0050f9e0(char *param_1)
;
; Local Variables:
; undefined1       Stack[-0x31c]:1  local_31c
; undefined1       Stack[-0x31b]:1  local_31b
; undefined        Stack[-0x21c]:1  local_21c
; undefined        Stack[-0x11c]:1  local_11c
; undefined1       Stack[-0x11b]:1  local_11b
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_main.c_FUN_004e46c0 at 004e4760
;
; Referenced Globals:
;   undefined4 DAT_005e129d
;   undefined4 DAT_005e129e
;   undefined4 DAT_005e12a1
;   undefined4 DAT_005e12a2
;   undefined4 DAT_005e12a6
;   TerminatedCString s_support_newmsg_cpp_005e12aa
;   TerminatedCString s_Unknown_message_file_ver_005e12c0
;   TerminatedCString s_anon_005e12dd
;   undefined4 DAT_005e12e6
;   TerminatedCString s_anon_005e12e8
;   TerminatedCString s_support_newmsg_cpp_005e12fa
;   TerminatedCString s_Error_reading_s_005e1310
;   TerminatedCString s_support_newmsg_cpp_005e1321
;   TerminatedCString s_Too_many_messages_in_s_005e1337
;   TerminatedCString s_support_newmsg_cpp_005e134f
;   ... and 12 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fgets_FUN_005b9600
;   crt_stdio.c_fscanf_FUN_005b8100
;   crt_stdio.c_ftell_FUN_005baab0
;   crt_string.c__strcmp_FUN_005b8c30
;   crt_unknown.c_FUN_005b8580
;   engine_dosio.cpp_FUN_00460c70
;   engine_dosio.cpp_getFileSize_FUN_00460aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f9e0
        ;   Label: support_newmsg.cpp_FUN_0050f9e0
    PUSH ESI                            ; 0050f9e1
    PUSH EDI                            ; 0050f9e2
    PUSH EBP                            ; 0050f9e3
    SUB ESP,0x30c                       ; 0050f9e4
    MOV EBP,dword ptr [ESP + 0x320]     ; 0050f9ea
    PUSH EBP                            ; 0050f9f1
    XOR EDX,EDX                         ; 0050f9f2
    PUSH 0x5e129d                       ; 0050f9f4 | DAT_005e129d
    MOV dword ptr [ESP + 0x308],EDX     ; 0050f9f9
    CALL engine_dosio.cpp_getFileSize_FUN_00460aa0 ; 0050fa00
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00460aa0(char * directory, char * filename)
    MOV EDI,EAX                         ; 0050fa05
    ADD ESP,0x8                         ; 0050fa07
    TEST EAX,EAX                        ; 0050fa0a
    JG 0x0050fa19                       ; 0050fa0c
        ;   XREF to: 0050fa19 (CONDITIONAL_JUMP)  ; LAB_0050fa19
    ADD ESP,0x30c                       ; 0050fa0e
        ;   Label: LAB_0050fa0e
    POP EBP                             ; 0050fa14
    POP EDI                             ; 0050fa15
    POP ESI                             ; 0050fa16
    POP EBX                             ; 0050fa17
    RET                                 ; 0050fa18
    PUSH 0x5e129e                       ; 0050fa19 | DAT_005e129e
        ;   Label: LAB_0050fa19
    PUSH EBP                            ; 0050fa1e
    PUSH 0x5e12a1                       ; 0050fa1f | DAT_005e12a1
    CALL engine_dosio.cpp_FUN_00460c70  ; 0050fa24
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    MOV ESI,EAX                         ; 0050fa29
    ADD ESP,0xc                         ; 0050fa2b
    MOV EBX,EAX                         ; 0050fa2e
    TEST EAX,EAX                        ; 0050fa30
    JZ 0x0050fa0e                       ; 0050fa32
        ;   XREF to: 0050fa0e (CONDITIONAL_JUMP)  ; LAB_0050fa0e
    PUSH EAX                            ; 0050fa34
    CALL crt_stdio.c_ftell_FUN_005baab0 ; 0050fa35
        ;   XREF to: 005baab0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ftell_FUN_005baab0()
    ADD ESP,0x4                         ; 0050fa3a
    PUSH ESI                            ; 0050fa3d
    PUSH 0xff                           ; 0050fa3e
    ADD EDI,EAX                         ; 0050fa43
    LEA EAX,[ESP + 0x108]               ; 0050fa45
    PUSH EAX                            ; 0050fa4c
    MOV dword ptr [ESP + 0x310],EDI     ; 0050fa4d
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0050fa54
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005b9600()
    ADD ESP,0xc                         ; 0050fa59
    LEA EAX,[ESP + 0x300]               ; 0050fa5c
    PUSH EAX                            ; 0050fa63
    PUSH 0x5e12a2                       ; 0050fa64 | DAT_005e12a2
    PUSH ESI                            ; 0050fa69
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0050fa6a
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0xc                         ; 0050fa6f
    PUSH ESI                            ; 0050fa72
    PUSH 0xff                           ; 0050fa73
    LEA EAX,[ESP + 0x108]               ; 0050fa78
    PUSH EAX                            ; 0050fa7f
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0050fa80
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005b9600()
    ADD ESP,0xc                         ; 0050fa85
    PUSH 0x1d63250                      ; 0050fa88 | DAT_01d63250
    PUSH 0x5e12a6                       ; 0050fa8d | DAT_005e12a6
    PUSH ESI                            ; 0050fa92
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0050fa93
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0xc                         ; 0050fa98
    CMP dword ptr [ESP + 0x300],0x0     ; 0050fa9b
    JNZ 0x0050fbe0                      ; 0050faa3
        ;   XREF to: 0050fbe0 (CONDITIONAL_JUMP)  ; LAB_0050fbe0
    PUSH EBX                            ; 0050faa9
        ;   Label: LAB_0050faa9
    PUSH 0xff                           ; 0050faaa
    LEA EAX,[ESP + 0x108]               ; 0050faaf
    PUSH EAX                            ; 0050fab6
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0050fab7
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005b9600()
    ADD ESP,0xc                         ; 0050fabc
    PUSH 0x61b190                       ; 0050fabf | DAT_0061b190
    PUSH 0x5e12dd                       ; 0050fac4 | = "\"%[^\"]\"\n"
    PUSH EBX                            ; 0050fac9
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0050faca
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0xc                         ; 0050facf
    PUSH 0x5e12e6                       ; 0050fad2 | DAT_005e12e6
        ;   Label: LAB_0050fad2
    PUSH EBX                            ; 0050fad7
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0050fad8
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0x8                         ; 0050fadd
    PUSH EBX                            ; 0050fae0
    CALL crt_stdio.c_ftell_FUN_005baab0 ; 0050fae1
        ;   XREF to: 005baab0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ftell_FUN_005baab0()
    ADD ESP,0x4                         ; 0050fae6
    CMP EAX,dword ptr [ESP + 0x304]     ; 0050fae9
    JL 0x0050fc08                       ; 0050faf0
        ;   XREF to: 0050fc08 (CONDITIONAL_JUMP)  ; LAB_0050fc08
    PUSH EBX                            ; 0050faf6
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 0050faf7
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    MOV EDI,dword ptr [0x01d63258]      ; 0050fafc | DAT_01d63258
    ADD ESP,0x4                         ; 0050fb02
    TEST EDI,EDI                        ; 0050fb05
    JLE 0x0050fb40                      ; 0050fb07
        ;   XREF to: 0050fb40 (CONDITIONAL_JUMP)  ; LAB_0050fb40
    LEA EBP,[EDI*0x4 + 0x0]             ; 0050fb09
    XOR EAX,EAX                         ; 0050fb10
    ADD EAX,0x4                         ; 0050fb12
        ;   Label: LAB_0050fb12
    MOV EDX,dword ptr [EAX + 0x1d641f8] ; 0050fb15
    MOV dword ptr [EAX + 0x1d63258],EDX ; 0050fb1b | DAT_01d63260
    MOV EDX,dword ptr [EAX + 0x1d649c8] ; 0050fb21
    MOV dword ptr [EAX + 0x1d63a28],EDX ; 0050fb27 | DAT_01d63a30
    CMP EAX,EBP                         ; 0050fb2d
    JL 0x0050fb12                       ; 0050fb2f
        ;   XREF to: 0050fb12 (CONDITIONAL_JUMP)  ; LAB_0050fb12
    LEA EAX,[EAX]                       ; 0050fb31
    LEA EDX,[EDX]                       ; 0050fb37
    LEA EAX,[EAX]                       ; 0050fb3d
    XOR EBP,EBP                         ; 0050fb40
        ;   Label: LAB_0050fb40
    MOV dword ptr [ESP + 0x308],EBP     ; 0050fb42
    MOV EAX,[0x01d63258]                ; 0050fb49 | DAT_01d63258
        ;   Label: LAB_0050fb49
    DEC EAX                             ; 0050fb4e
    CMP EBP,EAX                         ; 0050fb4f
    JGE 0x0050fd87                      ; 0050fb51
        ;   XREF to: 0050fd87 (CONDITIONAL_JUMP)  ; LAB_0050fd87
    MOV ECX,dword ptr [0x01d63258]      ; 0050fb57 | DAT_01d63258
    LEA EDI,[EBP + 0x1]                 ; 0050fb5d
    CMP EDI,ECX                         ; 0050fb60
    JGE 0x0050fbc9                      ; 0050fb62
        ;   XREF to: 0050fbc9 (CONDITIONAL_JUMP)  ; LAB_0050fbc9
    MOV ESI,dword ptr [ESP + 0x308]     ; 0050fb64
    LEA EBX,[EDI*0x4 + 0x0]             ; 0050fb6b
    MOV ECX,dword ptr [EBX + 0x1d6325c] ; 0050fb72 | DAT_01d63260 | DAT_01d63264
        ;   Label: LAB_0050fb72
    PUSH ECX                            ; 0050fb78
    MOV EAX,dword ptr [ESI + 0x1d6325c] ; 0050fb79 | DAT_01d63260
    PUSH EAX                            ; 0050fb7f
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0050fb80
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 0050fb85
    TEST EAX,EAX                        ; 0050fb88
    JLE 0x0050fbbc                      ; 0050fb8a
        ;   XREF to: 0050fbbc (CONDITIONAL_JUMP)  ; LAB_0050fbbc
    MOV EDX,dword ptr [EBX + 0x1d6325c] ; 0050fb8c | DAT_01d63260
    MOV EAX,dword ptr [ESI + 0x1d6325c] ; 0050fb92
    MOV dword ptr [ESI + 0x1d6325c],EDX ; 0050fb98
    MOV EDX,dword ptr [EBX + 0x1d63a2c] ; 0050fb9e | DAT_01d63a30
    MOV dword ptr [EBX + 0x1d6325c],EAX ; 0050fba4 | DAT_01d63260
    MOV EAX,dword ptr [ESI + 0x1d63a2c] ; 0050fbaa
    MOV dword ptr [ESI + 0x1d63a2c],EDX ; 0050fbb0
    MOV dword ptr [EBX + 0x1d63a2c],EAX ; 0050fbb6 | DAT_01d63a30
    MOV EAX,[0x01d63258]                ; 0050fbbc | DAT_01d63258
        ;   Label: LAB_0050fbbc
    INC EDI                             ; 0050fbc1
    ADD EBX,0x4                         ; 0050fbc2
    CMP EDI,EAX                         ; 0050fbc5
    JL 0x0050fb72                       ; 0050fbc7
        ;   XREF to: 0050fb72 (CONDITIONAL_JUMP)  ; LAB_0050fb72
    MOV EDX,dword ptr [ESP + 0x308]     ; 0050fbc9
        ;   Label: LAB_0050fbc9
    ADD EDX,0x4                         ; 0050fbd0
    INC EBP                             ; 0050fbd3
    MOV dword ptr [ESP + 0x308],EDX     ; 0050fbd4
    JMP 0x0050fb49                      ; 0050fbdb
        ;   XREF to: 0050fb49 (UNCONDITIONAL_JUMP)  ; LAB_0050fb49
    MOV ESI,0x5e12aa                    ; 0050fbe0 | = "..\\support\\newmsg.cpp"
        ;   Label: LAB_0050fbe0
    MOV EDI,0x57                        ; 0050fbe5
    PUSH 0x5e12c0                       ; 0050fbea | = "Unknown message file version"
    MOV dword ptr [0x01d046a0],ESI      ; 0050fbef | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0050fbf5 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050fbfb
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050fc00
    JMP 0x0050faa9                      ; 0050fc03
        ;   XREF to: 0050faa9 (UNCONDITIONAL_JUMP)  ; LAB_0050faa9
    MOV EAX,ESP                         ; 0050fc08
        ;   Label: LAB_0050fc08
    PUSH EAX                            ; 0050fc0a
    LEA EAX,[ESP + 0x204]               ; 0050fc0b
    PUSH EAX                            ; 0050fc12
    PUSH 0x5e12e8                       ; 0050fc13 | = "\"%[^\"]\", \"%[^\"]\"\n"
    PUSH EBX                            ; 0050fc18
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0050fc19
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0x10                        ; 0050fc1e
    CMP EAX,0x2                         ; 0050fc21
    JZ 0x0050fc4a                       ; 0050fc24
        ;   XREF to: 0050fc4a (CONDITIONAL_JUMP)  ; LAB_0050fc4a
    PUSH EBP                            ; 0050fc26
    MOV ECX,0x5e12fa                    ; 0050fc27 | = "..\\support\\newmsg.cpp"
    MOV ESI,0x68                        ; 0050fc2c
    PUSH 0x5e1310                       ; 0050fc31 | = "Error reading %s"
    MOV dword ptr [0x01d046a0],ECX      ; 0050fc36 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0050fc3c | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050fc42
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0050fc47
    CMP dword ptr [0x01d63258],0x1f4    ; 0050fc4a | DAT_01d63258
        ;   Label: LAB_0050fc4a
    JL 0x0050fc79                       ; 0050fc54
        ;   XREF to: 0050fc79 (CONDITIONAL_JUMP)  ; LAB_0050fc79
    PUSH EBP                            ; 0050fc56
    MOV EAX,0x5e1321                    ; 0050fc57 | = "..\\support\\newmsg.cpp"
    MOV EDX,0x6d                        ; 0050fc5c
    PUSH 0x5e1337                       ; 0050fc61 | = "Too many messages in %s"
    MOV [0x01d046a0],EAX                ; 0050fc66 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0050fc6b | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050fc71
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0050fc76
    LEA EDI,[ESP + 0x200]               ; 0050fc79
        ;   Label: LAB_0050fc79
    SUB ECX,ECX                         ; 0050fc80
    DEC ECX                             ; 0050fc82
    XOR EAX,EAX                         ; 0050fc83
    SCASB.REPNE ES:EDI                  ; 0050fc85
    NOT ECX                             ; 0050fc87
    DEC ECX                             ; 0050fc89
    INC ECX                             ; 0050fc8a
    PUSH ECX                            ; 0050fc8b
    CALL crt_unknown.c_FUN_005b8580     ; 0050fc8c
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005b8580(ulong size)
    MOV EDX,EAX                         ; 0050fc91
    MOV EAX,[0x01d63258]                ; 0050fc93 | DAT_01d63258
    ADD ESP,0x4                         ; 0050fc98
    MOV ECX,EDX                         ; 0050fc9b
    MOV dword ptr [EAX*0x4 + 0x1d641fc],EDX ; 0050fc9d
    TEST ECX,ECX                        ; 0050fca4
    JNZ 0x0050fcd3                      ; 0050fca6
        ;   XREF to: 0050fcd3 (CONDITIONAL_JUMP)  ; LAB_0050fcd3
    LEA EAX,[ESP + 0x200]               ; 0050fca8
    PUSH EAX                            ; 0050fcaf
    MOV ESI,0x5e134f                    ; 0050fcb0 | = "..\\support\\newmsg.cpp"
    MOV EDI,0x70                        ; 0050fcb5
    PUSH 0x5e1365                       ; 0050fcba | = "Out of memory mallocing message tag : %s"
    MOV dword ptr [0x01d046a0],ESI      ; 0050fcbf | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0050fcc5 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050fccb
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0050fcd0
    MOV EDI,ESP                         ; 0050fcd3
        ;   Label: LAB_0050fcd3
    SUB ECX,ECX                         ; 0050fcd5
    DEC ECX                             ; 0050fcd7
    XOR EAX,EAX                         ; 0050fcd8
    SCASB.REPNE ES:EDI                  ; 0050fcda
    NOT ECX                             ; 0050fcdc
    DEC ECX                             ; 0050fcde
    INC ECX                             ; 0050fcdf
    PUSH ECX                            ; 0050fce0
    CALL crt_unknown.c_FUN_005b8580     ; 0050fce1
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005b8580(ulong size)
    MOV EDX,dword ptr [0x01d63258]      ; 0050fce6 | DAT_01d63258
    ADD ESP,0x4                         ; 0050fcec
    MOV dword ptr [EDX*0x4 + 0x1d649cc],EAX ; 0050fcef
    TEST EAX,EAX                        ; 0050fcf6
    JZ 0x0050fd5c                       ; 0050fcf8
        ;   XREF to: 0050fd5c (CONDITIONAL_JUMP)  ; LAB_0050fd5c
    MOV EDI,dword ptr [0x01d63258]      ; 0050fcfa | DAT_01d63258
        ;   Label: LAB_0050fcfa
    LEA ESI,[ESP + 0x200]               ; 0050fd00
    MOV EDI,dword ptr [EDI*0x4 + 0x1d641fc] ; 0050fd07
    PUSH EDI                            ; 0050fd0e
    MOV AL,byte ptr [ESI]               ; 0050fd0f
        ;   Label: LAB_0050fd0f
    MOV byte ptr [EDI],AL               ; 0050fd11
    CMP AL,0x0                          ; 0050fd13
    JZ 0x0050fd27                       ; 0050fd15
        ;   XREF to: 0050fd27 (CONDITIONAL_JUMP)  ; LAB_0050fd27
    MOV AL,byte ptr [ESI + 0x1]         ; 0050fd17
    ADD ESI,0x2                         ; 0050fd1a
    MOV byte ptr [EDI + 0x1],AL         ; 0050fd1d
    ADD EDI,0x2                         ; 0050fd20
    CMP AL,0x0                          ; 0050fd23
    JNZ 0x0050fd0f                      ; 0050fd25
        ;   XREF to: 0050fd0f (CONDITIONAL_JUMP)  ; LAB_0050fd0f
    POP EDI                             ; 0050fd27
        ;   Label: LAB_0050fd27
    MOV EDI,dword ptr [0x01d63258]      ; 0050fd28 | DAT_01d63258
    MOV ESI,ESP                         ; 0050fd2e
    MOV EDI,dword ptr [EDI*0x4 + 0x1d649cc] ; 0050fd30
    PUSH EDI                            ; 0050fd37
    MOV AL,byte ptr [ESI]               ; 0050fd38
        ;   Label: LAB_0050fd38
    MOV byte ptr [EDI],AL               ; 0050fd3a
    CMP AL,0x0                          ; 0050fd3c
    JZ 0x0050fd50                       ; 0050fd3e
        ;   XREF to: 0050fd50 (CONDITIONAL_JUMP)  ; LAB_0050fd50
    MOV AL,byte ptr [ESI + 0x1]         ; 0050fd40
    ADD ESI,0x2                         ; 0050fd43
    MOV byte ptr [EDI + 0x1],AL         ; 0050fd46
    ADD EDI,0x2                         ; 0050fd49
    CMP AL,0x0                          ; 0050fd4c
    JNZ 0x0050fd38                      ; 0050fd4e
        ;   XREF to: 0050fd38 (CONDITIONAL_JUMP)  ; LAB_0050fd38
    POP EDI                             ; 0050fd50
        ;   Label: LAB_0050fd50
    INC dword ptr [0x01d63258]          ; 0050fd51 | DAT_01d63258
    JMP 0x0050fad2                      ; 0050fd57
        ;   XREF to: 0050fad2 (UNCONDITIONAL_JUMP)  ; LAB_0050fad2
    MOV EAX,ESP                         ; 0050fd5c
        ;   Label: LAB_0050fd5c
    PUSH EAX                            ; 0050fd5e
    MOV EDX,0x5e138e                    ; 0050fd5f | = "..\\support\\newmsg.cpp"
    MOV ECX,0x73                        ; 0050fd64
    PUSH 0x5e13a4                       ; 0050fd69 | = "Out of memory mallocing message tag : %s"
    MOV dword ptr [0x01d046a0],EDX      ; 0050fd6e | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0050fd74 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050fd7a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0050fd7f
    JMP 0x0050fcfa                      ; 0050fd82
        ;   XREF to: 0050fcfa (UNCONDITIONAL_JUMP)  ; LAB_0050fcfa
    MOV dword ptr [0x01d63254],0x1      ; 0050fd87 | DAT_01d63254
        ;   Label: LAB_0050fd87
    ADD ESP,0x30c                       ; 0050fd91
    POP EBP                             ; 0050fd97
    POP EDI                             ; 0050fd98
    POP ESI                             ; 0050fd99
    POP EBX                             ; 0050fd9a
    RET                                 ; 0050fd9b

