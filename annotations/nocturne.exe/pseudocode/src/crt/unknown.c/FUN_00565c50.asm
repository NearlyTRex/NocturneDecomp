; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00565c50(int param_1,int param_2)
;
;
; XREF[7]:
;   FUN_0056e254 at 0056e284
;   FUN_0056e56c at 0056e57e
;   FUN_005711a8 at 00571207
;   FUN_00571280 at 00571295
;   core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_0044ac30 at 0044ac3a
;   core_dpart.cpp_CDemonPart_alloc_FUN_00456f60 at 00456f98
;   core_dtrace.cpp_CDemonRaytrace_allocCubeList_FUN_00467250 at 00467264
;
; Called Functions:
;   crt_memory.c_malloc_FUN_005635b0
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00565c50
        ;   Label: crt_unknown.c_FUN_00565c50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00565c51
    IMUL EBX,dword ptr [ESP + 0xc]      ; 00565c55
    PUSH EBX                            ; 00565c5a
    CALL crt_memory.c_malloc_FUN_005635b0 ; 00565c5b
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    ADD ESP,0x4                         ; 00565c60
    TEST EAX,EAX                        ; 00565c63
    JZ 0x00565c73                       ; 00565c65
        ;   XREF to: 00565c73 (CONDITIONAL_JUMP)  ; LAB_00565c73
    PUSH EBX                            ; 00565c67
    PUSH 0x0                            ; 00565c68
    PUSH EAX                            ; 00565c6a
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00565c6b
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00565c70
    POP EBX                             ; 00565c73
        ;   Label: LAB_00565c73
    RET                                 ; 00565c74

