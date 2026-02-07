; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 (CEditorTools *this_ptr,char *prompt_text,char *input_buffer,int buffer_size, int dialog_flags)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   prompt_text
; char *           Stack[0xc]:4   input_buffer
; int              Stack[0x10]:4   buffer_size
; int              Stack[0x14]:4   dialog_flags
;
; XREF[39]:
;   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 at 0040f180
;   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 at 00479790
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047e684
;   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 at 004bdaeb
;   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 at 004be51b
;   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 at 004df205
;   core_game.cpp_joinNetworkGame_FUN_004e2fc0 at 004e2feb
;   core_msnedit.cpp_CDemonMission_FUN_0053bd80 at 0053c024
;   core_msnedit.cpp_CDemonMission_FUN_0053dcf0 at 0053df00
;   core_msnedit.cpp_CDemonMission_FUN_0053df90 at 0053e1a3
;   ... and 29 more
;
; Called Functions:
;   shape_edittool.cpp_showTextInputDialog_FUN_0049db10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a03d0
        ;   Label: shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
    PUSH ESI                            ; 004a03d1
    PUSH 0x0                            ; 004a03d2
    MOV EDX,dword ptr [ESP + 0x20]      ; 004a03d4
    PUSH EDX                            ; 004a03d8
    MOV ECX,dword ptr [ESP + 0x20]      ; 004a03d9
    PUSH ECX                            ; 004a03dd
    MOV EBX,dword ptr [ESP + 0x20]      ; 004a03de
    PUSH EBX                            ; 004a03e2
    MOV ESI,dword ptr [ESP + 0x20]      ; 004a03e3
    PUSH ESI                            ; 004a03e7
    CALL shape_edittool.cpp_showTextInputDialog_FUN_0049db10 ; 004a03e8
        ;   XREF to: 0049db10 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_showTextInputDialog_FUN_0049db10(int dialog_mode, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 004a03ed
    POP ESI                             ; 004a03f0
    POP EBX                             ; 004a03f1
    RET                                 ; 004a03f2

