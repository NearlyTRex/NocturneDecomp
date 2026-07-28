; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEditorTools_showCheatInputDialog_FUN_00471630(CEditorTools *this_ptr,char *prompt_text,char *input_buffer,int buffer_size,int dialog_flags)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   prompt_text
; char *           Stack[0xc]:4   input_buffer
; int              Stack[0x10]:4   buffer_size
; int              Stack[0x14]:4   dialog_flags
;
; XREF[1]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004a0550 at 004a1e77
;
; Called Functions:
;   shape_edittool.cpp_FUN_0046f7e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00471630
        ;   Label: shape_edittool.cpp_CEditorTools_showCheatInputDialog_FUN_00471630
    PUSH ESI                            ; 00471631
    PUSH 0x1                            ; 00471632
    MOV EDX,dword ptr [ESP + 0x20]      ; 00471634
    PUSH EDX                            ; 00471638
    MOV ECX,dword ptr [ESP + 0x20]      ; 00471639
    PUSH ECX                            ; 0047163d
    MOV EBX,dword ptr [ESP + 0x20]      ; 0047163e
    PUSH EBX                            ; 00471642
    MOV ESI,dword ptr [ESP + 0x20]      ; 00471643
    PUSH ESI                            ; 00471647
    CALL shape_edittool.cpp_FUN_0046f7e0 ; 00471648
        ;   XREF to: 0046f7e0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0046f7e0()
    ADD ESP,0x14                        ; 0047164d
    POP ESI                             ; 00471650
    POP EBX                             ; 00471651
    RET                                 ; 00471652

