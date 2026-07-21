; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_bodypart_cpp_SBodyPartFire_ctor_FUN_004180a0(int param_1)
;
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
        ;   XREF to: 0048cf60 (UNCONDITIONAL_CALL)  ; undefined core_flame.cpp_CFlame_ctor_FUN_0048cf60()
    ADD ESP,0x4                         ; 004180ad
    SUB EAX,0xc                         ; 004180b0
    RET                                 ; 004180b3

