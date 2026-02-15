; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_sound_cpp_editSoundName_FUN_005b3de0(char *prompt_text,char *output_buffer)
;
; Parameters:
; char *           Stack[0x4]:4   prompt_text
; char *           Stack[0x8]:4   output_buffer
;
; XREF[1]:
;   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 at 0040f629
;
; Referenced Globals:
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;
; Called Functions:
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b3de0
        ;   Label: core_sound.cpp_editSoundName_FUN_005b3de0
    PUSH 0x1                            ; 005b3de1
    PUSH 0x20                           ; 005b3de3
    MOV EDX,dword ptr [ESP + 0x10]      ; 005b3de5
    PUSH EDX                            ; 005b3de9
    MOV ECX,dword ptr [ESP + 0x18]      ; 005b3dea
    PUSH ECX                            ; 005b3dee
    MOV EBX,dword ptr [0x00678a60]      ; 005b3def | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EBX                            ; 005b3df5 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 005b3df6
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 005b3dfb
    POP EBX                             ; 005b3dfe
    RET                                 ; 005b3dff

