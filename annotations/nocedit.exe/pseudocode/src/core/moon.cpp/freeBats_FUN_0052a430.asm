; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SBat * __cdecl core_moon_cpp_freeBats_FUN_0052a430(SBat *objs)
;
; Parameters:
; SBat *           Stack[0x4]:4   objs
;
; Referenced Globals:
;   WatcomTypeInfo g_SBatTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x661b20                       ; 0052a430 | g_SBatTypeInfo
        ;   Label: core_moon.cpp_freeBats_FUN_0052a430
    PUSH 0x1e                           ; 0052a435
    MOV EDX,dword ptr [ESP + 0xc]       ; 0052a437
    PUSH EDX                            ; 0052a43b
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 0052a43c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0052a441
    RET                                 ; 0052a444

