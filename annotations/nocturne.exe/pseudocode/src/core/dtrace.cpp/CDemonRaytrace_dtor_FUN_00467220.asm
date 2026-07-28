; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonRaytrace * core_dtrace_cpp_CDemonRaytrace_dtor_FUN_00467220(CDemonRaytrace *param_1)
;
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004672a0
;   core_dtrace.cpp_FUN_004673a0
;   core_dtrace.cpp_FUN_004675e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00467220
        ;   Label: core_dtrace.cpp_CDemonRaytrace_dtor_FUN_00467220
    MOV EBX,dword ptr [ESP + 0x8]       ; 00467221
    PUSH EBX                            ; 00467225
    CALL core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004672a0 ; 00467226
        ;   XREF to: 004672a0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004672a0(CDemonRaytrace * this_ptr)
    ADD ESP,0x4                         ; 0046722b
    PUSH EBX                            ; 0046722e
    CALL core_dtrace.cpp_FUN_004675e0   ; 0046722f
        ;   XREF to: 004675e0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_004675e0()
    ADD ESP,0x4                         ; 00467234
    PUSH EBX                            ; 00467237
    CALL core_dtrace.cpp_FUN_004673a0   ; 00467238
        ;   XREF to: 004673a0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_004673a0()
    ADD ESP,0x4                         ; 0046723d
    MOV EAX,EBX                         ; 00467240
    POP EBX                             ; 00467242
    RET                                 ; 00467243

