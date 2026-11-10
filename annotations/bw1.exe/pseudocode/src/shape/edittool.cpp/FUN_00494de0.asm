; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool shape_edittool_cpp_FUN_00494de0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005bfb18
;   shape_edittool.cpp_CStrList_add_FUN_004994d0
;   shape_edittool.cpp_CStrList_ctor_FUN_00499380
;   shape_edittool.cpp_CStrList_dtor_FUN_004993a0
;   shape_edittool.cpp_showMultiChoiceDialog_FUN_00494690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494de0
        ;   Label: shape_edittool.cpp_FUN_00494de0
    SUB ESP,0x414                       ; 00494de1
    LEA EAX,[ESP + 0x424]               ; 00494de7
    MOV dword ptr [ESP + 0x410],EAX     ; 00494dee
    LEA EAX,[ESP + 0x410]               ; 00494df5
    PUSH EAX                            ; 00494dfc
    MOV EDX,dword ptr [ESP + 0x424]     ; 00494dfd
    PUSH EDX                            ; 00494e04
    LEA EAX,[ESP + 0x8]                 ; 00494e05
    PUSH EAX                            ; 00494e09
    CALL crt_stdio.c_vsprintf_FUN_005bfb18 ; 00494e0a
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005bfb18()
    ADD ESP,0xc                         ; 00494e0f
    LEA EAX,[ESP + 0x400]               ; 00494e12
    XOR ECX,ECX                         ; 00494e19
    PUSH EAX                            ; 00494e1b
    MOV dword ptr [ESP + 0x414],ECX     ; 00494e1c
    CALL shape_edittool.cpp_CStrList_ctor_FUN_00499380 ; 00494e23
        ;   XREF to: 00499380 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_00499380(CStrList * this_ptr)
    ADD ESP,0x4                         ; 00494e28
    PUSH 0x5dbddf                       ; 00494e2b
    LEA EAX,[ESP + 0x404]               ; 00494e30
    PUSH EAX                            ; 00494e37
    CALL shape_edittool.cpp_CStrList_add_FUN_004994d0 ; 00494e38
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004994d0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00494e3d
    PUSH 0x5dbde4                       ; 00494e40
    LEA EAX,[ESP + 0x404]               ; 00494e45
    PUSH EAX                            ; 00494e4c
    CALL shape_edittool.cpp_CStrList_add_FUN_004994d0 ; 00494e4d
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004994d0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00494e52
    PUSH 0x0                            ; 00494e55
    LEA EAX,[ESP + 0x404]               ; 00494e57
    PUSH EAX                            ; 00494e5e
    LEA EAX,[ESP + 0x8]                 ; 00494e5f
    PUSH EAX                            ; 00494e63
    CALL shape_edittool.cpp_showMultiChoiceDialog_FUN_00494690 ; 00494e64
        ;   XREF to: 00494690 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_showMultiChoiceDialog_FUN_00494690(CStrList * str_list, char * dialog_title, int dialog_mode)
    ADD ESP,0xc                         ; 00494e69
    XOR EBX,EBX                         ; 00494e6c
    TEST EAX,EAX                        ; 00494e6e
    SETZ AL                             ; 00494e70
    PUSH 0x0                            ; 00494e73
    MOV BL,AL                           ; 00494e75
    LEA EAX,[ESP + 0x404]               ; 00494e77
    PUSH EAX                            ; 00494e7e
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004993a0 ; 00494e7f
        ;   XREF to: 004993a0 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004993a0(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00494e84
    MOV EAX,EBX                         ; 00494e87
    ADD ESP,0x414                       ; 00494e89
    POP EBX                             ; 00494e8f
    RET                                 ; 00494e90

