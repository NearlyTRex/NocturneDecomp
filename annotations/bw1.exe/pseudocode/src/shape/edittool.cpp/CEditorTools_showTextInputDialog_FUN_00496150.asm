; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_00496150(CEditorTools *this_ptr,char *prompt_text,char *input_buffer,int buffer_size,int dialog_flags)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   prompt_text
; char *           Stack[0xc]:4   input_buffer
; int              Stack[0x10]:4   buffer_size
; int              Stack[0x14]:4   dialog_flags
;
; XREF[8]:
;   core_game.cpp_FUN_004d27b0 at 004d3f56
;   core_game.cpp_joinNetworkGame_FUN_004d7e90 at 004d7ebb
;   core_netgame.cpp_CNetGame_runLobby_FUN_0052e120 at 0052e9df
;   shape_edittool.cpp_CEditorTools_promptForValidDouble_FUN_00495f70 at 00495fb8
;   shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_00495e70 at 00495ea9
;   shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00495da0 at 00495dce
;   shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_00496080 at 004960a9
;   shape_edittool.cpp_FUN_0049517e at 00495445
;
; Called Functions:
;   shape_edittool.cpp_showTextInputDialog_FUN_00493720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00496150
        ;   Label: shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00496150
    PUSH ESI                            ; 00496151
    PUSH 0x0                            ; 00496152
    MOV EDX,dword ptr [ESP + 0x20]      ; 00496154
    PUSH EDX                            ; 00496158
    MOV ECX,dword ptr [ESP + 0x20]      ; 00496159
    PUSH ECX                            ; 0049615d
    MOV EBX,dword ptr [ESP + 0x20]      ; 0049615e
    PUSH EBX                            ; 00496162
    MOV ESI,dword ptr [ESP + 0x20]      ; 00496163
    PUSH ESI                            ; 00496167
    CALL shape_edittool.cpp_showTextInputDialog_FUN_00493720 ; 00496168
        ;   XREF to: 00493720 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_showTextInputDialog_FUN_00493720(char * dialog_title, char * input_buffer, int max_length, int flags, ...)
    ADD ESP,0x14                        ; 0049616d
    POP ESI                             ; 00496170
    POP EBX                             ; 00496171
    RET                                 ; 00496172

