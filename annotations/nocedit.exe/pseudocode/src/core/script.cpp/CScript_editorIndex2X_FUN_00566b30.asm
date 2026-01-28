; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown uint core_script_cpp_CScript_editorIndex2X_FUN_00566b30(void)
;
;
; XREF[7]:
;   core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910 at 0056696f
;   core_script.cpp_CScript_Unk20_FUN_00565130 at 005659ef
;   core_script.cpp_CScript_editorAction_FUN_00564820 at 005649b4
;   core_script.cpp_FUN_00565ae0 at 00565c3e
;   core_script.cpp_FUN_00565f70 at 00566042
;   core_script.cpp_FUN_00566390 at 005664aa
;   core_script.cpp_FUN_00566cc0 at 00566e47
;
; Referenced Globals:
;   TerminatedCString s_core_script_cpp_0064400c
;   TerminatedCString s_CScript_editorIndex2X_in_0064401f
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566b30
        ;   Label: core_script.cpp_CScript_editorIndex2X_FUN_00566b30
    PUSH ESI                            ; 00566b31
    PUSH EDI                            ; 00566b32
    MOV EDI,dword ptr [ESP + 0x14]      ; 00566b33
    MOV ESI,dword ptr [ESP + 0x18]      ; 00566b37
    TEST EDI,EDI                        ; 00566b3b
    JL 0x00566b75                       ; 00566b3d
        ;   XREF to: 00566b75 (CONDITIONAL_JUMP)  ; LAB_00566b75
    MOV EBX,dword ptr [ESP + 0x10]      ; 00566b3f
        ;   Label: LAB_00566b3f
    ADD EBX,0x38                        ; 00566b43
    PUSH EBX                            ; 00566b46
    CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0 ; 00566b47
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont * font_ptr)
    ADD ESP,0x4                         ; 00566b4c
    CMP EDI,EAX                         ; 00566b4f
    JGE 0x00566b9a                      ; 00566b51
        ;   XREF to: 00566b9a (CONDITIONAL_JUMP)  ; LAB_00566b9a
    PUSH EDI                            ; 00566b53
    PUSH EBX                            ; 00566b54
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00566b55
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    MOV EDX,EAX                         ; 00566b5a
    ADD ESP,0x8                         ; 00566b5c
    XOR ECX,ECX                         ; 00566b5f
    XOR EAX,EAX                         ; 00566b61
    TEST ESI,ESI                        ; 00566b63
    JLE 0x00566b71                      ; 00566b65
        ;   XREF to: 00566b71 (CONDITIONAL_JUMP)  ; LAB_00566b71
    MOV BL,byte ptr [EDX]               ; 00566b67
        ;   Label: LAB_00566b67
    TEST BL,BL                          ; 00566b69
    JNZ 0x00566ba0                      ; 00566b6b
        ;   XREF to: 00566ba0 (CONDITIONAL_JUMP)  ; LAB_00566ba0
    SUB ESI,ECX                         ; 00566b6d
    ADD EAX,ESI                         ; 00566b6f
    POP EDI                             ; 00566b71
        ;   Label: LAB_00566b71
    POP ESI                             ; 00566b72
    POP EBX                             ; 00566b73
    RET                                 ; 00566b74
    MOV EDX,0x64400c                    ; 00566b75 | = "..\\core\\script.cpp"
        ;   Label: LAB_00566b75
    MOV ECX,0x1bde                      ; 00566b7a
    PUSH 0x64401f                       ; 00566b7f | = "CScript::editorIndex2X - invalid y"
    MOV dword ptr [0x02f0ca48],EDX      ; 00566b84 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00566b8a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00566b90
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00566b95
    JMP 0x00566b3f                      ; 00566b98
        ;   XREF to: 00566b3f (UNCONDITIONAL_JUMP)  ; LAB_00566b3f
    MOV EAX,ESI                         ; 00566b9a
        ;   Label: LAB_00566b9a
    POP EDI                             ; 00566b9c
    POP ESI                             ; 00566b9d
    POP EBX                             ; 00566b9e
    RET                                 ; 00566b9f
    CMP BL,0x9                          ; 00566ba0
        ;   Label: LAB_00566ba0
    JNZ 0x00566bb4                      ; 00566ba3
        ;   XREF to: 00566bb4 (CONDITIONAL_JUMP)  ; LAB_00566bb4
    ADD EAX,0x8                         ; 00566ba5
    AND AL,0xf8                         ; 00566ba8
    INC ECX                             ; 00566baa
    INC EDX                             ; 00566bab
    CMP ECX,ESI                         ; 00566bac
    JL 0x00566b67                       ; 00566bae
        ;   XREF to: 00566b67 (CONDITIONAL_JUMP)  ; LAB_00566b67
    POP EDI                             ; 00566bb0
    POP ESI                             ; 00566bb1
    POP EBX                             ; 00566bb2
    RET                                 ; 00566bb3
    INC EAX                             ; 00566bb4
        ;   Label: LAB_00566bb4
    INC ECX                             ; 00566bb5
    INC EDX                             ; 00566bb6
    CMP ECX,ESI                         ; 00566bb7
    JL 0x00566b67                       ; 00566bb9
        ;   XREF to: 00566b67 (CONDITIONAL_JUMP)  ; LAB_00566b67
    POP EDI                             ; 00566bbb
    POP ESI                             ; 00566bbc
    POP EBX                             ; 00566bbd
    RET                                 ; 00566bbe

