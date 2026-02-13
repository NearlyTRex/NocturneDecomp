; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_script_cpp_updateSelection_FUN_00564500(void)
;
;
; XREF[3]:
;   core_script.cpp_CScript_FUN_005645d0 at 005645e1
;   core_script.cpp_CScript_FUN_00565130 at 00565a55
;   core_script.cpp_CScript_editorAction_FUN_00564820 at 00564bd0
;
; Referenced Globals:
;   int g_CurrentEditingColumn
;   int g_CurrentEditingLine
;   int g_SelectionAnchorColumn
;   int g_SelectionAnchorLine
;   int g_SelectionStartColumn
;   int g_SelectionStartLine
;   int g_SelectionEndColumn
;   int g_SelectionEndLine
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564500
        ;   Label: core_script.cpp_updateSelection_FUN_00564500
    PUSH ESI                            ; 00564501
    PUSH EDI                            ; 00564502
    PUSH EBP                            ; 00564503
    MOV ESI,dword ptr [0x0310fd50]      ; 00564504 | g_SelectionAnchorLine
    MOV EDI,dword ptr [0x0310fd4c]      ; 0056450a | g_SelectionAnchorColumn
    TEST EDI,EDI                        ; 00564510
    JL 0x0056449b                       ; 00564512
        ;   XREF to: 0056449b (CONDITIONAL_JUMP)  ; LAB_0056449b
    TEST ESI,ESI                        ; 00564514
    JL 0x0056449b                       ; 00564516
        ;   XREF to: 0056449b (CONDITIONAL_JUMP)  ; LAB_0056449b
    MOV ECX,dword ptr [0x0310fd48]      ; 00564518 | g_CurrentEditingLine
    CMP ESI,ECX                         ; 0056451e
    JL 0x005644ab                       ; 00564520
        ;   XREF to: 005644ab (CONDITIONAL_JUMP)  ; LAB_005644ab
    JG 0x005644ba                       ; 00564522
        ;   XREF to: 005644ba (CONDITIONAL_JUMP)  ; LAB_005644ba
    MOV EAX,[0x0310fd44]                ; 00564524 | g_CurrentEditingColumn
    MOV EBP,ESI                         ; 00564529
    MOV ECX,ESI                         ; 0056452b
    CMP EDI,EAX                         ; 0056452d
    JGE 0x005644cb                      ; 0056452f
        ;   XREF to: 005644cb (CONDITIONAL_JUMP)  ; LAB_005644cb
    MOV EDX,EAX                         ; 00564531
    MOV EBX,EDI                         ; 00564533
    MOV dword ptr [0x031141c4],EBP      ; 00564535 | g_SelectionStartLine
        ;   Label: LAB_00564535
    MOV dword ptr [0x0310fd4c],EDI      ; 0056453b | g_SelectionAnchorColumn
    MOV dword ptr [0x0310fd50],ESI      ; 00564541 | g_SelectionAnchorLine
    MOV dword ptr [0x031141c0],EBX      ; 00564547 | g_SelectionStartColumn
    MOV dword ptr [0x031141cc],ECX      ; 0056454d | g_SelectionEndLine
    MOV dword ptr [0x031141c8],EDX      ; 00564553 | g_SelectionEndColumn
    POP EBP                             ; 00564559
    POP EDI                             ; 0056455a
    POP ESI                             ; 0056455b
    POP EBX                             ; 0056455c
    RET                                 ; 0056455d

