; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLaserBeam * __cdecl core_fire_cpp_CLaserBeam_arrdtor64_FUN_0048cdc0(CLaserBeam *this_ptr,uint flags)
;
; Parameters:
; CLaserBeam *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CLaserBeamTypeInfo_0059d420
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59d420                       ; 0048cdc0 | g_CLaserBeamTypeInfo_0059d420
        ;   Label: core_fire.cpp_CLaserBeam_arrdtor64_FUN_0048cdc0
    PUSH 0x40                           ; 0048cdc5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048cdc7
    PUSH EDX                            ; 0048cdcb
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0048cdcc
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0048cdd1
    RET                                 ; 0048cdd4

