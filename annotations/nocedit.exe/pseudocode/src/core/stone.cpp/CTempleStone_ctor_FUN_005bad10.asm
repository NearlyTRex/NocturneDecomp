; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CTempleStone * core_stone.cpp_CTempleStone_ctor_FUN_005bad10(CTempleStone * this_ptr)
;
; Parameters:
; CTempleStone *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_stone.cpp_FUN_005bacd0 at 005bacea
;
; Referenced Globals:
;   CDemonActor_vtable g_CTempleStoneVTable
;
; Called Functions:
;   core_boxactor.cpp_CBoxActor_ctor_FUN_00421700
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005bad10
        ;   Label: core_stone.cpp_CTempleStone_ctor_FUN_005bad10
    PUSH EDX                            ; 005bad14
    CALL core_boxactor.cpp_CBoxActor_ctor_FUN_00421700 ; 005bad15
        ;   XREF to: 00421700 (UNCONDITIONAL_CALL)  ; CBoxActor * core_boxactor.cpp_CBoxActor_ctor_FUN_00421700(CBoxActor * this_ptr)
    MOV dword ptr [EAX + 0x154],0x663604 ; 005bad1a | g_CTempleStoneVTable
    ADD ESP,0x4                         ; 005bad24
    MOV dword ptr [EAX + 0x66c],0x0     ; 005bad27
    RET                                 ; 005bad31

