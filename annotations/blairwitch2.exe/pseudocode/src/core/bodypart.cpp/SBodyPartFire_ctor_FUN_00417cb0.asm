; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_ctor_FUN_00417cb0(SBodyPartFire *this_ptr)
;
; Parameters:
; SBodyPartFire *  Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_flame.cpp_CFlame_ctor_FUN_0049f180
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00417cb0
        ;   Label: core_bodypart.cpp_SBodyPartFire_ctor_FUN_00417cb0
    ADD EAX,0xc                         ; 00417cb4
    PUSH EAX                            ; 00417cb7
    CALL core_flame.cpp_CFlame_ctor_FUN_0049f180 ; 00417cb8
        ;   XREF to: 0049f180 (UNCONDITIONAL_CALL)  ; CFlame * core_flame.cpp_CFlame_ctor_FUN_0049f180(CFlame * this_ptr)
    ADD ESP,0x4                         ; 00417cbd
    SUB EAX,0xc                         ; 00417cc0
    RET                                 ; 00417cc3

