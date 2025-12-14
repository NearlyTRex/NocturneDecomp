; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonRaytrace * core_dtrace.cpp_CDemonRaytrace_dtor_FUN_00494240(CDemonRaytrace * this_ptr)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004942d0
;   core_dtrace.cpp_CDemonRaytrace_freeNewCubeList_FUN_00494400
;   core_dtrace.cpp_CDemonRaytrace_freeTriList_FUN_00494690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494240
        ;   Label: core_dtrace.cpp_CDemonRaytrace_dtor_FUN_00494240
    MOV EBX,dword ptr [ESP + 0x8]       ; 00494241
    PUSH EBX                            ; 00494245
    CALL core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004942d0 ; 00494246
        ;   XREF to: 004942d0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004942d0(CDemonRaytrace * this_ptr)
    ADD ESP,0x4                         ; 0049424b
    PUSH EBX                            ; 0049424e
    CALL core_dtrace.cpp_CDemonRaytrace_freeTriList_FUN_00494690 ; 0049424f
        ;   XREF to: 00494690 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_freeTriList_FUN_00494690(CDemonRaytrace * this_ptr)
    ADD ESP,0x4                         ; 00494254
    PUSH EBX                            ; 00494257
    CALL core_dtrace.cpp_CDemonRaytrace_freeNewCubeList_FUN_00494400 ; 00494258
        ;   XREF to: 00494400 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_freeNewCubeList_FUN_00494400(CDemonRaytrace * this_ptr)
    ADD ESP,0x4                         ; 0049425d
    MOV EAX,EBX                         ; 00494260
    POP EBX                             ; 00494262
    RET                                 ; 00494263

