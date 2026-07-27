; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stairs_cpp_SFly_arrdtor_FUN_00534c80(undefined4 param_1)
;
;
; XREF[1]:
;   core_stairs.cpp_CFlies_dtor_FUN_00534c10 at 00534c25
;
; Referenced Globals:
;   WatcomTypeInfo g_CDemonTriangleTypeInfo_0059c080
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59c080                       ; 00534c80 | g_CDemonTriangleTypeInfo_0059c080
        ;   Label: core_stairs.cpp_SFly_arrdtor_FUN_00534c80
    PUSH 0x28                           ; 00534c85
    MOV EDX,dword ptr [ESP + 0xc]       ; 00534c87
    PUSH EDX                            ; 00534c8b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 00534c8c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 00534c91
    RET                                 ; 00534c94

