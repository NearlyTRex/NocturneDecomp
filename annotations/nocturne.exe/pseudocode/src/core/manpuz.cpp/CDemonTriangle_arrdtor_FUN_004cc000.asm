; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CDemonTriangle_arrdtor_FUN_004cc000(undefined4 param_1)
;
;
; XREF[1]:
;   core_manpuz.cpp_SGem_dtor_FUN_004cbef0 at 004cbefa
;
; Referenced Globals:
;   WatcomTypeInfo g_CDemonTriangleTypeInfo_0059c080
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59c080                       ; 004cc000 | g_CDemonTriangleTypeInfo_0059c080
        ;   Label: core_manpuz.cpp_CDemonTriangle_arrdtor_FUN_004cc000
    PUSH 0x2                            ; 004cc005
    MOV EDX,dword ptr [ESP + 0xc]       ; 004cc007
    PUSH EDX                            ; 004cc00b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 004cc00c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 004cc011
    RET                                 ; 004cc014

