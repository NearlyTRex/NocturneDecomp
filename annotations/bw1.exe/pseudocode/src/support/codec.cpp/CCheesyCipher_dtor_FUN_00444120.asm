; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCheesyCipher * __cdecl support_codec_cpp_CCheesyCipher_dtor_FUN_00444120(CCheesyCipher *this_ptr,uint flags)
;
; Parameters:
; CCheesyCipher *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;   support_codec.cpp_CCodec_dtor_FUN_00442bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444120
        ;   Label: support_codec.cpp_CCheesyCipher_dtor_FUN_00444120
    MOV EBX,dword ptr [ESP + 0x8]       ; 00444121
    TEST byte ptr [ESP + 0xc],0x4       ; 00444125
    JNZ 0x00444146                      ; 0044412a
        ;   XREF to: 00444146 (CONDITIONAL_JUMP)  ; LAB_00444146
    PUSH 0x1                            ; 0044412c
    PUSH EBX                            ; 0044412e
    CALL support_codec.cpp_CCodec_dtor_FUN_00442bb0 ; 0044412f
        ;   XREF to: 00442bb0 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_dtor_FUN_00442bb0(CCodec * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00444134
    MOV DL,byte ptr [ESP + 0xc]         ; 00444137
    MOV EBX,EAX                         ; 0044413b
    TEST DL,0x2                         ; 0044413d
    JNZ 0x00444161                      ; 00444140
        ;   XREF to: 00444161 (CONDITIONAL_JUMP)  ; LAB_00444161
    MOV EAX,EBX                         ; 00444142
    POP EBX                             ; 00444144
    RET                                 ; 00444145
    PUSH 0x5fdb20                       ; 00444146
        ;   Label: LAB_00444146
    PUSH EBX                            ; 0044414b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 0044414c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00444151
    PUSH EAX                            ; 00444154
    CALL crt_unknown.c_FUN_005c0336     ; 00444155
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0044415a
    MOV EAX,EBX                         ; 0044415d
    POP EBX                             ; 0044415f
    RET                                 ; 00444160
    PUSH EAX                            ; 00444161
        ;   Label: LAB_00444161
    CALL crt_unknown.c_FUN_005c0344     ; 00444162
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00444167
    MOV EAX,EBX                         ; 0044416a
    POP EBX                             ; 0044416c
    RET                                 ; 0044416d

