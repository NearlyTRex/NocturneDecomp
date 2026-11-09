; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00483cb0(CPickList *param_1,int param_2,int param_3)
;
;
; Called Functions:
;   shape_edittool.cpp_CPickList_enableItem_FUN_004839d0
;   shape_edittool.cpp_CPickList_getItemHotKey_FUN_00483bd0
;   shape_edittool.cpp_CPickList_isItemEnabled_FUN_00483aa0
;   shape_edittool.cpp_CPickList_setItemHotKey_FUN_00483b00
;   shape_edittool.cpp_CStrList_remove_FUN_004810d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483cb0
        ;   Label: shape_edittool.cpp_FUN_00483cb0
    PUSH ESI                            ; 00483cb1
    PUSH EDI                            ; 00483cb2
    MOV ESI,dword ptr [ESP + 0x10]      ; 00483cb3
    MOV EBX,dword ptr [ESP + 0x18]      ; 00483cb7
    MOV EDI,dword ptr [ESP + 0x14]      ; 00483cbb
    INC EBX                             ; 00483cbf
    MOV EAX,dword ptr [ESI]             ; 00483cc0
        ;   Label: LAB_00483cc0
    CMP EBX,EAX                         ; 00483cc2
    JL 0x00483cdd                       ; 00483cc4
        ;   XREF to: 00483cdd (CONDITIONAL_JUMP)  ; LAB_00483cdd
    MOV EDX,dword ptr [ESP + 0x18]      ; 00483cc6
    PUSH EDX                            ; 00483cca
    MOV ECX,dword ptr [ESP + 0x18]      ; 00483ccb
    PUSH ECX                            ; 00483ccf
    PUSH ESI                            ; 00483cd0
    CALL shape_edittool.cpp_CStrList_remove_FUN_004810d0 ; 00483cd1
        ;   XREF to: 004810d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_remove_FUN_004810d0(CStrList * this_ptr, int start_index, int end_index)
    ADD ESP,0xc                         ; 00483cd6
    POP EDI                             ; 00483cd9
    POP ESI                             ; 00483cda
    POP EBX                             ; 00483cdb
    RET                                 ; 00483cdc
    PUSH EBX                            ; 00483cdd
        ;   Label: LAB_00483cdd
    PUSH ESI                            ; 00483cde
    CALL shape_edittool.cpp_CPickList_isItemEnabled_FUN_00483aa0 ; 00483cdf
        ;   XREF to: 00483aa0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_isItemEnabled_FUN_00483aa0(CPickList * this_ptr, int item_index)
    ADD ESP,0x8                         ; 00483ce4
    PUSH EAX                            ; 00483ce7
    PUSH EDI                            ; 00483ce8
    PUSH ESI                            ; 00483ce9
    CALL shape_edittool.cpp_CPickList_enableItem_FUN_004839d0 ; 00483cea
        ;   XREF to: 004839d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_enableItem_FUN_004839d0(CPickList * this_ptr, int item_index, int enable_flag)
    ADD ESP,0xc                         ; 00483cef
    PUSH EBX                            ; 00483cf2
    PUSH ESI                            ; 00483cf3
    CALL shape_edittool.cpp_CPickList_getItemHotKey_FUN_00483bd0 ; 00483cf4
        ;   XREF to: 00483bd0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_getItemHotKey_FUN_00483bd0(CPickList * this_ptr, int index)
    ADD ESP,0x8                         ; 00483cf9
    PUSH EAX                            ; 00483cfc
    PUSH EDI                            ; 00483cfd
    PUSH ESI                            ; 00483cfe
    INC EBX                             ; 00483cff
    CALL shape_edittool.cpp_CPickList_setItemHotKey_FUN_00483b00 ; 00483d00
        ;   XREF to: 00483b00 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setItemHotKey_FUN_00483b00(CPickList * this_ptr, int item_index, int hotkey_code)
    INC EDI                             ; 00483d05
    ADD ESP,0xc                         ; 00483d06
    JMP 0x00483cc0                      ; 00483d09
        ;   XREF to: 00483cc0 (UNCONDITIONAL_JUMP)  ; LAB_00483cc0

