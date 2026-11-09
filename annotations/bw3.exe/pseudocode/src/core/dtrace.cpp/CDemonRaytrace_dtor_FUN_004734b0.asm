; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonRaytrace * __cdecl core_dtrace_cpp_CDemonRaytrace_dtor_FUN_004734b0(CDemonRaytrace *this_ptr,uint flags)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_00473530
;   core_dtrace.cpp_FUN_00473630
;   core_dtrace.cpp_FUN_00473860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004734b0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_dtor_FUN_004734b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004734b1
    PUSH EBX                            ; 004734b5
    CALL core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_00473530 ; 004734b6
        ;   XREF to: 00473530 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_00473530(CDemonRaytrace * this_ptr)
    ADD ESP,0x4                         ; 004734bb
    PUSH EBX                            ; 004734be
    CALL core_dtrace.cpp_FUN_00473860   ; 004734bf
        ;   XREF to: 00473860 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00473860()
    ADD ESP,0x4                         ; 004734c4
    PUSH EBX                            ; 004734c7
    CALL core_dtrace.cpp_FUN_00473630   ; 004734c8
        ;   XREF to: 00473630 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00473630()
    ADD ESP,0x4                         ; 004734cd
    MOV EAX,EBX                         ; 004734d0
    POP EBX                             ; 004734d2
    RET                                 ; 004734d3

