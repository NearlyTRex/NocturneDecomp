; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CStrList_insert_FUN_004a2bc0(CStrList * this_ptr, int insert_index, char * string_data)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   insert_index
; char *           Stack[0xc]:4   string_data
;
; XREF[3]:
;   core_script.cpp_CScript_editorAction_FUN_00564820 at 005650b9
;   core_script.cpp_CScript_insertAndEditorPutLine_FUN_00566330 at 0056636f
;   shape_edittool.cpp_CPickList_insert_FUN_004a5670 at 004a5693
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_006236a2
;   TerminatedCString s_CStrList_insert_invalid__006236b8
;   TerminatedCString s_shape_edittool_cpp_006236d9
;   TerminatedCString s_shape_edittool_cpp_006236ef
;   TerminatedCString s_CStrList_insert_out_of_m_00623705
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c_memmove_FUN_005fe5e0
;   shape_edittool.cpp_CStrList_allocate_FUN_004a2cc0
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2bc0
        ;   Label: shape_edittool.cpp_CStrList_insert_FUN_004a2bc0
    PUSH ESI                            ; 004a2bc1
    PUSH EDI                            ; 004a2bc2
    PUSH EBP                            ; 004a2bc3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004a2bc4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004a2bc8
    TEST EBP,EBP                        ; 004a2bcc
    JL 0x004a2bd4                       ; 004a2bce
        ;   XREF to: 004a2bd4 (CONDITIONAL_JUMP)  ; LAB_004a2bd4
    CMP EBP,dword ptr [EBX]             ; 004a2bd0
    JLE 0x004a2bf7                      ; 004a2bd2
        ;   XREF to: 004a2bf7 (CONDITIONAL_JUMP)  ; LAB_004a2bf7
    MOV ECX,0x6236a2                    ; 004a2bd4 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004a2bd4
    MOV ESI,0xb32                       ; 004a2bd9
    PUSH 0x6236b8                       ; 004a2bde | = "CStrList::insert - invalid index"
    MOV dword ptr [0x02f0ca48],ECX      ; 004a2be3 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 004a2be9 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a2bef
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a2bf4
    MOV EDI,dword ptr [EBX]             ; 004a2bf7
        ;   Label: LAB_004a2bf7
    INC EDI                             ; 004a2bf9
    MOV EDX,dword ptr [EBX + 0x4]       ; 004a2bfa
    MOV dword ptr [EBX],EDI             ; 004a2bfd
    CMP EDI,EDX                         ; 004a2bff
    JLE 0x004a2c10                      ; 004a2c01
        ;   XREF to: 004a2c10 (CONDITIONAL_JUMP)  ; LAB_004a2c10
    LEA EAX,[EDI + 0x14]                ; 004a2c03
    PUSH EAX                            ; 004a2c06
    PUSH EBX                            ; 004a2c07
    CALL shape_edittool.cpp_CStrList_allocate_FUN_004a2cc0 ; 004a2c08
        ;   XREF to: 004a2cc0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_allocate_FUN_004a2cc0(CStrList * this_ptr, int new_capacity)
    ADD ESP,0x8                         ; 004a2c0d
    MOV EAX,dword ptr [EBX]             ; 004a2c10
        ;   Label: LAB_004a2c10
    SUB EAX,EBP                         ; 004a2c12
    SHL EAX,0x2                         ; 004a2c14
    SUB EAX,0x4                         ; 004a2c17
    LEA ESI,[EBP*0x4 + 0x0]             ; 004a2c1a
    PUSH EAX                            ; 004a2c21
    MOV EAX,dword ptr [EBX + 0x8]       ; 004a2c22
    LEA ECX,[EAX + ESI*0x1]             ; 004a2c25
    PUSH ECX                            ; 004a2c28
    LEA ECX,[ESI + 0x4]                 ; 004a2c29
    ADD EAX,ECX                         ; 004a2c2c
    PUSH EAX                            ; 004a2c2e
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004a2c2f
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004a2c34
    PUSH 0xb3f                          ; 004a2c37
    PUSH 0x6236d9                       ; 004a2c3c | = "..\\shape\\edittool.cpp"
    MOV EDI,dword ptr [ESP + 0x24]      ; 004a2c41
    SUB ECX,ECX                         ; 004a2c45
    DEC ECX                             ; 004a2c47
    XOR EAX,EAX                         ; 004a2c48
    SCASB.REPNE ES:EDI                  ; 004a2c4a
    NOT ECX                             ; 004a2c4c
    DEC ECX                             ; 004a2c4e
    INC ECX                             ; 004a2c4f
    PUSH ECX                            ; 004a2c50
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 004a2c51
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    MOV ECX,dword ptr [EBX + 0x8]       ; 004a2c56
    MOV dword ptr [ECX + ESI*0x1],EAX   ; 004a2c59
    MOV EAX,dword ptr [EBX + 0x8]       ; 004a2c5c
    MOV ECX,dword ptr [ESI + EAX*0x1]   ; 004a2c5f
    ADD ESP,0xc                         ; 004a2c62
    TEST ECX,ECX                        ; 004a2c65
    JZ 0x004a2c92                       ; 004a2c67
        ;   XREF to: 004a2c92 (CONDITIONAL_JUMP)  ; LAB_004a2c92
    MOV EDI,dword ptr [EBX + 0x8]       ; 004a2c69
        ;   Label: LAB_004a2c69
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004a2c6c
    MOV EDI,dword ptr [EDI + EBP*0x4]   ; 004a2c70
    PUSH EDI                            ; 004a2c73
    MOV AL,byte ptr [ESI]               ; 004a2c74
        ;   Label: LAB_004a2c74
    MOV byte ptr [EDI],AL               ; 004a2c76
    CMP AL,0x0                          ; 004a2c78
    JZ 0x004a2c8c                       ; 004a2c7a
        ;   XREF to: 004a2c8c (CONDITIONAL_JUMP)  ; LAB_004a2c8c
    MOV AL,byte ptr [ESI + 0x1]         ; 004a2c7c
    ADD ESI,0x2                         ; 004a2c7f
    MOV byte ptr [EDI + 0x1],AL         ; 004a2c82
    ADD EDI,0x2                         ; 004a2c85
    CMP AL,0x0                          ; 004a2c88
    JNZ 0x004a2c74                      ; 004a2c8a
        ;   XREF to: 004a2c74 (CONDITIONAL_JUMP)  ; LAB_004a2c74
    POP EDI                             ; 004a2c8c
        ;   Label: LAB_004a2c8c
    POP EBP                             ; 004a2c8d
    POP EDI                             ; 004a2c8e
    POP ESI                             ; 004a2c8f
    POP EBX                             ; 004a2c90
    RET                                 ; 004a2c91
    MOV ESI,0x6236ef                    ; 004a2c92 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004a2c92
    MOV EDI,0xb40                       ; 004a2c97
    PUSH 0x623705                       ; 004a2c9c | = "CStrList::insert - out of memory"
    MOV dword ptr [0x02f0ca48],ESI      ; 004a2ca1 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004a2ca7 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a2cad
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a2cb2
    JMP 0x004a2c69                      ; 004a2cb5
        ;   XREF to: 004a2c69 (UNCONDITIONAL_JUMP)  ; LAB_004a2c69

