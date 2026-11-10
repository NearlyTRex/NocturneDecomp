; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_0047ecf0(CEditorTools *this_ptr,char *prompt_text,char *input_buffer,int buffer_size,int dialog_flags)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   prompt_text
; char *           Stack[0xc]:4   input_buffer
; int              Stack[0x10]:4   buffer_size
; int              Stack[0x14]:4   dialog_flags
;
; XREF[8]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004bb100 at 004bc14f
;   core_game.cpp_joinNetworkGame_FUN_004bf2e0 at 004bf30b
;   core_netgame.cpp_CNetGame_runLobby_FUN_00505a30 at 005062f7
;   shape_edittool.cpp_CEditorTools_promptForValidDouble_FUN_0047eb10 at 0047eb58
;   shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_0047ea10 at 0047ea49
;   shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_0047e940 at 0047e96e
;   shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_0047ec20 at 0047ec49
;   shape_edittool.cpp_FUN_0047dd1e at 0047dfe5
;
; Called Functions:
;   shape_edittool.cpp_showTextInputDialog_FUN_0047c2c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047ecf0
        ;   Label: shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047ecf0
    PUSH ESI                            ; 0047ecf1
    PUSH 0x0                            ; 0047ecf2
    MOV EDX,dword ptr [ESP + 0x20]      ; 0047ecf4
    PUSH EDX                            ; 0047ecf8
    MOV ECX,dword ptr [ESP + 0x20]      ; 0047ecf9
    PUSH ECX                            ; 0047ecfd
    MOV EBX,dword ptr [ESP + 0x20]      ; 0047ecfe
    PUSH EBX                            ; 0047ed02
    MOV ESI,dword ptr [ESP + 0x20]      ; 0047ed03
    PUSH ESI                            ; 0047ed07
    CALL shape_edittool.cpp_showTextInputDialog_FUN_0047c2c0 ; 0047ed08
        ;   XREF to: 0047c2c0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_showTextInputDialog_FUN_0047c2c0(char * dialog_title, char * input_buffer, int max_length, int flags, ...)
    ADD ESP,0x14                        ; 0047ed0d
    POP ESI                             ; 0047ed10
    POP EBX                             ; 0047ed11
    RET                                 ; 0047ed12

