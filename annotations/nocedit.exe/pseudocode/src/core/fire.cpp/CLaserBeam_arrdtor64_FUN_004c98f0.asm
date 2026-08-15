; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLaserBeam * __cdecl core_fire_cpp_CLaserBeam_arrdtor64_FUN_004c98f0(CLaserBeam *this_ptr,uint flags)
;
; Parameters:
; CLaserBeam *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CLaserBeamTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65ded0                       ; 004c98f0 | g_CLaserBeamTypeInfo
        ;   Label: core_fire.cpp_CLaserBeam_arrdtor64_FUN_004c98f0
    PUSH 0x40                           ; 004c98f5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c98f7
    PUSH EDX                            ; 004c98fb
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 004c98fc
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004c9901
    RET                                 ; 004c9904

