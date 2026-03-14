; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeledit_cpp_CLodMeshPrecomputeEntry_reset_FUN_00589fc0(CLodMeshPrecomputeEntry *this_ptr)
;
; Parameters:
; CLodMeshPrecomputeEntry * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_skeledit.cpp_CLodMeshPrecomputeEntry_ctor_FUN_00589fa0 at 00589fb0
;   core_skeledit.cpp_CLodMeshPrecomputeEntry_load_FUN_00589fe0 at 00589ff8
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    NOP                                 ; 00589fc0
        ;   Label: core_skeledit.cpp_CLodMeshPrecomputeEntry_reset_FUN_00589fc0
    NOP                                 ; 00589fc1
    NOP                                 ; 00589fc2
    NOP                                 ; 00589fc3
    NOP                                 ; 00589fc4
    NOP                                 ; 00589fc5
    NOP                                 ; 00589fc6
    NOP                                 ; 00589fc7
    NOP                                 ; 00589fc8
    NOP                                 ; 00589fc9
    PUSH 0x310                          ; 00589fca
    PUSH 0x0                            ; 00589fcf
    MOV EDX,dword ptr [ESP + 0xc]       ; 00589fd1
    PUSH EDX                            ; 00589fd5
    CALL crt_memory.c_memset_FUN_005fde40 ; 00589fd6
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00589fdb
    RET                                 ; 00589fde

