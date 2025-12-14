; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format, ...)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   format
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[103]:
;   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 at 0040ff25
;   core_actor.cpp_FUN_0040fffe at 00410059
;   core_charactr.cpp_CCharacter_FUN_0042f3e0 at 0042f583
;   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 at 0043d928
;   core_course.cpp_CCourse_save_FUN_00442a90 at 00442ba5
;   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 at 00443440
;   core_course.cpp_OpeningCourseFile2_FUN_00442d70 at 00442e8c
;   core_course.cpp_OpeningCourseFileMaybe_FUN_00442bc0 at 00442d1a
;   core_dmodel.cpp_CKeyFramedModel_exportToS3D_FUN_00479f30 at 0047a352
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047decc
;   ... and 93 more
;
; Referenced Globals:
;   TerminatedCString s_Error_00623018
;   char[256] g_ErrorMessageBuffer
;   CEditorTools* g_CUserInterfacePtr
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005fdba8
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049e740
        ;   Label: shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
    SUB ESP,0x4                         ; 0049e741
    LEA EAX,[ESP + 0x14]                ; 0049e744
    MOV dword ptr [ESP],EAX             ; 0049e748
    MOV EAX,ESP                         ; 0049e74b
    PUSH EAX                            ; 0049e74d
    MOV EDX,dword ptr [ESP + 0x14]      ; 0049e74e
    PUSH EDX                            ; 0049e752
    PUSH 0x2cef530                      ; 0049e753 | g_ErrorMessageBuffer
    CALL crt_stdio.c_vsprintf_FUN_005fdba8 ; 0049e758
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t * args)
    ADD ESP,0xc                         ; 0049e75d
    MOV EBX,dword ptr [0x02cf2a94]      ; 0049e760 | g_CUserInterfacePtr
    PUSH EBX                            ; 0049e766
    PUSH 0x2cef530                      ; 0049e767 | g_ErrorMessageBuffer
    XOR ECX,ECX                         ; 0049e76c
    PUSH 0x623018                       ; 0049e76e | = "Error"
    MOV dword ptr [ESP + 0xc],ECX       ; 0049e773
    CALL shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 ; 0049e777
        ;   XREF to: 0049e130 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130(char * title, char * message, int color)
    ADD ESP,0xc                         ; 0049e77c
    ADD ESP,0x4                         ; 0049e77f
    POP EBX                             ; 0049e782
    RET                                 ; 0049e783

