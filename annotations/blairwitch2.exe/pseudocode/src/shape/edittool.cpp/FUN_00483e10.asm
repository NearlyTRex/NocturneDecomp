; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00483e10(CPickList *param_1,int param_2,int param_3)
;
;
; Called Functions:
;   shape_edittool.cpp_CPickList_enableItem_FUN_004839d0
;   shape_edittool.cpp_CPickList_getItemHotKey_FUN_00483bd0
;   shape_edittool.cpp_CPickList_isItemEnabled_FUN_00483aa0
;   shape_edittool.cpp_CPickList_setItemHotKey_FUN_00483b00
;   shape_edittool.cpp_CStrList_swap_FUN_004814c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483e10
        ;   Label: shape_edittool.cpp_FUN_00483e10
    PUSH ESI                            ; 00483e11
    PUSH EDI                            ; 00483e12
    PUSH EBP                            ; 00483e13
    MOV EBX,dword ptr [ESP + 0x14]      ; 00483e14
    MOV EDI,dword ptr [ESP + 0x18]      ; 00483e18
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00483e1c
    PUSH EBP                            ; 00483e20
    PUSH EDI                            ; 00483e21
    PUSH EBX                            ; 00483e22
    CALL shape_edittool.cpp_CStrList_swap_FUN_004814c0 ; 00483e23
        ;   XREF to: 004814c0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_swap_FUN_004814c0(CStrList * this_ptr, int index1, int index2)
    ADD ESP,0xc                         ; 00483e28
    PUSH EDI                            ; 00483e2b
    PUSH EBX                            ; 00483e2c
    CALL shape_edittool.cpp_CPickList_isItemEnabled_FUN_00483aa0 ; 00483e2d
        ;   XREF to: 00483aa0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_isItemEnabled_FUN_00483aa0(CPickList * this_ptr, int item_index)
    ADD ESP,0x8                         ; 00483e32
    PUSH EBP                            ; 00483e35
    PUSH EBX                            ; 00483e36
    MOV ESI,EAX                         ; 00483e37
    CALL shape_edittool.cpp_CPickList_isItemEnabled_FUN_00483aa0 ; 00483e39
        ;   XREF to: 00483aa0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_isItemEnabled_FUN_00483aa0(CPickList * this_ptr, int item_index)
    ADD ESP,0x8                         ; 00483e3e
    CMP ESI,EAX                         ; 00483e41
    JZ 0x00483e5b                       ; 00483e43
        ;   XREF to: 00483e5b (CONDITIONAL_JUMP)  ; LAB_00483e5b
    PUSH EAX                            ; 00483e45
    PUSH EDI                            ; 00483e46
    PUSH EBX                            ; 00483e47
    CALL shape_edittool.cpp_CPickList_enableItem_FUN_004839d0 ; 00483e48
        ;   XREF to: 004839d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_enableItem_FUN_004839d0(CPickList * this_ptr, int item_index, int enable_flag)
    ADD ESP,0xc                         ; 00483e4d
    PUSH ESI                            ; 00483e50
    PUSH EBP                            ; 00483e51
    PUSH EBX                            ; 00483e52
    CALL shape_edittool.cpp_CPickList_enableItem_FUN_004839d0 ; 00483e53
        ;   XREF to: 004839d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_enableItem_FUN_004839d0(CPickList * this_ptr, int item_index, int enable_flag)
    ADD ESP,0xc                         ; 00483e58
    PUSH EDI                            ; 00483e5b
        ;   Label: LAB_00483e5b
    PUSH EBX                            ; 00483e5c
    CALL shape_edittool.cpp_CPickList_getItemHotKey_FUN_00483bd0 ; 00483e5d
        ;   XREF to: 00483bd0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_getItemHotKey_FUN_00483bd0(CPickList * this_ptr, int index)
    ADD ESP,0x8                         ; 00483e62
    PUSH EBP                            ; 00483e65
    PUSH EBX                            ; 00483e66
    MOV ESI,EAX                         ; 00483e67
    CALL shape_edittool.cpp_CPickList_getItemHotKey_FUN_00483bd0 ; 00483e69
        ;   XREF to: 00483bd0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_getItemHotKey_FUN_00483bd0(CPickList * this_ptr, int index)
    ADD ESP,0x8                         ; 00483e6e
    CMP ESI,EAX                         ; 00483e71
    JNZ 0x00483e7a                      ; 00483e73
        ;   XREF to: 00483e7a (CONDITIONAL_JUMP)  ; LAB_00483e7a
    POP EBP                             ; 00483e75
    POP EDI                             ; 00483e76
    POP ESI                             ; 00483e77
    POP EBX                             ; 00483e78
    RET                                 ; 00483e79
    PUSH EAX                            ; 00483e7a
        ;   Label: LAB_00483e7a
    PUSH EDI                            ; 00483e7b
    PUSH EBX                            ; 00483e7c
    CALL shape_edittool.cpp_CPickList_setItemHotKey_FUN_00483b00 ; 00483e7d
        ;   XREF to: 00483b00 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setItemHotKey_FUN_00483b00(CPickList * this_ptr, int item_index, int hotkey_code)
    ADD ESP,0xc                         ; 00483e82
    PUSH ESI                            ; 00483e85
    PUSH EBP                            ; 00483e86
    PUSH EBX                            ; 00483e87
    CALL shape_edittool.cpp_CPickList_setItemHotKey_FUN_00483b00 ; 00483e88
        ;   XREF to: 00483b00 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setItemHotKey_FUN_00483b00(CPickList * this_ptr, int item_index, int hotkey_code)
    ADD ESP,0xc                         ; 00483e8d
    POP EBP                             ; 00483e90
    POP EDI                             ; 00483e91
    POP ESI                             ; 00483e92
    POP EBX                             ; 00483e93
    RET                                 ; 00483e94

