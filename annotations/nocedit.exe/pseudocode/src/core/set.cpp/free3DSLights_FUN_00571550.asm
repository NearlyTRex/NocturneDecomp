; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_set.cpp_free3DSLights_FUN_00571550(C3DSLight * * array)
;
; Parameters:
; C3DSLight * *    Stack[0x4]:4   array
;
; XREF[1]:
;   core_set.cpp_CDemonSet_dtor_FUN_00569350 at 00569387
;
; Referenced Globals:
;   WatcomTypeInfo g_C3DSLightTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x6628d0                       ; 00571550 | g_C3DSLightTypeInfo
        ;   Label: core_set.cpp_free3DSLights_FUN_00571550
    PUSH 0xc8                           ; 00571555
    MOV EDX,dword ptr [ESP + 0xc]       ; 0057155a
    PUSH EDX                            ; 0057155e
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 0057155f
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00571564
    RET                                 ; 00571567

