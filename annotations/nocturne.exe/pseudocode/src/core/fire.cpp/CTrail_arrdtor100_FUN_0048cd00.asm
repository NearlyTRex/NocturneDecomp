; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTrail * __cdecl core_fire_cpp_CTrail_arrdtor100_FUN_0048cd00(CTrail *this_ptr,uint flags)
;
; Parameters:
; CTrail *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CTrailTypeInfo_0059d4e0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59d4e0                       ; 0048cd00 | g_CTrailTypeInfo_0059d4e0
        ;   Label: core_fire.cpp_CTrail_arrdtor100_FUN_0048cd00
    PUSH 0x64                           ; 0048cd05
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048cd07
    PUSH EDX                            ; 0048cd0b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0048cd0c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0048cd11
    RET                                 ; 0048cd14

