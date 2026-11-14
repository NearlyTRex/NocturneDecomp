; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCheesyCipher * __cdecl support_codec_cpp_CCheesyCipher_dtor_FUN_00441d80(CCheesyCipher *this_ptr,uint flags)
;
; Parameters:
; CCheesyCipher *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;   support_codec.cpp_CCodec_dtor_FUN_00440810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441d80
        ;   Label: support_codec.cpp_CCheesyCipher_dtor_FUN_00441d80
    MOV EBX,dword ptr [ESP + 0x8]       ; 00441d81
    TEST byte ptr [ESP + 0xc],0x4       ; 00441d85
    JNZ 0x00441da6                      ; 00441d8a
        ;   XREF to: 00441da6 (CONDITIONAL_JUMP)  ; LAB_00441da6
    PUSH 0x1                            ; 00441d8c
    PUSH EBX                            ; 00441d8e
    CALL support_codec.cpp_CCodec_dtor_FUN_00440810 ; 00441d8f
        ;   XREF to: 00440810 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_dtor_FUN_00440810(CCodec * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00441d94
    MOV DL,byte ptr [ESP + 0xc]         ; 00441d97
    MOV EBX,EAX                         ; 00441d9b
    TEST DL,0x2                         ; 00441d9d
    JNZ 0x00441dc1                      ; 00441da0
        ;   XREF to: 00441dc1 (CONDITIONAL_JUMP)  ; LAB_00441dc1
    MOV EAX,EBX                         ; 00441da2
    POP EBX                             ; 00441da4
    RET                                 ; 00441da5
    PUSH 0x5dd600                       ; 00441da6
        ;   Label: LAB_00441da6
    PUSH EBX                            ; 00441dab
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00441dac
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00441db1
    PUSH EAX                            ; 00441db4
    CALL crt_unknown.c_FUN_005a30b6     ; 00441db5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00441dba
    MOV EAX,EBX                         ; 00441dbd
    POP EBX                             ; 00441dbf
    RET                                 ; 00441dc0
    PUSH EAX                            ; 00441dc1
        ;   Label: LAB_00441dc1
    CALL crt_unknown.c_FUN_005a30c4     ; 00441dc2
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00441dc7
    MOV EAX,EBX                         ; 00441dca
    POP EBX                             ; 00441dcc
    RET                                 ; 00441dcd

