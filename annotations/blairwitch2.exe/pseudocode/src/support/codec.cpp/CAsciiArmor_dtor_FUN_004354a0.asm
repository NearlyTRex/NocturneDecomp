; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAsciiArmor * support_codec_cpp_CAsciiArmor_dtor_FUN_004354a0(CAsciiArmor *this_ptr,uint flags)
;
; Parameters:
; CAsciiArmor *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CAsciiArmorTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;   support_codec.cpp_CCodec_dtor_FUN_00433e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004354a0
        ;   Label: support_codec.cpp_CAsciiArmor_dtor_FUN_004354a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004354a1
    TEST byte ptr [ESP + 0xc],0x4       ; 004354a5
    JNZ 0x004354c6                      ; 004354aa
        ;   XREF to: 004354c6 (CONDITIONAL_JUMP)  ; LAB_004354c6
    PUSH 0x1                            ; 004354ac
    PUSH EBX                            ; 004354ae
    CALL support_codec.cpp_CCodec_dtor_FUN_00433e90 ; 004354af
        ;   XREF to: 00433e90 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_dtor_FUN_00433e90(CCodec * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004354b4
    MOV DL,byte ptr [ESP + 0xc]         ; 004354b7
    MOV EBX,EAX                         ; 004354bb
    TEST DL,0x2                         ; 004354bd
    JNZ 0x004354e1                      ; 004354c0
        ;   XREF to: 004354e1 (CONDITIONAL_JUMP)  ; LAB_004354e1
    MOV EAX,EBX                         ; 004354c2
    POP EBX                             ; 004354c4
    RET                                 ; 004354c5
    PUSH 0x5f4430                       ; 004354c6 | g_CAsciiArmorTypeInfo
        ;   Label: LAB_004354c6
    PUSH EBX                            ; 004354cb
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 004354cc
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 004354d1
    PUSH EAX                            ; 004354d4
    CALL crt_unknown.c_FUN_005b7fce     ; 004354d5
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 004354da
    MOV EAX,EBX                         ; 004354dd
    POP EBX                             ; 004354df
    RET                                 ; 004354e0
    PUSH EAX                            ; 004354e1
        ;   Label: LAB_004354e1
    CALL crt_unknown.c_FUN_005b7fdc     ; 004354e2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 004354e7
    MOV EAX,EBX                         ; 004354ea
    POP EBX                             ; 004354ec
    RET                                 ; 004354ed

