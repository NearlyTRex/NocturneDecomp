; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_FUN_004725c0(int param_1)
;
;
; XREF[2]:
;   core_dtrace.cpp_CDemonRaytrace_dtor_FUN_00472440 at 00472458
;   core_dtrace.cpp_FUN_004728d0 at 004728e0
;
; Referenced Globals:
;   WatcomTypeInfo g_CDemonCubeTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004725c0
        ;   Label: core_dtrace.cpp_FUN_004725c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004725c1
    PUSH 0x5f5b30                       ; 004725c5 | g_CDemonCubeTypeInfo
    MOV EDX,dword ptr [EBX + 0x50]      ; 004725ca
    PUSH EDX                            ; 004725cd
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 004725ce
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 004725d3
    PUSH EAX                            ; 004725d6
    CALL crt_unknown.c_FUN_005b7fce     ; 004725d7
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    MOV dword ptr [EBX + 0x50],0x0      ; 004725dc
    MOV dword ptr [EBX + 0x48],0x0      ; 004725e3
    MOV EAX,dword ptr [EBX + 0x48]      ; 004725ea
    MOV dword ptr [EBX + 0x44],EAX      ; 004725ed
    ADD ESP,0x4                         ; 004725f0
    MOV dword ptr [EBX + 0x40],EAX      ; 004725f3
    POP EBX                             ; 004725f6
    RET                                 ; 004725f7

