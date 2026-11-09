; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools *this_ptr,char *format)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   format
; Local Variables:
; undefined        Stack[-0x408]:1  local_408
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[27]:
;   core_fldnotes.cpp_FUN_004aa810 at 004aaa5d
;   core_fldnotes.cpp_FUN_004aba10 at 004abac1
;   core_fldnotes.cpp_FUN_004abb90 at 004abc86
;   core_fldnotes.cpp_FUN_004abcb0 at 004abd61
;   core_game.cpp_FUN_004bb100 at 004bc17f
;   core_game.cpp_FUN_004bda10 at 004bdf0e
;   core_game.cpp_FUN_004bdfb0 at 004be4d1
;   core_game.cpp_FUN_004bec20 at 004bf035
;   core_hero.cpp_FUN_004d4520 at 004d4567
;   core_menu.cpp_FUN_004eae80 at 004ec6d5
;   ... and 17 more
;
; Referenced Globals:
;   TerminatedCString s_Error_005bce7f
;   undefined4 DAT_01c5bb0c
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005a2898
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047c8e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047cf40
        ;   Label: shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40
    SUB ESP,0x404                       ; 0047cf41
    LEA EAX,[ESP + 0x414]               ; 0047cf47
    MOV dword ptr [ESP + 0x400],EAX     ; 0047cf4e
    LEA EAX,[ESP + 0x400]               ; 0047cf55
    PUSH EAX                            ; 0047cf5c
    MOV EDX,dword ptr [ESP + 0x414]     ; 0047cf5d
    PUSH EDX                            ; 0047cf64
    LEA EAX,[ESP + 0x8]                 ; 0047cf65
    PUSH EAX                            ; 0047cf69
    CALL crt_stdio.c_vsprintf_FUN_005a2898 ; 0047cf6a
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005a2898()
    ADD ESP,0xc                         ; 0047cf6f
    MOV EBX,dword ptr [0x01c5bb0c]      ; 0047cf72 | DAT_01c5bb0c
    PUSH EBX                            ; 0047cf78
    LEA EAX,[ESP + 0x4]                 ; 0047cf79
    PUSH EAX                            ; 0047cf7d
    XOR ECX,ECX                         ; 0047cf7e
    PUSH 0x5bce7f                       ; 0047cf80 | = "Error"
    MOV dword ptr [ESP + 0x40c],ECX     ; 0047cf85
    CALL shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047c8e0 ; 0047cf8c
        ;   XREF to: 0047c8e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047c8e0(char * title, char * message, int color)
    ADD ESP,0xc                         ; 0047cf91
    ADD ESP,0x404                       ; 0047cf94
    POP EBX                             ; 0047cf9a
    RET                                 ; 0047cf9b

