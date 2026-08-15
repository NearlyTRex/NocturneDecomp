; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SBat * __cdecl core_moon_cpp_SBat_arrdtor30_FUN_004df1b0(SBat *this_ptr,uint flags)
;
; Parameters:
; SBat *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_SBatTypeInfo_005a0ca0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a0ca0                       ; 004df1b0 | g_SBatTypeInfo_005a0ca0
        ;   Label: core_moon.cpp_SBat_arrdtor30_FUN_004df1b0
    PUSH 0x1e                           ; 004df1b5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004df1b7
    PUSH EDX                            ; 004df1bb
    CALL crt_memory.c___arrfini_FUN_0056494f ; 004df1bc
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004df1c1
    RET                                 ; 004df1c4

