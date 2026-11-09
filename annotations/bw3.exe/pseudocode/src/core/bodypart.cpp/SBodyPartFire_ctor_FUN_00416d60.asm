; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_ctor_FUN_00416d60(SBodyPartFire *this_ptr)
;
; Parameters:
; SBodyPartFire *  Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_flame.cpp_CFlame_ctor_FUN_004a59b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00416d60
        ;   Label: core_bodypart.cpp_SBodyPartFire_ctor_FUN_00416d60
    ADD EAX,0xc                         ; 00416d64
    PUSH EAX                            ; 00416d67
    CALL core_flame.cpp_CFlame_ctor_FUN_004a59b0 ; 00416d68
        ;   XREF to: 004a59b0 (UNCONDITIONAL_CALL)  ; CFlame * core_flame.cpp_CFlame_ctor_FUN_004a59b0(CFlame * this_ptr)
    ADD ESP,0x4                         ; 00416d6d
    SUB EAX,0xc                         ; 00416d70
    RET                                 ; 00416d73

