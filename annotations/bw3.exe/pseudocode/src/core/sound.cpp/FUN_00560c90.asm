; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_sound_cpp_FUN_00560c90(undefined4 param_1,char *param_2,int *param_3)
;
;
; Called Functions:
;   shape_edittool.cpp_CPickList_ctor_FUN_004831c0
;   shape_edittool.cpp_CPickList_dtor_FUN_004832b0
;   shape_edittool.cpp_CStrList_add_FUN_00482070
;   shape_edittool.cpp_FUN_00483450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00560c90
        ;   Label: core_sound.cpp_FUN_00560c90
    SUB ESP,0x3c0                       ; 00560c91
    MOV EAX,ESP                         ; 00560c97
    PUSH EAX                            ; 00560c99
    XOR EBX,EBX                         ; 00560c9a
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004831c0 ; 00560c9c
        ;   XREF to: 004831c0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004831c0(CPickList * this_ptr)
    ADD ESP,0x4                         ; 00560ca1
    MOV EDX,dword ptr [EBX + 0x6045fc]  ; 00560ca4
        ;   Label: LAB_00560ca4
    PUSH EDX                            ; 00560caa
    LEA EAX,[ESP + 0x4]                 ; 00560cab
    PUSH EAX                            ; 00560caf
    ADD EBX,0x10                        ; 00560cb0
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 00560cb3
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00560cb8
    CMP EBX,0x1b0                       ; 00560cbb
    JNZ 0x00560ca4                      ; 00560cc1
        ;   XREF to: 00560ca4 (CONDITIONAL_JUMP)  ; LAB_00560ca4
    MOV EAX,dword ptr [ESP + 0x3d0]     ; 00560cc3
    PUSH 0x0                            ; 00560cca
    MOV ECX,dword ptr [EAX]             ; 00560ccc
    PUSH ECX                            ; 00560cce
    MOV EBX,dword ptr [ESP + 0x3d4]     ; 00560ccf
    PUSH EBX                            ; 00560cd6
    LEA EAX,[ESP + 0xc]                 ; 00560cd7
    PUSH EAX                            ; 00560cdb
    CALL shape_edittool.cpp_FUN_00483450 ; 00560cdc
        ;   XREF to: 00483450 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_00483450(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 00560ce1
    TEST EAX,EAX                        ; 00560ce4
    JL 0x00560d0f                       ; 00560ce6
        ;   XREF to: 00560d0f (CONDITIONAL_JUMP)  ; LAB_00560d0f
    MOV EBX,dword ptr [ESP + 0x3d0]     ; 00560ce8
    PUSH 0x0                            ; 00560cef
    MOV dword ptr [EBX],EAX             ; 00560cf1
    LEA EAX,[ESP + 0x4]                 ; 00560cf3
    PUSH EAX                            ; 00560cf7
    MOV EBX,0x1                         ; 00560cf8
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004832b0 ; 00560cfd
        ;   XREF to: 004832b0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004832b0(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00560d02
    MOV EAX,EBX                         ; 00560d05
    ADD ESP,0x3c0                       ; 00560d07
    POP EBX                             ; 00560d0d
    RET                                 ; 00560d0e
    XOR EBX,EBX                         ; 00560d0f
        ;   Label: LAB_00560d0f
    PUSH EBX                            ; 00560d11
    LEA EAX,[ESP + 0x4]                 ; 00560d12
    PUSH EAX                            ; 00560d16
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004832b0 ; 00560d17
        ;   XREF to: 004832b0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004832b0(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00560d1c
    MOV EAX,EBX                         ; 00560d1f
    ADD ESP,0x3c0                       ; 00560d21
    POP EBX                             ; 00560d27
    RET                                 ; 00560d28

