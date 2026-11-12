; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 shape_edittool_cpp_FUN_00494ea0(undefined4 param_1,char *param_2)
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

    PUSH EBX                            ; 00494ea0
        ;   Label: shape_edittool.cpp_FUN_00494ea0
    SUB ESP,0x414                       ; 00494ea1
    LEA EAX,[ESP + 0x424]               ; 00494ea7
    MOV dword ptr [ESP + 0x410],EAX     ; 00494eae
    LEA EAX,[ESP + 0x410]               ; 00494eb5
    PUSH EAX                            ; 00494ebc
    MOV EDX,dword ptr [ESP + 0x424]     ; 00494ebd
    PUSH EDX                            ; 00494ec4
    LEA EAX,[ESP + 0x8]                 ; 00494ec5
    PUSH EAX                            ; 00494ec9
    CALL crt_stdio.c_vsprintf_FUN_005bfb18 ; 00494eca
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005bfb18(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 00494ecf
    LEA EAX,[ESP + 0x400]               ; 00494ed2
    XOR ECX,ECX                         ; 00494ed9
    PUSH EAX                            ; 00494edb
    MOV dword ptr [ESP + 0x414],ECX     ; 00494edc
    CALL shape_edittool.cpp_CStrList_ctor_FUN_00499380 ; 00494ee3
        ;   XREF to: 00499380 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_00499380(CStrList * this_ptr)
    ADD ESP,0x4                         ; 00494ee8
    PUSH 0x5dbde8                       ; 00494eeb
    LEA EAX,[ESP + 0x404]               ; 00494ef0
    PUSH EAX                            ; 00494ef7
    CALL shape_edittool.cpp_CStrList_add_FUN_004994d0 ; 00494ef8
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004994d0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00494efd
    PUSH 0x5dbded                       ; 00494f00
    LEA EAX,[ESP + 0x404]               ; 00494f05
    PUSH EAX                            ; 00494f0c
    CALL shape_edittool.cpp_CStrList_add_FUN_004994d0 ; 00494f0d
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004994d0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00494f12
    PUSH 0x5dbdf9                       ; 00494f15
    LEA EAX,[ESP + 0x404]               ; 00494f1a
    PUSH EAX                            ; 00494f21
    CALL shape_edittool.cpp_CStrList_add_FUN_004994d0 ; 00494f22
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004994d0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00494f27
    PUSH 0x5dbdfd                       ; 00494f2a
    LEA EAX,[ESP + 0x404]               ; 00494f2f
    PUSH EAX                            ; 00494f36
    CALL shape_edittool.cpp_CStrList_add_FUN_004994d0 ; 00494f37
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004994d0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00494f3c
    PUSH 0x0                            ; 00494f3f
    LEA EAX,[ESP + 0x404]               ; 00494f41
    PUSH EAX                            ; 00494f48
    LEA EAX,[ESP + 0x8]                 ; 00494f49
    PUSH EAX                            ; 00494f4d
    CALL shape_edittool.cpp_showMultiChoiceDialog_FUN_00494690 ; 00494f4e
        ;   XREF to: 00494690 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_showMultiChoiceDialog_FUN_00494690(CStrList * str_list, char * dialog_title, int dialog_mode)
    ADD ESP,0xc                         ; 00494f53
    TEST EAX,EAX                        ; 00494f56
    JZ 0x00494f81                       ; 00494f58
        ;   XREF to: 00494f81 (CONDITIONAL_JUMP)  ; LAB_00494f81
    CMP EAX,0x1                         ; 00494f5a
    JZ 0x00494f91                       ; 00494f5d
        ;   XREF to: 00494f91 (CONDITIONAL_JUMP)  ; LAB_00494f91
    CMP EAX,0x2                         ; 00494f5f
    JNZ 0x00494fa2                      ; 00494f62
        ;   XREF to: 00494fa2 (CONDITIONAL_JUMP)  ; LAB_00494fa2
    XOR EBX,EBX                         ; 00494f64
    PUSH EBX                            ; 00494f66
    LEA EAX,[ESP + 0x404]               ; 00494f67
    PUSH EAX                            ; 00494f6e
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004993a0 ; 00494f6f
        ;   XREF to: 004993a0 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004993a0(CStrList * this_ptr, uint flags)
        ;   Label: LAB_00494f6f
    ADD ESP,0x8                         ; 00494f74
    MOV EAX,EBX                         ; 00494f77
    ADD ESP,0x414                       ; 00494f79
    POP EBX                             ; 00494f7f
    RET                                 ; 00494f80
    PUSH EAX                            ; 00494f81
        ;   Label: LAB_00494f81
    LEA EAX,[ESP + 0x404]               ; 00494f82
    PUSH EAX                            ; 00494f89
    MOV EBX,0x1                         ; 00494f8a
    JMP 0x00494f6f                      ; 00494f8f
        ;   XREF to: 00494f6f (UNCONDITIONAL_JUMP)  ; LAB_00494f6f
    PUSH 0x0                            ; 00494f91
        ;   Label: LAB_00494f91
    LEA EAX,[ESP + 0x404]               ; 00494f93
    PUSH EAX                            ; 00494f9a
    MOV EBX,0x2                         ; 00494f9b
    JMP 0x00494f6f                      ; 00494fa0
        ;   XREF to: 00494f6f (UNCONDITIONAL_JUMP)  ; LAB_00494f6f
    PUSH 0x0                            ; 00494fa2
        ;   Label: LAB_00494fa2
    LEA EAX,[ESP + 0x404]               ; 00494fa4
    PUSH EAX                            ; 00494fab
    MOV EBX,0xffffffff                  ; 00494fac
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004993a0 ; 00494fb1
        ;   XREF to: 004993a0 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004993a0(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00494fb6
    MOV EAX,EBX                         ; 00494fb9
    ADD ESP,0x414                       ; 00494fbb
    POP EBX                             ; 00494fc1
    RET                                 ; 00494fc2

