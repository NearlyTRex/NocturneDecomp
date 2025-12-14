; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_wateract.cpp_FUN_005ebcf0()
;
;
; XREF[1]:
;   core_wateract.cpp_CWaterActor_dtor_FUN_005ebc60 at 005ebc75
;
; Referenced Globals:
;   WatcomTypeInfo g_SWaterVertexTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x665420                       ; 005ebcf0 | g_SWaterVertexTypeInfo
        ;   Label: core_wateract.cpp_FUN_005ebcf0
    PUSH 0x3e8                          ; 005ebcf5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005ebcfa
    PUSH EDX                            ; 005ebcfe
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 005ebcff
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005ebd04
    RET                                 ; 005ebd07

