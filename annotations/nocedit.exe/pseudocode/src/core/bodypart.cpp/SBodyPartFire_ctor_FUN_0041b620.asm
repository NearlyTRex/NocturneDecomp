; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_ctor_FUN_0041b620(SBodyPartFire *this_ptr)
;
; Parameters:
; SBodyPartFire *  Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_flame.cpp_CFlame_ctor_FUN_004c9aa0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041b620
        ;   Label: core_bodypart.cpp_SBodyPartFire_ctor_FUN_0041b620
    ADD EAX,0xc                         ; 0041b624
    PUSH EAX                            ; 0041b627
    CALL core_flame.cpp_CFlame_ctor_FUN_004c9aa0 ; 0041b628
        ;   XREF to: 004c9aa0 (UNCONDITIONAL_CALL)  ; CFlame * core_flame.cpp_CFlame_ctor_FUN_004c9aa0(CFlame * this_ptr)
    ADD ESP,0x4                         ; 0041b62d
    SUB EAX,0xc                         ; 0041b630
    RET                                 ; 0041b633

