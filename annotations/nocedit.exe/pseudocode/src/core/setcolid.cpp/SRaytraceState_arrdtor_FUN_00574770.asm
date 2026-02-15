; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SRaytraceState * __cdecl core_setcolid_cpp_SRaytraceState_arrdtor_FUN_00574770(SRaytraceState *objs,uint flags)
;
; Parameters:
; SRaytraceState * Stack[0x4]:4   objs
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_SRaytraceStateTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x662950                       ; 00574770 | g_SRaytraceStateTypeInfo
        ;   Label: core_setcolid.cpp_SRaytraceState_arrdtor_FUN_00574770
    PUSH 0x5                            ; 00574775
    MOV EDX,dword ptr [ESP + 0xc]       ; 00574777
    PUSH EDX                            ; 0057477b
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 0057477c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00574781
    RET                                 ; 00574784

