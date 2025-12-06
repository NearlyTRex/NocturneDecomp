; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_setcolid.cpp_freeRaytraceState_FUN_00574770(SRaytraceState * * array)
;
; Parameters:
; SRaytraceState * * Stack[0x4]:4   array
;
; Referenced Globals:
;   WatcomTypeInfo g_SRaytraceStateTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x662950                       ; 00574770 | WatcomTypeInfo g_SRaytraceStateTypeInfo
        ;   Label: core_setcolid.cpp_freeRaytraceState_FUN_00574770
    PUSH 0x5                            ; 00574775
    MOV EDX,dword ptr [ESP + 0xc]       ; 00574777
    PUSH EDX                            ; 0057477b
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 0057477c | int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00574781
    RET                                 ; 00574784

