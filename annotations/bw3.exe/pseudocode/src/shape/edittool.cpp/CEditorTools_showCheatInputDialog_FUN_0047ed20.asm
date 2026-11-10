; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEditorTools_showCheatInputDialog_FUN_0047ed20(CEditorTools *this_ptr,char *prompt_text,char *input_buffer,int buffer_size,int dialog_flags)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   prompt_text
; char *           Stack[0xc]:4   input_buffer
; int              Stack[0x10]:4   buffer_size
; int              Stack[0x14]:4   dialog_flags
;
; XREF[1]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004bb100 at 004bc1c2
;
; Called Functions:
;   shape_edittool.cpp_showTextInputDialog_FUN_0047c2c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047ed20
        ;   Label: shape_edittool.cpp_CEditorTools_showCheatInputDialog_FUN_0047ed20
    PUSH ESI                            ; 0047ed21
    PUSH 0x1                            ; 0047ed22
    MOV EDX,dword ptr [ESP + 0x20]      ; 0047ed24
    PUSH EDX                            ; 0047ed28
    MOV ECX,dword ptr [ESP + 0x20]      ; 0047ed29
    PUSH ECX                            ; 0047ed2d
    MOV EBX,dword ptr [ESP + 0x20]      ; 0047ed2e
    PUSH EBX                            ; 0047ed32
    MOV ESI,dword ptr [ESP + 0x20]      ; 0047ed33
    PUSH ESI                            ; 0047ed37
    CALL shape_edittool.cpp_showTextInputDialog_FUN_0047c2c0 ; 0047ed38
        ;   XREF to: 0047c2c0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_showTextInputDialog_FUN_0047c2c0(char * dialog_title, char * input_buffer, int max_length, int flags, ...)
    ADD ESP,0x14                        ; 0047ed3d
    POP ESI                             ; 0047ed40
    POP EBX                             ; 0047ed41
    RET                                 ; 0047ed42

