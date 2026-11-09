; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00484e30(CPickList *param_1,int param_2,char *param_3)
;
;
; Called Functions:
;   shape_edittool.cpp_CPickList_enableItem_FUN_00484bd0
;   shape_edittool.cpp_CPickList_getItemHotKey_FUN_00484dd0
;   shape_edittool.cpp_CPickList_isItemEnabled_FUN_00484ca0
;   shape_edittool.cpp_CPickList_setItemHotKey_FUN_00484d00
;   shape_edittool.cpp_CStrList_insert_FUN_004820b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484e30
        ;   Label: shape_edittool.cpp_FUN_00484e30
    PUSH ESI                            ; 00484e31
    PUSH EBP                            ; 00484e32
    MOV ESI,dword ptr [ESP + 0x10]      ; 00484e33
    MOV EBP,dword ptr [ESP + 0x14]      ; 00484e37
    MOV EDX,dword ptr [ESP + 0x18]      ; 00484e3b
    PUSH EDX                            ; 00484e3f
    PUSH EBP                            ; 00484e40
    PUSH ESI                            ; 00484e41
    CALL shape_edittool.cpp_CStrList_insert_FUN_004820b0 ; 00484e42
        ;   XREF to: 004820b0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_insert_FUN_004820b0(CStrList * this_ptr, int insert_index, char * string_data)
    MOV EBX,dword ptr [ESI]             ; 00484e47
    SUB EBX,0x2                         ; 00484e49
    ADD ESP,0xc                         ; 00484e4c
    CMP EBX,EBP                         ; 00484e4f
    JLE 0x00484e87                      ; 00484e51
        ;   XREF to: 00484e87 (CONDITIONAL_JUMP)  ; LAB_00484e87
    PUSH EDI                            ; 00484e53
    LEA EDI,[EBX + -0x1]                ; 00484e54
        ;   Label: LAB_00484e54
    PUSH EDI                            ; 00484e57
    PUSH ESI                            ; 00484e58
    CALL shape_edittool.cpp_CPickList_isItemEnabled_FUN_00484ca0 ; 00484e59
        ;   XREF to: 00484ca0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_isItemEnabled_FUN_00484ca0(CPickList * this_ptr, int item_index)
    ADD ESP,0x8                         ; 00484e5e
    PUSH EAX                            ; 00484e61
    PUSH EBX                            ; 00484e62
    PUSH ESI                            ; 00484e63
    CALL shape_edittool.cpp_CPickList_enableItem_FUN_00484bd0 ; 00484e64
        ;   XREF to: 00484bd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_enableItem_FUN_00484bd0(CPickList * this_ptr, int item_index, int enable_flag)
    ADD ESP,0xc                         ; 00484e69
    PUSH EDI                            ; 00484e6c
    PUSH ESI                            ; 00484e6d
    CALL shape_edittool.cpp_CPickList_getItemHotKey_FUN_00484dd0 ; 00484e6e
        ;   XREF to: 00484dd0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_getItemHotKey_FUN_00484dd0(CPickList * this_ptr, int index)
    ADD ESP,0x8                         ; 00484e73
    PUSH EAX                            ; 00484e76
    PUSH EBX                            ; 00484e77
    PUSH ESI                            ; 00484e78
    CALL shape_edittool.cpp_CPickList_setItemHotKey_FUN_00484d00 ; 00484e79
        ;   XREF to: 00484d00 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setItemHotKey_FUN_00484d00(CPickList * this_ptr, int item_index, int hotkey_code)
    DEC EBX                             ; 00484e7e
    ADD ESP,0xc                         ; 00484e7f
    CMP EBX,EBP                         ; 00484e82
    JG 0x00484e54                       ; 00484e84
        ;   XREF to: 00484e54 (CONDITIONAL_JUMP)  ; LAB_00484e54
    POP EDI                             ; 00484e86
    PUSH 0x1                            ; 00484e87
        ;   Label: LAB_00484e87
    PUSH EBP                            ; 00484e89
    PUSH ESI                            ; 00484e8a
    CALL shape_edittool.cpp_CPickList_enableItem_FUN_00484bd0 ; 00484e8b
        ;   XREF to: 00484bd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_enableItem_FUN_00484bd0(CPickList * this_ptr, int item_index, int enable_flag)
    ADD ESP,0xc                         ; 00484e90
    PUSH -0x1                           ; 00484e93
    PUSH EBP                            ; 00484e95
    PUSH ESI                            ; 00484e96
    CALL shape_edittool.cpp_CPickList_setItemHotKey_FUN_00484d00 ; 00484e97
        ;   XREF to: 00484d00 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setItemHotKey_FUN_00484d00(CPickList * this_ptr, int item_index, int hotkey_code)
    ADD ESP,0xc                         ; 00484e9c
    POP EBP                             ; 00484e9f
    POP ESI                             ; 00484ea0
    POP EBX                             ; 00484ea1
    RET                                 ; 00484ea2

