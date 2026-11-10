; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_showError_FUN_0047be40(CEditorTools *this_ptr,char *format)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   format
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[29]:
;   core_doc.cpp_CDoc_doHeroAction_FUN_0045ca30 at 0045cb02
;   core_fldnotes.cpp_FUN_004a41b0 at 004a43f6
;   core_fldnotes.cpp_FUN_004a5310 at 004a53c1
;   core_fldnotes.cpp_FUN_004a5490 at 004a5588
;   core_fldnotes.cpp_FUN_004a55b0 at 004a5661
;   core_game.cpp_FUN_004b90d0 at 004b9e8e
;   core_game.cpp_FUN_004bb9b0 at 004bbe12
;   core_game.cpp_FUN_004bbf70 at 004bc46e
;   core_game.cpp_FUN_004bcbf0 at 004bd01f
;   core_game.cpp_hostNetworkGame_FUN_004bd2f0 at 004bd37e
;   ... and 19 more
;
; Referenced Globals:
;   TerminatedCString s_Error_005d1fc9
;   undefined4 DAT_01c263a4
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005b7768
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047b800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047be40
        ;   Label: shape_edittool.cpp_CEditorTools_showError_FUN_0047be40
    SUB ESP,0x4                         ; 0047be41
    LEA EAX,[ESP + 0x14]                ; 0047be44
    MOV dword ptr [ESP],EAX             ; 0047be48
    MOV EAX,ESP                         ; 0047be4b
    PUSH EAX                            ; 0047be4d
    MOV EDX,dword ptr [ESP + 0x14]      ; 0047be4e
    PUSH EDX                            ; 0047be52
    PUSH 0x1c22df0                      ; 0047be53
    CALL crt_stdio.c_vsprintf_FUN_005b7768 ; 0047be58
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005b7768()
    ADD ESP,0xc                         ; 0047be5d
    MOV EBX,dword ptr [0x01c263a4]      ; 0047be60 | DAT_01c263a4
    PUSH EBX                            ; 0047be66
    PUSH 0x1c22df0                      ; 0047be67
    XOR ECX,ECX                         ; 0047be6c
    PUSH 0x5d1fc9                       ; 0047be6e | = "Error"
    MOV dword ptr [ESP + 0xc],ECX       ; 0047be73
    CALL shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047b800 ; 0047be77
        ;   XREF to: 0047b800 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047b800(char * title, char * message, int color)
    ADD ESP,0xc                         ; 0047be7c
    ADD ESP,0x4                         ; 0047be7f
    POP EBX                             ; 0047be82
    RET                                 ; 0047be83

