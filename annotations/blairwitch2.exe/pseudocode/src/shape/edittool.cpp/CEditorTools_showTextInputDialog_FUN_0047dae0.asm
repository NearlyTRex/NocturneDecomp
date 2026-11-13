; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_0047dae0(CEditorTools *this_ptr,char *prompt_text,char *input_buffer,int buffer_size,int dialog_flags)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   prompt_text
; char *           Stack[0xc]:4   input_buffer
; int              Stack[0x10]:4   buffer_size
; int              Stack[0x14]:4   dialog_flags
;
; XREF[8]:
;   core_game.cpp_FUN_004b90d0 at 004b9e5e
;   core_game.cpp_joinNetworkGame_FUN_004bd3a0 at 004bd3cb
;   core_netgame.cpp_CNetGame_runLobby_FUN_0050cf50 at 0050d817
;   shape_edittool.cpp_CEditorTools_promptForValidDouble_FUN_0047d900 at 0047d948
;   shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_0047d800 at 0047d839
;   shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_0047d730 at 0047d75e
;   shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_0047da10 at 0047da39
;   shape_edittool.cpp_FUN_0047cb20 at 0047cde5
;
; Called Functions:
;   shape_edittool.cpp_showTextInputDialog_FUN_0047b1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047dae0
        ;   Label: shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047dae0
    PUSH ESI                            ; 0047dae1
    PUSH 0x0                            ; 0047dae2
    MOV EDX,dword ptr [ESP + 0x20]      ; 0047dae4
    PUSH EDX                            ; 0047dae8
    MOV ECX,dword ptr [ESP + 0x20]      ; 0047dae9
    PUSH ECX                            ; 0047daed
    MOV EBX,dword ptr [ESP + 0x20]      ; 0047daee
    PUSH EBX                            ; 0047daf2
    MOV ESI,dword ptr [ESP + 0x20]      ; 0047daf3
    PUSH ESI                            ; 0047daf7
    CALL shape_edittool.cpp_showTextInputDialog_FUN_0047b1f0 ; 0047daf8
        ;   XREF to: 0047b1f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_showTextInputDialog_FUN_0047b1f0(char * dialog_title, char * input_buffer, int max_length, int flags, ...)
    ADD ESP,0x14                        ; 0047dafd
    POP ESI                             ; 0047db00
    POP EBX                             ; 0047db01
    RET                                 ; 0047db02

