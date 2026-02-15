; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEditorTools_showCheatInputDialog_FUN_004a0400(CEditorTools *this_ptr,char *prompt_text,char *input_buffer,int buffer_size,int dialog_flags)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   prompt_text
; char *           Stack[0xc]:4   input_buffer
; int              Stack[0x10]:4   buffer_size
; int              Stack[0x14]:4   dialog_flags
;
; XREF[1]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 at 004df278
;
; Called Functions:
;   shape_edittool.cpp_showTextInputDialog_FUN_0049db10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0400
        ;   Label: shape_edittool.cpp_CEditorTools_showCheatInputDialog_FUN_004a0400
    PUSH ESI                            ; 004a0401
    PUSH 0x1                            ; 004a0402
    MOV EDX,dword ptr [ESP + 0x20]      ; 004a0404
    PUSH EDX                            ; 004a0408
    MOV ECX,dword ptr [ESP + 0x20]      ; 004a0409
    PUSH ECX                            ; 004a040d
    MOV EBX,dword ptr [ESP + 0x20]      ; 004a040e
    PUSH EBX                            ; 004a0412
    MOV ESI,dword ptr [ESP + 0x20]      ; 004a0413
    PUSH ESI                            ; 004a0417
    CALL shape_edittool.cpp_showTextInputDialog_FUN_0049db10 ; 004a0418
        ;   XREF to: 0049db10 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_showTextInputDialog_FUN_0049db10(int dialog_mode, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 004a041d
    POP ESI                             ; 004a0420
    POP EBX                             ; 004a0421
    RET                                 ; 004a0422

