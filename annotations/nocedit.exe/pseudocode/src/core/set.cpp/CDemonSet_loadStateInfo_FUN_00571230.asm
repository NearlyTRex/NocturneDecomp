; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_loadStateInfo_FUN_00571230(CDemonSet *this_ptr,_FILE *file_handle)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_CGame_loadGame_FUN_004e12b0 at 004e1b50
;
; Referenced Globals:
;   TerminatedCString s_anon_006460bb
;   TerminatedCString s_d_006460c3
;   TerminatedCString s_core_set_cpp_006460c7
;   TerminatedCString s_Set_saveState_info_is_in_006460d7
;   TerminatedCString s_anon_00646100
;   TerminatedCString s_d_00646108
;   TerminatedCString s_The_set_has_changed_sinc_0064610c
;   TerminatedCString s_d_00646172
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571230
        ;   Label: core_set.cpp_CDemonSet_loadStateInfo_FUN_00571230
    PUSH ESI                            ; 00571231
    PUSH EDI                            ; 00571232
    PUSH EBP                            ; 00571233
    SUB ESP,0xc                         ; 00571234
    MOV EBP,dword ptr [ESP + 0x20]      ; 00571237
    MOV EDI,dword ptr [ESP + 0x24]      ; 0057123b
    PUSH 0x6460bb                       ; 0057123f | = "%*[^\n]\n"
    PUSH EDI                            ; 00571244
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00571245
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0057124a
    MOV EAX,ESP                         ; 0057124d
    PUSH EAX                            ; 0057124f
    PUSH 0x6460c3                       ; 00571250 | = "%d\n"
    PUSH EDI                            ; 00571255
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00571256
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0057125b
    MOV EDX,dword ptr [ESP]             ; 0057125e
    CMP EDX,0x1                         ; 00571261
    JNZ 0x005712e5                      ; 00571264
        ;   XREF to: 005712e5 (CONDITIONAL_JUMP)  ; LAB_005712e5
    PUSH 0x646100                       ; 0057126a | = "%*[^\n]\n"
        ;   Label: LAB_0057126a
    PUSH EDI                            ; 0057126f
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00571270
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 00571275
    LEA EAX,[ESP + 0x4]                 ; 00571278
    PUSH EAX                            ; 0057127c
    PUSH 0x646108                       ; 0057127d | = "%d\n"
    PUSH EDI                            ; 00571282
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00571283
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00571288
    MOV EDX,dword ptr [EBP]             ; 0057128b
    CMP EDX,dword ptr [ESP + 0x4]       ; 0057128e
    JZ 0x005712a8                       ; 00571292
        ;   XREF to: 005712a8 (CONDITIONAL_JUMP)  ; LAB_005712a8
    PUSH 0x64610c                       ; 00571294 | = "The set has changed since you saved y..."
    MOV ECX,dword ptr [0x00678a60]      ; 00571299 | g_CEditorToolsPtr
    PUSH ECX                            ; 0057129f | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0 ; 005712a0
        ;   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 005712a5
    MOV ESI,dword ptr [ESP + 0x4]       ; 005712a8
        ;   Label: LAB_005712a8
    XOR EBX,EBX                         ; 005712ac
    TEST ESI,ESI                        ; 005712ae
    JLE 0x005712dd                      ; 005712b0
        ;   XREF to: 005712dd (CONDITIONAL_JUMP)  ; LAB_005712dd
    MOV ESI,EBP                         ; 005712b2
    LEA EAX,[ESP + 0x8]                 ; 005712b4
        ;   Label: LAB_005712b4
    PUSH EAX                            ; 005712b8
    PUSH 0x646172                       ; 005712b9 | = "%d\n"
    PUSH EDI                            ; 005712be
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005712bf
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    MOV EDX,dword ptr [EBP]             ; 005712c4
    ADD ESP,0xc                         ; 005712c7
    CMP EBX,EDX                         ; 005712ca
    JL 0x0057130e                       ; 005712cc
        ;   XREF to: 0057130e (CONDITIONAL_JUMP)  ; LAB_0057130e
    MOV EAX,dword ptr [ESP + 0x4]       ; 005712ce
        ;   Label: LAB_005712ce
    INC EBX                             ; 005712d2
    ADD ESI,0x1a4                       ; 005712d3
    CMP EBX,EAX                         ; 005712d9
    JL 0x005712b4                       ; 005712db
        ;   XREF to: 005712b4 (CONDITIONAL_JUMP)  ; LAB_005712b4
    ADD ESP,0xc                         ; 005712dd
        ;   Label: LAB_005712dd
    POP EBP                             ; 005712e0
    POP EDI                             ; 005712e1
    POP ESI                             ; 005712e2
    POP EBX                             ; 005712e3
    RET                                 ; 005712e4
    PUSH EDX                            ; 005712e5
        ;   Label: LAB_005712e5
    MOV ECX,0x6460c7                    ; 005712e6 | = "..\\core\\set.cpp"
    MOV EBX,0x136a                      ; 005712eb
    PUSH 0x6460d7                       ; 005712f0 | = "Set saveState info is invalid version %d"
    MOV dword ptr [0x02f0ca48],ECX      ; 005712f5 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 005712fb | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00571301
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00571306
    JMP 0x0057126a                      ; 00571309
        ;   XREF to: 0057126a (UNCONDITIONAL_JUMP)  ; LAB_0057126a
    MOV EAX,dword ptr [ESP + 0x8]       ; 0057130e
        ;   Label: LAB_0057130e
    MOV dword ptr [ESI + 0x1a4],EAX     ; 00571312
    JMP 0x005712ce                      ; 00571318
        ;   XREF to: 005712ce (UNCONDITIONAL_JUMP)  ; LAB_005712ce

