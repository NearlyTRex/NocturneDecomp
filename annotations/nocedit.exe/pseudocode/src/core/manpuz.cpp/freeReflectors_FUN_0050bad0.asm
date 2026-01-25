; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_manpuz.cpp_freeReflectors_FUN_0050bad0(SReflector * * objs)
;
; Parameters:
; SReflector * *   Stack[0x4]:4   objs
;
; XREF[1]:
;   core_manpuz.cpp_CMansionPuzzleCircle_dtor_FUN_0050b890 at 0050b8a5
;
; Referenced Globals:
;   WatcomTypeInfo g_SReflectorTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x660fc0                       ; 0050bad0 | g_SReflectorTypeInfo
        ;   Label: core_manpuz.cpp_freeReflectors_FUN_0050bad0
    PUSH 0x2                            ; 0050bad5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050bad7
    PUSH EDX                            ; 0050badb
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 0050badc
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0050bae1
    RET                                 ; 0050bae4

