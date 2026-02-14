; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50(CCheckOutItem *this_ptr,char *filename_out,char *out_buffer,char *wildcard_pattern,char *dialog_title)
;
; Parameters:
; CCheckOutItem *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename_out
; char *           Stack[0xc]:4   out_buffer
; char *           Stack[0x10]:4   wildcard_pattern
; char *           Stack[0x14]:4   dialog_title
; Local Variables:
; undefined4       Stack[-0x3c0]:4  local_3c0
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 at 004b4273
;   engine_fileio.cpp_CCheckOutItem_revert_FUN_004b41c0 at 004b41e6
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004baf44
;   engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0 at 004bc2fb
;
; Referenced Globals:
;   TerminatedCString s_You_do_not_currently_hav_00626a04
;   TerminatedCString s_You_currently_don_t_have_00626a2d
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;   SVersionControlSession g_VersionControlSession
;
; Called Functions:
;   crt_string.c_stricmp_FUN_005fe7f0
;   engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
;   engine_fileio.cpp_CCheckOutList_load_FUN_004b2890
;   engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
;   engine_fileio.cpp_establishUserIdentity_FUN_004b1c00
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;   shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b3f50
        ;   Label: engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
    PUSH ESI                            ; 004b3f51
    PUSH EDI                            ; 004b3f52
    PUSH EBP                            ; 004b3f53
    SUB ESP,0x3b0                       ; 004b3f54
    MOV EDI,dword ptr [ESP + 0x3c8]     ; 004b3f5a
    MOV EBP,dword ptr [ESP + 0x3cc]     ; 004b3f61
    MOV EBX,dword ptr [ESP + 0x3d4]     ; 004b3f68
    CALL engine_fileio.cpp_establishUserIdentity_FUN_004b1c00 ; 004b3f6f
        ;   XREF to: 004b1c00 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_establishUserIdentity_FUN_004b1c00()
    TEST EAX,EAX                        ; 004b3f74
    JNZ 0x004b3f87                      ; 004b3f76
        ;   XREF to: 004b3f87 (CONDITIONAL_JUMP)  ; LAB_004b3f87
    XOR EDI,EDI                         ; 004b3f78
    MOV EAX,EDI                         ; 004b3f7a
    ADD ESP,0x3b0                       ; 004b3f7c
    POP EBP                             ; 004b3f82
    POP EDI                             ; 004b3f83
    POP ESI                             ; 004b3f84
    POP EBX                             ; 004b3f85
    RET                                 ; 004b3f86
    LEA EAX,[ESP + 0x3a8]               ; 004b3f87
        ;   Label: LAB_004b3f87
    XOR EDX,EDX                         ; 004b3f8e
    PUSH EAX                            ; 004b3f90
    MOV dword ptr [ESP + 0x3ac],EDX     ; 004b3f91
    MOV dword ptr [ESP + 0x3b0],EDX     ; 004b3f98
    CALL engine_fileio.cpp_CCheckOutList_load_FUN_004b2890 ; 004b3f9f
        ;   XREF to: 004b2890 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutList_load_FUN_004b2890(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004b3fa4
    TEST EAX,EAX                        ; 004b3fa7
    JZ 0x004b4012                       ; 004b3fa9
        ;   XREF to: 004b4012 (CONDITIONAL_JUMP)  ; LAB_004b4012
    TEST EDI,EDI                        ; 004b3fab
    JZ 0x004b4098                       ; 004b3fad
        ;   XREF to: 004b4098 (CONDITIONAL_JUMP)  ; LAB_004b4098
    PUSH EDI                            ; 004b3fb3
    LEA EAX,[ESP + 0x3ac]               ; 004b3fb4
    PUSH EAX                            ; 004b3fbb
    CALL engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60 ; 004b3fbc
        ;   XREF to: 004b2e60 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60(CCheckOutList * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004b3fc1
    MOV ESI,EAX                         ; 004b3fc4
    TEST EAX,EAX                        ; 004b3fc6
    JGE 0x004b4031                      ; 004b3fc8
        ;   XREF to: 004b4031 (CONDITIONAL_JUMP)  ; LAB_004b4031
    TEST ESI,ESI                        ; 004b3fca
        ;   Label: LAB_004b3fca
    JL 0x004b4064                       ; 004b3fcc
        ;   XREF to: 004b4064 (CONDITIONAL_JUMP)  ; LAB_004b4064
    MOV ESI,EDI                         ; 004b3fd2
    MOV EDI,EBP                         ; 004b3fd4
    PUSH EDI                            ; 004b3fd6
    MOV AL,byte ptr [ESI]               ; 004b3fd7
        ;   Label: LAB_004b3fd7
    MOV byte ptr [EDI],AL               ; 004b3fd9
    CMP AL,0x0                          ; 004b3fdb
    JZ 0x004b3fef                       ; 004b3fdd
        ;   XREF to: 004b3fef (CONDITIONAL_JUMP)  ; LAB_004b3fef
    MOV AL,byte ptr [ESI + 0x1]         ; 004b3fdf
    ADD ESI,0x2                         ; 004b3fe2
    MOV byte ptr [EDI + 0x1],AL         ; 004b3fe5
    ADD EDI,0x2                         ; 004b3fe8
    CMP AL,0x0                          ; 004b3feb
    JNZ 0x004b3fd7                      ; 004b3fed
        ;   XREF to: 004b3fd7 (CONDITIONAL_JUMP)  ; LAB_004b3fd7
    POP EDI                             ; 004b3fef
        ;   Label: LAB_004b3fef
    LEA EAX,[ESP + 0x3a8]               ; 004b3ff0
        ;   Label: LAB_004b3ff0
    PUSH EAX                            ; 004b3ff7
    MOV EDI,0x1                         ; 004b3ff8
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004b3ffd
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004b4002
    MOV EAX,EDI                         ; 004b4005
    ADD ESP,0x3b0                       ; 004b4007
    POP EBP                             ; 004b400d
    POP EDI                             ; 004b400e
    POP ESI                             ; 004b400f
    POP EBX                             ; 004b4010
    RET                                 ; 004b4011
    LEA EAX,[ESP + 0x3a8]               ; 004b4012
        ;   Label: LAB_004b4012
    PUSH EAX                            ; 004b4019
    XOR EDI,EDI                         ; 004b401a
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004b401c
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004b4021
    MOV EAX,EDI                         ; 004b4024
    ADD ESP,0x3b0                       ; 004b4026
    POP EBP                             ; 004b402c
    POP EDI                             ; 004b402d
    POP ESI                             ; 004b402e
    POP EBX                             ; 004b402f
    RET                                 ; 004b4030
    SHL EAX,0x2                         ; 004b4031
        ;   Label: LAB_004b4031
    SUB EAX,ESI                         ; 004b4034
    SHL EAX,0x3                         ; 004b4036
    MOV EBX,EAX                         ; 004b4039
    SHL EAX,0x4                         ; 004b403b
    MOV EDX,dword ptr [ESP + 0x3ac]     ; 004b403e
    SUB EAX,EBX                         ; 004b4045
    ADD EAX,EDX                         ; 004b4047
    PUSH 0x2d12bd0                      ; 004b4049 | g_VersionControlSession
    ADD EAX,0x104                       ; 004b404e
    PUSH EAX                            ; 004b4053
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004b4054
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004b4059
    TEST EAX,EAX                        ; 004b405c
    JZ 0x004b3fca                       ; 004b405e
        ;   XREF to: 004b3fca (CONDITIONAL_JUMP)  ; LAB_004b3fca
    PUSH EDI                            ; 004b4064
        ;   Label: LAB_004b4064
    PUSH 0x626a04                       ; 004b4065 | = "You do not currently have %s checked out"
    MOV ECX,dword ptr [0x00678a60]      ; 004b406a | g_CEditorToolsPtr
    PUSH ECX                            ; 004b4070 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b4071
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b4076
    LEA EAX,[ESP + 0x3a8]               ; 004b4079
    PUSH EAX                            ; 004b4080
    XOR EDI,EDI                         ; 004b4081
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004b4083
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004b4088
    MOV EAX,EDI                         ; 004b408b
    ADD ESP,0x3b0                       ; 004b408d
    POP EBP                             ; 004b4093
    POP EDI                             ; 004b4094
    POP ESI                             ; 004b4095
    POP EBX                             ; 004b4096
    RET                                 ; 004b4097
    MOV EAX,ESP                         ; 004b4098
        ;   Label: LAB_004b4098
    PUSH EAX                            ; 004b409a
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 004b409b
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004b40a0
    CMP dword ptr [ESP + 0x3a8],0x0     ; 004b40a3
    JLE 0x004b4110                      ; 004b40ab
        ;   XREF to: 004b4110 (CONDITIONAL_JUMP)  ; LAB_004b4110
    XOR ESI,ESI                         ; 004b40ad
    MOV EAX,dword ptr [ESP + 0x3ac]     ; 004b40af
        ;   Label: LAB_004b40af
    ADD EAX,ESI                         ; 004b40b6
    PUSH 0x2d12bd0                      ; 004b40b8 | g_VersionControlSession
    ADD EAX,0x104                       ; 004b40bd
    PUSH EAX                            ; 004b40c2
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004b40c3
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004b40c8
    TEST EAX,EAX                        ; 004b40cb
    JNZ 0x004b40fe                      ; 004b40cd
        ;   XREF to: 004b40fe (CONDITIONAL_JUMP)  ; LAB_004b40fe
    PUSH EAX                            ; 004b40cf
    MOV EAX,dword ptr [ESP + 0x3b0]     ; 004b40d0
    ADD EAX,ESI                         ; 004b40d7
    PUSH EAX                            ; 004b40d9
    PUSH EBX                            ; 004b40da
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20 ; 004b40db
        ;   XREF to: 004a6e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 004b40e0
    TEST EAX,EAX                        ; 004b40e3
    JZ 0x004b40fe                       ; 004b40e5
        ;   XREF to: 004b40fe (CONDITIONAL_JUMP)  ; LAB_004b40fe
    MOV EAX,dword ptr [ESP + 0x3ac]     ; 004b40e7
    ADD EAX,ESI                         ; 004b40ee
    PUSH EAX                            ; 004b40f0
    LEA EAX,[ESP + 0x4]                 ; 004b40f1
    PUSH EAX                            ; 004b40f5
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b40f6
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b40fb
    MOV EAX,dword ptr [ESP + 0x3a8]     ; 004b40fe
        ;   Label: LAB_004b40fe
    INC EDI                             ; 004b4105
    ADD ESI,0x168                       ; 004b4106
    CMP EDI,EAX                         ; 004b410c
    JL 0x004b40af                       ; 004b410e
        ;   XREF to: 004b40af (CONDITIONAL_JUMP)  ; LAB_004b40af
    CMP dword ptr [ESP],0x1             ; 004b4110
        ;   Label: LAB_004b4110
    JL 0x004b4173                       ; 004b4114
        ;   XREF to: 004b4173 (CONDITIONAL_JUMP)  ; LAB_004b4173
    PUSH 0x0                            ; 004b4116
    PUSH -0x1                           ; 004b4118
    MOV ECX,dword ptr [ESP + 0x3d8]     ; 004b411a
    PUSH ECX                            ; 004b4121
    LEA EAX,[ESP + 0xc]                 ; 004b4122
    PUSH EAX                            ; 004b4126
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004b4127
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 004b412c
    TEST EAX,EAX                        ; 004b412f
    JL 0x004b4187                       ; 004b4131
        ;   XREF to: 004b4187 (CONDITIONAL_JUMP)  ; LAB_004b4187
    PUSH EAX                            ; 004b4133
    LEA EAX,[ESP + 0x4]                 ; 004b4134
    PUSH EAX                            ; 004b4138
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004b4139
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004b413e
    MOV EDI,EBP                         ; 004b4141
    MOV ESI,EAX                         ; 004b4143
    PUSH EDI                            ; 004b4145
    MOV AL,byte ptr [ESI]               ; 004b4146
        ;   Label: LAB_004b4146
    MOV byte ptr [EDI],AL               ; 004b4148
    CMP AL,0x0                          ; 004b414a
    JZ 0x004b415e                       ; 004b414c
        ;   XREF to: 004b415e (CONDITIONAL_JUMP)  ; LAB_004b415e
    MOV AL,byte ptr [ESI + 0x1]         ; 004b414e
    ADD ESI,0x2                         ; 004b4151
    MOV byte ptr [EDI + 0x1],AL         ; 004b4154
    ADD EDI,0x2                         ; 004b4157
    CMP AL,0x0                          ; 004b415a
    JNZ 0x004b4146                      ; 004b415c
        ;   XREF to: 004b4146 (CONDITIONAL_JUMP)  ; LAB_004b4146
    POP EDI                             ; 004b415e
        ;   Label: LAB_004b415e
    PUSH 0x0                            ; 004b415f
    LEA EAX,[ESP + 0x4]                 ; 004b4161
    PUSH EAX                            ; 004b4165
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004b4166
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b416b
    JMP 0x004b3ff0                      ; 004b416e
        ;   XREF to: 004b3ff0 (UNCONDITIONAL_JUMP)  ; LAB_004b3ff0
    PUSH 0x626a2d                       ; 004b4173 | = "You currently don't have any files ch..."
        ;   Label: LAB_004b4173
    MOV EBX,dword ptr [0x00678a60]      ; 004b4178 | g_CEditorToolsPtr
    PUSH EBX                            ; 004b417e | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b417f
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004b4184
    XOR EDI,EDI                         ; 004b4187
        ;   Label: LAB_004b4187
    PUSH EDI                            ; 004b4189
    LEA EAX,[ESP + 0x4]                 ; 004b418a
    PUSH EAX                            ; 004b418e
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004b418f
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b4194
    LEA EAX,[ESP + 0x3a8]               ; 004b4197
    PUSH EAX                            ; 004b419e
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004b419f
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004b41a4
    MOV EAX,EDI                         ; 004b41a7
    ADD ESP,0x3b0                       ; 004b41a9
    POP EBP                             ; 004b41af
    POP EDI                             ; 004b41b0
    POP ESI                             ; 004b41b1
    POP EBX                             ; 004b41b2
    RET                                 ; 004b41b3

