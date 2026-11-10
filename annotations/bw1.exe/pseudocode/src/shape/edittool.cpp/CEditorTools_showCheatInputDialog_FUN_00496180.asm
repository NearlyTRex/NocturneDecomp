; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEditorTools_showCheatInputDialog_FUN_00496180(CEditorTools *this_ptr,char *prompt_text,char *input_buffer,int buffer_size,int dialog_flags)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   prompt_text
; char *           Stack[0xc]:4   input_buffer
; int              Stack[0x10]:4   buffer_size
; int              Stack[0x14]:4   dialog_flags
;
; XREF[1]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004d27b0 at 004d3fc9
;
; Called Functions:
;   shape_edittool.cpp_showTextInputDialog_FUN_00493720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00496180
        ;   Label: shape_edittool.cpp_CEditorTools_showCheatInputDialog_FUN_00496180
    PUSH ESI                            ; 00496181
    PUSH 0x1                            ; 00496182
    MOV EDX,dword ptr [ESP + 0x20]      ; 00496184
    PUSH EDX                            ; 00496188
    MOV ECX,dword ptr [ESP + 0x20]      ; 00496189
    PUSH ECX                            ; 0049618d
    MOV EBX,dword ptr [ESP + 0x20]      ; 0049618e
    PUSH EBX                            ; 00496192
    MOV ESI,dword ptr [ESP + 0x20]      ; 00496193
    PUSH ESI                            ; 00496197
    CALL shape_edittool.cpp_showTextInputDialog_FUN_00493720 ; 00496198
        ;   XREF to: 00493720 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_showTextInputDialog_FUN_00493720(char * dialog_title, char * input_buffer, int max_length, int flags, ...)
    ADD ESP,0x14                        ; 0049619d
    POP ESI                             ; 004961a0
    POP EBX                             ; 004961a1
    RET                                 ; 004961a2

