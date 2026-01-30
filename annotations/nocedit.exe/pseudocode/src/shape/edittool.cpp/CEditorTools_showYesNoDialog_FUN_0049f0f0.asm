; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0 (CEditorTools *this_ptr,char *format_string,...)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   format_string
; Local Variables:
; undefined1       Stack[-0x18]:1  local_18
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[20]:
;   core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0 at 00494e91
;   core_msnedit.cpp_CDemonMission_FUN_0053ccf0 at 0053cd0c
;   core_msnedit.cpp_CDemonMission_FUN_0053d8b0 at 0053da09
;   core_msnedit.cpp_CDemonMission_FUN_0053e220 at 0053e8c2
;   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 at 00578e74
;   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 at 0057f427
;   core_setedit.cpp_FUN_0057b410 at 0057b4b9
;   core_setedit.cpp_FUN_0057b500 at 0057b5cb
;   core_setedit.cpp_FUN_0057b600 at 0057b8d3
;   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 at 0057cb03
;   ... and 10 more
;
; Referenced Globals:
;   TerminatedCString s_Yes_006230bc
;   TerminatedCString s_No_006230c1
;   char[1024] g_YesNoDialogBuffer
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

    PUSH EBX                            ; 0049f0f0
        ;   Label: shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
    SUB ESP,0x14                        ; 0049f0f1
    LEA EAX,[ESP + 0x24]                ; 0049f0f4
    MOV dword ptr [ESP + 0x10],EAX      ; 0049f0f8
    LEA EAX,[ESP + 0x10]                ; 0049f0fc
    PUSH EAX                            ; 0049f100
    MOV EDX,dword ptr [ESP + 0x24]      ; 0049f101
    PUSH EDX                            ; 0049f105
    PUSH 0x2cf0530                      ; 0049f106 | g_YesNoDialogBuffer
    CALL crt_stdio.c_vsprintf_FUN_005fdba8 ; 0049f10b
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t * args)
    ADD ESP,0xc                         ; 0049f110
    MOV EAX,ESP                         ; 0049f113
    XOR ECX,ECX                         ; 0049f115
    PUSH EAX                            ; 0049f117
    MOV dword ptr [ESP + 0x14],ECX      ; 0049f118
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 0049f11c
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
    ADD ESP,0x4                         ; 0049f121
    PUSH 0x6230bc                       ; 0049f124 | = "^Yes"
    LEA EAX,[ESP + 0x4]                 ; 0049f129
    PUSH EAX                            ; 0049f12d
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0049f12e
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0049f133
    PUSH 0x6230c1                       ; 0049f136 | = "^No"
    LEA EAX,[ESP + 0x4]                 ; 0049f13b
    PUSH EAX                            ; 0049f13f
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0049f140
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0049f145
    PUSH 0x0                            ; 0049f148
    LEA EAX,[ESP + 0x4]                 ; 0049f14a
    PUSH EAX                            ; 0049f14e
    PUSH 0x2cf0530                      ; 0049f14f | g_YesNoDialogBuffer
    CALL shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0 ; 0049f154
        ;   XREF to: 0049e9d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0(CStrList * str_list, char * dialog_title, int dialog_mode)
    ADD ESP,0xc                         ; 0049f159
    XOR EBX,EBX                         ; 0049f15c
    TEST EAX,EAX                        ; 0049f15e
    SETZ AL                             ; 0049f160
    PUSH 0x0                            ; 0049f163
    MOV BL,AL                           ; 0049f165
    LEA EAX,[ESP + 0x4]                 ; 0049f167
    PUSH EAX                            ; 0049f16b
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 0049f16c
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint d1, uint d2)
    ADD ESP,0x8                         ; 0049f171
    MOV EAX,EBX                         ; 0049f174
    ADD ESP,0x14                        ; 0049f176
    POP EBX                             ; 0049f179
    RET                                 ; 0049f17a

