; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_script_cpp_getSelectionRangeForLine_FUN_00564560 (int line,int *sel_start_col_out,int *sel_end_col_out)
;
; Parameters:
; int              Stack[0x4]:4   line
; int *            Stack[0x8]:4   sel_start_col_out
; int *            Stack[0xc]:4   sel_end_col_out
;
; XREF[2]:
;   core_script.cpp_CScript_FUN_005664d0 at 00566543
;   core_script.cpp_CScript_editorAction_FUN_00564820 at 00564a5e
;
; Referenced Globals:
;   int g_SelectionStartColumn
;   int g_SelectionStartLine
;   int g_SelectionEndColumn
;   int g_SelectionEndLine
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564560
        ;   Label: core_script.cpp_getSelectionRangeForLine_FUN_00564560
    MOV EDX,dword ptr [ESP + 0x8]       ; 00564561
    MOV EBX,dword ptr [ESP + 0xc]       ; 00564565
    MOV EAX,dword ptr [ESP + 0x10]      ; 00564569
    MOV ECX,dword ptr [0x031141c4]      ; 0056456d | g_SelectionStartLine
    CMP EDX,ECX                         ; 00564573
    JL 0x00564599                       ; 00564575
        ;   XREF to: 00564599 (CONDITIONAL_JUMP)  ; LAB_00564599
    CMP EDX,dword ptr [0x031141cc]      ; 00564577 | g_SelectionEndLine
    JG 0x00564599                       ; 0056457d
        ;   XREF to: 00564599 (CONDITIONAL_JUMP)  ; LAB_00564599
    MOV dword ptr [EBX],0x0             ; 0056457f
    MOV dword ptr [EAX],0x270f          ; 00564585
    CMP EDX,ECX                         ; 0056458b
    JZ 0x005645a5                       ; 0056458d
        ;   XREF to: 005645a5 (CONDITIONAL_JUMP)  ; LAB_005645a5
    CMP EDX,dword ptr [0x031141cc]      ; 0056458f | g_SelectionEndLine
    JZ 0x005645b7                       ; 00564595
        ;   XREF to: 005645b7 (CONDITIONAL_JUMP)  ; LAB_005645b7
    POP EBX                             ; 00564597
    RET                                 ; 00564598
    MOV dword ptr [EAX],0xffffffff      ; 00564599
        ;   Label: LAB_00564599
    MOV EAX,dword ptr [EAX]             ; 0056459f
    MOV dword ptr [EBX],EAX             ; 005645a1
    POP EBX                             ; 005645a3
    RET                                 ; 005645a4
    MOV ECX,dword ptr [0x031141c0]      ; 005645a5 | g_SelectionStartColumn
        ;   Label: LAB_005645a5
    MOV dword ptr [EBX],ECX             ; 005645ab
    CMP EDX,dword ptr [0x031141cc]      ; 005645ad | g_SelectionEndLine
    JZ 0x005645b7                       ; 005645b3
        ;   XREF to: 005645b7 (CONDITIONAL_JUMP)  ; LAB_005645b7
    POP EBX                             ; 005645b5
    RET                                 ; 005645b6
    MOV EDX,dword ptr [0x031141c8]      ; 005645b7 | g_SelectionEndColumn
        ;   Label: LAB_005645b7
    MOV dword ptr [EAX],EDX             ; 005645bd
    POP EBX                             ; 005645bf
    RET                                 ; 005645c0

