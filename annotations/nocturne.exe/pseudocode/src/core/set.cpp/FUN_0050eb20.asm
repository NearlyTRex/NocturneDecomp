; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_FUN_0050eb20(undefined4 param_1)
;
;
; XREF[1]:
;   core_set.cpp_CDemonSet_dtor_FUN_00506e50 at 00506e87
;
; Referenced Globals:
;   WatcomTypeInfo g_C3DSLightTypeInfo_005a1990
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a1990                       ; 0050eb20 | g_C3DSLightTypeInfo_005a1990
        ;   Label: core_set.cpp_FUN_0050eb20
    PUSH 0xc8                           ; 0050eb25
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050eb2a
    PUSH EDX                            ; 0050eb2e
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0050eb2f
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 0050eb34
    RET                                 ; 0050eb37

