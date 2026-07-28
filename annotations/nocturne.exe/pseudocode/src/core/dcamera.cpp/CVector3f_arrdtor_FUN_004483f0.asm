; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcamera_cpp_CVector3f_arrdtor_FUN_004483f0(void)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo_005993b0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5993b0                       ; 004483f0 | g_CVectorTypeInfo_005993b0
        ;   Label: core_dcamera.cpp_CVector3f_arrdtor_FUN_004483f0
    PUSH 0x12d40                        ; 004483f5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004483fa
    PUSH EDX                            ; 004483fe
    CALL crt_memory.c___arrfini_FUN_0056494f ; 004483ff
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00448404
    RET                                 ; 00448407

