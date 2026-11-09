; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0049c310(CPickList *param_1,int param_2,int param_3)
;
;
; Called Functions:
;   shape_edittool.cpp_CPickList_enableItem_FUN_0049c030
;   shape_edittool.cpp_CPickList_getItemHotKey_FUN_0049c230
;   shape_edittool.cpp_CPickList_isItemEnabled_FUN_0049c100
;   shape_edittool.cpp_CPickList_setItemHotKey_FUN_0049c160
;   shape_edittool.cpp_CStrList_remove_FUN_00499730
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049c310
        ;   Label: shape_edittool.cpp_FUN_0049c310
    PUSH ESI                            ; 0049c311
    PUSH EDI                            ; 0049c312
    MOV ESI,dword ptr [ESP + 0x10]      ; 0049c313
    MOV EBX,dword ptr [ESP + 0x18]      ; 0049c317
    MOV EDI,dword ptr [ESP + 0x14]      ; 0049c31b
    INC EBX                             ; 0049c31f
    MOV EAX,dword ptr [ESI]             ; 0049c320
        ;   Label: LAB_0049c320
    CMP EBX,EAX                         ; 0049c322
    JL 0x0049c33d                       ; 0049c324
        ;   XREF to: 0049c33d (CONDITIONAL_JUMP)  ; LAB_0049c33d
    MOV EDX,dword ptr [ESP + 0x18]      ; 0049c326
    PUSH EDX                            ; 0049c32a
    MOV ECX,dword ptr [ESP + 0x18]      ; 0049c32b
    PUSH ECX                            ; 0049c32f
    PUSH ESI                            ; 0049c330
    CALL shape_edittool.cpp_CStrList_remove_FUN_00499730 ; 0049c331
        ;   XREF to: 00499730 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_remove_FUN_00499730(CStrList * this_ptr, int start_index, int end_index)
    ADD ESP,0xc                         ; 0049c336
    POP EDI                             ; 0049c339
    POP ESI                             ; 0049c33a
    POP EBX                             ; 0049c33b
    RET                                 ; 0049c33c
    PUSH EBX                            ; 0049c33d
        ;   Label: LAB_0049c33d
    PUSH ESI                            ; 0049c33e
    CALL shape_edittool.cpp_CPickList_isItemEnabled_FUN_0049c100 ; 0049c33f
        ;   XREF to: 0049c100 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_isItemEnabled_FUN_0049c100(CPickList * this_ptr, int item_index)
    ADD ESP,0x8                         ; 0049c344
    PUSH EAX                            ; 0049c347
    PUSH EDI                            ; 0049c348
    PUSH ESI                            ; 0049c349
    CALL shape_edittool.cpp_CPickList_enableItem_FUN_0049c030 ; 0049c34a
        ;   XREF to: 0049c030 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_enableItem_FUN_0049c030(CPickList * this_ptr, int item_index, int enable_flag)
    ADD ESP,0xc                         ; 0049c34f
    PUSH EBX                            ; 0049c352
    PUSH ESI                            ; 0049c353
    CALL shape_edittool.cpp_CPickList_getItemHotKey_FUN_0049c230 ; 0049c354
        ;   XREF to: 0049c230 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_getItemHotKey_FUN_0049c230(CPickList * this_ptr, int index)
    ADD ESP,0x8                         ; 0049c359
    PUSH EAX                            ; 0049c35c
    PUSH EDI                            ; 0049c35d
    PUSH ESI                            ; 0049c35e
    INC EBX                             ; 0049c35f
    CALL shape_edittool.cpp_CPickList_setItemHotKey_FUN_0049c160 ; 0049c360
        ;   XREF to: 0049c160 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setItemHotKey_FUN_0049c160(CPickList * this_ptr, int item_index, int hotkey_code)
    INC EDI                             ; 0049c365
    ADD ESP,0xc                         ; 0049c366
    JMP 0x0049c320                      ; 0049c369
        ;   XREF to: 0049c320 (UNCONDITIONAL_JUMP)  ; LAB_0049c320

