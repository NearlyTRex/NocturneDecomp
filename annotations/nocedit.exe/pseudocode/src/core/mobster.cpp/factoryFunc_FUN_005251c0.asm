; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMobster * __cdecl core_mobster_cpp_factoryFunc_FUN_005251c0(void)
;
;
; XREF[1]:
;   core_mobster.cpp_staticInit_FUN_00525070 at 0052507c
;
; Referenced Globals:
;   TerminatedCString s_core_mobster_cpp_006396b6
;
; Called Functions:
;   core_mobster.cpp_CMobster_ctor_FUN_00525200
;   shape_memdbg.cpp_debugAllocTracked_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x85                           ; 005251c0
        ;   Label: core_mobster.cpp_factoryFunc_FUN_005251c0
    PUSH 0x6396b6                       ; 005251c5 | = "..\\core\\mobster.cpp"
    PUSH 0xbf94                         ; 005251ca
    CALL shape_memdbg.cpp_debugAllocTracked_FUN_0050f1b0 ; 005251cf
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005251d4
    TEST EAX,EAX                        ; 005251d7
    JNZ 0x005251dc                      ; 005251d9
        ;   XREF to: 005251dc (CONDITIONAL_JUMP)  ; LAB_005251dc
    RET                                 ; 005251db
    PUSH EAX                            ; 005251dc
        ;   Label: LAB_005251dc
    CALL core_mobster.cpp_CMobster_ctor_FUN_00525200 ; 005251dd
        ;   XREF to: 00525200 (UNCONDITIONAL_CALL)  ; CMobster * core_mobster.cpp_CMobster_ctor_FUN_00525200(CMobster * this_ptr)
    ADD ESP,0x4                         ; 005251e2
    RET                                 ; 005251e5

