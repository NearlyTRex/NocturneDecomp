; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bodypart_cpp_FUN_00417d10(undefined4 param_1)
;
;
; XREF[1]:
;   core_bodypart.cpp_CBodyPart_dtor_FUN_00415800 at 0041583c
;
; Referenced Globals:
;   WatcomTypeInfo g_SBodyPartFireTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f37d0                       ; 00417d10 | g_SBodyPartFireTypeInfo
        ;   Label: core_bodypart.cpp_FUN_00417d10
    PUSH 0x2                            ; 00417d15
    MOV EDX,dword ptr [ESP + 0xc]       ; 00417d17
    PUSH EDX                            ; 00417d1b
    CALL crt_memory.c___arrfini_FUN_005b854f ; 00417d1c
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005b854f()
    ADD ESP,0xc                         ; 00417d21
    RET                                 ; 00417d24

