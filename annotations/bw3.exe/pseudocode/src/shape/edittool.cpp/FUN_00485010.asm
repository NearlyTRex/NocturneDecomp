; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00485010(CPickList *param_1,int param_2,int param_3)
;
;
; Called Functions:
;   shape_edittool.cpp_CPickList_enableItem_FUN_00484bd0
;   shape_edittool.cpp_CPickList_getItemHotKey_FUN_00484dd0
;   shape_edittool.cpp_CPickList_isItemEnabled_FUN_00484ca0
;   shape_edittool.cpp_CPickList_setItemHotKey_FUN_00484d00
;   shape_edittool.cpp_CStrList_swap_FUN_004826c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00485010
        ;   Label: shape_edittool.cpp_FUN_00485010
    PUSH ESI                            ; 00485011
    PUSH EDI                            ; 00485012
    PUSH EBP                            ; 00485013
    MOV EBX,dword ptr [ESP + 0x14]      ; 00485014
    MOV EDI,dword ptr [ESP + 0x18]      ; 00485018
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0048501c
    PUSH EBP                            ; 00485020
    PUSH EDI                            ; 00485021
    PUSH EBX                            ; 00485022
    CALL shape_edittool.cpp_CStrList_swap_FUN_004826c0 ; 00485023
        ;   XREF to: 004826c0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_swap_FUN_004826c0(CStrList * this_ptr, int index1, int index2)
    ADD ESP,0xc                         ; 00485028
    PUSH EDI                            ; 0048502b
    PUSH EBX                            ; 0048502c
    CALL shape_edittool.cpp_CPickList_isItemEnabled_FUN_00484ca0 ; 0048502d
        ;   XREF to: 00484ca0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_isItemEnabled_FUN_00484ca0(CPickList * this_ptr, int item_index)
    ADD ESP,0x8                         ; 00485032
    PUSH EBP                            ; 00485035
    PUSH EBX                            ; 00485036
    MOV ESI,EAX                         ; 00485037
    CALL shape_edittool.cpp_CPickList_isItemEnabled_FUN_00484ca0 ; 00485039
        ;   XREF to: 00484ca0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_isItemEnabled_FUN_00484ca0(CPickList * this_ptr, int item_index)
    ADD ESP,0x8                         ; 0048503e
    CMP ESI,EAX                         ; 00485041
    JZ 0x0048505b                       ; 00485043
        ;   XREF to: 0048505b (CONDITIONAL_JUMP)  ; LAB_0048505b
    PUSH EAX                            ; 00485045
    PUSH EDI                            ; 00485046
    PUSH EBX                            ; 00485047
    CALL shape_edittool.cpp_CPickList_enableItem_FUN_00484bd0 ; 00485048
        ;   XREF to: 00484bd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_enableItem_FUN_00484bd0(CPickList * this_ptr, int item_index, int enable_flag)
    ADD ESP,0xc                         ; 0048504d
    PUSH ESI                            ; 00485050
    PUSH EBP                            ; 00485051
    PUSH EBX                            ; 00485052
    CALL shape_edittool.cpp_CPickList_enableItem_FUN_00484bd0 ; 00485053
        ;   XREF to: 00484bd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_enableItem_FUN_00484bd0(CPickList * this_ptr, int item_index, int enable_flag)
    ADD ESP,0xc                         ; 00485058
    PUSH EDI                            ; 0048505b
        ;   Label: LAB_0048505b
    PUSH EBX                            ; 0048505c
    CALL shape_edittool.cpp_CPickList_getItemHotKey_FUN_00484dd0 ; 0048505d
        ;   XREF to: 00484dd0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_getItemHotKey_FUN_00484dd0(CPickList * this_ptr, int index)
    ADD ESP,0x8                         ; 00485062
    PUSH EBP                            ; 00485065
    PUSH EBX                            ; 00485066
    MOV ESI,EAX                         ; 00485067
    CALL shape_edittool.cpp_CPickList_getItemHotKey_FUN_00484dd0 ; 00485069
        ;   XREF to: 00484dd0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_getItemHotKey_FUN_00484dd0(CPickList * this_ptr, int index)
    ADD ESP,0x8                         ; 0048506e
    CMP ESI,EAX                         ; 00485071
    JNZ 0x0048507a                      ; 00485073
        ;   XREF to: 0048507a (CONDITIONAL_JUMP)  ; LAB_0048507a
    POP EBP                             ; 00485075
    POP EDI                             ; 00485076
    POP ESI                             ; 00485077
    POP EBX                             ; 00485078
    RET                                 ; 00485079
    PUSH EAX                            ; 0048507a
        ;   Label: LAB_0048507a
    PUSH EDI                            ; 0048507b
    PUSH EBX                            ; 0048507c
    CALL shape_edittool.cpp_CPickList_setItemHotKey_FUN_00484d00 ; 0048507d
        ;   XREF to: 00484d00 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setItemHotKey_FUN_00484d00(CPickList * this_ptr, int item_index, int hotkey_code)
    ADD ESP,0xc                         ; 00485082
    PUSH ESI                            ; 00485085
    PUSH EBP                            ; 00485086
    PUSH EBX                            ; 00485087
    CALL shape_edittool.cpp_CPickList_setItemHotKey_FUN_00484d00 ; 00485088
        ;   XREF to: 00484d00 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setItemHotKey_FUN_00484d00(CPickList * this_ptr, int item_index, int hotkey_code)
    ADD ESP,0xc                         ; 0048508d
    POP EBP                             ; 00485090
    POP EDI                             ; 00485091
    POP ESI                             ; 00485092
    POP EBX                             ; 00485093
    RET                                 ; 00485094

