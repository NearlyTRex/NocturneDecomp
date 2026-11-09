; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_FUN_00473630(int param_1)
;
;
; XREF[2]:
;   core_dtrace.cpp_CDemonRaytrace_dtor_FUN_004734b0 at 004734c8
;   core_dtrace.cpp_FUN_00473940 at 00473950
;
; Referenced Globals:
;   WatcomTypeInfo g_CDemonCubeTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00473630
        ;   Label: core_dtrace.cpp_FUN_00473630
    MOV EBX,dword ptr [ESP + 0x8]       ; 00473631
    PUSH 0x5dee50                       ; 00473635 | g_CDemonCubeTypeInfo
    MOV EDX,dword ptr [EBX + 0x50]      ; 0047363a
    PUSH EDX                            ; 0047363d
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0047363e
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 00473643
    PUSH EAX                            ; 00473646
    CALL crt_unknown.c_FUN_005a30b6     ; 00473647
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    MOV dword ptr [EBX + 0x50],0x0      ; 0047364c
    MOV dword ptr [EBX + 0x48],0x0      ; 00473653
    MOV EAX,dword ptr [EBX + 0x48]      ; 0047365a
    MOV dword ptr [EBX + 0x44],EAX      ; 0047365d
    ADD ESP,0x4                         ; 00473660
    MOV dword ptr [EBX + 0x40],EAX      ; 00473663
    POP EBX                             ; 00473666
    RET                                 ; 00473667

