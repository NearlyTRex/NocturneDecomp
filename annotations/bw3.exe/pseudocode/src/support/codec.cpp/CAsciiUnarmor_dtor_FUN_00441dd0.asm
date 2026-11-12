; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAsciiUnarmor * support_codec_cpp_CAsciiUnarmor_dtor_FUN_00441dd0(CAsciiUnarmor *this_ptr,uint flags)
;
; Parameters:
; CAsciiUnarmor *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CAsciiUnarmorTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;   support_codec.cpp_CCodec_dtor_FUN_00440810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441dd0
        ;   Label: support_codec.cpp_CAsciiUnarmor_dtor_FUN_00441dd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00441dd1
    TEST byte ptr [ESP + 0xc],0x4       ; 00441dd5
    JNZ 0x00441df6                      ; 00441dda
        ;   XREF to: 00441df6 (CONDITIONAL_JUMP)  ; LAB_00441df6
    PUSH 0x1                            ; 00441ddc
    PUSH EBX                            ; 00441dde
    CALL support_codec.cpp_CCodec_dtor_FUN_00440810 ; 00441ddf
        ;   XREF to: 00440810 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_dtor_FUN_00440810(CCodec * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00441de4
    MOV DL,byte ptr [ESP + 0xc]         ; 00441de7
    MOV EBX,EAX                         ; 00441deb
    TEST DL,0x2                         ; 00441ded
    JNZ 0x00441e11                      ; 00441df0
        ;   XREF to: 00441e11 (CONDITIONAL_JUMP)  ; LAB_00441e11
    MOV EAX,EBX                         ; 00441df2
    POP EBX                             ; 00441df4
    RET                                 ; 00441df5
    PUSH 0x5dd620                       ; 00441df6 | g_CAsciiUnarmorTypeInfo
        ;   Label: LAB_00441df6
    PUSH EBX                            ; 00441dfb
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00441dfc
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00441e01
    PUSH EAX                            ; 00441e04
    CALL crt_unknown.c_FUN_005a30b6     ; 00441e05
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00441e0a
    MOV EAX,EBX                         ; 00441e0d
    POP EBX                             ; 00441e0f
    RET                                 ; 00441e10
    PUSH EAX                            ; 00441e11
        ;   Label: LAB_00441e11
    CALL crt_unknown.c_FUN_005a30c4     ; 00441e12
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00441e17
    MOV EAX,EBX                         ; 00441e1a
    POP EBX                             ; 00441e1c
    RET                                 ; 00441e1d

