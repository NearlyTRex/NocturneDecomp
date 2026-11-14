; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CChemPuzzle * __cdecl core_bmppuzzl_cpp_CChemPuzzle_ctor_FUN_004175f0(CChemPuzzle *this_ptr)
;
; Parameters:
; CChemPuzzle *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_bmppuzzl.cpp_staticInit_FUN_00415b20 at 00415b81
;
; Called Functions:
;   core_bmppuzzl.cpp_CPuzzle_ctor_FUN_00415ba0
;   crt_memory.c___arrinit_FUN_005c0357
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004175f0
        ;   Label: core_bmppuzzl.cpp_CChemPuzzle_ctor_FUN_004175f0
    PUSH EAX                            ; 004175f4
    CALL core_bmppuzzl.cpp_CPuzzle_ctor_FUN_00415ba0 ; 004175f5
        ;   XREF to: 00415ba0 (UNCONDITIONAL_CALL)  ; CPuzzle * core_bmppuzzl.cpp_CPuzzle_ctor_FUN_00415ba0(CPuzzle * this_ptr)
    ADD ESP,0x4                         ; 004175fa
    ADD EAX,0x4                         ; 004175fd
    PUSH EAX                            ; 00417600
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0 ; 00417601
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00417606
    PUSH 0x5fca90                       ; 00417609
    PUSH 0x32                           ; 0041760e
    ADD EAX,0x6c                        ; 00417610
    PUSH EAX                            ; 00417613
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 00417614
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    SUB EAX,0x70                        ; 00417619
    ADD ESP,0xc                         ; 0041761c
    MOV dword ptr [EAX],0x5fc9d4        ; 0041761f
    RET                                 ; 00417625

