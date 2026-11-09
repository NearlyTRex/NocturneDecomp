; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTempleStone * __cdecl core_stone_cpp_CTempleStone_ctor_FUN_00584eb0(CTempleStone *this_ptr)
;
; Parameters:
; CTempleStone *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_stone.cpp_factoryFuncTempleStone_FUN_00584e80 at 00584e93
;
; Called Functions:
;   core_boxactor.cpp_CBoxActor_ctor_FUN_00421ca0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00584eb0
        ;   Label: core_stone.cpp_CTempleStone_ctor_FUN_00584eb0
    PUSH EDX                            ; 00584eb4
    CALL core_boxactor.cpp_CBoxActor_ctor_FUN_00421ca0 ; 00584eb5
        ;   XREF to: 00421ca0 (UNCONDITIONAL_CALL)  ; CBoxActor * core_boxactor.cpp_CBoxActor_ctor_FUN_00421ca0(CBoxActor * this_ptr)
    MOV dword ptr [EAX + 0x154],0x605f54 ; 00584eba
    ADD ESP,0x4                         ; 00584ec4
    MOV dword ptr [EAX + 0x678],0x0     ; 00584ec7
    RET                                 ; 00584ed1

