; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CNecklace * core_necklace_cpp_CNecklace_ctor_FUN_005adab0(CNecklace *this_ptr)
;
; Parameters:
; CNecklace *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_necklace.cpp_factoryFuncNecklace_FUN_005ada80 at 005ada93
;
; Called Functions:
;   core_boxactor.cpp_CBoxActor_ctor_FUN_0041bd30
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005adab0
        ;   Label: core_necklace.cpp_CNecklace_ctor_FUN_005adab0
    PUSH EDX                            ; 005adab4
    CALL core_boxactor.cpp_CBoxActor_ctor_FUN_0041bd30 ; 005adab5
        ;   XREF to: 0041bd30 (UNCONDITIONAL_CALL)  ; CBoxActor * core_boxactor.cpp_CBoxActor_ctor_FUN_0041bd30(CBoxActor * this_ptr)
    ADD ESP,0x4                         ; 005adaba
    MOV dword ptr [EAX + 0x2b0],0x601094 ; 005adabd
    RET                                 ; 005adac7

