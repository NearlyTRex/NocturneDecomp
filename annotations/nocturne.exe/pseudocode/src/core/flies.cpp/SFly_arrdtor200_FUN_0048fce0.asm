; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SFly * __cdecl core_flies_cpp_SFly_arrdtor200_FUN_0048fce0(SFly *this_ptr,uint flags)
;
; Parameters:
; SFly *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_flies.cpp_CFlies_dtor_FUN_0048fc30 at 0048fc45
;
; Referenced Globals:
;   WatcomTypeInfo g_SFlyTypeInfo_0059db10
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59db10                       ; 0048fce0 | g_SFlyTypeInfo_0059db10
        ;   Label: core_flies.cpp_SFly_arrdtor200_FUN_0048fce0
    PUSH 0xc8                           ; 0048fce5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048fcea
    PUSH EDX                            ; 0048fcee
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0048fcef
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0048fcf4
    RET                                 ; 0048fcf7

