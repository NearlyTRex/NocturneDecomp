; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAudioRecPuzzle * __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_dtor_FUN_00415df0(CAudioRecPuzzle *this_ptr,uint flags)
;
; Parameters:
; CAudioRecPuzzle * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   undefined1* g_CAudioRecPuzzleVTable = 00415df0
;   WatcomTypeInfo g_CAudioRecPuzzleTypeInfo
;
; Called Functions:
;   core_bmppuzzl.cpp_CPuzzle_dtor_FUN_00415bc0
;   core_bmppuzzl.cpp_SButtonStruct_arrdtor50_FUN_004188b0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415df0
        ;   Label: core_bmppuzzl.cpp_CAudioRecPuzzle_dtor_FUN_00415df0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00415df1
    TEST byte ptr [ESP + 0xc],0x4       ; 00415df5
    JNZ 0x00415e3b                      ; 00415dfa
        ;   XREF to: 00415e3b (CONDITIONAL_JUMP)  ; LAB_00415e3b
    PUSH 0x0                            ; 00415dfc
    MOV dword ptr [EBX],0x5fc974        ; 00415dfe | g_CAudioRecPuzzleVTable
    ADD EBX,0x60                        ; 00415e04
    PUSH EBX                            ; 00415e07
    CALL core_bmppuzzl.cpp_SButtonStruct_arrdtor50_FUN_004188b0 ; 00415e08
        ;   XREF to: 004188b0 (UNCONDITIONAL_CALL)  ; SButtonStruct * core_bmppuzzl.cpp_SButtonStruct_arrdtor50_FUN_004188b0(SButtonStruct * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00415e0d
    PUSH 0x0                            ; 00415e10
    SUB EAX,0x5c                        ; 00415e12
    PUSH EAX                            ; 00415e15
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0 ; 00415e16
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00415e1b
    PUSH 0x1                            ; 00415e1e
    LEA EBX,[EAX + -0x4]                ; 00415e20
    PUSH EBX                            ; 00415e23
    CALL core_bmppuzzl.cpp_CPuzzle_dtor_FUN_00415bc0 ; 00415e24
        ;   XREF to: 00415bc0 (UNCONDITIONAL_CALL)  ; CPuzzle * core_bmppuzzl.cpp_CPuzzle_dtor_FUN_00415bc0(CPuzzle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00415e29
    MOV DL,byte ptr [ESP + 0xc]         ; 00415e2c
    MOV EBX,EAX                         ; 00415e30
    TEST DL,0x2                         ; 00415e32
    JNZ 0x00415e56                      ; 00415e35
        ;   XREF to: 00415e56 (CONDITIONAL_JUMP)  ; LAB_00415e56
    MOV EAX,EBX                         ; 00415e37
    POP EBX                             ; 00415e39
    RET                                 ; 00415e3a
    PUSH 0x5fca30                       ; 00415e3b | g_CAudioRecPuzzleTypeInfo
        ;   Label: LAB_00415e3b
    PUSH EBX                            ; 00415e40
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 00415e41
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00415e46
    PUSH EAX                            ; 00415e49
    CALL crt_unknown.c_FUN_005c0336     ; 00415e4a
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00415e4f
    MOV EAX,EBX                         ; 00415e52
    POP EBX                             ; 00415e54
    RET                                 ; 00415e55
    PUSH EAX                            ; 00415e56
        ;   Label: LAB_00415e56
    CALL crt_unknown.c_FUN_005c0344     ; 00415e57
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00415e5c
    MOV EAX,EBX                         ; 00415e5f
    POP EBX                             ; 00415e61
    RET                                 ; 00415e62

