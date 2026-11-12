; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCodec * __cdecl support_codec_cpp_CCodec_dtor_FUN_00442bb0(CCodec *this_ptr,uint flags)
;
; Parameters:
; CCodec *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[8]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00453610 at 00453bd4
;   core_game.cpp_FUN_004d6420 at 004d680a
;   core_game.cpp_FUN_004d6990 at 004d6d5d
;   support_codec.cpp_CAsciiArmor_dtor_FUN_004441c0 at 004441cf
;   support_codec.cpp_CAsciiUnarmor_dtor_FUN_00444170 at 0044417f
;   support_codec.cpp_CCheesyCipher_dtor_FUN_00444120 at 0044412f
;   support_codec.cpp_CLZWCompress_dtor_FUN_00444270 at 00444290
;   support_codec.cpp_CLZWDecompress_dtor_FUN_00444210 at 00444230
;
; Referenced Globals:
;   void* PTR_support_codec.cpp_CCodec_dtor_FUN_00442bb0_005fd954 = 00442bb0
;   WatcomTypeInfo g_CCodecTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442bb0
        ;   Label: support_codec.cpp_CCodec_dtor_FUN_00442bb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00442bb1
    MOV EAX,dword ptr [ESP + 0xc]       ; 00442bb5
    TEST AL,0x4                         ; 00442bb9
    JNZ 0x00442bd1                      ; 00442bbb
        ;   XREF to: 00442bd1 (CONDITIONAL_JUMP)  ; LAB_00442bd1
    MOV dword ptr [EBX],0x5fd954        ; 00442bbd | PTR_support_codec.cpp_CCodec_dtor_FUN_00442bb0_005fd954
    TEST AL,0x2                         ; 00442bc3
    JNZ 0x00442bec                      ; 00442bc5
        ;   XREF to: 00442bec (CONDITIONAL_JUMP)  ; LAB_00442bec
    MOV EAX,EBX                         ; 00442bc7
    POP EBX                             ; 00442bc9
    LEA EAX,[EAX]                       ; 00442bca
    RET                                 ; 00442bd0
    PUSH 0x5fdaa0                       ; 00442bd1 | g_CCodecTypeInfo
        ;   Label: LAB_00442bd1
    PUSH EBX                            ; 00442bd6
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 00442bd7
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00442bdc
    PUSH EAX                            ; 00442bdf
    CALL crt_unknown.c_FUN_005c0336     ; 00442be0
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00442be5
    MOV EAX,EBX                         ; 00442be8
    POP EBX                             ; 00442bea
    RET                                 ; 00442beb
    PUSH EBX                            ; 00442bec
        ;   Label: LAB_00442bec
    CALL crt_unknown.c_FUN_005c0344     ; 00442bed
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00442bf2
    MOV EAX,EBX                         ; 00442bf5
    POP EBX                             ; 00442bf7
    RET                                 ; 00442bf8

