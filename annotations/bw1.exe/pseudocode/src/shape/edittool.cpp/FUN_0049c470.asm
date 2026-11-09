; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0049c470(CPickList *param_1,int param_2,int param_3)
;
;
; Called Functions:
;   shape_edittool.cpp_CPickList_enableItem_FUN_0049c030
;   shape_edittool.cpp_CPickList_getItemHotKey_FUN_0049c230
;   shape_edittool.cpp_CPickList_isItemEnabled_FUN_0049c100
;   shape_edittool.cpp_CPickList_setItemHotKey_FUN_0049c160
;   shape_edittool.cpp_CStrList_swap_FUN_00499b20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049c470
        ;   Label: shape_edittool.cpp_FUN_0049c470
    PUSH ESI                            ; 0049c471
    PUSH EDI                            ; 0049c472
    PUSH EBP                            ; 0049c473
    MOV EBX,dword ptr [ESP + 0x14]      ; 0049c474
    MOV EDI,dword ptr [ESP + 0x18]      ; 0049c478
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0049c47c
    PUSH EBP                            ; 0049c480
    PUSH EDI                            ; 0049c481
    PUSH EBX                            ; 0049c482
    CALL shape_edittool.cpp_CStrList_swap_FUN_00499b20 ; 0049c483
        ;   XREF to: 00499b20 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_swap_FUN_00499b20(CStrList * this_ptr, int index1, int index2)
    ADD ESP,0xc                         ; 0049c488
    PUSH EDI                            ; 0049c48b
    PUSH EBX                            ; 0049c48c
    CALL shape_edittool.cpp_CPickList_isItemEnabled_FUN_0049c100 ; 0049c48d
        ;   XREF to: 0049c100 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_isItemEnabled_FUN_0049c100(CPickList * this_ptr, int item_index)
    ADD ESP,0x8                         ; 0049c492
    PUSH EBP                            ; 0049c495
    PUSH EBX                            ; 0049c496
    MOV ESI,EAX                         ; 0049c497
    CALL shape_edittool.cpp_CPickList_isItemEnabled_FUN_0049c100 ; 0049c499
        ;   XREF to: 0049c100 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_isItemEnabled_FUN_0049c100(CPickList * this_ptr, int item_index)
    ADD ESP,0x8                         ; 0049c49e
    CMP ESI,EAX                         ; 0049c4a1
    JZ 0x0049c4bb                       ; 0049c4a3
        ;   XREF to: 0049c4bb (CONDITIONAL_JUMP)  ; LAB_0049c4bb
    PUSH EAX                            ; 0049c4a5
    PUSH EDI                            ; 0049c4a6
    PUSH EBX                            ; 0049c4a7
    CALL shape_edittool.cpp_CPickList_enableItem_FUN_0049c030 ; 0049c4a8
        ;   XREF to: 0049c030 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_enableItem_FUN_0049c030(CPickList * this_ptr, int item_index, int enable_flag)
    ADD ESP,0xc                         ; 0049c4ad
    PUSH ESI                            ; 0049c4b0
    PUSH EBP                            ; 0049c4b1
    PUSH EBX                            ; 0049c4b2
    CALL shape_edittool.cpp_CPickList_enableItem_FUN_0049c030 ; 0049c4b3
        ;   XREF to: 0049c030 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_enableItem_FUN_0049c030(CPickList * this_ptr, int item_index, int enable_flag)
    ADD ESP,0xc                         ; 0049c4b8
    PUSH EDI                            ; 0049c4bb
        ;   Label: LAB_0049c4bb
    PUSH EBX                            ; 0049c4bc
    CALL shape_edittool.cpp_CPickList_getItemHotKey_FUN_0049c230 ; 0049c4bd
        ;   XREF to: 0049c230 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_getItemHotKey_FUN_0049c230(CPickList * this_ptr, int index)
    ADD ESP,0x8                         ; 0049c4c2
    PUSH EBP                            ; 0049c4c5
    PUSH EBX                            ; 0049c4c6
    MOV ESI,EAX                         ; 0049c4c7
    CALL shape_edittool.cpp_CPickList_getItemHotKey_FUN_0049c230 ; 0049c4c9
        ;   XREF to: 0049c230 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_getItemHotKey_FUN_0049c230(CPickList * this_ptr, int index)
    ADD ESP,0x8                         ; 0049c4ce
    CMP ESI,EAX                         ; 0049c4d1
    JNZ 0x0049c4da                      ; 0049c4d3
        ;   XREF to: 0049c4da (CONDITIONAL_JUMP)  ; LAB_0049c4da
    POP EBP                             ; 0049c4d5
    POP EDI                             ; 0049c4d6
    POP ESI                             ; 0049c4d7
    POP EBX                             ; 0049c4d8
    RET                                 ; 0049c4d9
    PUSH EAX                            ; 0049c4da
        ;   Label: LAB_0049c4da
    PUSH EDI                            ; 0049c4db
    PUSH EBX                            ; 0049c4dc
    CALL shape_edittool.cpp_CPickList_setItemHotKey_FUN_0049c160 ; 0049c4dd
        ;   XREF to: 0049c160 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setItemHotKey_FUN_0049c160(CPickList * this_ptr, int item_index, int hotkey_code)
    ADD ESP,0xc                         ; 0049c4e2
    PUSH ESI                            ; 0049c4e5
    PUSH EBP                            ; 0049c4e6
    PUSH EBX                            ; 0049c4e7
    CALL shape_edittool.cpp_CPickList_setItemHotKey_FUN_0049c160 ; 0049c4e8
        ;   XREF to: 0049c160 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setItemHotKey_FUN_0049c160(CPickList * this_ptr, int item_index, int hotkey_code)
    ADD ESP,0xc                         ; 0049c4ed
    POP EBP                             ; 0049c4f0
    POP EDI                             ; 0049c4f1
    POP ESI                             ; 0049c4f2
    POP EBX                             ; 0049c4f3
    RET                                 ; 0049c4f4

