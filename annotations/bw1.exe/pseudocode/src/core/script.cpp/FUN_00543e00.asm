; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_script_cpp_FUN_00543e00(CScript *param_1,char *param_2)
;
; Local Variables:
; undefined1       Stack[-0x318]:1  local_318
; undefined        Stack[-0x118]:1  local_118
; undefined1       Stack[-0x117]:1  local_117
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mission.cpp_FUN_0051abf0 at 0051ac23
;
; Referenced Globals:
;   TerminatedCString s_world_005ee1d2
;   undefined1 DAT_005ee1d8
;   undefined1 DAT_005ee1d9
;   undefined1 DAT_005ee1da
;   undefined1 DAT_005ee1db
;   undefined4 DAT_005ee1dd
;   TerminatedCString s_world_005ee1e0
;   TerminatedCString s_Probable_non_text_file_s_005ee1e6
;   CEditorTools* g_CEditorToolsPtr = 01c3eb54
;
; Called Functions:
;   core_script.cpp_CScript_dbLoad_FUN_0054af20
;   core_script.cpp_FUN_00543740
;   core_script.cpp_FUN_00543fd0
;   core_script.cpp_FUN_00544190
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fgetc_FUN_005c0530
;   crt_stdio.c_ftell_FUN_005c2e90
;   crt_string.c_splitpath_FUN_005c2238
;   engine_dosio.cpp_FUN_00479180
;   engine_dosio.cpp_getFileSize_FUN_00478fb0
;   shape_edittool.cpp_CStrList_add_FUN_004994d0
;   shape_edittool.cpp_FUN_004943a0
;   shape_edittool.cpp_FUN_0049df50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543e00
        ;   Label: core_script.cpp_FUN_00543e00
    PUSH ESI                            ; 00543e01
    PUSH EDI                            ; 00543e02
    PUSH EBP                            ; 00543e03
    SUB ESP,0x308                       ; 00543e04
    MOV EDX,dword ptr [ESP + 0x31c]     ; 00543e0a
    PUSH EDX                            ; 00543e11
    CALL core_script.cpp_FUN_00543740   ; 00543e12
        ;   XREF to: 00543740 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00543740()
    ADD ESP,0x4                         ; 00543e17
    MOV ECX,dword ptr [ESP + 0x320]     ; 00543e1a
    PUSH ECX                            ; 00543e21
    PUSH 0x5ee1d2                       ; 00543e22 | = "world"
    CALL engine_dosio.cpp_getFileSize_FUN_00478fb0 ; 00543e27
        ;   XREF to: 00478fb0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00478fb0(char * directory, char * filename)
    MOV EBX,EAX                         ; 00543e2c
    ADD ESP,0x8                         ; 00543e2e
    TEST EAX,EAX                        ; 00543e31
    JG 0x00543e45                       ; 00543e33
        ;   XREF to: 00543e45 (CONDITIONAL_JUMP)  ; LAB_00543e45
    MOV EAX,0x1                         ; 00543e35
        ;   Label: LAB_00543e35
    ADD ESP,0x308                       ; 00543e3a
    POP EBP                             ; 00543e40
    POP EDI                             ; 00543e41
    POP ESI                             ; 00543e42
    POP EBX                             ; 00543e43
    RET                                 ; 00543e44
    PUSH 0x0                            ; 00543e45
        ;   Label: LAB_00543e45
    LEA EAX,[ESP + 0x204]               ; 00543e47
    PUSH EAX                            ; 00543e4e
    PUSH 0x0                            ; 00543e4f
    PUSH 0x0                            ; 00543e51
    MOV ESI,dword ptr [ESP + 0x330]     ; 00543e53
    PUSH ESI                            ; 00543e5a
    CALL crt_string.c_splitpath_FUN_005c2238 ; 00543e5b
        ;   XREF to: 005c2238 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005c2238(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 00543e60
    LEA EDI,[ESP + 0x200]               ; 00543e63
    MOV ESI,0x5ee1d8                    ; 00543e6a | DAT_005ee1d8
    PUSH EDI                            ; 00543e6f
    SUB ECX,ECX                         ; 00543e70
    DEC ECX                             ; 00543e72
    MOV AL,0x0                          ; 00543e73
    SCASB.REPNE ES:EDI                  ; 00543e75
    DEC EDI                             ; 00543e77
    MOV AL,byte ptr [ESI]               ; 00543e78 | DAT_005ee1d8 | DAT_005ee1da
        ;   Label: LAB_00543e78
    MOV byte ptr [EDI],AL               ; 00543e7a
    CMP AL,0x0                          ; 00543e7c
    JZ 0x00543e90                       ; 00543e7e
        ;   XREF to: 00543e90 (CONDITIONAL_JUMP)  ; LAB_00543e90
    MOV AL,byte ptr [ESI + 0x1]         ; 00543e80 | DAT_005ee1d9 | DAT_005ee1db
    ADD ESI,0x2                         ; 00543e83
    MOV byte ptr [EDI + 0x1],AL         ; 00543e86
    ADD EDI,0x2                         ; 00543e89
    CMP AL,0x0                          ; 00543e8c
    JNZ 0x00543e78                      ; 00543e8e
        ;   XREF to: 00543e78 (CONDITIONAL_JUMP)  ; LAB_00543e78
    POP EDI                             ; 00543e90
        ;   Label: LAB_00543e90
    LEA EAX,[ESP + 0x200]               ; 00543e91
    PUSH EAX                            ; 00543e98
    MOV EDI,dword ptr [ESP + 0x320]     ; 00543e99
    PUSH EDI                            ; 00543ea0
    CALL core_script.cpp_CScript_dbLoad_FUN_0054af20 ; 00543ea1
        ;   XREF to: 0054af20 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_dbLoad_FUN_0054af20(CScript * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00543ea6
    PUSH 0x5ee1dd                       ; 00543ea9 | DAT_005ee1dd
    MOV EBP,dword ptr [ESP + 0x324]     ; 00543eae
    PUSH EBP                            ; 00543eb5
    PUSH 0x5ee1e0                       ; 00543eb6 | = "world"
    CALL engine_dosio.cpp_FUN_00479180  ; 00543ebb
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00543ec0
    MOV ESI,EAX                         ; 00543ec3
    TEST EAX,EAX                        ; 00543ec5
    JZ 0x00543e35                       ; 00543ec7
        ;   XREF to: 00543e35 (CONDITIONAL_JUMP)  ; LAB_00543e35
    PUSH EAX                            ; 00543ecd
    CALL crt_stdio.c_ftell_FUN_005c2e90 ; 00543ece
        ;   XREF to: 005c2e90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ftell_FUN_005c2e90()
    ADD ESP,0x4                         ; 00543ed3
    LEA EDI,[EBX + EAX*0x1]             ; 00543ed6
    MOV EAX,dword ptr [ESP + 0x31c]     ; 00543ed9
    ADD EAX,0x34                        ; 00543ee0
    MOV EBP,0x1                         ; 00543ee3
    MOV dword ptr [ESP + 0x304],EAX     ; 00543ee8
    XOR EBX,EBX                         ; 00543eef
        ;   Label: LAB_00543eef
    PUSH ESI                            ; 00543ef1
        ;   Label: LAB_00543ef1
    CALL crt_stdio.c_ftell_FUN_005c2e90 ; 00543ef2
        ;   XREF to: 005c2e90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ftell_FUN_005c2e90()
    ADD ESP,0x4                         ; 00543ef7
    CMP EAX,EDI                         ; 00543efa
    JL 0x00543f4e                       ; 00543efc
        ;   XREF to: 00543f4e (CONDITIONAL_JUMP)  ; LAB_00543f4e
    XOR EBP,EBP                         ; 00543efe
    XOR AH,AH                           ; 00543f00
        ;   Label: LAB_00543f00
    MOV byte ptr [ESP + EBX*0x1],AH     ; 00543f02
    MOV EAX,ESP                         ; 00543f05
    PUSH EAX                            ; 00543f07
    MOV EBX,dword ptr [ESP + 0x308]     ; 00543f08
    PUSH EBX                            ; 00543f0f
    CALL shape_edittool.cpp_CStrList_add_FUN_004994d0 ; 00543f10
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004994d0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00543f15
    TEST EBP,EBP                        ; 00543f18
    JNZ 0x00543eef                      ; 00543f1a
        ;   XREF to: 00543eef (CONDITIONAL_JUMP)  ; LAB_00543eef
    PUSH ESI                            ; 00543f1c
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 00543f1d
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 00543f22
    MOV ESI,dword ptr [ESP + 0x31c]     ; 00543f25
    PUSH ESI                            ; 00543f2c
    CALL core_script.cpp_FUN_00543fd0   ; 00543f2d
        ;   XREF to: 00543fd0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_FUN_00543fd0(CScript * this_ptr)
    ADD ESP,0x4                         ; 00543f32
    PUSH ESI                            ; 00543f35
    CALL core_script.cpp_FUN_00544190   ; 00543f36
        ;   XREF to: 00544190 (UNCONDITIONAL_CALL)  ; void core_script.cpp_FUN_00544190(CScript * this_ptr)
    MOV EAX,0x1                         ; 00543f3b
    ADD ESP,0x4                         ; 00543f40
    ADD ESP,0x308                       ; 00543f43
    POP EBP                             ; 00543f49
    POP EDI                             ; 00543f4a
    POP ESI                             ; 00543f4b
    POP EBX                             ; 00543f4c
    RET                                 ; 00543f4d
    PUSH ESI                            ; 00543f4e
        ;   Label: LAB_00543f4e
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00543f4f
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005c0530()
    ADD ESP,0x4                         ; 00543f54
    MOV EDX,EAX                         ; 00543f57
    CMP EAX,-0x1                        ; 00543f59
    JZ 0x00543f00                       ; 00543f5c
        ;   XREF to: 00543f00 (CONDITIONAL_JUMP)  ; LAB_00543f00
    CMP EAX,0xd                         ; 00543f5e
    JZ 0x00543ef1                       ; 00543f61
        ;   XREF to: 00543ef1 (CONDITIONAL_JUMP)  ; LAB_00543ef1
    CMP EAX,0xa                         ; 00543f63
    JZ 0x00543f00                       ; 00543f66
        ;   XREF to: 00543f00 (CONDITIONAL_JUMP)  ; LAB_00543f00
    TEST EAX,EAX                        ; 00543f68
    JZ 0x00543f76                       ; 00543f6a
        ;   XREF to: 00543f76 (CONDITIONAL_JUMP)  ; LAB_00543f76
    INC EBX                             ; 00543f6c
    MOV byte ptr [ESP + EBX*0x1 + -0x1],DL ; 00543f6d
    JMP 0x00543ef1                      ; 00543f71
        ;   XREF to: 00543ef1 (UNCONDITIONAL_JUMP)  ; LAB_00543ef1
    PUSH ESI                            ; 00543f76
        ;   Label: LAB_00543f76
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 00543f77
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 00543f7c
    MOV EAX,dword ptr [ESP + 0x31c]     ; 00543f7f
    ADD EAX,0x34                        ; 00543f86
    PUSH EAX                            ; 00543f89
    CALL shape_edittool.cpp_FUN_0049df50 ; 00543f8a
        ;   XREF to: 0049df50 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_0049df50(CStrList * this_ptr)
    ADD ESP,0x4                         ; 00543f8f
    INC EAX                             ; 00543f92
    PUSH EAX                            ; 00543f93
    MOV EAX,dword ptr [ESP + 0x324]     ; 00543f94
    PUSH EAX                            ; 00543f9b
    PUSH 0x5ee1e6                       ; 00543f9c | = "Probable non-text file %s detected ne..."
    MOV EDX,dword ptr [0x0061abc0]      ; 00543fa1 | g_CEditorToolsPtr
    PUSH EDX                            ; 00543fa7
    CALL shape_edittool.cpp_FUN_004943a0 ; 00543fa8
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004943a0()
    ADD ESP,0x10                        ; 00543fad
    MOV ECX,dword ptr [ESP + 0x31c]     ; 00543fb0
    PUSH ECX                            ; 00543fb7
    CALL core_script.cpp_FUN_00543740   ; 00543fb8
        ;   XREF to: 00543740 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00543740()
    ADD ESP,0x4                         ; 00543fbd
    XOR EAX,EAX                         ; 00543fc0
    ADD ESP,0x308                       ; 00543fc2
    POP EBP                             ; 00543fc8
    POP EDI                             ; 00543fc9
    POP ESI                             ; 00543fca
    POP EBX                             ; 00543fcb
    RET                                 ; 00543fcc

