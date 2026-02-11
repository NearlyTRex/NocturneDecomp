; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMouse * __cdecl engine_ncursfx_cpp_CMouse_ctor_FUN_00544380(CMouse *ptr)
;
; Parameters:
; CMouse *         Stack[0x4]:4   ptr
;
; XREF[1]:
;   engine_ncursfx.cpp_staticInit_FUN_00544360 at 00544365
;
; Referenced Globals:
;   WatcomTypeInfo g_CAlphaBitmapTypeInfo
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005fe667
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00544380
        ;   Label: engine_ncursfx.cpp_CMouse_ctor_FUN_00544380
    PUSH 0x65e9f0                       ; 00544384 | g_CAlphaBitmapTypeInfo
    PUSH 0x8                            ; 00544389
    PUSH EAX                            ; 0054438b
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 0054438c
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00544391
    PUSH 0x65e9f0                       ; 00544394 | g_CAlphaBitmapTypeInfo
    PUSH 0x7                            ; 00544399
    ADD EAX,0xa0                        ; 0054439b
    PUSH EAX                            ; 005443a0
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 005443a1
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005443a6
    PUSH 0x65e9f0                       ; 005443a9 | g_CAlphaBitmapTypeInfo
    PUSH 0xf                            ; 005443ae
    ADD EAX,0x8c                        ; 005443b0
    PUSH EAX                            ; 005443b5
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 005443b6
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    MOV dword ptr [EAX + 0x12c],0x0     ; 005443bb
    ADD ESP,0xc                         ; 005443c5
    MOV dword ptr [EAX + 0x130],0x0     ; 005443c8
    SUB EAX,0x12c                       ; 005443d2
    RET                                 ; 005443d7

