; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTempleStone * __cdecl core_stone_cpp_CTempleStone_ctor_FUN_00562430(CTempleStone *this_ptr)
;
; Parameters:
; CTempleStone *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_stone.cpp_factoryFuncTempleStone_FUN_00562400 at 00562413
;
; Called Functions:
;   core_boxactor.cpp_CBoxActor_ctor_FUN_0041bd30
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00562430
        ;   Label: core_stone.cpp_CTempleStone_ctor_FUN_00562430
    PUSH EDX                            ; 00562434
    CALL core_boxactor.cpp_CBoxActor_ctor_FUN_0041bd30 ; 00562435
        ;   XREF to: 0041bd30 (UNCONDITIONAL_CALL)  ; CBoxActor * core_boxactor.cpp_CBoxActor_ctor_FUN_0041bd30(CBoxActor * this_ptr)
    MOV dword ptr [EAX + 0x2b0],0x5fc094 ; 0056243a
    ADD ESP,0x4                         ; 00562444
    MOV dword ptr [EAX + 0x7d4],0x0     ; 00562447
    RET                                 ; 00562451

