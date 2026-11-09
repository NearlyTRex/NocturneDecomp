; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTempleStone * __cdecl core_stone_cpp_CTempleStone_ctor_FUN_00568920(CTempleStone *this_ptr)
;
; Parameters:
; CTempleStone *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_stone.cpp_factoryFuncTempleStone_FUN_005688f0 at 00568903
;
; Called Functions:
;   core_boxactor.cpp_CBoxActor_ctor_FUN_0041efe0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00568920
        ;   Label: core_stone.cpp_CTempleStone_ctor_FUN_00568920
    PUSH EDX                            ; 00568924
    CALL core_boxactor.cpp_CBoxActor_ctor_FUN_0041efe0 ; 00568925
        ;   XREF to: 0041efe0 (UNCONDITIONAL_CALL)  ; CBoxActor * core_boxactor.cpp_CBoxActor_ctor_FUN_0041efe0(CBoxActor * this_ptr)
    MOV dword ptr [EAX + 0x154],0x5e4ef4 ; 0056892a
    ADD ESP,0x4                         ; 00568934
    MOV dword ptr [EAX + 0x6e8],0x0     ; 00568937
    RET                                 ; 00568941

