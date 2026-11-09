; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonRaytrace * __cdecl core_dtrace_cpp_CDemonRaytrace_dtor_FUN_00472440(CDemonRaytrace *this_ptr,uint flags)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004724c0
;   core_dtrace.cpp_FUN_004725c0
;   core_dtrace.cpp_FUN_004727f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00472440
        ;   Label: core_dtrace.cpp_CDemonRaytrace_dtor_FUN_00472440
    MOV EBX,dword ptr [ESP + 0x8]       ; 00472441
    PUSH EBX                            ; 00472445
    CALL core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004724c0 ; 00472446
        ;   XREF to: 004724c0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004724c0(CDemonRaytrace * this_ptr)
    ADD ESP,0x4                         ; 0047244b
    PUSH EBX                            ; 0047244e
    CALL core_dtrace.cpp_FUN_004727f0   ; 0047244f
        ;   XREF to: 004727f0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_004727f0()
    ADD ESP,0x4                         ; 00472454
    PUSH EBX                            ; 00472457
    CALL core_dtrace.cpp_FUN_004725c0   ; 00472458
        ;   XREF to: 004725c0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_004725c0()
    ADD ESP,0x4                         ; 0047245d
    MOV EAX,EBX                         ; 00472460
    POP EBX                             ; 00472462
    RET                                 ; 00472463

