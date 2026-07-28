; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_texlist_cpp_CTextureList_save_FUN_00544c10(int *param_1,char *param_2)
;
; Local Variables:
; undefined1       Stack[-0x114]:1  local_114
; undefined1       Stack[-0x113]:1  local_113
; undefined1       Stack[-0x111]:1  local_111
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_core_texlist_cpp_0059667d
;   TerminatedCString s_CTextureList_save_No_ext_00596691
;   TerminatedCString s_tex_005966b9
;   undefined4 s_tex_005966b9+1
;   undefined4 s_tex_005966b9+2
;   undefined4 s_tex_005966b9+3
;   TerminatedCString s_wt_005966be
;   TerminatedCString s_data_005966c1
;   TerminatedCString s_core_texlist_cpp_005966c6
;   TerminatedCString s_CTextureList_save_Bad_fi_005966da
;   TerminatedCString s_d_005966fd
;   TerminatedCString s_s_d_00596701
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fprintf_FUN_005644f0
;   engine_dosio.cpp_getFile_FUN_00456a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544c10
        ;   Label: core_texlist.cpp_CTextureList_save_FUN_00544c10
    PUSH ESI                            ; 00544c11
    PUSH EDI                            ; 00544c12
    PUSH EBP                            ; 00544c13
    SUB ESP,0x104                       ; 00544c14
    MOV EBP,dword ptr [ESP + 0x118]     ; 00544c1a
    MOV ESI,dword ptr [ESP + 0x11c]     ; 00544c21
    MOV EDI,ESP                         ; 00544c28
    MOV DL,0x2e                         ; 00544c2a
    PUSH EDI                            ; 00544c2c
    MOV AL,byte ptr [ESI]               ; 00544c2d
        ;   Label: LAB_00544c2d
    MOV byte ptr [EDI],AL               ; 00544c2f
    CMP AL,0x0                          ; 00544c31
    JZ 0x00544c45                       ; 00544c33
        ;   XREF to: 00544c45 (CONDITIONAL_JUMP)  ; LAB_00544c45
    MOV AL,byte ptr [ESI + 0x1]         ; 00544c35
    ADD ESI,0x2                         ; 00544c38
    MOV byte ptr [EDI + 0x1],AL         ; 00544c3b
    ADD EDI,0x2                         ; 00544c3e
    CMP AL,0x0                          ; 00544c41
    JNZ 0x00544c2d                      ; 00544c43
        ;   XREF to: 00544c2d (CONDITIONAL_JUMP)  ; LAB_00544c2d
    POP EDI                             ; 00544c45
        ;   Label: LAB_00544c45
    MOV ESI,ESP                         ; 00544c46
    MOV AL,byte ptr [ESI]               ; 00544c48
        ;   Label: LAB_00544c48
    CMP AL,DL                           ; 00544c4a
    JZ 0x00544c60                       ; 00544c4c
        ;   XREF to: 00544c60 (CONDITIONAL_JUMP)  ; LAB_00544c60
    CMP AL,0x0                          ; 00544c4e
    JZ 0x00544c5e                       ; 00544c50
        ;   XREF to: 00544c5e (CONDITIONAL_JUMP)  ; LAB_00544c5e
    INC ESI                             ; 00544c52
    MOV AL,byte ptr [ESI]               ; 00544c53
    CMP AL,DL                           ; 00544c55
    JZ 0x00544c60                       ; 00544c57
        ;   XREF to: 00544c60 (CONDITIONAL_JUMP)  ; LAB_00544c60
    INC ESI                             ; 00544c59
    CMP AL,0x0                          ; 00544c5a
    JNZ 0x00544c48                      ; 00544c5c
        ;   XREF to: 00544c48 (CONDITIONAL_JUMP)  ; LAB_00544c48
    SUB ESI,ESI                         ; 00544c5e
        ;   Label: LAB_00544c5e
    MOV EDI,ESI                         ; 00544c60
        ;   Label: LAB_00544c60
    TEST ESI,ESI                        ; 00544c62
    JZ 0x00544d3b                       ; 00544c64
        ;   XREF to: 00544d3b (CONDITIONAL_JUMP)  ; LAB_00544d3b
    MOV ESI,0x5966b9                    ; 00544c6a | = ".tex"
        ;   Label: LAB_00544c6a
    PUSH EDI                            ; 00544c6f
    MOV AL,byte ptr [ESI]               ; 00544c70 | = ".tex" | s_tex_005966b9+2
        ;   Label: LAB_00544c70
    MOV byte ptr [EDI],AL               ; 00544c72
    CMP AL,0x0                          ; 00544c74
    JZ 0x00544c88                       ; 00544c76
        ;   XREF to: 00544c88 (CONDITIONAL_JUMP)  ; LAB_00544c88
    MOV AL,byte ptr [ESI + 0x1]         ; 00544c78 | s_tex_005966b9+1 | s_tex_005966b9+3
    ADD ESI,0x2                         ; 00544c7b
    MOV byte ptr [EDI + 0x1],AL         ; 00544c7e
    ADD EDI,0x2                         ; 00544c81
    CMP AL,0x0                          ; 00544c84
    JNZ 0x00544c70                      ; 00544c86
        ;   XREF to: 00544c70 (CONDITIONAL_JUMP)  ; LAB_00544c70
    POP EDI                             ; 00544c88
        ;   Label: LAB_00544c88
    PUSH 0x5966be                       ; 00544c89 | = "wt"
    LEA EAX,[ESP + 0x4]                 ; 00544c8e
    PUSH EAX                            ; 00544c92
    PUSH 0x5966c1                       ; 00544c93 | = "data"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 00544c98
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00544c9d
    MOV dword ptr [ESP + 0x100],EAX     ; 00544ca0
    TEST EAX,EAX                        ; 00544ca7
    JNZ 0x00544cce                      ; 00544ca9
        ;   XREF to: 00544cce (CONDITIONAL_JUMP)  ; LAB_00544cce
    MOV EBX,0x5966c6                    ; 00544cab | = "..\\core\\texlist.cpp"
    MOV ESI,0xb6                        ; 00544cb0
    PUSH 0x5966da                       ; 00544cb5 | = "CTextureList::save - Bad filename!"
    MOV dword ptr [0x01cc4800],EBX      ; 00544cba | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00544cc0 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00544cc6
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00544ccb
    MOV EDI,dword ptr [EBP]             ; 00544cce
        ;   Label: LAB_00544cce
    PUSH EDI                            ; 00544cd1
    PUSH 0x5966fd                       ; 00544cd2 | = "%d\n"
    MOV EAX,dword ptr [ESP + 0x108]     ; 00544cd7
    PUSH EAX                            ; 00544cde
    XOR EDI,EDI                         ; 00544cdf
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00544ce1
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV EDX,dword ptr [EBP]             ; 00544ce6
    ADD ESP,0xc                         ; 00544ce9
    TEST EDX,EDX                        ; 00544cec
    JLE 0x00544d20                      ; 00544cee
        ;   XREF to: 00544d20 (CONDITIONAL_JUMP)  ; LAB_00544d20
    LEA ESI,[EBP + 0xc]                 ; 00544cf0
    MOV EBX,EBP                         ; 00544cf3
    MOV ECX,dword ptr [EBX + 0x5dc4]    ; 00544cf5
        ;   Label: LAB_00544cf5
    PUSH ECX                            ; 00544cfb
    PUSH ESI                            ; 00544cfc
    PUSH 0x596701                       ; 00544cfd | = "%s,%d\n"
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00544d02
    ADD EBX,0x4                         ; 00544d09
    PUSH EAX                            ; 00544d0c
    INC EDI                             ; 00544d0d
    ADD ESI,0x18                        ; 00544d0e
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00544d11
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV EDX,dword ptr [EBP]             ; 00544d16
    ADD ESP,0x10                        ; 00544d19
    CMP EDI,EDX                         ; 00544d1c
    JL 0x00544cf5                       ; 00544d1e
        ;   XREF to: 00544cf5 (CONDITIONAL_JUMP)  ; LAB_00544cf5
    MOV ECX,dword ptr [ESP + 0x100]     ; 00544d20
        ;   Label: LAB_00544d20
    PUSH ECX                            ; 00544d27
    CALL crt_stdio.c_fclose_FUN_00563380 ; 00544d28
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 00544d2d
    ADD ESP,0x104                       ; 00544d30
    POP EBP                             ; 00544d36
    POP EDI                             ; 00544d37
    POP ESI                             ; 00544d38
    POP EBX                             ; 00544d39
    RET                                 ; 00544d3a
    MOV EDX,0x59667d                    ; 00544d3b | = "..\\core\\texlist.cpp"
        ;   Label: LAB_00544d3b
    MOV ECX,0xad                        ; 00544d40
    PUSH 0x596691                       ; 00544d45 | = "CTextureList::save - No extension found"
    MOV dword ptr [0x01cc4800],EDX      ; 00544d4a | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00544d50 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00544d56
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00544d5b
    JMP 0x00544c6a                      ; 00544d5e
        ;   XREF to: 00544c6a (UNCONDITIONAL_JUMP)  ; LAB_00544c6a

