; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTempleStone * __cdecl core_stone_cpp_factoryFunc_FUN_005bacd0(void)
;
;
; XREF[1]:
;   core_stone.cpp_staticInit_FUN_005baca0 at 005bacac
;
; Referenced Globals:
;   TerminatedCString s_core_stone_cpp_00653148
;
; Called Functions:
;   core_stone.cpp_CTempleStone_ctor_FUN_005bad10
;   shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x1e                           ; 005bacd0
        ;   Label: core_stone.cpp_factoryFunc_FUN_005bacd0
    PUSH 0x653148                       ; 005bacd2 | = "..\\core\\stone.cpp"
    PUSH 0x670                          ; 005bacd7
    CALL shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0 ; 005bacdc
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005bace1
    TEST EAX,EAX                        ; 005bace4
    JNZ 0x005bace9                      ; 005bace6
        ;   XREF to: 005bace9 (CONDITIONAL_JUMP)  ; LAB_005bace9
    RET                                 ; 005bace8
    PUSH EAX                            ; 005bace9
        ;   Label: LAB_005bace9
    CALL core_stone.cpp_CTempleStone_ctor_FUN_005bad10 ; 005bacea
        ;   XREF to: 005bad10 (UNCONDITIONAL_CALL)  ; CTempleStone * core_stone.cpp_CTempleStone_ctor_FUN_005bad10(CTempleStone * this_ptr)
    ADD ESP,0x4                         ; 005bacef
    RET                                 ; 005bacf2

