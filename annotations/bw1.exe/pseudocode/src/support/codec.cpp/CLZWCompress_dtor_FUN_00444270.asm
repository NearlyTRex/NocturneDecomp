; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLZWCompress * __cdecl support_codec_cpp_CLZWCompress_dtor_FUN_00444270(CLZWCompress *this_ptr,uint flags)
;
; Parameters:
; CLZWCompress *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CLZWCompressTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;   support_codec.cpp_CCodec_dtor_FUN_00442bb0
;   support_codec.cpp_CLZWDictionary_dtor_FUN_00442f90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444270
        ;   Label: support_codec.cpp_CLZWCompress_dtor_FUN_00444270
    MOV EBX,dword ptr [ESP + 0x8]       ; 00444271
    TEST byte ptr [ESP + 0xc],0x4       ; 00444275
    JNZ 0x004442a7                      ; 0044427a
        ;   XREF to: 004442a7 (CONDITIONAL_JUMP)  ; LAB_004442a7
    PUSH 0x0                            ; 0044427c
    ADD EBX,0x4                         ; 0044427e
    PUSH EBX                            ; 00444281
    CALL support_codec.cpp_CLZWDictionary_dtor_FUN_00442f90 ; 00444282
        ;   XREF to: 00442f90 (UNCONDITIONAL_CALL)  ; CLZWDictionary * support_codec.cpp_CLZWDictionary_dtor_FUN_00442f90(CLZWDictionary * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00444287
    PUSH 0x1                            ; 0044428a
    LEA EBX,[EAX + -0x4]                ; 0044428c
    PUSH EBX                            ; 0044428f
    CALL support_codec.cpp_CCodec_dtor_FUN_00442bb0 ; 00444290
        ;   XREF to: 00442bb0 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_dtor_FUN_00442bb0(CCodec * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00444295
    MOV DL,byte ptr [ESP + 0xc]         ; 00444298
    MOV EBX,EAX                         ; 0044429c
    TEST DL,0x2                         ; 0044429e
    JNZ 0x004442c2                      ; 004442a1
        ;   XREF to: 004442c2 (CONDITIONAL_JUMP)  ; LAB_004442c2
    MOV EAX,EBX                         ; 004442a3
    POP EBX                             ; 004442a5
    RET                                 ; 004442a6
    PUSH 0x5fdba0                       ; 004442a7 | g_CLZWCompressTypeInfo
        ;   Label: LAB_004442a7
    PUSH EBX                            ; 004442ac
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004442ad
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 004442b2
    PUSH EAX                            ; 004442b5
    CALL crt_unknown.c_FUN_005c0336     ; 004442b6
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004442bb
    MOV EAX,EBX                         ; 004442be
    POP EBX                             ; 004442c0
    RET                                 ; 004442c1
    PUSH EAX                            ; 004442c2
        ;   Label: LAB_004442c2
    CALL crt_unknown.c_FUN_005c0344     ; 004442c3
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004442c8
    MOV EAX,EBX                         ; 004442cb
    POP EBX                             ; 004442cd
    RET                                 ; 004442ce

