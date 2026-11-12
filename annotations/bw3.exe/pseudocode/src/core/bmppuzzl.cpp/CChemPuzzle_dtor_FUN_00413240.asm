; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CChemPuzzle * core_bmppuzzl_cpp_CChemPuzzle_dtor_FUN_00413240(CChemPuzzle *this_ptr,uint flags)
;
; Parameters:
; CChemPuzzle *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   undefined1* g_CChemPuzzleVTable = 00413240
;   WatcomTypeInfo g_CChemPuzzleTypeInfo
;
; Called Functions:
;   core_bmppuzzl.cpp_FUN_00411980
;   core_bmppuzzl.cpp_FUN_004144a0
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00413240
        ;   Label: core_bmppuzzl.cpp_CChemPuzzle_dtor_FUN_00413240
    MOV EBX,dword ptr [ESP + 0x8]       ; 00413241
    TEST byte ptr [ESP + 0xc],0x4       ; 00413245
    JNZ 0x0041328b                      ; 0041324a
        ;   XREF to: 0041328b (CONDITIONAL_JUMP)  ; LAB_0041328b
    PUSH 0x0                            ; 0041324c
    MOV dword ptr [EBX],0x5dbee4        ; 0041324e | g_CChemPuzzleVTable
    ADD EBX,0x70                        ; 00413254
    PUSH EBX                            ; 00413257
    CALL core_bmppuzzl.cpp_FUN_004144a0 ; 00413258
        ;   XREF to: 004144a0 (UNCONDITIONAL_CALL)  ; undefined core_bmppuzzl.cpp_FUN_004144a0()
    ADD ESP,0x8                         ; 0041325d
    PUSH 0x0                            ; 00413260
    SUB EAX,0x6c                        ; 00413262
    PUSH EAX                            ; 00413265
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300 ; 00413266
        ;   XREF to: 0040d300 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041326b
    PUSH 0x1                            ; 0041326e
    LEA EBX,[EAX + -0x4]                ; 00413270
    PUSH EBX                            ; 00413273
    CALL core_bmppuzzl.cpp_FUN_00411980 ; 00413274
        ;   XREF to: 00411980 (UNCONDITIONAL_CALL)  ; undefined core_bmppuzzl.cpp_FUN_00411980()
    ADD ESP,0x8                         ; 00413279
    MOV DL,byte ptr [ESP + 0xc]         ; 0041327c
    MOV EBX,EAX                         ; 00413280
    TEST DL,0x2                         ; 00413282
    JNZ 0x004132a6                      ; 00413285
        ;   XREF to: 004132a6 (CONDITIONAL_JUMP)  ; LAB_004132a6
    MOV EAX,EBX                         ; 00413287
    POP EBX                             ; 00413289
    RET                                 ; 0041328a
    PUSH 0x5dbf80                       ; 0041328b | g_CChemPuzzleTypeInfo
        ;   Label: LAB_0041328b
    PUSH EBX                            ; 00413290
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00413291
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00413296
    PUSH EAX                            ; 00413299
    CALL crt_unknown.c_FUN_005a30b6     ; 0041329a
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0041329f
    MOV EAX,EBX                         ; 004132a2
    POP EBX                             ; 004132a4
    RET                                 ; 004132a5
    PUSH EAX                            ; 004132a6
        ;   Label: LAB_004132a6
    CALL crt_unknown.c_FUN_005a30c4     ; 004132a7
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004132ac
    MOV EAX,EBX                         ; 004132af
    POP EBX                             ; 004132b1
    RET                                 ; 004132b2

