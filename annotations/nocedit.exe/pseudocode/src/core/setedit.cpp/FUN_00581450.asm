; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined4 core_setedit_cpp_FUN_00581450(void)
;
; Local Variables:
; undefined        Stack[-0x3ac]:1  local_3ac
;
; Referenced Globals:
;   TerminatedCString s_Outside_006489f3
;   TerminatedCString s_Small_006489fb
;   TerminatedCString s_Medium_e_g_Mausoleum_00648a01
;   TerminatedCString s_Large_e_g_Warehouse_00648a19
;   TerminatedCString s_Humongous_00648a30
;
; Called Functions:
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00581450
        ;   Label: core_setedit.cpp_FUN_00581450
    SUB ESP,0x3a8                       ; 00581451
    MOV EBX,dword ptr [ESP + 0x3b4]     ; 00581457
    MOV EAX,ESP                         ; 0058145e
    PUSH EAX                            ; 00581460
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 00581461
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 00581466
    PUSH 0x6489f3                       ; 00581469 | = "Outside"
    LEA EAX,[ESP + 0x4]                 ; 0058146e
    PUSH EAX                            ; 00581472
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00581473
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00581478
    PUSH 0x6489fb                       ; 0058147b | = "Small"
    LEA EAX,[ESP + 0x4]                 ; 00581480
    PUSH EAX                            ; 00581484
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00581485
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0058148a
    PUSH 0x648a01                       ; 0058148d | = "Medium (e.g. Mausoleum)"
    LEA EAX,[ESP + 0x4]                 ; 00581492
    PUSH EAX                            ; 00581496
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00581497
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0058149c
    PUSH 0x648a19                       ; 0058149f | = "Large (e.g. Warehouse)"
    LEA EAX,[ESP + 0x4]                 ; 005814a4
    PUSH EAX                            ; 005814a8
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005814a9
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 005814ae
    PUSH 0x648a30                       ; 005814b1 | = "Humongous"
    LEA EAX,[ESP + 0x4]                 ; 005814b6
    PUSH EAX                            ; 005814ba
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005814bb
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 005814c0
    PUSH 0x0                            ; 005814c3
    MOV EDX,dword ptr [EBX]             ; 005814c5
    PUSH EDX                            ; 005814c7
    MOV ECX,dword ptr [ESP + 0x3b8]     ; 005814c8
    PUSH ECX                            ; 005814cf
    LEA EAX,[ESP + 0xc]                 ; 005814d0
    PUSH EAX                            ; 005814d4
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 005814d5
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 005814da
    TEST EAX,EAX                        ; 005814dd
    JL 0x00581501                       ; 005814df
        ;   XREF to: 00581501 (CONDITIONAL_JUMP)  ; LAB_00581501
    PUSH 0x0                            ; 005814e1
    MOV dword ptr [EBX],EAX             ; 005814e3
    LEA EAX,[ESP + 0x4]                 ; 005814e5
    PUSH EAX                            ; 005814e9
    MOV EBX,0x1                         ; 005814ea
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 005814ef
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 005814f4
    MOV EAX,EBX                         ; 005814f7
    ADD ESP,0x3a8                       ; 005814f9
    POP EBX                             ; 005814ff
    RET                                 ; 00581500
    XOR EBX,EBX                         ; 00581501
        ;   Label: LAB_00581501
    PUSH EBX                            ; 00581503
    LEA EAX,[ESP + 0x4]                 ; 00581504
    PUSH EAX                            ; 00581508
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00581509
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0058150e
    MOV EAX,EBX                         ; 00581511
    ADD ESP,0x3a8                       ; 00581513
    POP EBX                             ; 00581519
    RET                                 ; 0058151a

