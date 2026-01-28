; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown bool core_msnedit_cpp_RunNoneFunctorForCancelAndElse_FUN_0053cad0(void)
;
; Local Variables:
; undefined4       Stack[-0x3b8]:4  local_3b8
;
; XREF[1]:
;   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 at 0040f233
;
; Referenced Globals:
;   TerminatedCString s_none_0063c89a
;
; Called Functions:
;   core_mission.cpp_CDemonMission_FUN_00524030
;   core_msnedit.cpp_FUN_0053cc30
;   crt_string.c_stricmp_FUN_005fe7f0
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053cad0
        ;   Label: core_msnedit.cpp_RunNoneFunctorForCancelAndElse_FUN_0053cad0
    PUSH ESI                            ; 0053cad1
    PUSH EDI                            ; 0053cad2
    PUSH EBP                            ; 0053cad3
    SUB ESP,0x3a8                       ; 0053cad4
    MOV ESI,dword ptr [ESP + 0x3c8]     ; 0053cada
    MOV EBX,dword ptr [ESP + 0x3d8]     ; 0053cae1
    MOV EAX,ESP                         ; 0053cae8
    PUSH EAX                            ; 0053caea
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0053caeb
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0053caf0
    MOV EDX,dword ptr [ESP + 0x3cc]     ; 0053caf3
    MOV EDI,0xffffffff                  ; 0053cafa
    TEST EDX,EDX                        ; 0053caff
    JNZ 0x0053cba2                      ; 0053cb01
        ;   XREF to: 0053cba2 (CONDITIONAL_JUMP)  ; LAB_0053cba2
    MOV EBP,dword ptr [ESP + 0x3d4]     ; 0053cb07
        ;   Label: LAB_0053cb07
    PUSH EBP                            ; 0053cb0e
    MOV EAX,dword ptr [ESP + 0x3d4]     ; 0053cb0f
    PUSH EAX                            ; 0053cb16
    MOV EDX,dword ptr [ESP + 0x3c8]     ; 0053cb17
    PUSH EDX                            ; 0053cb1e
    LEA EAX,[ESP + 0xc]                 ; 0053cb1f
    PUSH EAX                            ; 0053cb23
    MOV ECX,dword ptr [ESP + 0x3cc]     ; 0053cb24
    PUSH ECX                            ; 0053cb2b
    CALL core_msnedit.cpp_FUN_0053cc30  ; 0053cb2c
        ;   XREF to: 0053cc30 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_FUN_0053cc30()
    ADD ESP,0x14                        ; 0053cb31
    TEST EBX,EBX                        ; 0053cb34
    JZ 0x0053cb40                       ; 0053cb36
        ;   XREF to: 0053cb40 (CONDITIONAL_JUMP)  ; LAB_0053cb40
    TEST EDI,EDI                        ; 0053cb38
    JL 0x0053cbcc                       ; 0053cb3a
        ;   XREF to: 0053cbcc (CONDITIONAL_JUMP)  ; LAB_0053cbcc
    PUSH 0x0                            ; 0053cb40
        ;   Label: LAB_0053cb40
    PUSH EDI                            ; 0053cb42
    MOV ECX,dword ptr [ESP + 0x3cc]     ; 0053cb43
    PUSH ECX                            ; 0053cb4a
    LEA EAX,[ESP + 0xc]                 ; 0053cb4b
    PUSH EAX                            ; 0053cb4f
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0053cb50
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 0053cb55
    TEST EAX,EAX                        ; 0053cb58
    JL 0x0053cc14                       ; 0053cb5a
        ;   XREF to: 0053cc14 (CONDITIONAL_JUMP)  ; LAB_0053cc14
    PUSH EAX                            ; 0053cb60
    LEA EAX,[ESP + 0x4]                 ; 0053cb61
    PUSH EAX                            ; 0053cb65
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 0053cb66
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0053cb6b
    PUSH EAX                            ; 0053cb6e
    MOV EBX,dword ptr [ESP + 0x3c0]     ; 0053cb6f
    PUSH EBX                            ; 0053cb76
    CALL core_mission.cpp_CDemonMission_FUN_00524030 ; 0053cb77
        ;   XREF to: 00524030 (UNCONDITIONAL_CALL)  ; char * core_mission.cpp_CDemonMission_FUN_00524030(CDemonMission * this_ptr)
    ADD ESP,0x8                         ; 0053cb7c
    PUSH 0x0                            ; 0053cb7f
    MOV dword ptr [ESI],EAX             ; 0053cb81
    LEA EAX,[ESP + 0x4]                 ; 0053cb83
    PUSH EAX                            ; 0053cb87
    MOV EBX,0x1                         ; 0053cb88
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0053cb8d
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   Label: LAB_0053cb8d
    ADD ESP,0x8                         ; 0053cb92
    MOV EAX,EBX                         ; 0053cb95
    ADD ESP,0x3a8                       ; 0053cb97
    POP EBP                             ; 0053cb9d
    POP EDI                             ; 0053cb9e
    POP ESI                             ; 0053cb9f
    POP EBX                             ; 0053cba0
    RET                                 ; 0053cba1
    PUSH 0x63c89a                       ; 0053cba2 | = "(none)"
        ;   Label: LAB_0053cba2
    LEA EAX,[ESP + 0x4]                 ; 0053cba7
    PUSH EAX                            ; 0053cbab
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053cbac
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0053cbb1
    TEST EBX,EBX                        ; 0053cbb4
    JZ 0x0053cb07                       ; 0053cbb6
        ;   XREF to: 0053cb07 (CONDITIONAL_JUMP)  ; LAB_0053cb07
    CMP dword ptr [ESI],0x0             ; 0053cbbc
    JNZ 0x0053cb07                      ; 0053cbbf
        ;   XREF to: 0053cb07 (CONDITIONAL_JUMP)  ; LAB_0053cb07
    XOR EDI,EDI                         ; 0053cbc5
    JMP 0x0053cb07                      ; 0053cbc7
        ;   XREF to: 0053cb07 (UNCONDITIONAL_JUMP)  ; LAB_0053cb07
    CMP dword ptr [ESI],0x0             ; 0053cbcc
        ;   Label: LAB_0053cbcc
    JZ 0x0053cb40                       ; 0053cbcf
        ;   XREF to: 0053cb40 (CONDITIONAL_JUMP)  ; LAB_0053cb40
    MOV EBP,dword ptr [ESP]             ; 0053cbd5
    XOR EBX,EBX                         ; 0053cbd8
    TEST EBP,EBP                        ; 0053cbda
    JLE 0x0053cb40                      ; 0053cbdc
        ;   XREF to: 0053cb40 (CONDITIONAL_JUMP)  ; LAB_0053cb40
    MOV EDX,dword ptr [ESI]             ; 0053cbe2
        ;   Label: LAB_0053cbe2
    PUSH EDX                            ; 0053cbe4
    PUSH EBX                            ; 0053cbe5
    LEA EAX,[ESP + 0x8]                 ; 0053cbe6
    PUSH EAX                            ; 0053cbea
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 0053cbeb
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0053cbf0
    PUSH EAX                            ; 0053cbf3
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0053cbf4
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0053cbf9
    TEST EAX,EAX                        ; 0053cbfc
    JNZ 0x0053cc07                      ; 0053cbfe
        ;   XREF to: 0053cc07 (CONDITIONAL_JUMP)  ; LAB_0053cc07
    MOV EDI,EBX                         ; 0053cc00
    JMP 0x0053cb40                      ; 0053cc02
        ;   XREF to: 0053cb40 (UNCONDITIONAL_JUMP)  ; LAB_0053cb40
    MOV EAX,dword ptr [ESP]             ; 0053cc07
        ;   Label: LAB_0053cc07
    INC EBX                             ; 0053cc0a
    CMP EBX,EAX                         ; 0053cc0b
    JL 0x0053cbe2                       ; 0053cc0d
        ;   XREF to: 0053cbe2 (CONDITIONAL_JUMP)  ; LAB_0053cbe2
    JMP 0x0053cb40                      ; 0053cc0f
        ;   XREF to: 0053cb40 (UNCONDITIONAL_JUMP)  ; LAB_0053cb40
    XOR EBX,EBX                         ; 0053cc14
        ;   Label: LAB_0053cc14
    PUSH EBX                            ; 0053cc16
    LEA EAX,[ESP + 0x4]                 ; 0053cc17
    PUSH EAX                            ; 0053cc1b
    JMP 0x0053cb8d                      ; 0053cc1c
        ;   XREF to: 0053cb8d (UNCONDITIONAL_JUMP)  ; LAB_0053cb8d

