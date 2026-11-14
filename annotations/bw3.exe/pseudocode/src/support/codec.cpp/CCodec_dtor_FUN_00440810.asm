; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCodec * __cdecl support_codec_cpp_CCodec_dtor_FUN_00440810(CCodec *this_ptr,uint flags)
;
; Parameters:
; CCodec *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[8]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_0044f750 at 0044fd14
;   core_game.cpp_FUN_004bda10 at 004bde21
;   core_game.cpp_FUN_004bdfb0 at 004be3a3
;   support_codec.cpp_CAsciiArmor_dtor_FUN_00441e20 at 00441e2f
;   support_codec.cpp_CAsciiUnarmor_dtor_FUN_00441dd0 at 00441ddf
;   support_codec.cpp_CCheesyCipher_dtor_FUN_00441d80 at 00441d8f
;   support_codec.cpp_CLZWCompress_dtor_FUN_00441ed0 at 00441ef0
;   support_codec.cpp_CLZWDecompress_dtor_FUN_00441e70 at 00441e90
;
; Referenced Globals:
;   void* PTR_support_codec.cpp_CCodec_dtor_FUN_00440810_005dd434 = 00440810
;   WatcomTypeInfo g_CCodecTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440810
        ;   Label: support_codec.cpp_CCodec_dtor_FUN_00440810
    MOV EBX,dword ptr [ESP + 0x8]       ; 00440811
    MOV EAX,dword ptr [ESP + 0xc]       ; 00440815
    TEST AL,0x4                         ; 00440819
    JNZ 0x00440831                      ; 0044081b
        ;   XREF to: 00440831 (CONDITIONAL_JUMP)  ; LAB_00440831
    MOV dword ptr [EBX],0x5dd434        ; 0044081d | PTR_support_codec.cpp_CCodec_dtor_FUN_00440810_005dd434
    TEST AL,0x2                         ; 00440823
    JNZ 0x0044084c                      ; 00440825
        ;   XREF to: 0044084c (CONDITIONAL_JUMP)  ; LAB_0044084c
    MOV EAX,EBX                         ; 00440827
    POP EBX                             ; 00440829
    LEA EAX,[EAX]                       ; 0044082a
    RET                                 ; 00440830
    PUSH 0x5dd580                       ; 00440831 | g_CCodecTypeInfo
        ;   Label: LAB_00440831
    PUSH EBX                            ; 00440836
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00440837
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0044083c
    PUSH EAX                            ; 0044083f
    CALL crt_unknown.c_FUN_005a30b6     ; 00440840
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00440845
    MOV EAX,EBX                         ; 00440848
    POP EBX                             ; 0044084a
    RET                                 ; 0044084b
    PUSH EBX                            ; 0044084c
        ;   Label: LAB_0044084c
    CALL crt_unknown.c_FUN_005a30c4     ; 0044084d
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00440852
    MOV EAX,EBX                         ; 00440855
    POP EBX                             ; 00440857
    RET                                 ; 00440858

