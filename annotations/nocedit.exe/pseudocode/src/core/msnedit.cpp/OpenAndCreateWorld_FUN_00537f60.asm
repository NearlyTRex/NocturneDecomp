; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_msnedit.cpp_OpenAndCreateWorld_FUN_00537f60()
;
; Local Variables:
; undefined1       Stack[-0x420]:1  local_420
; undefined1       Stack[-0x31c]:1  local_31c
; undefined1       Stack[-0x218]:1  local_218
; undefined1       Stack[-0x118]:1  local_118
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 00538807
;
; Referenced Globals:
;   TerminatedCString s_Can_t_find_s_s_to_copy_t_0063bc4b
;   TerminatedCString s_rb_0063bc6d
;   TerminatedCString s_core_msnedit_cpp_0063bc70
;   TerminatedCString s_Can_t_open_world_s_0063bc84
;   TerminatedCString s_wb_0063bc98
;   TerminatedCString s_core_msnedit_cpp_0063bc9b
;   TerminatedCString s_Can_t_create_world_s_0063bcaf
;   TerminatedCString s_core_msnedit_cpp_0063bcc5
;   TerminatedCString s_Error_reading_world_s_0063bcd9
;   TerminatedCString s_core_msnedit_cpp_0063bcf0
;   TerminatedCString s_Error_writing_world_s_0063bd04
;   TerminatedCString s_core_msnedit_cpp_0063bd1b
;   TerminatedCString s_core_msnedit_cpp_0063bd2f
;   TerminatedCString s_Mission_and_script_saved_0063bd59
;   TerminatedCString s_txt_0063bd72
;   ... and 6 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_msnedit.cpp_CheckWorldMountedAndSave_FUN_0053d190
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fputc_FUN_006007a0
;   engine_dosio.c_getFile_FUN_00481a50
;   engine_dosio.c_getFileSize_FUN_00481880
;   engine_dosio.c_makePath_FUN_00481f50
;   engine_dosio.c_splitPath_FUN_00481f20
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
;   shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537f60
        ;   Label: core_msnedit.cpp_OpenAndCreateWorld_FUN_00537f60
    PUSH ESI                            ; 00537f61
    PUSH EDI                            ; 00537f62
    PUSH EBP                            ; 00537f63
    SUB ESP,0x410                       ; 00537f64
    MOV EBP,dword ptr [ESP + 0x424]     ; 00537f6a
    MOV EBX,dword ptr [ESP + 0x428]     ; 00537f71
    PUSH 0x0                            ; 00537f78
    LEA EAX,[ESP + 0x30c]               ; 00537f7a
    PUSH EAX                            ; 00537f81
    PUSH 0x0                            ; 00537f82
    PUSH 0x0                            ; 00537f84
    LEA EDI,[EBP + 0x44]                ; 00537f86
    PUSH EDI                            ; 00537f89
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 00537f8a | void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00537f8f
    PUSH 0x0                            ; 00537f92
    LEA EAX,[ESP + 0x20c]               ; 00537f94
    PUSH EAX                            ; 00537f9b
    PUSH 0x0                            ; 00537f9c
    PUSH 0x0                            ; 00537f9e
    PUSH EBX                            ; 00537fa0
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 00537fa1 | void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00537fa6
    MOV ESI,EBX                         ; 00537fa9
    PUSH EDI                            ; 00537fab
    MOV AL,byte ptr [ESI]               ; 00537fac
        ;   Label: LAB_00537fac
    MOV byte ptr [EDI],AL               ; 00537fae
    CMP AL,0x0                          ; 00537fb0
    JZ 0x00537fc4                       ; 00537fb2 | LAB_00537fc4
        ;   XREF to: 00537fc4 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00537fb4
    ADD ESI,0x2                         ; 00537fb7
    MOV byte ptr [EDI + 0x1],AL         ; 00537fba
    ADD EDI,0x2                         ; 00537fbd
    CMP AL,0x0                          ; 00537fc0
    JNZ 0x00537fac                      ; 00537fc2 | LAB_00537fac
        ;   XREF to: 00537fac (CONDITIONAL_JUMP)
    POP EDI                             ; 00537fc4
        ;   Label: LAB_00537fc4
    PUSH EBX                            ; 00537fc5
    PUSH EBP                            ; 00537fc6
    CALL core_msnedit.cpp_CheckWorldMountedAndSave_FUN_0053d190 ; 00537fc7 | undefined core_msnedit.cpp_CheckWorldMountedAndSave_FUN_0053d190()
        ;   XREF to: 0053d190 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00537fcc
    PUSH 0x63bd59                       ; 00537fcf | = "Mission and script saved" | s_Mission_and_script_saved_0063bd59 = Mission and script saved
    MOV EDX,dword ptr [0x00678a60]      ; 00537fd4 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EDX                            ; 00537fda | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 00537fdb | void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00537fe0
    PUSH 0x63bd72                       ; 00537fe3 | = "txt" | s_txt_0063bd72 = txt
    LEA EAX,[ESP + 0x30c]               ; 00537fe8
    PUSH EAX                            ; 00537fef
    PUSH 0x0                            ; 00537ff0
    PUSH 0x0                            ; 00537ff2
    LEA EAX,[ESP + 0x114]               ; 00537ff4
    PUSH EAX                            ; 00537ffb
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 00537ffc | void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00538001
    PUSH 0x63bd76                       ; 00538004 | = "txt" | s_txt_0063bd76 = txt
    LEA EAX,[ESP + 0x20c]               ; 00538009
    PUSH EAX                            ; 00538010
    PUSH 0x0                            ; 00538011
    PUSH 0x0                            ; 00538013
    LEA EAX,[ESP + 0x10]                ; 00538015
    PUSH EAX                            ; 00538019
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 0053801a | void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0053801f
    LEA EAX,[ESP + 0x104]               ; 00538022
    PUSH EAX                            ; 00538029
    MOV ECX,0x63bd7a                    ; 0053802a | = "world" | s_world_0063bd7a = world
    LEA EBP,[ESP + 0x4]                 ; 0053802f
    PUSH ECX                            ; 00538033 | = "world" | s_world_0063bd7a = world
    MOV dword ptr [ESP + 0x410],EAX     ; 00538034
    MOV dword ptr [ESP + 0x414],ECX     ; 0053803b | = "world" | s_world_0063bd7a = world
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 00538042 | int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00538047
    MOV EBX,EAX                         ; 0053804a
    TEST EAX,EAX                        ; 0053804c
    JL 0x005380d4                       ; 0053804e | LAB_005380d4
        ;   XREF to: 005380d4 (CONDITIONAL_JUMP)
    PUSH 0x63bc6d                       ; 00538054 | = "rb" | s_rb_0063bc6d = rb
    LEA EAX,[ESP + 0x108]               ; 00538059
    PUSH EAX                            ; 00538060
    PUSH 0x63bd7a                       ; 00538061 | = "world" | s_world_0063bd7a = world
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00538066 | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0053806b
    MOV ESI,EAX                         ; 0053806e
    TEST EAX,EAX                        ; 00538070
    JNZ 0x0053809e                      ; 00538072 | LAB_0053809e
        ;   XREF to: 0053809e (CONDITIONAL_JUMP)
    MOV dword ptr [0x02f0ca4c],0x2eb    ; 00538074 | int g_CurrentLineNumber
    LEA EAX,[ESP + 0x104]               ; 0053807e
    PUSH EAX                            ; 00538085
    MOV EDI,0x63bc70                    ; 00538086 | = "..\\core\\msnedit.cpp" | s_core_msnedit_cpp_0063bc70 = ..\core\msnedit.cpp
    PUSH 0x63bc84                       ; 0053808b | = "Can't open world\\%s" | s_Can_t_open_world_s_0063bc84 = Can't open world\%s
    MOV dword ptr [0x02f0ca48],EDI      ; 00538090 | char * g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00538096 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0053809b
    PUSH 0x63bc98                       ; 0053809e | = "wb" | s_wb_0063bc98 = wb
        ;   Label: LAB_0053809e
    PUSH EBP                            ; 005380a3
    MOV EDX,dword ptr [ESP + 0x414]     ; 005380a4 | = "world" | s_world_0063bd7a = world
    PUSH EDX                            ; 005380ab | = "world" | s_world_0063bd7a = world
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 005380ac | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005380b1
    MOV EDI,EAX                         ; 005380b4
    TEST EAX,EAX                        ; 005380b6
    JZ 0x00538108                       ; 005380b8 | LAB_00538108
        ;   XREF to: 00538108 (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 005380ba
        ;   Label: LAB_005380ba
    JLE 0x0053812d                      ; 005380bc | LAB_0053812d
        ;   XREF to: 0053812d (CONDITIONAL_JUMP)
    PUSH EDI                            ; 005380be
    PUSH ESI                            ; 005380bf
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 005380c0 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005380c5
    PUSH EAX                            ; 005380c8
    DEC EBX                             ; 005380c9
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 005380ca | int crt_stdio.c_fputc_FUN_006007a0(int character, FILE * file)
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005380cf
    JMP 0x005380ba                      ; 005380d2 | LAB_005380ba
        ;   XREF to: 005380ba (UNCONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 005380d4
        ;   Label: LAB_005380d4
    PUSH EAX                            ; 005380d6
    PUSH 0x63bd7a                       ; 005380d7 | = "world" | s_world_0063bd7a = world
    LEA EAX,[ESP + 0x10c]               ; 005380dc
    PUSH EAX                            ; 005380e3
    PUSH 0x63bd7a                       ; 005380e4 | = "world" | s_world_0063bd7a = world
    PUSH 0x63bc4b                       ; 005380e9 | = "Can't find %s\\%s to copy to %s\\%s" | s_Can_t_find_s_s_to_copy_t_0063bc4b = Can't find %s\%s to copy to %s\%s
    MOV EDX,dword ptr [0x00678a60]      ; 005380ee | CEditorTools * g_CEditorToolsPtr
    PUSH EDX                            ; 005380f4 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0 ; 005380f5 | void shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 005380fa
    ADD ESP,0x410                       ; 005380fd
    POP EBP                             ; 00538103
    POP EDI                             ; 00538104
    POP ESI                             ; 00538105
    POP EBX                             ; 00538106
    RET                                 ; 00538107
    PUSH EBP                            ; 00538108
        ;   Label: LAB_00538108
    MOV ECX,0x63bc9b                    ; 00538109 | = "..\\core\\msnedit.cpp" | s_core_msnedit_cpp_0063bc9b = ..\core\msnedit.cpp
    MOV EAX,0x2ed                       ; 0053810e
    PUSH 0x63bcaf                       ; 00538113 | = "Can't create world\\%s" | s_Can_t_create_world_s_0063bcaf = Can't create world\%s
    MOV dword ptr [0x02f0ca48],ECX      ; 00538118 | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0053811e | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00538123 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00538128
    JMP 0x005380ba                      ; 0053812b | LAB_005380ba
        ;   XREF to: 005380ba (UNCONDITIONAL_JUMP)
    TEST byte ptr [ESI + 0xc],0x20      ; 0053812d
        ;   Label: LAB_0053812d
    JZ 0x0053815e                       ; 00538131 | LAB_0053815e
        ;   XREF to: 0053815e (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x408]     ; 00538133
    PUSH EAX                            ; 0053813a
    MOV ECX,0x63bcc5                    ; 0053813b | = "..\\core\\msnedit.cpp" | s_core_msnedit_cpp_0063bcc5 = ..\core\msnedit.cpp
    MOV EBX,0x2f2                       ; 00538140
    PUSH 0x63bcd9                       ; 00538145 | = "Error reading world\\%s" | s_Error_reading_world_s_0063bcd9 = Error reading world\%s
    MOV dword ptr [0x02f0ca48],ECX      ; 0053814a | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 00538150 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00538156 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0053815b
    TEST byte ptr [EDI + 0xc],0x20      ; 0053815e
        ;   Label: LAB_0053815e
    JZ 0x00538188                       ; 00538162 | LAB_00538188
        ;   XREF to: 00538188 (CONDITIONAL_JUMP)
    PUSH EBP                            ; 00538164
    MOV EDX,0x63bcf0                    ; 00538165 | = "..\\core\\msnedit.cpp" | s_core_msnedit_cpp_0063bcf0 = ..\core\msnedit.cpp
    MOV ECX,0x2f3                       ; 0053816a
    PUSH 0x63bd04                       ; 0053816f | = "Error writing world\\%s" | s_Error_writing_world_s_0063bd04 = Error writing world\%s
    MOV dword ptr [0x02f0ca48],EDX      ; 00538174 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0053817a | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00538180 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00538185
    PUSH 0x2f4                          ; 00538188
        ;   Label: LAB_00538188
    PUSH 0x63bd1b                       ; 0053818d | = "..\\core\\msnedit.cpp" | s_core_msnedit_cpp_0063bd1b = ..\core\msnedit.cpp
    PUSH ESI                            ; 00538192
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00538193 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00538198
    PUSH 0x2f5                          ; 0053819b
    PUSH 0x63bd2f                       ; 005381a0 | = "..\\core\\msnedit.cpp" | s_core_msnedit_cpp_0063bd2f = ..\core\msnedit.cpp
    PUSH EDI                            ; 005381a5
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005381a6 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005381ab
    PUSH EBP                            ; 005381ae
    MOV EBX,dword ptr [ESP + 0x410]     ; 005381af | = "world" | s_world_0063bd7a = world
    PUSH EBX                            ; 005381b6 | = "world" | s_world_0063bd7a = world
    MOV ESI,dword ptr [ESP + 0x410]     ; 005381b7
    PUSH ESI                            ; 005381be
    PUSH EBX                            ; 005381bf | = "world" | s_world_0063bd7a = world
    PUSH 0x63bd43                       ; 005381c0 | = "Copied %s\\%s to %s\\%s" | s_Copied_s_s_to_s_s_0063bd43 = Copied %s\%s to %s\%s
    MOV EBP,dword ptr [0x00678a60]      ; 005381c5 | CEditorTools * g_CEditorToolsPtr
    PUSH EBP                            ; 005381cb | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 005381cc | void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 005381d1
    ADD ESP,0x410                       ; 005381d4
    POP EBP                             ; 005381da
    POP EDI                             ; 005381db
    POP ESI                             ; 005381dc
    POP EBX                             ; 005381dd
    RET                                 ; 005381de

