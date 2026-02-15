; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_sound_cpp_CSound_selectReverbPreset_FUN_005b3d20(CSound *this_ptr,char *title,int *selection_inout)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   title
; int *            Stack[0xc]:4   selection_inout
; Local Variables:
; undefined1       Stack[-0x3ac]:1  local_3ac
;
; XREF[1]:
;   core_setedit.cpp_CDemonSet_FUN_00580730 at 00580f40
;
; Referenced Globals:
;   TerminatedCString s_OFF_00652855
;   TerminatedCString s_GENERIC_00652859
;   SSoundModeEntry[27] g_SoundModeTable
;   undefined4 PTR_s_GENERIC_00681f0c
;
; Called Functions:
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b3d20
        ;   Label: core_sound.cpp_CSound_selectReverbPreset_FUN_005b3d20
    SUB ESP,0x3a8                       ; 005b3d21
    MOV EAX,ESP                         ; 005b3d27
    PUSH EAX                            ; 005b3d29
    XOR EBX,EBX                         ; 005b3d2a
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 005b3d2c
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 005b3d31
    MOV EDX,dword ptr [EBX + 0x681efc]  ; 005b3d34 | = "OFF" | s_GENERIC_00652859 | g_SoundModeTable
        ;   Label: LAB_005b3d34
    PUSH EDX                            ; 005b3d3a | = "OFF" | s_GENERIC_00652859
    LEA EAX,[ESP + 0x4]                 ; 005b3d3b
    PUSH EAX                            ; 005b3d3f
    ADD EBX,0x10                        ; 005b3d40
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005b3d43
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 005b3d48
    CMP EBX,0x1b0                       ; 005b3d4b
    JNZ 0x005b3d34                      ; 005b3d51
        ;   XREF to: 005b3d34 (CONDITIONAL_JUMP)  ; LAB_005b3d34
    MOV EAX,dword ptr [ESP + 0x3b8]     ; 005b3d53
    PUSH 0x0                            ; 005b3d5a
    MOV ECX,dword ptr [EAX]             ; 005b3d5c
    PUSH ECX                            ; 005b3d5e
    MOV EBX,dword ptr [ESP + 0x3bc]     ; 005b3d5f
    PUSH EBX                            ; 005b3d66
    LEA EAX,[ESP + 0xc]                 ; 005b3d67
    PUSH EAX                            ; 005b3d6b
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 005b3d6c
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 005b3d71
    TEST EAX,EAX                        ; 005b3d74
    JL 0x005b3d9f                       ; 005b3d76
        ;   XREF to: 005b3d9f (CONDITIONAL_JUMP)  ; LAB_005b3d9f
    MOV EBX,dword ptr [ESP + 0x3b8]     ; 005b3d78
    PUSH 0x0                            ; 005b3d7f
    MOV dword ptr [EBX],EAX             ; 005b3d81
    LEA EAX,[ESP + 0x4]                 ; 005b3d83
    PUSH EAX                            ; 005b3d87
    MOV EBX,0x1                         ; 005b3d88
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 005b3d8d
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005b3d92
    MOV EAX,EBX                         ; 005b3d95
    ADD ESP,0x3a8                       ; 005b3d97
    POP EBX                             ; 005b3d9d
    RET                                 ; 005b3d9e
    XOR EBX,EBX                         ; 005b3d9f
        ;   Label: LAB_005b3d9f
    PUSH EBX                            ; 005b3da1
    LEA EAX,[ESP + 0x4]                 ; 005b3da2
    PUSH EAX                            ; 005b3da6
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 005b3da7
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005b3dac
    MOV EAX,EBX                         ; 005b3daf
    ADD ESP,0x3a8                       ; 005b3db1
    POP EBX                             ; 005b3db7
    RET                                 ; 005b3db8

