; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * __cdecl support_codec_cpp_CCodec_dtor_FUN_00438f30(undefined4 *param_1,uint param_2)
;
;
; XREF[5]:
;   core_dcamera.cpp_FUN_00446810 at 00446dc8
;   core_game.cpp_FUN_004a3b90 at 004a3f9d
;   core_game.cpp_FUN_004a4170 at 004a4593
;   support_codec.cpp_CLZWCompress_dtor_FUN_00439c70 at 00439c90
;   support_codec.cpp_CLZWDecompress_dtor_FUN_00439c10 at 00439c30
;
; Referenced Globals:
;   void* PTR_support_codec.cpp_CCodec_dtor_FUN_00438f30_0059b3e4 = 00438f30
;   WatcomTypeInfo g_CCodecTypeInfo_0059b470
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438f30
        ;   Label: support_codec.cpp_CCodec_dtor_FUN_00438f30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00438f31
    MOV EAX,dword ptr [ESP + 0xc]       ; 00438f35
    TEST AL,0x4                         ; 00438f39
    JNZ 0x00438f51                      ; 00438f3b
        ;   XREF to: 00438f51 (CONDITIONAL_JUMP)  ; LAB_00438f51
    MOV dword ptr [EBX],0x59b3e4        ; 00438f3d | PTR_support_codec.cpp_CCodec_dtor_FUN_00438f30_0059b3e4
    TEST AL,0x2                         ; 00438f43
    JNZ 0x00438f6c                      ; 00438f45
        ;   XREF to: 00438f6c (CONDITIONAL_JUMP)  ; LAB_00438f6c
    MOV EAX,EBX                         ; 00438f47
    POP EBX                             ; 00438f49
    LEA EAX,[EAX]                       ; 00438f4a
    PUSH 0x59b470                       ; 00438f51 | g_CCodecTypeInfo_0059b470
        ;   Label: LAB_00438f51
    PUSH EBX                            ; 00438f56
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 00438f57
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 00438f5c
    PUSH EAX                            ; 00438f5f
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00438f60
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 00438f65
    MOV EAX,EBX                         ; 00438f68
    POP EBX                             ; 00438f6a
    RET                                 ; 00438f6b
    PUSH EBX                            ; 00438f6c
        ;   Label: LAB_00438f6c
    CALL crt_unknown.c_FUN_00564494     ; 00438f6d
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 00438f72
    MOV EAX,EBX                         ; 00438f75
    POP EBX                             ; 00438f77
    RET                                 ; 00438f78

