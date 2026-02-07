; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060 (CEditorTools *this_ptr,char *format_string,...)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   format_string
; Local Variables:
; CStrList         Stack[-0x18]:16  local_18
; va_list_t        Stack[-0x8]:4  local_8
;
; XREF[18]:
;   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 at 0044352e
;   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 at 00479968
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047d891
;   core_game.cpp_CGame_processHotkeys_FUN_004dcee0 at 004dd5b9
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db92f
;   core_msnedit.cpp_CDemonMission_FUN_0053bc80 at 0053bcd2
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 0053a622
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 00538928
;   core_setedit.cpp_CDemonSet_FUN_00581aa0 at 00582109
;   core_setedit.cpp_CDemonSet_FUN_00583170 at 00583cac
;   ... and 8 more
;
; Referenced Globals:
;   TerminatedCString s_Yes_I_know_what_I_m_doin_00623058
;   TerminatedCString s_No_please_I_didn_t_mean__00623097
;   undefined4 DAT_02cf0130
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005fdba8
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
;   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
;   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049f060
        ;   Label: shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
    SUB ESP,0x14                        ; 0049f061
    LEA EAX,[ESP + 0x24]                ; 0049f064
    MOV dword ptr [ESP + 0x10],EAX      ; 0049f068
    LEA EAX,[ESP + 0x10]                ; 0049f06c
    PUSH EAX                            ; 0049f070
    MOV EDX,dword ptr [ESP + 0x24]      ; 0049f071
    PUSH EDX                            ; 0049f075
    PUSH 0x2cf0130                      ; 0049f076 | DAT_02cf0130
    CALL crt_stdio.c_vsprintf_FUN_005fdba8 ; 0049f07b
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 0049f080
    MOV EAX,ESP                         ; 0049f083
    XOR ECX,ECX                         ; 0049f085
    PUSH EAX                            ; 0049f087
    MOV dword ptr [ESP + 0x14],ECX      ; 0049f088
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 0049f08c
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
    ADD ESP,0x4                         ; 0049f091
    PUSH 0x623058                       ; 0049f094 | = "^Yes, I know what I'm doing and I hat..."
    LEA EAX,[ESP + 0x4]                 ; 0049f099
    PUSH EAX                            ; 0049f09d
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0049f09e
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0049f0a3
    PUSH 0x623097                       ; 0049f0a6 | = "^No, please, I didn't mean to do it!"
    LEA EAX,[ESP + 0x4]                 ; 0049f0ab
    PUSH EAX                            ; 0049f0af
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0049f0b0
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0049f0b5
    PUSH 0x1                            ; 0049f0b8
    LEA EAX,[ESP + 0x4]                 ; 0049f0ba
    PUSH EAX                            ; 0049f0be
    PUSH 0x2cf0130                      ; 0049f0bf | DAT_02cf0130
    CALL shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0 ; 0049f0c4
        ;   XREF to: 0049e9d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0(CStrList * str_list, char * dialog_title, int dialog_mode)
    ADD ESP,0xc                         ; 0049f0c9
    XOR EBX,EBX                         ; 0049f0cc
    TEST EAX,EAX                        ; 0049f0ce
    SETZ AL                             ; 0049f0d0
    PUSH 0x0                            ; 0049f0d3
    MOV BL,AL                           ; 0049f0d5
    LEA EAX,[ESP + 0x4]                 ; 0049f0d7
    PUSH EAX                            ; 0049f0db
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 0049f0dc
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0049f0e1
    MOV EAX,EBX                         ; 0049f0e4
    ADD ESP,0x14                        ; 0049f0e6
    POP EBX                             ; 0049f0e9
    RET                                 ; 0049f0ea

