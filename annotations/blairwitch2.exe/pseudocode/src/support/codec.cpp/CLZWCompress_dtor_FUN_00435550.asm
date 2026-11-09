; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLZWCompress * __cdecl support_codec_cpp_CLZWCompress_dtor_FUN_00435550(CLZWCompress *this_ptr,uint flags)
;
; Parameters:
; CLZWCompress *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CLZWCompressTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;   support_codec.cpp_CCodec_dtor_FUN_00433e90
;   support_codec.cpp_CLZWDictionary_dtor_FUN_00434270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435550
        ;   Label: support_codec.cpp_CLZWCompress_dtor_FUN_00435550
    MOV EBX,dword ptr [ESP + 0x8]       ; 00435551
    TEST byte ptr [ESP + 0xc],0x4       ; 00435555
    JNZ 0x00435587                      ; 0043555a
        ;   XREF to: 00435587 (CONDITIONAL_JUMP)  ; LAB_00435587
    PUSH 0x0                            ; 0043555c
    ADD EBX,0x4                         ; 0043555e
    PUSH EBX                            ; 00435561
    CALL support_codec.cpp_CLZWDictionary_dtor_FUN_00434270 ; 00435562
        ;   XREF to: 00434270 (UNCONDITIONAL_CALL)  ; CLZWDictionary * support_codec.cpp_CLZWDictionary_dtor_FUN_00434270(CLZWDictionary * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00435567
    PUSH 0x1                            ; 0043556a
    LEA EBX,[EAX + -0x4]                ; 0043556c
    PUSH EBX                            ; 0043556f
    CALL support_codec.cpp_CCodec_dtor_FUN_00433e90 ; 00435570
        ;   XREF to: 00433e90 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_dtor_FUN_00433e90(CCodec * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00435575
    MOV DL,byte ptr [ESP + 0xc]         ; 00435578
    MOV EBX,EAX                         ; 0043557c
    TEST DL,0x2                         ; 0043557e
    JNZ 0x004355a2                      ; 00435581
        ;   XREF to: 004355a2 (CONDITIONAL_JUMP)  ; LAB_004355a2
    MOV EAX,EBX                         ; 00435583
    POP EBX                             ; 00435585
    RET                                 ; 00435586
    PUSH 0x5f4470                       ; 00435587 | g_CLZWCompressTypeInfo
        ;   Label: LAB_00435587
    PUSH EBX                            ; 0043558c
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0043558d
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 00435592
    PUSH EAX                            ; 00435595
    CALL crt_unknown.c_FUN_005b7fce     ; 00435596
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0043559b
    MOV EAX,EBX                         ; 0043559e
    POP EBX                             ; 004355a0
    RET                                 ; 004355a1
    PUSH EAX                            ; 004355a2
        ;   Label: LAB_004355a2
    CALL crt_unknown.c_FUN_005b7fdc     ; 004355a3
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 004355a8
    MOV EAX,EBX                         ; 004355ab
    POP EBX                             ; 004355ad
    RET                                 ; 004355ae

