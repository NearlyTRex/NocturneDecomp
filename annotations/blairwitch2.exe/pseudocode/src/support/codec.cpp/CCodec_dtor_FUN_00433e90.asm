; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCodec * __cdecl support_codec_cpp_CCodec_dtor_FUN_00433e90(CCodec *this_ptr,uint flags)
;
; Parameters:
; CCodec *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[8]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00441f50 at 00442514
;   core_game.cpp_FUN_004bb9b0 at 004bbd98
;   core_game.cpp_FUN_004bbf70 at 004bc340
;   support_codec.cpp_CAsciiArmor_dtor_FUN_004354a0 at 004354af
;   support_codec.cpp_CAsciiUnarmor_dtor_FUN_00435450 at 0043545f
;   support_codec.cpp_CCheesyCipher_dtor_FUN_00435400 at 0043540f
;   support_codec.cpp_CLZWCompress_dtor_FUN_00435550 at 00435570
;   support_codec.cpp_CLZWDecompress_dtor_FUN_004354f0 at 00435510
;
; Referenced Globals:
;   void* g_CCodecVTable = 00433e90
;   WatcomTypeInfo g_CCodecTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433e90
        ;   Label: support_codec.cpp_CCodec_dtor_FUN_00433e90
    MOV EBX,dword ptr [ESP + 0x8]       ; 00433e91
    MOV EAX,dword ptr [ESP + 0xc]       ; 00433e95
    TEST AL,0x4                         ; 00433e99
    JNZ 0x00433eb1                      ; 00433e9b
        ;   XREF to: 00433eb1 (CONDITIONAL_JUMP)  ; LAB_00433eb1
    MOV dword ptr [EBX],0x5f4224        ; 00433e9d | g_CCodecVTable
    TEST AL,0x2                         ; 00433ea3
    JNZ 0x00433ecc                      ; 00433ea5
        ;   XREF to: 00433ecc (CONDITIONAL_JUMP)  ; LAB_00433ecc
    MOV EAX,EBX                         ; 00433ea7
    POP EBX                             ; 00433ea9
    LEA EAX,[EAX]                       ; 00433eaa
    PUSH 0x5f4370                       ; 00433eb1 | g_CCodecTypeInfo
        ;   Label: LAB_00433eb1
    PUSH EBX                            ; 00433eb6
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 00433eb7
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 00433ebc
    PUSH EAX                            ; 00433ebf
    CALL crt_unknown.c_FUN_005b7fce     ; 00433ec0
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 00433ec5
    MOV EAX,EBX                         ; 00433ec8
    POP EBX                             ; 00433eca
    RET                                 ; 00433ecb
    PUSH EBX                            ; 00433ecc
        ;   Label: LAB_00433ecc
    CALL crt_unknown.c_FUN_005b7fdc     ; 00433ecd
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 00433ed2
    MOV EAX,EBX                         ; 00433ed5
    POP EBX                             ; 00433ed7
    RET                                 ; 00433ed8

