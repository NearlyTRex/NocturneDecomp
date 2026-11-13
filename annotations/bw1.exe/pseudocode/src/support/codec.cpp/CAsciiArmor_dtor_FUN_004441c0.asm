; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAsciiArmor * __cdecl support_codec_cpp_CAsciiArmor_dtor_FUN_004441c0(CAsciiArmor *this_ptr,uint flags)
;
; Parameters:
; CAsciiArmor *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CAsciiArmorTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;   support_codec.cpp_CCodec_dtor_FUN_00442bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004441c0
        ;   Label: support_codec.cpp_CAsciiArmor_dtor_FUN_004441c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004441c1
    TEST byte ptr [ESP + 0xc],0x4       ; 004441c5
    JNZ 0x004441e6                      ; 004441ca
        ;   XREF to: 004441e6 (CONDITIONAL_JUMP)  ; LAB_004441e6
    PUSH 0x1                            ; 004441cc
    PUSH EBX                            ; 004441ce
    CALL support_codec.cpp_CCodec_dtor_FUN_00442bb0 ; 004441cf
        ;   XREF to: 00442bb0 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_dtor_FUN_00442bb0(CCodec * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004441d4
    MOV DL,byte ptr [ESP + 0xc]         ; 004441d7
    MOV EBX,EAX                         ; 004441db
    TEST DL,0x2                         ; 004441dd
    JNZ 0x00444201                      ; 004441e0
        ;   XREF to: 00444201 (CONDITIONAL_JUMP)  ; LAB_00444201
    MOV EAX,EBX                         ; 004441e2
    POP EBX                             ; 004441e4
    RET                                 ; 004441e5
    PUSH 0x5fdb60                       ; 004441e6 | g_CAsciiArmorTypeInfo
        ;   Label: LAB_004441e6
    PUSH EBX                            ; 004441eb
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004441ec
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004441f1
    PUSH EAX                            ; 004441f4
    CALL crt_unknown.c_FUN_005c0336     ; 004441f5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004441fa
    MOV EAX,EBX                         ; 004441fd
    POP EBX                             ; 004441ff
    RET                                 ; 00444200
    PUSH EAX                            ; 00444201
        ;   Label: LAB_00444201
    CALL crt_unknown.c_FUN_005c0344     ; 00444202
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00444207
    MOV EAX,EBX                         ; 0044420a
    POP EBX                             ; 0044420c
    RET                                 ; 0044420d

