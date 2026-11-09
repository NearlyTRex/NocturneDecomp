; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool shape_edittool_cpp_FUN_0047c7ee(undefined4 param_1,undefined4 param_2)
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

    MOV ECX,ECX                         ; 0047c7ee
        ;   Label: shape_edittool.cpp_FUN_0047c7ee
    PUSH EBX                            ; 0047c7f0
    SUB ESP,0x14                        ; 0047c7f1
    LEA EAX,[ESP + 0x24]                ; 0047c7f4
    MOV dword ptr [ESP + 0x10],EAX      ; 0047c7f8
    LEA EAX,[ESP + 0x10]                ; 0047c7fc
    PUSH EAX                            ; 0047c800
    MOV EDX,dword ptr [ESP + 0x24]      ; 0047c801
    PUSH EDX                            ; 0047c805
    PUSH 0x1c23df0                      ; 0047c806
    CALL crt_stdio.c_vsprintf_FUN_005b7768 ; 0047c80b
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005b7768()
    ADD ESP,0xc                         ; 0047c810
    MOV EAX,ESP                         ; 0047c813
    XOR ECX,ECX                         ; 0047c815
    PUSH EAX                            ; 0047c817
    MOV dword ptr [ESP + 0x14],ECX      ; 0047c818
    CALL shape_edittool.cpp_CStrList_ctor_FUN_00480d20 ; 0047c81c
        ;   XREF to: 00480d20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_00480d20(CStrList * this_ptr)
    ADD ESP,0x4                         ; 0047c821
    PUSH 0x5d2041                       ; 0047c824
    LEA EAX,[ESP + 0x4]                 ; 0047c829
    PUSH EAX                            ; 0047c82d
    CALL shape_edittool.cpp_CStrList_add_FUN_00480e70 ; 0047c82e
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00480e70(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0047c833
    PUSH 0x5d2046                       ; 0047c836
    LEA EAX,[ESP + 0x4]                 ; 0047c83b
    PUSH EAX                            ; 0047c83f
    CALL shape_edittool.cpp_CStrList_add_FUN_00480e70 ; 0047c840
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00480e70(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0047c845
    PUSH 0x0                            ; 0047c848
    LEA EAX,[ESP + 0x4]                 ; 0047c84a
    PUSH EAX                            ; 0047c84e
    PUSH 0x1c23df0                      ; 0047c84f
    CALL shape_edittool.cpp_FUN_0047c0f0 ; 0047c854
        ;   XREF to: 0047c0f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_0047c0f0(CStrList * str_list, char * dialog_title, int dialog_mode)
    ADD ESP,0xc                         ; 0047c859
    XOR EBX,EBX                         ; 0047c85c
    TEST EAX,EAX                        ; 0047c85e
    SETZ AL                             ; 0047c860
    PUSH 0x0                            ; 0047c863
    MOV BL,AL                           ; 0047c865
    LEA EAX,[ESP + 0x4]                 ; 0047c867
    PUSH EAX                            ; 0047c86b
    CALL shape_edittool.cpp_CStrList_dtor_FUN_00480d40 ; 0047c86c
        ;   XREF to: 00480d40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_00480d40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0047c871
    MOV EAX,EBX                         ; 0047c874
    ADD ESP,0x14                        ; 0047c876
    POP EBX                             ; 0047c879
    RET                                 ; 0047c87a

