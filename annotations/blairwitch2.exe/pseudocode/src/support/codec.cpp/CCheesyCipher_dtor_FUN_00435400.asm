; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCheesyCipher * support_codec_cpp_CCheesyCipher_dtor_FUN_00435400(CCheesyCipher *this_ptr,uint flags)
;
; Parameters:
; CCheesyCipher *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;   support_codec.cpp_CCodec_dtor_FUN_00433e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435400
        ;   Label: support_codec.cpp_CCheesyCipher_dtor_FUN_00435400
    MOV EBX,dword ptr [ESP + 0x8]       ; 00435401
    TEST byte ptr [ESP + 0xc],0x4       ; 00435405
    JNZ 0x00435426                      ; 0043540a
        ;   XREF to: 00435426 (CONDITIONAL_JUMP)  ; LAB_00435426
    PUSH 0x1                            ; 0043540c
    PUSH EBX                            ; 0043540e
    CALL support_codec.cpp_CCodec_dtor_FUN_00433e90 ; 0043540f
        ;   XREF to: 00433e90 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_dtor_FUN_00433e90(CCodec * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00435414
    MOV DL,byte ptr [ESP + 0xc]         ; 00435417
    MOV EBX,EAX                         ; 0043541b
    TEST DL,0x2                         ; 0043541d
    JNZ 0x00435441                      ; 00435420
        ;   XREF to: 00435441 (CONDITIONAL_JUMP)  ; LAB_00435441
    MOV EAX,EBX                         ; 00435422
    POP EBX                             ; 00435424
    RET                                 ; 00435425
    PUSH 0x5f43f0                       ; 00435426
        ;   Label: LAB_00435426
    PUSH EBX                            ; 0043542b
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0043542c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 00435431
    PUSH EAX                            ; 00435434
    CALL crt_unknown.c_FUN_005b7fce     ; 00435435
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0043543a
    MOV EAX,EBX                         ; 0043543d
    POP EBX                             ; 0043543f
    RET                                 ; 00435440
    PUSH EAX                            ; 00435441
        ;   Label: LAB_00435441
    CALL crt_unknown.c_FUN_005b7fdc     ; 00435442
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 00435447
    MOV EAX,EBX                         ; 0043544a
    POP EBX                             ; 0043544c
    RET                                 ; 0043544d

