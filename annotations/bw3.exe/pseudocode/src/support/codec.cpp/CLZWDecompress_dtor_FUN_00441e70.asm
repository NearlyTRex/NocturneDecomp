; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLZWDecompress * __cdecl support_codec_cpp_CLZWDecompress_dtor_FUN_00441e70(CLZWDecompress *this_ptr,uint flags)
;
; Parameters:
; CLZWDecompress * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CLZWDecompressTypeInfo
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

    PUSH EBX                            ; 00441e70
        ;   Label: support_codec.cpp_CLZWDecompress_dtor_FUN_00441e70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00441e71
    TEST byte ptr [ESP + 0xc],0x4       ; 00441e75
    JNZ 0x00441ea7                      ; 00441e7a
        ;   XREF to: 00441ea7 (CONDITIONAL_JUMP)  ; LAB_00441ea7
    PUSH 0x0                            ; 00441e7c
    ADD EBX,0x4                         ; 00441e7e
    PUSH EBX                            ; 00441e81
    CALL support_codec.cpp_CLZWDictionary_dtor_FUN_00440bf0 ; 00441e82
        ;   XREF to: 00440bf0 (UNCONDITIONAL_CALL)  ; CLZWDictionary * support_codec.cpp_CLZWDictionary_dtor_FUN_00440bf0(CLZWDictionary * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00441e87
    PUSH 0x1                            ; 00441e8a
    LEA EBX,[EAX + -0x4]                ; 00441e8c
    PUSH EBX                            ; 00441e8f
    CALL support_codec.cpp_CCodec_dtor_FUN_00440810 ; 00441e90
        ;   XREF to: 00440810 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_dtor_FUN_00440810(CCodec * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00441e95
    MOV DL,byte ptr [ESP + 0xc]         ; 00441e98
    MOV EBX,EAX                         ; 00441e9c
    TEST DL,0x2                         ; 00441e9e
    JNZ 0x00441ec2                      ; 00441ea1
        ;   XREF to: 00441ec2 (CONDITIONAL_JUMP)  ; LAB_00441ec2
    MOV EAX,EBX                         ; 00441ea3
    POP EBX                             ; 00441ea5
    RET                                 ; 00441ea6
    PUSH 0x5dd660                       ; 00441ea7 | g_CLZWDecompressTypeInfo
        ;   Label: LAB_00441ea7
    PUSH EBX                            ; 00441eac
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00441ead
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00441eb2
    PUSH EAX                            ; 00441eb5
    CALL crt_unknown.c_FUN_005a30b6     ; 00441eb6
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00441ebb
    MOV EAX,EBX                         ; 00441ebe
    POP EBX                             ; 00441ec0
    RET                                 ; 00441ec1
    PUSH EAX                            ; 00441ec2
        ;   Label: LAB_00441ec2
    CALL crt_unknown.c_FUN_005a30c4     ; 00441ec3
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00441ec8
    MOV EAX,EBX                         ; 00441ecb
    POP EBX                             ; 00441ecd
    RET                                 ; 00441ece

