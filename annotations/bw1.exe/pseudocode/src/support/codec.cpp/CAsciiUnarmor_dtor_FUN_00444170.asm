; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAsciiUnarmor * support_codec_cpp_CAsciiUnarmor_dtor_FUN_00444170(CAsciiUnarmor *this_ptr,uint flags)
;
; Parameters:
; CAsciiUnarmor *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CAsciiUnarmorTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;   support_codec.cpp_CCodec_dtor_FUN_00442bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444170
        ;   Label: support_codec.cpp_CAsciiUnarmor_dtor_FUN_00444170
    MOV EBX,dword ptr [ESP + 0x8]       ; 00444171
    TEST byte ptr [ESP + 0xc],0x4       ; 00444175
    JNZ 0x00444196                      ; 0044417a
        ;   XREF to: 00444196 (CONDITIONAL_JUMP)  ; LAB_00444196
    PUSH 0x1                            ; 0044417c
    PUSH EBX                            ; 0044417e
    CALL support_codec.cpp_CCodec_dtor_FUN_00442bb0 ; 0044417f
        ;   XREF to: 00442bb0 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_dtor_FUN_00442bb0(CCodec * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00444184
    MOV DL,byte ptr [ESP + 0xc]         ; 00444187
    MOV EBX,EAX                         ; 0044418b
    TEST DL,0x2                         ; 0044418d
    JNZ 0x004441b1                      ; 00444190
        ;   XREF to: 004441b1 (CONDITIONAL_JUMP)  ; LAB_004441b1
    MOV EAX,EBX                         ; 00444192
    POP EBX                             ; 00444194
    RET                                 ; 00444195
    PUSH 0x5fdb40                       ; 00444196 | g_CAsciiUnarmorTypeInfo
        ;   Label: LAB_00444196
    PUSH EBX                            ; 0044419b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 0044419c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 004441a1
    PUSH EAX                            ; 004441a4
    CALL crt_unknown.c_FUN_005c0336     ; 004441a5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004441aa
    MOV EAX,EBX                         ; 004441ad
    POP EBX                             ; 004441af
    RET                                 ; 004441b0
    PUSH EAX                            ; 004441b1
        ;   Label: LAB_004441b1
    CALL crt_unknown.c_FUN_005c0344     ; 004441b2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004441b7
    MOV EAX,EBX                         ; 004441ba
    POP EBX                             ; 004441bc
    RET                                 ; 004441bd

