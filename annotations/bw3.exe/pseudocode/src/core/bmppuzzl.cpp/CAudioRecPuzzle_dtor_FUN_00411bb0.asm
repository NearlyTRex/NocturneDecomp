; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAudioRecPuzzle * core_bmppuzzl_cpp_CAudioRecPuzzle_dtor_FUN_00411bb0(CAudioRecPuzzle *this_ptr,uint flags)
;
; Parameters:
; CAudioRecPuzzle * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   undefined1* g_CAudioRecPuzzleVTable = 00411bb0
;   WatcomTypeInfo g_CAudioRecPuzzleTypeInfo
;
; Called Functions:
;   core_bmppuzzl.cpp_FUN_00411980
;   core_bmppuzzl.cpp_FUN_004144c0
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411bb0
        ;   Label: core_bmppuzzl.cpp_CAudioRecPuzzle_dtor_FUN_00411bb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00411bb1
    TEST byte ptr [ESP + 0xc],0x4       ; 00411bb5
    JNZ 0x00411bfb                      ; 00411bba
        ;   XREF to: 00411bfb (CONDITIONAL_JUMP)  ; LAB_00411bfb
    PUSH 0x0                            ; 00411bbc
    MOV dword ptr [EBX],0x5dbe84        ; 00411bbe | g_CAudioRecPuzzleVTable
    ADD EBX,0x54                        ; 00411bc4
    PUSH EBX                            ; 00411bc7
    CALL core_bmppuzzl.cpp_FUN_004144c0 ; 00411bc8
        ;   XREF to: 004144c0 (UNCONDITIONAL_CALL)  ; undefined core_bmppuzzl.cpp_FUN_004144c0()
    ADD ESP,0x8                         ; 00411bcd
    PUSH 0x0                            ; 00411bd0
    SUB EAX,0x50                        ; 00411bd2
    PUSH EAX                            ; 00411bd5
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300 ; 00411bd6
        ;   XREF to: 0040d300 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00411bdb
    PUSH 0x1                            ; 00411bde
    LEA EBX,[EAX + -0x4]                ; 00411be0
    PUSH EBX                            ; 00411be3
    CALL core_bmppuzzl.cpp_FUN_00411980 ; 00411be4
        ;   XREF to: 00411980 (UNCONDITIONAL_CALL)  ; undefined core_bmppuzzl.cpp_FUN_00411980()
    ADD ESP,0x8                         ; 00411be9
    MOV DL,byte ptr [ESP + 0xc]         ; 00411bec
    MOV EBX,EAX                         ; 00411bf0
    TEST DL,0x2                         ; 00411bf2
    JNZ 0x00411c16                      ; 00411bf5
        ;   XREF to: 00411c16 (CONDITIONAL_JUMP)  ; LAB_00411c16
    MOV EAX,EBX                         ; 00411bf7
    POP EBX                             ; 00411bf9
    RET                                 ; 00411bfa
    PUSH 0x5dbf40                       ; 00411bfb | g_CAudioRecPuzzleTypeInfo
        ;   Label: LAB_00411bfb
    PUSH EBX                            ; 00411c00
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00411c01
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00411c06
    PUSH EAX                            ; 00411c09
    CALL crt_unknown.c_FUN_005a30b6     ; 00411c0a
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00411c0f
    MOV EAX,EBX                         ; 00411c12
    POP EBX                             ; 00411c14
    RET                                 ; 00411c15
    PUSH EAX                            ; 00411c16
        ;   Label: LAB_00411c16
    CALL crt_unknown.c_FUN_005a30c4     ; 00411c17
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00411c1c
    MOV EAX,EBX                         ; 00411c1f
    POP EBX                             ; 00411c21
    RET                                 ; 00411c22

