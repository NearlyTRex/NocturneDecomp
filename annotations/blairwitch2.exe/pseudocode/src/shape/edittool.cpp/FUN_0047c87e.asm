; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 shape_edittool_cpp_FUN_0047c87e(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005b7768
;   shape_edittool.cpp_CStrList_add_FUN_00480e70
;   shape_edittool.cpp_CStrList_ctor_FUN_00480d20
;   shape_edittool.cpp_CStrList_dtor_FUN_00480d40
;   shape_edittool.cpp_FUN_0047c0f0
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0047c87e
        ;   Label: shape_edittool.cpp_FUN_0047c87e
    PUSH EBX                            ; 0047c880
    SUB ESP,0x14                        ; 0047c881
    LEA EAX,[ESP + 0x24]                ; 0047c884
    MOV dword ptr [ESP + 0x10],EAX      ; 0047c888
    LEA EAX,[ESP + 0x10]                ; 0047c88c
    PUSH EAX                            ; 0047c890
    MOV EDX,dword ptr [ESP + 0x24]      ; 0047c891
    PUSH EDX                            ; 0047c895
    PUSH 0x1c241f0                      ; 0047c896
    CALL crt_stdio.c_vsprintf_FUN_005b7768 ; 0047c89b
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005b7768()
    ADD ESP,0xc                         ; 0047c8a0
    MOV EAX,ESP                         ; 0047c8a3
    XOR ECX,ECX                         ; 0047c8a5
    PUSH EAX                            ; 0047c8a7
    MOV dword ptr [ESP + 0x14],ECX      ; 0047c8a8
    CALL shape_edittool.cpp_CStrList_ctor_FUN_00480d20 ; 0047c8ac
        ;   XREF to: 00480d20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_00480d20(CStrList * this_ptr)
    ADD ESP,0x4                         ; 0047c8b1
    PUSH 0x5d204a                       ; 0047c8b4
    LEA EAX,[ESP + 0x4]                 ; 0047c8b9
    PUSH EAX                            ; 0047c8bd
    CALL shape_edittool.cpp_CStrList_add_FUN_00480e70 ; 0047c8be
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00480e70(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0047c8c3
    PUSH 0x5d204f                       ; 0047c8c6
    LEA EAX,[ESP + 0x4]                 ; 0047c8cb
    PUSH EAX                            ; 0047c8cf
    CALL shape_edittool.cpp_CStrList_add_FUN_00480e70 ; 0047c8d0
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00480e70(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0047c8d5
    PUSH 0x5d205b                       ; 0047c8d8
    LEA EAX,[ESP + 0x4]                 ; 0047c8dd
    PUSH EAX                            ; 0047c8e1
    CALL shape_edittool.cpp_CStrList_add_FUN_00480e70 ; 0047c8e2
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00480e70(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0047c8e7
    PUSH 0x5d205f                       ; 0047c8ea
    LEA EAX,[ESP + 0x4]                 ; 0047c8ef
    PUSH EAX                            ; 0047c8f3
    CALL shape_edittool.cpp_CStrList_add_FUN_00480e70 ; 0047c8f4
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00480e70(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0047c8f9
    PUSH 0x0                            ; 0047c8fc
    LEA EAX,[ESP + 0x4]                 ; 0047c8fe
    PUSH EAX                            ; 0047c902
    PUSH 0x1c241f0                      ; 0047c903
    CALL shape_edittool.cpp_FUN_0047c0f0 ; 0047c908
        ;   XREF to: 0047c0f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_0047c0f0(CStrList * str_list, char * dialog_title, int dialog_mode)
    ADD ESP,0xc                         ; 0047c90d
    TEST EAX,EAX                        ; 0047c910
    JZ 0x0047c935                       ; 0047c912
        ;   XREF to: 0047c935 (CONDITIONAL_JUMP)  ; LAB_0047c935
    CMP EAX,0x1                         ; 0047c914
    JZ 0x0047c942                       ; 0047c917
        ;   XREF to: 0047c942 (CONDITIONAL_JUMP)  ; LAB_0047c942
    CMP EAX,0x2                         ; 0047c919
    JNZ 0x0047c950                      ; 0047c91c
        ;   XREF to: 0047c950 (CONDITIONAL_JUMP)  ; LAB_0047c950
    XOR EBX,EBX                         ; 0047c91e
    PUSH EBX                            ; 0047c920
    LEA EAX,[ESP + 0x4]                 ; 0047c921
    PUSH EAX                            ; 0047c925
    CALL shape_edittool.cpp_CStrList_dtor_FUN_00480d40 ; 0047c926
        ;   XREF to: 00480d40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_00480d40(CStrList * this_ptr, uint flags)
        ;   Label: LAB_0047c926
    ADD ESP,0x8                         ; 0047c92b
    MOV EAX,EBX                         ; 0047c92e
    ADD ESP,0x14                        ; 0047c930
    POP EBX                             ; 0047c933
    RET                                 ; 0047c934
    PUSH EAX                            ; 0047c935
        ;   Label: LAB_0047c935
    LEA EAX,[ESP + 0x4]                 ; 0047c936
    PUSH EAX                            ; 0047c93a
    MOV EBX,0x1                         ; 0047c93b
    JMP 0x0047c926                      ; 0047c940
        ;   XREF to: 0047c926 (UNCONDITIONAL_JUMP)  ; LAB_0047c926
    PUSH 0x0                            ; 0047c942
        ;   Label: LAB_0047c942
    LEA EAX,[ESP + 0x4]                 ; 0047c944
    PUSH EAX                            ; 0047c948
    MOV EBX,0x2                         ; 0047c949
    JMP 0x0047c926                      ; 0047c94e
        ;   XREF to: 0047c926 (UNCONDITIONAL_JUMP)  ; LAB_0047c926
    PUSH 0x0                            ; 0047c950
        ;   Label: LAB_0047c950
    LEA EAX,[ESP + 0x4]                 ; 0047c952
    PUSH EAX                            ; 0047c956
    MOV EBX,0xffffffff                  ; 0047c957
    CALL shape_edittool.cpp_CStrList_dtor_FUN_00480d40 ; 0047c95c
        ;   XREF to: 00480d40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_00480d40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0047c961
    MOV EAX,EBX                         ; 0047c964
    ADD ESP,0x14                        ; 0047c966
    POP EBX                             ; 0047c969
    RET                                 ; 0047c96a

