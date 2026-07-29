; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_ctor_FUN_004180a0(SBodyPartFire *this_ptr)
;
; Parameters:
; SBodyPartFire *  Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_flame.cpp_CFlame_ctor_FUN_0048cf60
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004180a0
        ;   Label: core_bodypart.cpp_SBodyPartFire_ctor_FUN_004180a0
    ADD EAX,0xc                         ; 004180a4
    PUSH EAX                            ; 004180a7
    CALL core_flame.cpp_CFlame_ctor_FUN_0048cf60 ; 004180a8
        ;   XREF to: 0048cf60 (UNCONDITIONAL_CALL)  ; CFlame * core_flame.cpp_CFlame_ctor_FUN_0048cf60(CFlame * this_ptr)
    ADD ESP,0x4                         ; 004180ad
    SUB EAX,0xc                         ; 004180b0
    RET                                 ; 004180b3

