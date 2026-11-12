; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 shape_edittool_cpp_FUN_0047da40(undefined4 param_1,char *param_2)
;
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005a2898
;   shape_edittool.cpp_CStrList_add_FUN_00482070
;   shape_edittool.cpp_CStrList_ctor_FUN_00481f20
;   shape_edittool.cpp_CStrList_dtor_FUN_00481f40
;   shape_edittool.cpp_showMultiChoiceDialog_FUN_0047d230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047da40
        ;   Label: shape_edittool.cpp_FUN_0047da40
    SUB ESP,0x414                       ; 0047da41
    LEA EAX,[ESP + 0x424]               ; 0047da47
    MOV dword ptr [ESP + 0x410],EAX     ; 0047da4e
    LEA EAX,[ESP + 0x410]               ; 0047da55
    PUSH EAX                            ; 0047da5c
    MOV EDX,dword ptr [ESP + 0x424]     ; 0047da5d
    PUSH EDX                            ; 0047da64
    LEA EAX,[ESP + 0x8]                 ; 0047da65
    PUSH EAX                            ; 0047da69
    CALL crt_stdio.c_vsprintf_FUN_005a2898 ; 0047da6a
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005a2898(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 0047da6f
    LEA EAX,[ESP + 0x400]               ; 0047da72
    XOR ECX,ECX                         ; 0047da79
    PUSH EAX                            ; 0047da7b
    MOV dword ptr [ESP + 0x414],ECX     ; 0047da7c
    CALL shape_edittool.cpp_CStrList_ctor_FUN_00481f20 ; 0047da83
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_00481f20(CStrList * this_ptr)
    ADD ESP,0x4                         ; 0047da88
    PUSH 0x5bcea5                       ; 0047da8b
    LEA EAX,[ESP + 0x404]               ; 0047da90
    PUSH EAX                            ; 0047da97
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 0047da98
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0047da9d
    PUSH 0x5bceaa                       ; 0047daa0
    LEA EAX,[ESP + 0x404]               ; 0047daa5
    PUSH EAX                            ; 0047daac
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 0047daad
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0047dab2
    PUSH 0x5bceb6                       ; 0047dab5
    LEA EAX,[ESP + 0x404]               ; 0047daba
    PUSH EAX                            ; 0047dac1
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 0047dac2
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0047dac7
    PUSH 0x5bceba                       ; 0047daca
    LEA EAX,[ESP + 0x404]               ; 0047dacf
    PUSH EAX                            ; 0047dad6
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 0047dad7
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0047dadc
    PUSH 0x0                            ; 0047dadf
    LEA EAX,[ESP + 0x404]               ; 0047dae1
    PUSH EAX                            ; 0047dae8
    LEA EAX,[ESP + 0x8]                 ; 0047dae9
    PUSH EAX                            ; 0047daed
    CALL shape_edittool.cpp_showMultiChoiceDialog_FUN_0047d230 ; 0047daee
        ;   XREF to: 0047d230 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_showMultiChoiceDialog_FUN_0047d230(CStrList * str_list, char * dialog_title, int dialog_mode)
    ADD ESP,0xc                         ; 0047daf3
    TEST EAX,EAX                        ; 0047daf6
    JZ 0x0047db21                       ; 0047daf8
        ;   XREF to: 0047db21 (CONDITIONAL_JUMP)  ; LAB_0047db21
    CMP EAX,0x1                         ; 0047dafa
    JZ 0x0047db31                       ; 0047dafd
        ;   XREF to: 0047db31 (CONDITIONAL_JUMP)  ; LAB_0047db31
    CMP EAX,0x2                         ; 0047daff
    JNZ 0x0047db42                      ; 0047db02
        ;   XREF to: 0047db42 (CONDITIONAL_JUMP)  ; LAB_0047db42
    XOR EBX,EBX                         ; 0047db04
    PUSH EBX                            ; 0047db06
    LEA EAX,[ESP + 0x404]               ; 0047db07
    PUSH EAX                            ; 0047db0e
    CALL shape_edittool.cpp_CStrList_dtor_FUN_00481f40 ; 0047db0f
        ;   XREF to: 00481f40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_00481f40(CStrList * this_ptr, uint flags)
        ;   Label: LAB_0047db0f
    ADD ESP,0x8                         ; 0047db14
    MOV EAX,EBX                         ; 0047db17
    ADD ESP,0x414                       ; 0047db19
    POP EBX                             ; 0047db1f
    RET                                 ; 0047db20
    PUSH EAX                            ; 0047db21
        ;   Label: LAB_0047db21
    LEA EAX,[ESP + 0x404]               ; 0047db22
    PUSH EAX                            ; 0047db29
    MOV EBX,0x1                         ; 0047db2a
    JMP 0x0047db0f                      ; 0047db2f
        ;   XREF to: 0047db0f (UNCONDITIONAL_JUMP)  ; LAB_0047db0f
    PUSH 0x0                            ; 0047db31
        ;   Label: LAB_0047db31
    LEA EAX,[ESP + 0x404]               ; 0047db33
    PUSH EAX                            ; 0047db3a
    MOV EBX,0x2                         ; 0047db3b
    JMP 0x0047db0f                      ; 0047db40
        ;   XREF to: 0047db0f (UNCONDITIONAL_JUMP)  ; LAB_0047db0f
    PUSH 0x0                            ; 0047db42
        ;   Label: LAB_0047db42
    LEA EAX,[ESP + 0x404]               ; 0047db44
    PUSH EAX                            ; 0047db4b
    MOV EBX,0xffffffff                  ; 0047db4c
    CALL shape_edittool.cpp_CStrList_dtor_FUN_00481f40 ; 0047db51
        ;   XREF to: 00481f40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_00481f40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0047db56
    MOV EAX,EBX                         ; 0047db59
    ADD ESP,0x414                       ; 0047db5b
    POP EBX                             ; 0047db61
    RET                                 ; 0047db62

