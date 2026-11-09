; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_ctor_FUN_0041b130(SBodyPartFire *this_ptr)
;
; Parameters:
; SBodyPartFire *  Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_flame.cpp_CFlame_ctor_FUN_004b7a30
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041b130
        ;   Label: core_bodypart.cpp_SBodyPartFire_ctor_FUN_0041b130
    ADD EAX,0xc                         ; 0041b134
    PUSH EAX                            ; 0041b137
    CALL core_flame.cpp_CFlame_ctor_FUN_004b7a30 ; 0041b138
        ;   XREF to: 004b7a30 (UNCONDITIONAL_CALL)  ; CFlame * core_flame.cpp_CFlame_ctor_FUN_004b7a30(CFlame * this_ptr)
    ADD ESP,0x4                         ; 0041b13d
    SUB EAX,0xc                         ; 0041b140
    RET                                 ; 0041b143

