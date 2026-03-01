; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_setStringAt_FUN_004a3120(CStrList *this_ptr,int index,char *new_string)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
; char *           Stack[0xc]:4   new_string
;
; XREF[3]:
;   core_script.cpp_CScript_editorPutLine_FUN_005662a0 at 005662d9
;   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0 at 0049eb23
;   sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20 at 005ad127
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00623871
;   TerminatedCString s_CStrList_set_invalid_ind_00623887
;   char s_EmptyChar_006238a5 = \x00
;   TerminatedCString s_shape_edittool_cpp_006238a6
;   undefined4 s_.\\shape\\edittool.cpp_006238a7
;   undefined4 s_\\shape\\edittool.cpp_006238a8
;   TerminatedCString s_shape_edittool_cpp_006238bc
;   TerminatedCString s_CStrList_set_out_of_memo_006238d2
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3120
        ;   Label: shape_edittool.cpp_CStrList_setStringAt_FUN_004a3120
    PUSH ESI                            ; 004a3121
    PUSH EDI                            ; 004a3122
    PUSH EBP                            ; 004a3123
    MOV EBP,dword ptr [ESP + 0x14]      ; 004a3124
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004a3128
    MOV EDX,dword ptr [ESP + 0x18]      ; 004a312c
    TEST EDX,EDX                        ; 004a3130
    JL 0x004a3139                       ; 004a3132
        ;   XREF to: 004a3139 (CONDITIONAL_JUMP)  ; LAB_004a3139
    CMP EDX,dword ptr [EBP]             ; 004a3134
    JL 0x004a315c                       ; 004a3137
        ;   XREF to: 004a315c (CONDITIONAL_JUMP)  ; LAB_004a315c
    MOV EBX,0x623871                    ; 004a3139 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004a3139
    MOV EDI,0xc13                       ; 004a313e
    PUSH 0x623887                       ; 004a3143 | = "CStrList::set - invalid index"
    MOV dword ptr [0x02f0ca48],EBX      ; 004a3148 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004a314e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a3154
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a3159
    TEST ESI,ESI                        ; 004a315c
        ;   Label: LAB_004a315c
    JNZ 0x004a3165                      ; 004a315e
        ;   XREF to: 004a3165 (CONDITIONAL_JUMP)  ; LAB_004a3165
    MOV ESI,0x6238a5                    ; 004a3160 | s_EmptyChar_006238a5
    PUSH 0xc1b                          ; 004a3165
        ;   Label: LAB_004a3165
    PUSH 0x6238a6                       ; 004a316a | = "..\\shape\\edittool.cpp"
    MOV EDI,ESI                         ; 004a316f
    MOV EBX,dword ptr [ESP + 0x20]      ; 004a3171
    SUB ECX,ECX                         ; 004a3175
    DEC ECX                             ; 004a3177
    XOR EAX,EAX                         ; 004a3178
    SCASB.REPNE ES:EDI                  ; 004a317a | s_EmptyChar_006238a5 | = "..\\shape\\edittool.cpp"
    NOT ECX                             ; 004a317c
    DEC ECX                             ; 004a317e
    INC ECX                             ; 004a317f
    MOV EAX,dword ptr [EBP + 0x8]       ; 004a3180
    PUSH ECX                            ; 004a3183
    MOV EDX,dword ptr [EAX + EBX*0x4]   ; 004a3184
    PUSH EDX                            ; 004a3187
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 004a3188
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    MOV ECX,dword ptr [EBP + 0x8]       ; 004a318d
    MOV dword ptr [ECX + EBX*0x4],EAX   ; 004a3190
    MOV EAX,dword ptr [EBP + 0x8]       ; 004a3193
    MOV ECX,dword ptr [EAX + EBX*0x4]   ; 004a3196
    ADD ESP,0x10                        ; 004a3199
    TEST ECX,ECX                        ; 004a319c
    JZ 0x004a31c9                       ; 004a319e
        ;   XREF to: 004a31c9 (CONDITIONAL_JUMP)  ; LAB_004a31c9
    MOV ECX,dword ptr [ESP + 0x18]      ; 004a31a0
        ;   Label: LAB_004a31a0
    MOV EAX,dword ptr [EBP + 0x8]       ; 004a31a4
    MOV EDI,dword ptr [EAX + ECX*0x4]   ; 004a31a7
    PUSH EDI                            ; 004a31aa
    MOV AL,byte ptr [ESI]               ; 004a31ab | s_EmptyChar_006238a5 | s_.\shape\edittool.cpp_006238a7
        ;   Label: LAB_004a31ab
    MOV byte ptr [EDI],AL               ; 004a31ad
    CMP AL,0x0                          ; 004a31af
    JZ 0x004a31c3                       ; 004a31b1
        ;   XREF to: 004a31c3 (CONDITIONAL_JUMP)  ; LAB_004a31c3
    MOV AL,byte ptr [ESI + 0x1]         ; 004a31b3 | = "..\\shape\\edittool.cpp" | s_\shape\edittool.cpp_006238a8
    ADD ESI,0x2                         ; 004a31b6
    MOV byte ptr [EDI + 0x1],AL         ; 004a31b9
    ADD EDI,0x2                         ; 004a31bc
    CMP AL,0x0                          ; 004a31bf
    JNZ 0x004a31ab                      ; 004a31c1
        ;   XREF to: 004a31ab (CONDITIONAL_JUMP)  ; LAB_004a31ab
    POP EDI                             ; 004a31c3
        ;   Label: LAB_004a31c3
    POP EBP                             ; 004a31c4
    POP EDI                             ; 004a31c5
    POP ESI                             ; 004a31c6
    POP EBX                             ; 004a31c7
    RET                                 ; 004a31c8
    MOV EBX,0x6238bc                    ; 004a31c9 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004a31c9
    MOV EDI,0xc1c                       ; 004a31ce
    PUSH 0x6238d2                       ; 004a31d3 | = "CStrList::set - out of memory!"
    MOV dword ptr [0x02f0ca48],EBX      ; 004a31d8 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004a31de | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a31e4
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a31e9
    JMP 0x004a31a0                      ; 004a31ec
        ;   XREF to: 004a31a0 (UNCONDITIONAL_JUMP)  ; LAB_004a31a0

