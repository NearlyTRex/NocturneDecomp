; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CChemPuzzle * unkafter_superopt_cpp_CChemPuzzle_dtor_FUN_00417630(CChemPuzzle *this_ptr,uint flags)
;
; Parameters:
; CChemPuzzle *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   undefined1* g_CChemPuzzleVTable = 00417630
;   WatcomTypeInfo g_CChemPuzzleTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0
;   unkafter_alphabit.cpp_FUN_00415bc0
;   unkafter_superopt.cpp_FUN_00418890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00417630
        ;   Label: unkafter_superopt.cpp_CChemPuzzle_dtor_FUN_00417630
    MOV EBX,dword ptr [ESP + 0x8]       ; 00417631
    TEST byte ptr [ESP + 0xc],0x4       ; 00417635
    JNZ 0x0041767b                      ; 0041763a
        ;   XREF to: 0041767b (CONDITIONAL_JUMP)  ; LAB_0041767b
    PUSH 0x0                            ; 0041763c
    MOV dword ptr [EBX],0x5fc9d4        ; 0041763e | g_CChemPuzzleVTable
    ADD EBX,0x70                        ; 00417644
    PUSH EBX                            ; 00417647
    CALL unkafter_superopt.cpp_FUN_00418890 ; 00417648
        ;   XREF to: 00418890 (UNCONDITIONAL_CALL)  ; undefined unkafter_superopt.cpp_FUN_00418890()
    ADD ESP,0x8                         ; 0041764d
    PUSH 0x0                            ; 00417650
    SUB EAX,0x6c                        ; 00417652
    PUSH EAX                            ; 00417655
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0 ; 00417656
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041765b
    PUSH 0x1                            ; 0041765e
    LEA EBX,[EAX + -0x4]                ; 00417660
    PUSH EBX                            ; 00417663
    CALL unkafter_alphabit.cpp_FUN_00415bc0 ; 00417664
        ;   XREF to: 00415bc0 (UNCONDITIONAL_CALL)  ; undefined unkafter_alphabit.cpp_FUN_00415bc0()
    ADD ESP,0x8                         ; 00417669
    MOV DL,byte ptr [ESP + 0xc]         ; 0041766c
    MOV EBX,EAX                         ; 00417670
    TEST DL,0x2                         ; 00417672
    JNZ 0x00417696                      ; 00417675
        ;   XREF to: 00417696 (CONDITIONAL_JUMP)  ; LAB_00417696
    MOV EAX,EBX                         ; 00417677
    POP EBX                             ; 00417679
    RET                                 ; 0041767a
    PUSH 0x5fca70                       ; 0041767b | g_CChemPuzzleTypeInfo
        ;   Label: LAB_0041767b
    PUSH EBX                            ; 00417680
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 00417681
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 00417686
    PUSH EAX                            ; 00417689
    CALL crt_unknown.c_FUN_005c0336     ; 0041768a
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0041768f
    MOV EAX,EBX                         ; 00417692
    POP EBX                             ; 00417694
    RET                                 ; 00417695
    PUSH EAX                            ; 00417696
        ;   Label: LAB_00417696
    CALL crt_unknown.c_FUN_005c0344     ; 00417697
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0041769c
    MOV EAX,EBX                         ; 0041769f
    POP EBX                             ; 004176a1
    RET                                 ; 004176a2

