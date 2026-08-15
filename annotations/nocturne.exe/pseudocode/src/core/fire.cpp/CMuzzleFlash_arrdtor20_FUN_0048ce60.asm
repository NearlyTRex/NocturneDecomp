; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMuzzleFlash * __cdecl core_fire_cpp_CMuzzleFlash_arrdtor20_FUN_0048ce60(CMuzzleFlash *this_ptr,uint flags)
;
; Parameters:
; CMuzzleFlash *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CMuzzleFlashTypeInfo_0059d380
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59d380                       ; 0048ce60 | g_CMuzzleFlashTypeInfo_0059d380
        ;   Label: core_fire.cpp_CMuzzleFlash_arrdtor20_FUN_0048ce60
    PUSH 0x14                           ; 0048ce65
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048ce67
    PUSH EDX                            ; 0048ce6b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0048ce6c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0048ce71
    RET                                 ; 0048ce74

