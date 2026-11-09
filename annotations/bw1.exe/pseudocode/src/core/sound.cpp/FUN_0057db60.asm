; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_sound_cpp_FUN_0057db60(undefined4 param_1,char *param_2,int *param_3)
;
;
; Called Functions:
;   shape_edittool.cpp_CPickList_ctor_FUN_0049a620
;   shape_edittool.cpp_CPickList_dtor_FUN_0049a710
;   shape_edittool.cpp_CStrList_add_FUN_004994d0
;   shape_edittool.cpp_FUN_0049a8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057db60
        ;   Label: core_sound.cpp_FUN_0057db60
    SUB ESP,0x3c0                       ; 0057db61
    MOV EAX,ESP                         ; 0057db67
    PUSH EAX                            ; 0057db69
    XOR EBX,EBX                         ; 0057db6a
    CALL shape_edittool.cpp_CPickList_ctor_FUN_0049a620 ; 0057db6c
        ;   XREF to: 0049a620 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_0049a620(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0057db71
    MOV EDX,dword ptr [EBX + 0x6236bc]  ; 0057db74
        ;   Label: LAB_0057db74
    PUSH EDX                            ; 0057db7a
    LEA EAX,[ESP + 0x4]                 ; 0057db7b
    PUSH EAX                            ; 0057db7f
    ADD EBX,0x10                        ; 0057db80
    CALL shape_edittool.cpp_CStrList_add_FUN_004994d0 ; 0057db83
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004994d0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0057db88
    CMP EBX,0x1b0                       ; 0057db8b
    JNZ 0x0057db74                      ; 0057db91
        ;   XREF to: 0057db74 (CONDITIONAL_JUMP)  ; LAB_0057db74
    MOV EAX,dword ptr [ESP + 0x3d0]     ; 0057db93
    PUSH 0x0                            ; 0057db9a
    MOV ECX,dword ptr [EAX]             ; 0057db9c
    PUSH ECX                            ; 0057db9e
    MOV EBX,dword ptr [ESP + 0x3d4]     ; 0057db9f
    PUSH EBX                            ; 0057dba6
    LEA EAX,[ESP + 0xc]                 ; 0057dba7
    PUSH EAX                            ; 0057dbab
    CALL shape_edittool.cpp_FUN_0049a8b0 ; 0057dbac
        ;   XREF to: 0049a8b0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_0049a8b0(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 0057dbb1
    TEST EAX,EAX                        ; 0057dbb4
    JL 0x0057dbdf                       ; 0057dbb6
        ;   XREF to: 0057dbdf (CONDITIONAL_JUMP)  ; LAB_0057dbdf
    MOV EBX,dword ptr [ESP + 0x3d0]     ; 0057dbb8
    PUSH 0x0                            ; 0057dbbf
    MOV dword ptr [EBX],EAX             ; 0057dbc1
    LEA EAX,[ESP + 0x4]                 ; 0057dbc3
    PUSH EAX                            ; 0057dbc7
    MOV EBX,0x1                         ; 0057dbc8
    CALL shape_edittool.cpp_CPickList_dtor_FUN_0049a710 ; 0057dbcd
        ;   XREF to: 0049a710 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_0049a710(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0057dbd2
    MOV EAX,EBX                         ; 0057dbd5
    ADD ESP,0x3c0                       ; 0057dbd7
    POP EBX                             ; 0057dbdd
    RET                                 ; 0057dbde
    XOR EBX,EBX                         ; 0057dbdf
        ;   Label: LAB_0057dbdf
    PUSH EBX                            ; 0057dbe1
    LEA EAX,[ESP + 0x4]                 ; 0057dbe2
    PUSH EAX                            ; 0057dbe6
    CALL shape_edittool.cpp_CPickList_dtor_FUN_0049a710 ; 0057dbe7
        ;   XREF to: 0049a710 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_0049a710(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0057dbec
    MOV EAX,EBX                         ; 0057dbef
    ADD ESP,0x3c0                       ; 0057dbf1
    POP EBX                             ; 0057dbf7
    RET                                 ; 0057dbf8

