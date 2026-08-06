; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_script_cpp_CScript_FUN_004febd0(CScript *this_ptr,char *param_2,int param_3)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
; int              Stack[0xc]:4   param_3
; Local Variables:
; undefined1       Stack[-0x31c]:1  local_31c
; undefined        Stack[-0x11c]:1  local_11c
; undefined1       Stack[-0x11b]:1  local_11b
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_loadScript_FUN_004d86d0 at 004d870b
;
; Referenced Globals:
;   TerminatedCString s_world_0058e265
;   TerminatedCString s_txt_0058e26b
;   undefined4 s_txt_0058e26b+1
;   undefined4 s_txt_0058e26b+2
;   undefined4 s_txt_0058e26b+3
;   TerminatedCString s_rt_0058e270
;   TerminatedCString s_world_0058e273
;   TerminatedCString s_Probable_non_text_file_s_0058e279
;   TerminatedCString s_core_script_cpp_0058e2be
;   TerminatedCString s_s_failed_syntax_check_on_0058e2d1
;   CEditorTools* g_CEditorTools_PTR_005b6d50 = 01bcd074
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   core_script.cpp_CScript_dbLoad_FUN_00504e70
;   core_script.cpp_CScript_FUN_004fe500
;   core_script.cpp_CScript_FUN_004fee30
;   core_script.cpp_CScript_FUN_004fef60
;   core_script.cpp_CScript_FUN_004feff0
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fgetc_FUN_00564570
;   crt_stdio.c_ftell_FUN_00566e70
;   crt_string.c_splitpath_FUN_00566498
;   engine_dosio.cpp_getFile_FUN_00456a60
;   engine_dosio.cpp_getFileSize_FUN_004568c0
;   shape_edittool.cpp_CStrList_add_FUN_00473cb0
;   shape_edittool.cpp_CStrList_getItemCount_FUN_00477660
;   shape_edittool.cpp_FUN_0046fcd0
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004febd0
        ;   Label: core_script.cpp_CScript_FUN_004febd0
    PUSH ESI                            ; 004febd1
    PUSH EDI                            ; 004febd2
    PUSH EBP                            ; 004febd3
    SUB ESP,0x30c                       ; 004febd4
    MOV EAX,dword ptr [ESP + 0x320]     ; 004febda
    ADD EAX,0x30                        ; 004febe1
    MOV dword ptr [ESP + 0x308],EAX     ; 004febe4
    MOV EDX,dword ptr [ESP + 0x320]     ; 004febeb
        ;   Label: LAB_004febeb
    PUSH EDX                            ; 004febf2
    CALL core_script.cpp_CScript_FUN_004fe500 ; 004febf3
        ;   XREF to: 004fe500 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_FUN_004fe500(CScript * this_ptr)
    ADD ESP,0x4                         ; 004febf8
    MOV ECX,dword ptr [ESP + 0x324]     ; 004febfb
    PUSH ECX                            ; 004fec02
    PUSH 0x58e265                       ; 004fec03 | = "world"
    CALL engine_dosio.cpp_getFileSize_FUN_004568c0 ; 004fec08
        ;   XREF to: 004568c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004568c0(char * directory, char * filename)
    MOV EBX,EAX                         ; 004fec0d
    ADD ESP,0x8                         ; 004fec0f
    TEST EAX,EAX                        ; 004fec12
    JG 0x004fec26                       ; 004fec14
        ;   XREF to: 004fec26 (CONDITIONAL_JUMP)  ; LAB_004fec26
    MOV EAX,0x1                         ; 004fec16
        ;   Label: LAB_004fec16
    ADD ESP,0x30c                       ; 004fec1b
    POP EBP                             ; 004fec21
    POP EDI                             ; 004fec22
    POP ESI                             ; 004fec23
    POP EBX                             ; 004fec24
    RET                                 ; 004fec25
    PUSH 0x0                            ; 004fec26
        ;   Label: LAB_004fec26
    LEA EAX,[ESP + 0x204]               ; 004fec28
    PUSH EAX                            ; 004fec2f
    PUSH 0x0                            ; 004fec30
    PUSH 0x0                            ; 004fec32
    MOV ESI,dword ptr [ESP + 0x334]     ; 004fec34
    PUSH ESI                            ; 004fec3b
    CALL crt_string.c_splitpath_FUN_00566498 ; 004fec3c
        ;   XREF to: 00566498 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_00566498(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 004fec41
    LEA EDI,[ESP + 0x200]               ; 004fec44
    MOV ESI,0x58e26b                    ; 004fec4b | = ".txt"
    PUSH EDI                            ; 004fec50
    SUB ECX,ECX                         ; 004fec51
    DEC ECX                             ; 004fec53
    MOV AL,0x0                          ; 004fec54
    SCASB.REPNE ES:EDI                  ; 004fec56
    DEC EDI                             ; 004fec58
    MOV AL,byte ptr [ESI]               ; 004fec59 | = ".txt" | s_txt_0058e26b+2
        ;   Label: LAB_004fec59
    MOV byte ptr [EDI],AL               ; 004fec5b
    CMP AL,0x0                          ; 004fec5d
    JZ 0x004fec71                       ; 004fec5f
        ;   XREF to: 004fec71 (CONDITIONAL_JUMP)  ; LAB_004fec71
    MOV AL,byte ptr [ESI + 0x1]         ; 004fec61 | s_txt_0058e26b+1 | s_txt_0058e26b+3
    ADD ESI,0x2                         ; 004fec64
    MOV byte ptr [EDI + 0x1],AL         ; 004fec67
    ADD EDI,0x2                         ; 004fec6a
    CMP AL,0x0                          ; 004fec6d
    JNZ 0x004fec59                      ; 004fec6f
        ;   XREF to: 004fec59 (CONDITIONAL_JUMP)  ; LAB_004fec59
    POP EDI                             ; 004fec71
        ;   Label: LAB_004fec71
    LEA EAX,[ESP + 0x200]               ; 004fec72
    PUSH EAX                            ; 004fec79
    MOV EDI,dword ptr [ESP + 0x324]     ; 004fec7a
    PUSH EDI                            ; 004fec81
    CALL core_script.cpp_CScript_dbLoad_FUN_00504e70 ; 004fec82
        ;   XREF to: 00504e70 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_dbLoad_FUN_00504e70(CScript * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004fec87
    PUSH 0x58e270                       ; 004fec8a | = "rt"
    MOV EBP,dword ptr [ESP + 0x328]     ; 004fec8f
    PUSH EBP                            ; 004fec96
    PUSH 0x58e273                       ; 004fec97 | = "world"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004fec9c
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004feca1
    MOV ESI,EAX                         ; 004feca4
    TEST EAX,EAX                        ; 004feca6
    JZ 0x004fec16                       ; 004feca8
        ;   XREF to: 004fec16 (CONDITIONAL_JUMP)  ; LAB_004fec16
    PUSH EAX                            ; 004fecae
    MOV EBP,0x1                         ; 004fecaf
    CALL crt_stdio.c_ftell_FUN_00566e70 ; 004fecb4
        ;   XREF to: 00566e70 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_00566e70(_FILE * file_handle)
    ADD ESP,0x4                         ; 004fecb9
    LEA EDI,[EBX + EAX*0x1]             ; 004fecbc
    XOR EBX,EBX                         ; 004fecbf
        ;   Label: LAB_004fecbf
    PUSH ESI                            ; 004fecc1
        ;   Label: LAB_004fecc1
    CALL crt_stdio.c_ftell_FUN_00566e70 ; 004fecc2
        ;   XREF to: 00566e70 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_00566e70(_FILE * file_handle)
    ADD ESP,0x4                         ; 004fecc7
    CMP EAX,EDI                         ; 004fecca
    JL 0x004fed78                       ; 004feccc
        ;   XREF to: 004fed78 (CONDITIONAL_JUMP)  ; LAB_004fed78
    XOR EBP,EBP                         ; 004fecd2
    XOR AH,AH                           ; 004fecd4
        ;   Label: LAB_004fecd4
    MOV byte ptr [ESP + EBX*0x1],AH     ; 004fecd6
    MOV EAX,ESP                         ; 004fecd9
    PUSH EAX                            ; 004fecdb
    MOV EBX,dword ptr [ESP + 0x30c]     ; 004fecdc
    PUSH EBX                            ; 004fece3
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004fece4
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004fece9
    TEST EBP,EBP                        ; 004fecec
    JNZ 0x004fecbf                      ; 004fecee
        ;   XREF to: 004fecbf (CONDITIONAL_JUMP)  ; LAB_004fecbf
    PUSH ESI                            ; 004fecf0
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004fecf1
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004fecf6
    MOV ESI,dword ptr [ESP + 0x320]     ; 004fecf9
    PUSH ESI                            ; 004fed00
    CALL core_script.cpp_CScript_FUN_004fee30 ; 004fed01
        ;   XREF to: 004fee30 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_FUN_004fee30(CScript * this_ptr)
    ADD ESP,0x4                         ; 004fed06
    CMP dword ptr [ESP + 0x328],0x0     ; 004fed09
    JNZ 0x004fee03                      ; 004fed11
        ;   XREF to: 004fee03 (CONDITIONAL_JUMP)  ; LAB_004fee03
    LEA EAX,[ESP + 0x304]               ; 004fed17
    PUSH EAX                            ; 004fed1e
    PUSH ESI                            ; 004fed1f
    CALL core_script.cpp_CScript_FUN_004fef60 ; 004fed20
        ;   XREF to: 004fef60 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_CScript_FUN_004fef60(CScript * this_ptr, int * error_line_out)
    ADD ESP,0x8                         ; 004fed25
    PUSH 0x1e56c30                      ; 004fed28
    MOV EBX,EAX                         ; 004fed2d
    CALL shape_edittool.cpp_FUN_00476160 ; 004fed2f
        ;   XREF to: 00476160 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00476160()
    ADD ESP,0x4                         ; 004fed34
    TEST EBX,EBX                        ; 004fed37
    JZ 0x004fee03                       ; 004fed39
        ;   XREF to: 004fee03 (CONDITIONAL_JUMP)  ; LAB_004fee03
    MOV dword ptr [0x01cc4800],0x58e2be ; 004fed3f | g_CurrentFilename | = "..\\core\\script.cpp"
    MOV EAX,dword ptr [ESP + 0x304]     ; 004fed49
    PUSH EBX                            ; 004fed50
    INC EAX                             ; 004fed51
    PUSH EAX                            ; 004fed52
    MOV ECX,dword ptr [ESP + 0x32c]     ; 004fed53
    PUSH ECX                            ; 004fed5a
    MOV EDX,0x372                       ; 004fed5b
    PUSH 0x58e2d1                       ; 004fed60 | = "%s failed syntax check on line %d: %s"
    MOV dword ptr [0x01cc4804],EDX      ; 004fed65 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004fed6b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x10                        ; 004fed70
    JMP 0x004febeb                      ; 004fed73
        ;   XREF to: 004febeb (UNCONDITIONAL_JUMP)  ; LAB_004febeb
    PUSH ESI                            ; 004fed78
        ;   Label: LAB_004fed78
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 004fed79
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_00564570(_FILE * file)
    ADD ESP,0x4                         ; 004fed7e
    MOV EDX,EAX                         ; 004fed81
    CMP EAX,-0x1                        ; 004fed83
    JZ 0x004fecd4                       ; 004fed86
        ;   XREF to: 004fecd4 (CONDITIONAL_JUMP)  ; LAB_004fecd4
    CMP EAX,0xd                         ; 004fed8c
    JZ 0x004fecc1                       ; 004fed8f
        ;   XREF to: 004fecc1 (CONDITIONAL_JUMP)  ; LAB_004fecc1
    CMP EAX,0xa                         ; 004fed95
    JZ 0x004fecd4                       ; 004fed98
        ;   XREF to: 004fecd4 (CONDITIONAL_JUMP)  ; LAB_004fecd4
    TEST EAX,EAX                        ; 004fed9e
    JZ 0x004fedac                       ; 004feda0
        ;   XREF to: 004fedac (CONDITIONAL_JUMP)  ; LAB_004fedac
    INC EBX                             ; 004feda2
    MOV byte ptr [ESP + EBX*0x1 + -0x1],DL ; 004feda3
    JMP 0x004fecc1                      ; 004feda7
        ;   XREF to: 004fecc1 (UNCONDITIONAL_JUMP)  ; LAB_004fecc1
    PUSH ESI                            ; 004fedac
        ;   Label: LAB_004fedac
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004fedad
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004fedb2
    MOV EAX,dword ptr [ESP + 0x320]     ; 004fedb5
    ADD EAX,0x30                        ; 004fedbc
    PUSH EAX                            ; 004fedbf
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_00477660 ; 004fedc0
        ;   XREF to: 00477660 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_getItemCount_FUN_00477660(CStrList * this_ptr)
    ADD ESP,0x4                         ; 004fedc5
    INC EAX                             ; 004fedc8
    PUSH EAX                            ; 004fedc9
    MOV EAX,dword ptr [ESP + 0x328]     ; 004fedca
    PUSH EAX                            ; 004fedd1
    PUSH 0x58e279                       ; 004fedd2 | = "Probable non-text file %s detected ne..."
    MOV EDX,dword ptr [0x005b6d50]      ; 004fedd7 | g_CEditorTools_PTR_005b6d50
    PUSH EDX                            ; 004feddd
    CALL shape_edittool.cpp_FUN_0046fcd0 ; 004fedde
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0046fcd0()
    ADD ESP,0x10                        ; 004fede3
    MOV ECX,dword ptr [ESP + 0x320]     ; 004fede6
    PUSH ECX                            ; 004feded
    CALL core_script.cpp_CScript_FUN_004fe500 ; 004fedee
        ;   XREF to: 004fe500 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_FUN_004fe500(CScript * this_ptr)
    ADD ESP,0x4                         ; 004fedf3
    XOR EAX,EAX                         ; 004fedf6
    ADD ESP,0x30c                       ; 004fedf8
    POP EBP                             ; 004fedfe
    POP EDI                             ; 004fedff
    POP ESI                             ; 004fee00
    POP EBX                             ; 004fee01
    RET                                 ; 004fee02
    MOV EBX,dword ptr [ESP + 0x320]     ; 004fee03
        ;   Label: LAB_004fee03
    PUSH EBX                            ; 004fee0a
    CALL core_script.cpp_CScript_FUN_004feff0 ; 004fee0b
        ;   XREF to: 004feff0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_FUN_004feff0(CScript * this_ptr)
    MOV EAX,0x1                         ; 004fee10
    ADD ESP,0x4                         ; 004fee15
    ADD ESP,0x30c                       ; 004fee18
    POP EBP                             ; 004fee1e
    POP EDI                             ; 004fee1f
    POP ESI                             ; 004fee20
    POP EBX                             ; 004fee21
    RET                                 ; 004fee22

