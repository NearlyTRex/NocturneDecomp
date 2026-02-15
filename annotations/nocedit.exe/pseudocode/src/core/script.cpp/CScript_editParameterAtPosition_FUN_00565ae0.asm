; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_editParameterAtPosition_FUN_00565ae0(CScript *this_ptr,int column,int line)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   column
; int              Stack[0xc]:4   line
; Local Variables:
; undefined1       Stack[-0x910]:1  local_910
; undefined1       Stack[-0x5e8]:1  local_5e8
; undefined1       Stack[-0x5e7]:1  local_5e7
; undefined1       Stack[-0x3f4]:1  local_3f4
; undefined1       Stack[-0x3f3]:1  local_3f3
; undefined1       Stack[-0x200]:1  local_200
; undefined1       Stack[-0x1ff]:1  local_1ff
;
; XREF[1]:
;   core_script.cpp_CScript_processEditorInput_FUN_00565130 at 005658a9
;
; Referenced Globals:
;   int g_CurrentEditingColumn
;   int g_CurrentEditingLine
;   undefined4 g_CurrentLineBuffer
;   undefined4 DAT_031101c1
;   undefined4 DAT_031101c2
;   undefined4 DAT_031101c3
;
; Called Functions:
;   core_script.cpp_clearSelections_FUN_005644e0
;   core_script.cpp_CScript_editorIndex2X_FUN_00566b30
;   core_script.cpp_CScript_editorPutLine_FUN_005662a0
;   core_script.cpp_CScript_editorX2Index_FUN_00566a90
;   core_script.cpp_CScript_updateCursorBounds_FUN_00566910
;   core_script.cpp_CScript_updateScrollPosition_FUN_005669a0
;   core_script.cpp_editParameterValue_FUN_00562920
;   core_script.cpp_parseCommandWithDefaultTemplates_FUN_00561c70
;   shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00565ae0
        ;   Label: core_script.cpp_CScript_editParameterAtPosition_FUN_00565ae0
    PUSH ESI                            ; 00565ae1
    PUSH EBP                            ; 00565ae2
    SUB ESP,0x2a2c                      ; 00565ae3
    MOV EBX,dword ptr [ESP + 0x2a3c]    ; 00565ae9
    MOV EBP,dword ptr [ESP + 0x2a44]    ; 00565af0
    TEST EBP,EBP                        ; 00565af7
    JGE 0x00565b05                      ; 00565af9
        ;   XREF to: 00565b05 (CONDITIONAL_JUMP)  ; LAB_00565b05
    ADD ESP,0x2a2c                      ; 00565afb
        ;   Label: LAB_00565afb
    POP EBP                             ; 00565b01
    POP ESI                             ; 00565b02
    POP EBX                             ; 00565b03
    RET                                 ; 00565b04
    LEA ESI,[EBX + 0x38]                ; 00565b05
        ;   Label: LAB_00565b05
    PUSH ESI                            ; 00565b08
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0 ; 00565b09
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 00565b0e
    CMP EBP,EAX                         ; 00565b11
    JGE 0x00565afb                      ; 00565b13
        ;   XREF to: 00565afb (CONDITIONAL_JUMP)  ; LAB_00565afb
    MOV EDX,dword ptr [ESP + 0x2a40]    ; 00565b15
    PUSH EDX                            ; 00565b1c
    PUSH EBP                            ; 00565b1d
    PUSH EBX                            ; 00565b1e
    CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90 ; 00565b1f
        ;   XREF to: 00566a90 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_editorX2Index_FUN_00566a90(CScript * this_ptr, int line_number, int visual_column)
    ADD ESP,0xc                         ; 00565b24
    MOV ECX,ESP                         ; 00565b27
    PUSH ECX                            ; 00565b29
    LEA ECX,[ESP + 0x212c]              ; 00565b2a
    PUSH ECX                            ; 00565b31
    PUSH EAX                            ; 00565b32
    LEA EAX,[ESP + 0x245c]              ; 00565b33
    PUSH EAX                            ; 00565b3a
    LEA EAX,[ESP + 0x2654]              ; 00565b3b
    PUSH EAX                            ; 00565b42
    LEA EAX,[ESP + 0x284c]              ; 00565b43
    PUSH EAX                            ; 00565b4a
    PUSH EBP                            ; 00565b4b
    PUSH ESI                            ; 00565b4c
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00565b4d
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00565b52
    PUSH EAX                            ; 00565b55
    CALL core_script.cpp_parseCommandWithDefaultTemplates_FUN_00561c70 ; 00565b56
        ;   XREF to: 00561c70 (UNCONDITIONAL_CALL)  ; int core_script.cpp_parseCommandWithDefaultTemplates_FUN_00561c70(char * input_text, char * cmd_name_out, char * prefix_out, char * suffix_out, ...)
    ADD ESP,0x1c                        ; 00565b5b
    TEST EAX,EAX                        ; 00565b5e
    JLE 0x00565afb                      ; 00565b60
        ;   XREF to: 00565afb (CONDITIONAL_JUMP)  ; LAB_00565afb
    MOV ECX,ESP                         ; 00565b62
    PUSH ECX                            ; 00565b64
    LEA ECX,[ESP + 0x212c]              ; 00565b65
    PUSH ECX                            ; 00565b6c
    PUSH EAX                            ; 00565b6d
    LEA EAX,[ESP + 0x2650]              ; 00565b6e
    PUSH EAX                            ; 00565b75
    CALL core_script.cpp_editParameterValue_FUN_00562920 ; 00565b76
        ;   XREF to: 00562920 (UNCONDITIONAL_CALL)  ; int core_script.cpp_editParameterValue_FUN_00562920(char * value_buffer, int param_type, CCmdParm * param_info, char * param_name)
    ADD ESP,0x10                        ; 00565b7b
    TEST EAX,EAX                        ; 00565b7e
    JZ 0x00565afb                       ; 00565b80
        ;   XREF to: 00565afb (CONDITIONAL_JUMP)  ; LAB_00565afb
    PUSH EDI                            ; 00565b86
    LEA ESI,[ESP + 0x283c]              ; 00565b87
    MOV EDI,0x31101c0                   ; 00565b8e | g_CurrentLineBuffer
    PUSH EDI                            ; 00565b93 | g_CurrentLineBuffer
    MOV AL,byte ptr [ESI]               ; 00565b94
        ;   Label: LAB_00565b94
    MOV byte ptr [EDI],AL               ; 00565b96 | g_CurrentLineBuffer | DAT_031101c2
    CMP AL,0x0                          ; 00565b98
    JZ 0x00565bac                       ; 00565b9a
        ;   XREF to: 00565bac (CONDITIONAL_JUMP)  ; LAB_00565bac
    MOV AL,byte ptr [ESI + 0x1]         ; 00565b9c
    ADD ESI,0x2                         ; 00565b9f
    MOV byte ptr [EDI + 0x1],AL         ; 00565ba2 | DAT_031101c1 | DAT_031101c3
    ADD EDI,0x2                         ; 00565ba5
    CMP AL,0x0                          ; 00565ba8
    JNZ 0x00565b94                      ; 00565baa
        ;   XREF to: 00565b94 (CONDITIONAL_JUMP)  ; LAB_00565b94
    POP EDI                             ; 00565bac
        ;   Label: LAB_00565bac
    LEA ESI,[ESP + 0x2648]              ; 00565bad
    PUSH EDI                            ; 00565bb4 | g_CurrentLineBuffer
    SUB ECX,ECX                         ; 00565bb5
    DEC ECX                             ; 00565bb7
    MOV AL,0x0                          ; 00565bb8
    SCASB.REPNE ES:EDI                  ; 00565bba | g_CurrentLineBuffer | DAT_031101c1
    DEC EDI                             ; 00565bbc
    MOV AL,byte ptr [ESI]               ; 00565bbd
        ;   Label: LAB_00565bbd
    MOV byte ptr [EDI],AL               ; 00565bbf | g_CurrentLineBuffer | DAT_031101c1 | DAT_031101c2
    CMP AL,0x0                          ; 00565bc1
    JZ 0x00565bd5                       ; 00565bc3
        ;   XREF to: 00565bd5 (CONDITIONAL_JUMP)  ; LAB_00565bd5
    MOV AL,byte ptr [ESI + 0x1]         ; 00565bc5
    ADD ESI,0x2                         ; 00565bc8
    MOV byte ptr [EDI + 0x1],AL         ; 00565bcb | DAT_031101c1 | DAT_031101c2 | DAT_031101c3
    ADD EDI,0x2                         ; 00565bce
    CMP AL,0x0                          ; 00565bd1
    JNZ 0x00565bbd                      ; 00565bd3
        ;   XREF to: 00565bbd (CONDITIONAL_JUMP)  ; LAB_00565bbd
    POP EDI                             ; 00565bd5
        ;   Label: LAB_00565bd5
    LEA ESI,[ESP + 0x2454]              ; 00565bd6
    PUSH EDI                            ; 00565bdd | g_CurrentLineBuffer
    SUB ECX,ECX                         ; 00565bde
    DEC ECX                             ; 00565be0
    MOV AL,0x0                          ; 00565be1
    SCASB.REPNE ES:EDI                  ; 00565be3 | g_CurrentLineBuffer | DAT_031101c1
    DEC EDI                             ; 00565be5
    MOV AL,byte ptr [ESI]               ; 00565be6
        ;   Label: LAB_00565be6
    MOV byte ptr [EDI],AL               ; 00565be8 | g_CurrentLineBuffer | DAT_031101c1 | DAT_031101c2
    CMP AL,0x0                          ; 00565bea
    JZ 0x00565bfe                       ; 00565bec
        ;   XREF to: 00565bfe (CONDITIONAL_JUMP)  ; LAB_00565bfe
    MOV AL,byte ptr [ESI + 0x1]         ; 00565bee
    ADD ESI,0x2                         ; 00565bf1
    MOV byte ptr [EDI + 0x1],AL         ; 00565bf4 | DAT_031101c1 | DAT_031101c2 | DAT_031101c3
    ADD EDI,0x2                         ; 00565bf7
    CMP AL,0x0                          ; 00565bfa
    JNZ 0x00565be6                      ; 00565bfc
        ;   XREF to: 00565be6 (CONDITIONAL_JUMP)  ; LAB_00565be6
    POP EDI                             ; 00565bfe
        ;   Label: LAB_00565bfe
    PUSH EBP                            ; 00565bff
    PUSH EBX                            ; 00565c00
    CALL core_script.cpp_CScript_editorPutLine_FUN_005662a0 ; 00565c01
        ;   XREF to: 005662a0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_editorPutLine_FUN_005662a0(CScript * this_ptr, int line_number)
    ADD ESP,0x8                         ; 00565c06
    LEA EDI,[ESP + 0x283c]              ; 00565c09
    MOV dword ptr [0x0310fd48],EBP      ; 00565c10 | g_CurrentEditingLine
    SUB ECX,ECX                         ; 00565c16
    DEC ECX                             ; 00565c18
    XOR EAX,EAX                         ; 00565c19
    SCASB.REPNE ES:EDI                  ; 00565c1b
    NOT ECX                             ; 00565c1d
    DEC ECX                             ; 00565c1f
    LEA EDI,[ESP + 0x2648]              ; 00565c20
    MOV ESI,ECX                         ; 00565c27
    SUB ECX,ECX                         ; 00565c29
    DEC ECX                             ; 00565c2b
    XOR EAX,EAX                         ; 00565c2c
    SCASB.REPNE ES:EDI                  ; 00565c2e
    NOT ECX                             ; 00565c30
    DEC ECX                             ; 00565c32
    ADD ECX,ESI                         ; 00565c33
    PUSH ECX                            ; 00565c35
    MOV ECX,dword ptr [0x0310fd48]      ; 00565c36 | g_CurrentEditingLine
    PUSH ECX                            ; 00565c3c
    PUSH EBX                            ; 00565c3d
    CALL core_script.cpp_CScript_editorIndex2X_FUN_00566b30 ; 00565c3e
        ;   XREF to: 00566b30 (UNCONDITIONAL_CALL)  ; uint core_script.cpp_CScript_editorIndex2X_FUN_00566b30(CScript * this_ptr, int line_number, uint buffer_index)
    ADD ESP,0xc                         ; 00565c43
    MOV [0x0310fd44],EAX                ; 00565c46 | g_CurrentEditingColumn
    CALL core_script.cpp_clearSelections_FUN_005644e0 ; 00565c4b
        ;   XREF to: 005644e0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_clearSelections_FUN_005644e0()
    PUSH EBX                            ; 00565c50
    CALL core_script.cpp_CScript_updateCursorBounds_FUN_00566910 ; 00565c51
        ;   XREF to: 00566910 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_updateCursorBounds_FUN_00566910(CScript * this_ptr)
    ADD ESP,0x4                         ; 00565c56
    PUSH EBX                            ; 00565c59
    CALL core_script.cpp_CScript_updateScrollPosition_FUN_005669a0 ; 00565c5a
        ;   XREF to: 005669a0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_updateScrollPosition_FUN_005669a0(CScript * this_ptr)
    ADD ESP,0x4                         ; 00565c5f
    POP EDI                             ; 00565c62
    ADD ESP,0x2a2c                      ; 00565c63
    POP EBP                             ; 00565c69
    POP ESI                             ; 00565c6a
    POP EBX                             ; 00565c6b
    RET                                 ; 00565c6c

