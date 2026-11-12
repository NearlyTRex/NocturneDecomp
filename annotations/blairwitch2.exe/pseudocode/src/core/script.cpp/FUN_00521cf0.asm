; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_script_cpp_FUN_00521cf0(CScript *param_1,char *param_2)
;
; Local Variables:
; undefined1       Stack[-0x318]:1  local_318
; undefined        Stack[-0x118]:1  local_118
; undefined1       Stack[-0x117]:1  local_117
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mission.cpp_FUN_004fbc90 at 004fbcc3
;
; Referenced Globals:
;   TerminatedCString s_world_005e2ece
;   undefined1 DAT_005e2ed4
;   undefined1 DAT_005e2ed5
;   undefined1 DAT_005e2ed6
;   undefined1 DAT_005e2ed7
;   undefined4 DAT_005e2ed9
;   TerminatedCString s_world_005e2edc
;   TerminatedCString s_Probable_non_text_file_s_005e2ee2
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;
; Called Functions:
;   core_script.cpp_CScript_buildParsedLines_FUN_00521ec0
;   core_script.cpp_CScript_dbLoad_FUN_00529c10
;   core_script.cpp_CScript_initRuntime_FUN_00522080
;   core_script.cpp_FUN_00521630
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fgetc_FUN_005b8180
;   crt_stdio.c_ftell_FUN_005baab0
;   crt_string.c_splitpath_FUN_005b9e58
;   engine_dosio.cpp_FUN_00460c70
;   engine_dosio.cpp_getFileSize_FUN_00460aa0
;   shape_edittool.cpp_CEditorTools_showError_FUN_0047be40
;   shape_edittool.cpp_CStrList_add_FUN_00480e70
;   shape_edittool.cpp_FUN_004858f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521cf0
        ;   Label: core_script.cpp_FUN_00521cf0
    PUSH ESI                            ; 00521cf1
    PUSH EDI                            ; 00521cf2
    PUSH EBP                            ; 00521cf3
    SUB ESP,0x308                       ; 00521cf4
    MOV EDX,dword ptr [ESP + 0x31c]     ; 00521cfa
    PUSH EDX                            ; 00521d01
    CALL core_script.cpp_FUN_00521630   ; 00521d02
        ;   XREF to: 00521630 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00521630()
    ADD ESP,0x4                         ; 00521d07
    MOV ECX,dword ptr [ESP + 0x320]     ; 00521d0a
    PUSH ECX                            ; 00521d11
    PUSH 0x5e2ece                       ; 00521d12 | = "world"
    CALL engine_dosio.cpp_getFileSize_FUN_00460aa0 ; 00521d17
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00460aa0(char * directory, char * filename)
    MOV EBX,EAX                         ; 00521d1c
    ADD ESP,0x8                         ; 00521d1e
    TEST EAX,EAX                        ; 00521d21
    JG 0x00521d35                       ; 00521d23
        ;   XREF to: 00521d35 (CONDITIONAL_JUMP)  ; LAB_00521d35
    MOV EAX,0x1                         ; 00521d25
        ;   Label: LAB_00521d25
    ADD ESP,0x308                       ; 00521d2a
    POP EBP                             ; 00521d30
    POP EDI                             ; 00521d31
    POP ESI                             ; 00521d32
    POP EBX                             ; 00521d33
    RET                                 ; 00521d34
    PUSH 0x0                            ; 00521d35
        ;   Label: LAB_00521d35
    LEA EAX,[ESP + 0x204]               ; 00521d37
    PUSH EAX                            ; 00521d3e
    PUSH 0x0                            ; 00521d3f
    PUSH 0x0                            ; 00521d41
    MOV ESI,dword ptr [ESP + 0x330]     ; 00521d43
    PUSH ESI                            ; 00521d4a
    CALL crt_string.c_splitpath_FUN_005b9e58 ; 00521d4b
        ;   XREF to: 005b9e58 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005b9e58(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 00521d50
    LEA EDI,[ESP + 0x200]               ; 00521d53
    MOV ESI,0x5e2ed4                    ; 00521d5a | DAT_005e2ed4
    PUSH EDI                            ; 00521d5f
    SUB ECX,ECX                         ; 00521d60
    DEC ECX                             ; 00521d62
    MOV AL,0x0                          ; 00521d63
    SCASB.REPNE ES:EDI                  ; 00521d65
    DEC EDI                             ; 00521d67
    MOV AL,byte ptr [ESI]               ; 00521d68 | DAT_005e2ed4 | DAT_005e2ed6
        ;   Label: LAB_00521d68
    MOV byte ptr [EDI],AL               ; 00521d6a
    CMP AL,0x0                          ; 00521d6c
    JZ 0x00521d80                       ; 00521d6e
        ;   XREF to: 00521d80 (CONDITIONAL_JUMP)  ; LAB_00521d80
    MOV AL,byte ptr [ESI + 0x1]         ; 00521d70 | DAT_005e2ed5 | DAT_005e2ed7
    ADD ESI,0x2                         ; 00521d73
    MOV byte ptr [EDI + 0x1],AL         ; 00521d76
    ADD EDI,0x2                         ; 00521d79
    CMP AL,0x0                          ; 00521d7c
    JNZ 0x00521d68                      ; 00521d7e
        ;   XREF to: 00521d68 (CONDITIONAL_JUMP)  ; LAB_00521d68
    POP EDI                             ; 00521d80
        ;   Label: LAB_00521d80
    LEA EAX,[ESP + 0x200]               ; 00521d81
    PUSH EAX                            ; 00521d88
    MOV EDI,dword ptr [ESP + 0x320]     ; 00521d89
    PUSH EDI                            ; 00521d90
    CALL core_script.cpp_CScript_dbLoad_FUN_00529c10 ; 00521d91
        ;   XREF to: 00529c10 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_dbLoad_FUN_00529c10(CScript * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00521d96
    PUSH 0x5e2ed9                       ; 00521d99 | DAT_005e2ed9
    MOV EBP,dword ptr [ESP + 0x324]     ; 00521d9e
    PUSH EBP                            ; 00521da5
    PUSH 0x5e2edc                       ; 00521da6 | = "world"
    CALL engine_dosio.cpp_FUN_00460c70  ; 00521dab
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00521db0
    MOV ESI,EAX                         ; 00521db3
    TEST EAX,EAX                        ; 00521db5
    JZ 0x00521d25                       ; 00521db7
        ;   XREF to: 00521d25 (CONDITIONAL_JUMP)  ; LAB_00521d25
    PUSH EAX                            ; 00521dbd
    CALL crt_stdio.c_ftell_FUN_005baab0 ; 00521dbe
        ;   XREF to: 005baab0 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_005baab0(_FILE * file_handle)
    ADD ESP,0x4                         ; 00521dc3
    LEA EDI,[EBX + EAX*0x1]             ; 00521dc6
    MOV EAX,dword ptr [ESP + 0x31c]     ; 00521dc9
    ADD EAX,0x34                        ; 00521dd0
    MOV EBP,0x1                         ; 00521dd3
    MOV dword ptr [ESP + 0x304],EAX     ; 00521dd8
    XOR EBX,EBX                         ; 00521ddf
        ;   Label: LAB_00521ddf
    PUSH ESI                            ; 00521de1
        ;   Label: LAB_00521de1
    CALL crt_stdio.c_ftell_FUN_005baab0 ; 00521de2
        ;   XREF to: 005baab0 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_005baab0(_FILE * file_handle)
    ADD ESP,0x4                         ; 00521de7
    CMP EAX,EDI                         ; 00521dea
    JL 0x00521e3e                       ; 00521dec
        ;   XREF to: 00521e3e (CONDITIONAL_JUMP)  ; LAB_00521e3e
    XOR EBP,EBP                         ; 00521dee
    XOR AH,AH                           ; 00521df0
        ;   Label: LAB_00521df0
    MOV byte ptr [ESP + EBX*0x1],AH     ; 00521df2
    MOV EAX,ESP                         ; 00521df5
    PUSH EAX                            ; 00521df7
    MOV EBX,dword ptr [ESP + 0x308]     ; 00521df8
    PUSH EBX                            ; 00521dff
    CALL shape_edittool.cpp_CStrList_add_FUN_00480e70 ; 00521e00
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00480e70(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00521e05
    TEST EBP,EBP                        ; 00521e08
    JNZ 0x00521ddf                      ; 00521e0a
        ;   XREF to: 00521ddf (CONDITIONAL_JUMP)  ; LAB_00521ddf
    PUSH ESI                            ; 00521e0c
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 00521e0d
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 00521e12
    MOV ESI,dword ptr [ESP + 0x31c]     ; 00521e15
    PUSH ESI                            ; 00521e1c
    CALL core_script.cpp_CScript_buildParsedLines_FUN_00521ec0 ; 00521e1d
        ;   XREF to: 00521ec0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_buildParsedLines_FUN_00521ec0(CScript * this_ptr)
    ADD ESP,0x4                         ; 00521e22
    PUSH ESI                            ; 00521e25
    CALL core_script.cpp_CScript_initRuntime_FUN_00522080 ; 00521e26
        ;   XREF to: 00522080 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_initRuntime_FUN_00522080(CScript * this_ptr)
    MOV EAX,0x1                         ; 00521e2b
    ADD ESP,0x4                         ; 00521e30
    ADD ESP,0x308                       ; 00521e33
    POP EBP                             ; 00521e39
    POP EDI                             ; 00521e3a
    POP ESI                             ; 00521e3b
    POP EBX                             ; 00521e3c
    RET                                 ; 00521e3d
    PUSH ESI                            ; 00521e3e
        ;   Label: LAB_00521e3e
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 00521e3f
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 00521e44
    MOV EDX,EAX                         ; 00521e47
    CMP EAX,-0x1                        ; 00521e49
    JZ 0x00521df0                       ; 00521e4c
        ;   XREF to: 00521df0 (CONDITIONAL_JUMP)  ; LAB_00521df0
    CMP EAX,0xd                         ; 00521e4e
    JZ 0x00521de1                       ; 00521e51
        ;   XREF to: 00521de1 (CONDITIONAL_JUMP)  ; LAB_00521de1
    CMP EAX,0xa                         ; 00521e53
    JZ 0x00521df0                       ; 00521e56
        ;   XREF to: 00521df0 (CONDITIONAL_JUMP)  ; LAB_00521df0
    TEST EAX,EAX                        ; 00521e58
    JZ 0x00521e66                       ; 00521e5a
        ;   XREF to: 00521e66 (CONDITIONAL_JUMP)  ; LAB_00521e66
    INC EBX                             ; 00521e5c
    MOV byte ptr [ESP + EBX*0x1 + -0x1],DL ; 00521e5d
    JMP 0x00521de1                      ; 00521e61
        ;   XREF to: 00521de1 (UNCONDITIONAL_JUMP)  ; LAB_00521de1
    PUSH ESI                            ; 00521e66
        ;   Label: LAB_00521e66
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 00521e67
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 00521e6c
    MOV EAX,dword ptr [ESP + 0x31c]     ; 00521e6f
    ADD EAX,0x34                        ; 00521e76
    PUSH EAX                            ; 00521e79
    CALL shape_edittool.cpp_FUN_004858f0 ; 00521e7a
        ;   XREF to: 004858f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_004858f0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 00521e7f
    INC EAX                             ; 00521e82
    PUSH EAX                            ; 00521e83
    MOV EAX,dword ptr [ESP + 0x324]     ; 00521e84
    PUSH EAX                            ; 00521e8b
    PUSH 0x5e2ee2                       ; 00521e8c | = "Probable non-text file %s detected ne..."
    MOV EDX,dword ptr [0x006138e0]      ; 00521e91 | g_CEditorToolsPtr
    PUSH EDX                            ; 00521e97
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 ; 00521e98
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047be40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 00521e9d
    MOV ECX,dword ptr [ESP + 0x31c]     ; 00521ea0
    PUSH ECX                            ; 00521ea7
    CALL core_script.cpp_FUN_00521630   ; 00521ea8
        ;   XREF to: 00521630 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00521630()
    ADD ESP,0x4                         ; 00521ead
    XOR EAX,EAX                         ; 00521eb0
    ADD ESP,0x308                       ; 00521eb2
    POP EBP                             ; 00521eb8
    POP EDI                             ; 00521eb9
    POP ESI                             ; 00521eba
    POP EBX                             ; 00521ebb
    RET                                 ; 00521ebc

