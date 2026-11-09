; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEditorTools_showCheatInputDialog_FUN_0047db10(CEditorTools *this_ptr,char *prompt_text,char *input_buffer,int buffer_size,int dialog_flags)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   prompt_text
; char *           Stack[0xc]:4   input_buffer
; int              Stack[0x10]:4   buffer_size
; int              Stack[0x14]:4   dialog_flags
;
; XREF[1]:
;   core_game.cpp_FUN_004b90d0 at 004b9ecf
;
; Called Functions:
;   shape_edittool.cpp_showTextInputDialog_FUN_0047b1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047db10
        ;   Label: shape_edittool.cpp_CEditorTools_showCheatInputDialog_FUN_0047db10
    PUSH ESI                            ; 0047db11
    PUSH 0x1                            ; 0047db12
    MOV EDX,dword ptr [ESP + 0x20]      ; 0047db14
    PUSH EDX                            ; 0047db18
    MOV ECX,dword ptr [ESP + 0x20]      ; 0047db19
    PUSH ECX                            ; 0047db1d
    MOV EBX,dword ptr [ESP + 0x20]      ; 0047db1e
    PUSH EBX                            ; 0047db22
    MOV ESI,dword ptr [ESP + 0x20]      ; 0047db23
    PUSH ESI                            ; 0047db27
    CALL shape_edittool.cpp_showTextInputDialog_FUN_0047b1f0 ; 0047db28
        ;   XREF to: 0047b1f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_showTextInputDialog_FUN_0047b1f0(char * dialog_title, char * input_buffer, int max_length, int flags, ...)
    ADD ESP,0x14                        ; 0047db2d
    POP ESI                             ; 0047db30
    POP EBX                             ; 0047db31
    RET                                 ; 0047db32

