; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_manpuz_cpp_FUN_004cc060(undefined4 param_1)
;
;
; XREF[1]:
;   core_manpuz.cpp_CMansionPuzzleCircle_dtor_FUN_004cbe20 at 004cbe35
;
; Referenced Globals:
;   WatcomTypeInfo g_SReflectorTypeInfo_005a0250
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a0250                       ; 004cc060 | g_SReflectorTypeInfo_005a0250
        ;   Label: core_manpuz.cpp_FUN_004cc060
    PUSH 0x2                            ; 004cc065
    MOV EDX,dword ptr [ESP + 0xc]       ; 004cc067
    PUSH EDX                            ; 004cc06b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 004cc06c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 004cc071
    RET                                 ; 004cc074

