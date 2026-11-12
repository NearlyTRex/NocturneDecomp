; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CChemPuzzle * core_bmppuzzl_cpp_CChemPuzzle_ctor_FUN_00413200(CChemPuzzle *this_ptr)
;
; Parameters:
; CChemPuzzle *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_bmppuzzl.cpp_staticInit_FUN_004118e0 at 00411941
;
; Called Functions:
;   core_bmppuzzl.cpp_FUN_00411960
;   crt_memory.c___arrinit_FUN_005a30d7
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00413200
        ;   Label: core_bmppuzzl.cpp_CChemPuzzle_ctor_FUN_00413200
    PUSH EAX                            ; 00413204
    CALL core_bmppuzzl.cpp_FUN_00411960 ; 00413205
        ;   XREF to: 00411960 (UNCONDITIONAL_CALL)  ; undefined core_bmppuzzl.cpp_FUN_00411960()
    ADD ESP,0x4                         ; 0041320a
    ADD EAX,0x4                         ; 0041320d
    PUSH EAX                            ; 00413210
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 00413211
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00413216
    PUSH 0x5dbfa0                       ; 00413219
    PUSH 0x32                           ; 0041321e
    ADD EAX,0x6c                        ; 00413220
    PUSH EAX                            ; 00413223
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 00413224
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    SUB EAX,0x70                        ; 00413229
    ADD ESP,0xc                         ; 0041322c
    MOV dword ptr [EAX],0x5dbee4        ; 0041322f
    RET                                 ; 00413235

