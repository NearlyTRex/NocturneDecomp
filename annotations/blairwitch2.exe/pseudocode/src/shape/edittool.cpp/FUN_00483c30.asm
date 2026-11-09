; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00483c30(CPickList *param_1,int param_2,char *param_3)
;
;
; Called Functions:
;   shape_edittool.cpp_CPickList_enableItem_FUN_004839d0
;   shape_edittool.cpp_CPickList_getItemHotKey_FUN_00483bd0
;   shape_edittool.cpp_CPickList_isItemEnabled_FUN_00483aa0
;   shape_edittool.cpp_CPickList_setItemHotKey_FUN_00483b00
;   shape_edittool.cpp_CStrList_insert_FUN_00480eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483c30
        ;   Label: shape_edittool.cpp_FUN_00483c30
    PUSH ESI                            ; 00483c31
    PUSH EBP                            ; 00483c32
    MOV ESI,dword ptr [ESP + 0x10]      ; 00483c33
    MOV EBP,dword ptr [ESP + 0x14]      ; 00483c37
    MOV EDX,dword ptr [ESP + 0x18]      ; 00483c3b
    PUSH EDX                            ; 00483c3f
    PUSH EBP                            ; 00483c40
    PUSH ESI                            ; 00483c41
    CALL shape_edittool.cpp_CStrList_insert_FUN_00480eb0 ; 00483c42
        ;   XREF to: 00480eb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_insert_FUN_00480eb0(CStrList * this_ptr, int insert_index, char * string_data)
    MOV EBX,dword ptr [ESI]             ; 00483c47
    SUB EBX,0x2                         ; 00483c49
    ADD ESP,0xc                         ; 00483c4c
    CMP EBX,EBP                         ; 00483c4f
    JLE 0x00483c87                      ; 00483c51
        ;   XREF to: 00483c87 (CONDITIONAL_JUMP)  ; LAB_00483c87
    PUSH EDI                            ; 00483c53
    LEA EDI,[EBX + -0x1]                ; 00483c54
        ;   Label: LAB_00483c54
    PUSH EDI                            ; 00483c57
    PUSH ESI                            ; 00483c58
    CALL shape_edittool.cpp_CPickList_isItemEnabled_FUN_00483aa0 ; 00483c59
        ;   XREF to: 00483aa0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_isItemEnabled_FUN_00483aa0(CPickList * this_ptr, int item_index)
    ADD ESP,0x8                         ; 00483c5e
    PUSH EAX                            ; 00483c61
    PUSH EBX                            ; 00483c62
    PUSH ESI                            ; 00483c63
    CALL shape_edittool.cpp_CPickList_enableItem_FUN_004839d0 ; 00483c64
        ;   XREF to: 004839d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_enableItem_FUN_004839d0(CPickList * this_ptr, int item_index, int enable_flag)
    ADD ESP,0xc                         ; 00483c69
    PUSH EDI                            ; 00483c6c
    PUSH ESI                            ; 00483c6d
    CALL shape_edittool.cpp_CPickList_getItemHotKey_FUN_00483bd0 ; 00483c6e
        ;   XREF to: 00483bd0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_getItemHotKey_FUN_00483bd0(CPickList * this_ptr, int index)
    ADD ESP,0x8                         ; 00483c73
    PUSH EAX                            ; 00483c76
    PUSH EBX                            ; 00483c77
    PUSH ESI                            ; 00483c78
    CALL shape_edittool.cpp_CPickList_setItemHotKey_FUN_00483b00 ; 00483c79
        ;   XREF to: 00483b00 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setItemHotKey_FUN_00483b00(CPickList * this_ptr, int item_index, int hotkey_code)
    DEC EBX                             ; 00483c7e
    ADD ESP,0xc                         ; 00483c7f
    CMP EBX,EBP                         ; 00483c82
    JG 0x00483c54                       ; 00483c84
        ;   XREF to: 00483c54 (CONDITIONAL_JUMP)  ; LAB_00483c54
    POP EDI                             ; 00483c86
    PUSH 0x1                            ; 00483c87
        ;   Label: LAB_00483c87
    PUSH EBP                            ; 00483c89
    PUSH ESI                            ; 00483c8a
    CALL shape_edittool.cpp_CPickList_enableItem_FUN_004839d0 ; 00483c8b
        ;   XREF to: 004839d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_enableItem_FUN_004839d0(CPickList * this_ptr, int item_index, int enable_flag)
    ADD ESP,0xc                         ; 00483c90
    PUSH -0x1                           ; 00483c93
    PUSH EBP                            ; 00483c95
    PUSH ESI                            ; 00483c96
    CALL shape_edittool.cpp_CPickList_setItemHotKey_FUN_00483b00 ; 00483c97
        ;   XREF to: 00483b00 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setItemHotKey_FUN_00483b00(CPickList * this_ptr, int item_index, int hotkey_code)
    ADD ESP,0xc                         ; 00483c9c
    POP EBP                             ; 00483c9f
    POP ESI                             ; 00483ca0
    POP EBX                             ; 00483ca1
    RET                                 ; 00483ca2

