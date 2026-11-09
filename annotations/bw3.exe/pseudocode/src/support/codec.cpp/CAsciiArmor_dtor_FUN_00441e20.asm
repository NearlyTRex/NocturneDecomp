; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAsciiArmor * support_codec_cpp_CAsciiArmor_dtor_FUN_00441e20(CAsciiArmor *this_ptr,uint flags)
;
; Parameters:
; CAsciiArmor *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CAsciiArmorTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;   support_codec.cpp_CCodec_dtor_FUN_00440810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441e20
        ;   Label: support_codec.cpp_CAsciiArmor_dtor_FUN_00441e20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00441e21
    TEST byte ptr [ESP + 0xc],0x4       ; 00441e25
    JNZ 0x00441e46                      ; 00441e2a
        ;   XREF to: 00441e46 (CONDITIONAL_JUMP)  ; LAB_00441e46
    PUSH 0x1                            ; 00441e2c
    PUSH EBX                            ; 00441e2e
    CALL support_codec.cpp_CCodec_dtor_FUN_00440810 ; 00441e2f
        ;   XREF to: 00440810 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_dtor_FUN_00440810(CCodec * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00441e34
    MOV DL,byte ptr [ESP + 0xc]         ; 00441e37
    MOV EBX,EAX                         ; 00441e3b
    TEST DL,0x2                         ; 00441e3d
    JNZ 0x00441e61                      ; 00441e40
        ;   XREF to: 00441e61 (CONDITIONAL_JUMP)  ; LAB_00441e61
    MOV EAX,EBX                         ; 00441e42
    POP EBX                             ; 00441e44
    RET                                 ; 00441e45
    PUSH 0x5dd640                       ; 00441e46 | g_CAsciiArmorTypeInfo
        ;   Label: LAB_00441e46
    PUSH EBX                            ; 00441e4b
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00441e4c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 00441e51
    PUSH EAX                            ; 00441e54
    CALL crt_unknown.c_FUN_005a30b6     ; 00441e55
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00441e5a
    MOV EAX,EBX                         ; 00441e5d
    POP EBX                             ; 00441e5f
    RET                                 ; 00441e60
    PUSH EAX                            ; 00441e61
        ;   Label: LAB_00441e61
    CALL crt_unknown.c_FUN_005a30c4     ; 00441e62
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00441e67
    MOV EAX,EBX                         ; 00441e6a
    POP EBX                             ; 00441e6c
    RET                                 ; 00441e6d

