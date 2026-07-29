; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int support_newmsg_cpp_FUN_004edfc0(char *param_1)
;
; Local Variables:
; undefined        Stack[-0x31c]:1  local_31c
; undefined        Stack[-0x21c]:1  local_21c
; undefined1       Stack[-0x21b]:1  local_21b
; undefined        Stack[-0x11c]:1  local_11c
; undefined1       Stack[-0x11b]:1  local_11b
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_main.c_FUN_004c85f0 at 004c86f9
;
; Referenced Globals:
;   char CHAR_00h_0058c922 = \x00
;   TerminatedCString s_rt_0058c923
;   char CHAR_00h_0058c926 = \x00
;   TerminatedCString s_d_0058c927
;   TerminatedCString s_d_0058c92b
;   TerminatedCString s_support_newmsg_cpp_0058c92f
;   TerminatedCString s_Unknown_message_file_ver_0058c945
;   TerminatedCString s_anon_0058c962
;   TerminatedCString s_anon_0058c96b
;   TerminatedCString s_anon_0058c96d
;   TerminatedCString s_support_newmsg_cpp_0058c97f
;   TerminatedCString s_Error_reading_s_0058c995
;   TerminatedCString s_support_newmsg_cpp_0058c9a6
;   TerminatedCString s_Too_many_messages_in_s_0058c9bc
;   undefined4 DAT_005bdf50
;   ... and 8 more
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fgets_FUN_00564b20
;   crt_stdio.c_fscanf_FUN_00563350
;   crt_stdio.c_ftell_FUN_00566e70
;   crt_string.c__strcmp_FUN_005649c0
;   engine_dosio.cpp_getFile_FUN_00456a60
;   engine_dosio.cpp_getFileSize_FUN_004568c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004edfc0
        ;   Label: support_newmsg.cpp_FUN_004edfc0
    PUSH ESI                            ; 004edfc1
    PUSH EDI                            ; 004edfc2
    PUSH EBP                            ; 004edfc3
    SUB ESP,0x30c                       ; 004edfc4
    MOV EBP,dword ptr [ESP + 0x320]     ; 004edfca
    PUSH EBP                            ; 004edfd1
    XOR EDX,EDX                         ; 004edfd2
    PUSH 0x58c922                       ; 004edfd4 | CHAR_00h_0058c922
    MOV dword ptr [ESP + 0x308],EDX     ; 004edfd9
    CALL engine_dosio.cpp_getFileSize_FUN_004568c0 ; 004edfe0
        ;   XREF to: 004568c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004568c0(char * directory, char * filename)
    MOV EDI,EAX                         ; 004edfe5
    ADD ESP,0x8                         ; 004edfe7
    TEST EAX,EAX                        ; 004edfea
    JG 0x004ee001                       ; 004edfec
        ;   XREF to: 004ee001 (CONDITIONAL_JUMP)  ; LAB_004ee001
    ADD ESP,0x30c                       ; 004edfee
        ;   Label: LAB_004edfee
    POP EBP                             ; 004edff4
    POP EDI                             ; 004edff5
    POP ESI                             ; 004edff6
    POP EBX                             ; 004edff7
    LEA EAX,[EAX]                       ; 004edff8
    MOV EDX,EDX                         ; 004edffe
    RET                                 ; 004ee000
    PUSH 0x58c923                       ; 004ee001 | = "rt"
        ;   Label: LAB_004ee001
    PUSH EBP                            ; 004ee006
    PUSH 0x58c926                       ; 004ee007 | CHAR_00h_0058c926
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004ee00c
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    MOV ESI,EAX                         ; 004ee011
    ADD ESP,0xc                         ; 004ee013
    MOV EBX,EAX                         ; 004ee016
    TEST EAX,EAX                        ; 004ee018
    JZ 0x004edfee                       ; 004ee01a
        ;   XREF to: 004edfee (CONDITIONAL_JUMP)  ; LAB_004edfee
    PUSH EAX                            ; 004ee01c
    CALL crt_stdio.c_ftell_FUN_00566e70 ; 004ee01d
        ;   XREF to: 00566e70 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_00566e70(_FILE * file_handle)
    ADD ESP,0x4                         ; 004ee022
    PUSH ESI                            ; 004ee025
    PUSH 0xff                           ; 004ee026
    ADD EDI,EAX                         ; 004ee02b
    LEA EAX,[ESP + 0x8]                 ; 004ee02d
    PUSH EAX                            ; 004ee031
    MOV dword ptr [ESP + 0x310],EDI     ; 004ee032
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 004ee039
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004ee03e
    LEA EAX,[ESP + 0x300]               ; 004ee041
    PUSH EAX                            ; 004ee048
    PUSH 0x58c927                       ; 004ee049 | = "%d\n"
    PUSH ESI                            ; 004ee04e
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004ee04f
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004ee054
    PUSH ESI                            ; 004ee057
    PUSH 0xff                           ; 004ee058
    LEA EAX,[ESP + 0x8]                 ; 004ee05d
    PUSH EAX                            ; 004ee061
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 004ee062
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004ee067
    PUSH 0x1d16810                      ; 004ee06a | DAT_01d16810
    PUSH 0x58c92b                       ; 004ee06f | = "%d\n"
    PUSH ESI                            ; 004ee074
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004ee075
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004ee07a
    CMP dword ptr [ESP + 0x300],0x0     ; 004ee07d
    JNZ 0x004ee1c0                      ; 004ee085
        ;   XREF to: 004ee1c0 (CONDITIONAL_JUMP)  ; LAB_004ee1c0
    PUSH EBX                            ; 004ee08b
        ;   Label: LAB_004ee08b
    PUSH 0xff                           ; 004ee08c
    LEA EAX,[ESP + 0x8]                 ; 004ee091
    PUSH EAX                            ; 004ee095
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 004ee096
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004ee09b
    PUSH 0x5bdf50                       ; 004ee09e | DAT_005bdf50
    PUSH 0x58c962                       ; 004ee0a3 | = "\"%[^\"]\"\n"
    PUSH EBX                            ; 004ee0a8
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004ee0a9
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004ee0ae
    PUSH 0x58c96b                       ; 004ee0b1 | = " "
        ;   Label: LAB_004ee0b1
    PUSH EBX                            ; 004ee0b6
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004ee0b7
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004ee0bc
    PUSH EBX                            ; 004ee0bf
    CALL crt_stdio.c_ftell_FUN_00566e70 ; 004ee0c0
        ;   XREF to: 00566e70 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_00566e70(_FILE * file_handle)
    ADD ESP,0x4                         ; 004ee0c5
    CMP EAX,dword ptr [ESP + 0x304]     ; 004ee0c8
    JL 0x004ee1e8                       ; 004ee0cf
        ;   XREF to: 004ee1e8 (CONDITIONAL_JUMP)  ; LAB_004ee1e8
    PUSH EBX                            ; 004ee0d5
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004ee0d6
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    MOV EBX,dword ptr [0x01d16818]      ; 004ee0db | DAT_01d16818
    ADD ESP,0x4                         ; 004ee0e1
    TEST EBX,EBX                        ; 004ee0e4
    JLE 0x004ee120                      ; 004ee0e6
        ;   XREF to: 004ee120 (CONDITIONAL_JUMP)  ; LAB_004ee120
    MOV EBP,0x1d177c0                   ; 004ee0e8
    MOV EDX,0x1d271c0                   ; 004ee0ed
    SHL EBX,0x2                         ; 004ee0f2
    XOR EAX,EAX                         ; 004ee0f5
    MOV dword ptr [EAX + 0x1d1681c],EBP ; 004ee0f7 | DAT_01d16820
        ;   Label: LAB_004ee0f7
    MOV dword ptr [EAX + 0x1d16fec],EDX ; 004ee0fd | DAT_01d16ff0
    ADD EAX,0x4                         ; 004ee103
    ADD EDX,0x100                       ; 004ee106
    ADD EBP,0x80                        ; 004ee10c
    CMP EAX,EBX                         ; 004ee112
    JL 0x004ee0f7                       ; 004ee114
        ;   XREF to: 004ee0f7 (CONDITIONAL_JUMP)  ; LAB_004ee0f7
    LEA EAX,[EAX]                       ; 004ee116
    LEA EDX,[EDX]                       ; 004ee11c
    XOR EBP,EBP                         ; 004ee120
        ;   Label: LAB_004ee120
    MOV dword ptr [ESP + 0x308],EBP     ; 004ee122
    MOV EAX,[0x01d16818]                ; 004ee129 | DAT_01d16818
        ;   Label: LAB_004ee129
    DEC EAX                             ; 004ee12e
    CMP EBP,EAX                         ; 004ee12f
    JGE 0x004ee2ce                      ; 004ee131
        ;   XREF to: 004ee2ce (CONDITIONAL_JUMP)  ; LAB_004ee2ce
    MOV EAX,[0x01d16818]                ; 004ee137 | DAT_01d16818
    LEA EDI,[EBP + 0x1]                 ; 004ee13c
    CMP EDI,EAX                         ; 004ee13f
    JGE 0x004ee1a9                      ; 004ee141
        ;   XREF to: 004ee1a9 (CONDITIONAL_JUMP)  ; LAB_004ee1a9
    MOV ESI,dword ptr [ESP + 0x308]     ; 004ee143
    LEA EBX,[EDI*0x4 + 0x0]             ; 004ee14a
    MOV EAX,dword ptr [EBX + 0x1d1681c] ; 004ee151 | DAT_01d16820 | DAT_01d16824
        ;   Label: LAB_004ee151
    PUSH EAX                            ; 004ee157
    MOV EDX,dword ptr [ESI + 0x1d1681c] ; 004ee158 | DAT_01d16820
    PUSH EDX                            ; 004ee15e
    CALL crt_string.c__strcmp_FUN_005649c0 ; 004ee15f
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005649c0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004ee164
    TEST EAX,EAX                        ; 004ee167
    JLE 0x004ee19b                      ; 004ee169
        ;   XREF to: 004ee19b (CONDITIONAL_JUMP)  ; LAB_004ee19b
    MOV EDX,dword ptr [EBX + 0x1d1681c] ; 004ee16b | DAT_01d16820
    MOV EAX,dword ptr [ESI + 0x1d1681c] ; 004ee171
    MOV dword ptr [ESI + 0x1d1681c],EDX ; 004ee177
    MOV EDX,dword ptr [EBX + 0x1d16fec] ; 004ee17d | DAT_01d16ff0
    MOV dword ptr [EBX + 0x1d1681c],EAX ; 004ee183 | DAT_01d16820
    MOV EAX,dword ptr [ESI + 0x1d16fec] ; 004ee189
    MOV dword ptr [ESI + 0x1d16fec],EDX ; 004ee18f
    MOV dword ptr [EBX + 0x1d16fec],EAX ; 004ee195 | DAT_01d16ff0
    MOV EDX,dword ptr [0x01d16818]      ; 004ee19b | DAT_01d16818
        ;   Label: LAB_004ee19b
    INC EDI                             ; 004ee1a1
    ADD EBX,0x4                         ; 004ee1a2
    CMP EDI,EDX                         ; 004ee1a5
    JL 0x004ee151                       ; 004ee1a7
        ;   XREF to: 004ee151 (CONDITIONAL_JUMP)  ; LAB_004ee151
    MOV ECX,dword ptr [ESP + 0x308]     ; 004ee1a9
        ;   Label: LAB_004ee1a9
    ADD ECX,0x4                         ; 004ee1b0
    INC EBP                             ; 004ee1b3
    MOV dword ptr [ESP + 0x308],ECX     ; 004ee1b4
    JMP 0x004ee129                      ; 004ee1bb
        ;   XREF to: 004ee129 (UNCONDITIONAL_JUMP)  ; LAB_004ee129
    MOV ESI,0x58c92f                    ; 004ee1c0 | = "..\\support\\newmsg.cpp"
        ;   Label: LAB_004ee1c0
    MOV EDI,0x52                        ; 004ee1c5
    PUSH 0x58c945                       ; 004ee1ca | = "Unknown message file version"
    MOV dword ptr [0x01cc4800],ESI      ; 004ee1cf | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004ee1d5 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004ee1db
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004ee1e0
    JMP 0x004ee08b                      ; 004ee1e3
        ;   XREF to: 004ee08b (UNCONDITIONAL_JUMP)  ; LAB_004ee08b
    LEA EAX,[ESP + 0x200]               ; 004ee1e8
        ;   Label: LAB_004ee1e8
    PUSH EAX                            ; 004ee1ef
    LEA EAX,[ESP + 0x104]               ; 004ee1f0
    PUSH EAX                            ; 004ee1f7
    PUSH 0x58c96d                       ; 004ee1f8 | = "\"%[^\"]\", \"%[^\"]\"\n"
    PUSH EBX                            ; 004ee1fd
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004ee1fe
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0x10                        ; 004ee203
    CMP EAX,0x2                         ; 004ee206
    JZ 0x004ee22f                       ; 004ee209
        ;   XREF to: 004ee22f (CONDITIONAL_JUMP)  ; LAB_004ee22f
    PUSH EBP                            ; 004ee20b
    MOV ECX,0x58c97f                    ; 004ee20c | = "..\\support\\newmsg.cpp"
    MOV ESI,0x63                        ; 004ee211
    PUSH 0x58c995                       ; 004ee216 | = "Error reading %s"
    MOV dword ptr [0x01cc4800],ECX      ; 004ee21b | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004ee221 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004ee227
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 004ee22c
    CMP dword ptr [0x01d16818],0x1f4    ; 004ee22f | DAT_01d16818
        ;   Label: LAB_004ee22f
    JGE 0x004ee2a6                      ; 004ee239
        ;   XREF to: 004ee2a6 (CONDITIONAL_JUMP)  ; LAB_004ee2a6
    MOV EDI,dword ptr [0x01d16818]      ; 004ee23b | DAT_01d16818
        ;   Label: LAB_004ee23b
    SHL EDI,0x7                         ; 004ee241
    LEA ESI,[ESP + 0x100]               ; 004ee244
    ADD EDI,0x1d177c0                   ; 004ee24b
    PUSH EDI                            ; 004ee251
    MOV AL,byte ptr [ESI]               ; 004ee252
        ;   Label: LAB_004ee252
    MOV byte ptr [EDI],AL               ; 004ee254
    CMP AL,0x0                          ; 004ee256
    JZ 0x004ee26a                       ; 004ee258
        ;   XREF to: 004ee26a (CONDITIONAL_JUMP)  ; LAB_004ee26a
    MOV AL,byte ptr [ESI + 0x1]         ; 004ee25a
    ADD ESI,0x2                         ; 004ee25d
    MOV byte ptr [EDI + 0x1],AL         ; 004ee260
    ADD EDI,0x2                         ; 004ee263
    CMP AL,0x0                          ; 004ee266
    JNZ 0x004ee252                      ; 004ee268
        ;   XREF to: 004ee252 (CONDITIONAL_JUMP)  ; LAB_004ee252
    POP EDI                             ; 004ee26a
        ;   Label: LAB_004ee26a
    MOV EDI,dword ptr [0x01d16818]      ; 004ee26b | DAT_01d16818
    SHL EDI,0x8                         ; 004ee271
    LEA ESI,[ESP + 0x200]               ; 004ee274
    ADD EDI,0x1d271c0                   ; 004ee27b
    PUSH EDI                            ; 004ee281
    MOV AL,byte ptr [ESI]               ; 004ee282
        ;   Label: LAB_004ee282
    MOV byte ptr [EDI],AL               ; 004ee284
    CMP AL,0x0                          ; 004ee286
    JZ 0x004ee29a                       ; 004ee288
        ;   XREF to: 004ee29a (CONDITIONAL_JUMP)  ; LAB_004ee29a
    MOV AL,byte ptr [ESI + 0x1]         ; 004ee28a
    ADD ESI,0x2                         ; 004ee28d
    MOV byte ptr [EDI + 0x1],AL         ; 004ee290
    ADD EDI,0x2                         ; 004ee293
    CMP AL,0x0                          ; 004ee296
    JNZ 0x004ee282                      ; 004ee298
        ;   XREF to: 004ee282 (CONDITIONAL_JUMP)  ; LAB_004ee282
    POP EDI                             ; 004ee29a
        ;   Label: LAB_004ee29a
    INC dword ptr [0x01d16818]          ; 004ee29b | DAT_01d16818
    JMP 0x004ee0b1                      ; 004ee2a1
        ;   XREF to: 004ee0b1 (UNCONDITIONAL_JUMP)  ; LAB_004ee0b1
    PUSH EBP                            ; 004ee2a6
        ;   Label: LAB_004ee2a6
    MOV EAX,0x58c9a6                    ; 004ee2a7 | = "..\\support\\newmsg.cpp"
    MOV EDX,0x68                        ; 004ee2ac
    PUSH 0x58c9bc                       ; 004ee2b1 | = "Too many messages in %s"
    MOV [0x01cc4800],EAX                ; 004ee2b6 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 004ee2bb | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004ee2c1
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 004ee2c6
    JMP 0x004ee23b                      ; 004ee2c9
        ;   XREF to: 004ee23b (UNCONDITIONAL_JUMP)  ; LAB_004ee23b
    MOV dword ptr [0x01d16814],0x1      ; 004ee2ce | DAT_01d16814
        ;   Label: LAB_004ee2ce
    ADD ESP,0x30c                       ; 004ee2d8
    POP EBP                             ; 004ee2de
    POP EDI                             ; 004ee2df
    POP ESI                             ; 004ee2e0
    POP EBX                             ; 004ee2e1
    RET                                 ; 004ee2e2

