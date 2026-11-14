; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLZWCompress * __cdecl support_codec_cpp_CLZWCompress_dtor_FUN_00441ed0(CLZWCompress *this_ptr,uint flags)
;
; Parameters:
; CLZWCompress *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CLZWCompressTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;   support_codec.cpp_CCodec_dtor_FUN_00440810
;   support_codec.cpp_CLZWDictionary_dtor_FUN_00440bf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441ed0
        ;   Label: support_codec.cpp_CLZWCompress_dtor_FUN_00441ed0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00441ed1
    TEST byte ptr [ESP + 0xc],0x4       ; 00441ed5
    JNZ 0x00441f07                      ; 00441eda
        ;   XREF to: 00441f07 (CONDITIONAL_JUMP)  ; LAB_00441f07
    PUSH 0x0                            ; 00441edc
    ADD EBX,0x4                         ; 00441ede
    PUSH EBX                            ; 00441ee1
    CALL support_codec.cpp_CLZWDictionary_dtor_FUN_00440bf0 ; 00441ee2
        ;   XREF to: 00440bf0 (UNCONDITIONAL_CALL)  ; CLZWDictionary * support_codec.cpp_CLZWDictionary_dtor_FUN_00440bf0(CLZWDictionary * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00441ee7
    PUSH 0x1                            ; 00441eea
    LEA EBX,[EAX + -0x4]                ; 00441eec
    PUSH EBX                            ; 00441eef
    CALL support_codec.cpp_CCodec_dtor_FUN_00440810 ; 00441ef0
        ;   XREF to: 00440810 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_dtor_FUN_00440810(CCodec * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00441ef5
    MOV DL,byte ptr [ESP + 0xc]         ; 00441ef8
    MOV EBX,EAX                         ; 00441efc
    TEST DL,0x2                         ; 00441efe
    JNZ 0x00441f22                      ; 00441f01
        ;   XREF to: 00441f22 (CONDITIONAL_JUMP)  ; LAB_00441f22
    MOV EAX,EBX                         ; 00441f03
    POP EBX                             ; 00441f05
    RET                                 ; 00441f06
    PUSH 0x5dd680                       ; 00441f07 | g_CLZWCompressTypeInfo
        ;   Label: LAB_00441f07
    PUSH EBX                            ; 00441f0c
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00441f0d
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00441f12
    PUSH EAX                            ; 00441f15
    CALL crt_unknown.c_FUN_005a30b6     ; 00441f16
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00441f1b
    MOV EAX,EBX                         ; 00441f1e
    POP EBX                             ; 00441f20
    RET                                 ; 00441f21
    PUSH EAX                            ; 00441f22
        ;   Label: LAB_00441f22
    CALL crt_unknown.c_FUN_005a30c4     ; 00441f23
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00441f28
    MOV EAX,EBX                         ; 00441f2b
    POP EBX                             ; 00441f2d
    RET                                 ; 00441f2e

