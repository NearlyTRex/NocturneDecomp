; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool shape_edittool_cpp_FUN_0047d980(undefined4 param_1,char *param_2)
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

    PUSH EBX                            ; 0047d980
        ;   Label: shape_edittool.cpp_FUN_0047d980
    SUB ESP,0x414                       ; 0047d981
    LEA EAX,[ESP + 0x424]               ; 0047d987
    MOV dword ptr [ESP + 0x410],EAX     ; 0047d98e
    LEA EAX,[ESP + 0x410]               ; 0047d995
    PUSH EAX                            ; 0047d99c
    MOV EDX,dword ptr [ESP + 0x424]     ; 0047d99d
    PUSH EDX                            ; 0047d9a4
    LEA EAX,[ESP + 0x8]                 ; 0047d9a5
    PUSH EAX                            ; 0047d9a9
    CALL crt_stdio.c_vsprintf_FUN_005a2898 ; 0047d9aa
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005a2898(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 0047d9af
    LEA EAX,[ESP + 0x400]               ; 0047d9b2
    XOR ECX,ECX                         ; 0047d9b9
    PUSH EAX                            ; 0047d9bb
    MOV dword ptr [ESP + 0x414],ECX     ; 0047d9bc
    CALL shape_edittool.cpp_CStrList_ctor_FUN_00481f20 ; 0047d9c3
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_00481f20(CStrList * this_ptr)
    ADD ESP,0x4                         ; 0047d9c8
    PUSH 0x5bce9c                       ; 0047d9cb
    LEA EAX,[ESP + 0x404]               ; 0047d9d0
    PUSH EAX                            ; 0047d9d7
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 0047d9d8
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0047d9dd
    PUSH 0x5bcea1                       ; 0047d9e0
    LEA EAX,[ESP + 0x404]               ; 0047d9e5
    PUSH EAX                            ; 0047d9ec
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 0047d9ed
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0047d9f2
    PUSH 0x0                            ; 0047d9f5
    LEA EAX,[ESP + 0x404]               ; 0047d9f7
    PUSH EAX                            ; 0047d9fe
    LEA EAX,[ESP + 0x8]                 ; 0047d9ff
    PUSH EAX                            ; 0047da03
    CALL shape_edittool.cpp_showMultiChoiceDialog_FUN_0047d230 ; 0047da04
        ;   XREF to: 0047d230 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_showMultiChoiceDialog_FUN_0047d230(CStrList * str_list, char * dialog_title, int dialog_mode)
    ADD ESP,0xc                         ; 0047da09
    XOR EBX,EBX                         ; 0047da0c
    TEST EAX,EAX                        ; 0047da0e
    SETZ AL                             ; 0047da10
    PUSH 0x0                            ; 0047da13
    MOV BL,AL                           ; 0047da15
    LEA EAX,[ESP + 0x404]               ; 0047da17
    PUSH EAX                            ; 0047da1e
    CALL shape_edittool.cpp_CStrList_dtor_FUN_00481f40 ; 0047da1f
        ;   XREF to: 00481f40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_00481f40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0047da24
    MOV EAX,EBX                         ; 0047da27
    ADD ESP,0x414                       ; 0047da29
    POP EBX                             ; 0047da2f
    RET                                 ; 0047da30

