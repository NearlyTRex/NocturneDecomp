; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_memory_c_calloc_FUN_005c1cb0(int param_1,int param_2)
;
;
; XREF[7]:
;   core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_00457bc0 at 00457bca
;   core_dpart.cpp_CDemonPart_alloc_FUN_004799e0 at 00479a18
;   core_dtrace.cpp_FUN_0048a960 at 0048a974
;   crt_unknown.c_FUN_005ca924 at 005ca954
;   crt_unknown.c_FUN_005cac3c at 005cac4e
;   crt_unknown.c_FUN_005ccd88 at 005ccde7
;   crt_unknown.c_FUN_005cce60 at 005cce75
;
; Called Functions:
;   crt_memory.c_malloc_FUN_005c08d0
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c1cb0
        ;   Label: crt_memory.c_calloc_FUN_005c1cb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c1cb1
    IMUL EBX,dword ptr [ESP + 0xc]      ; 005c1cb5
    PUSH EBX                            ; 005c1cba
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 005c1cbb
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 005c1cc0
    TEST EAX,EAX                        ; 005c1cc3
    JZ 0x005c1cd3                       ; 005c1cc5
        ;   XREF to: 005c1cd3 (CONDITIONAL_JUMP)  ; LAB_005c1cd3
    PUSH EBX                            ; 005c1cc7
    PUSH 0x0                            ; 005c1cc8
    PUSH EAX                            ; 005c1cca
    CALL crt_memory.c_memset_FUN_005bfb70 ; 005c1ccb
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005c1cd0
    POP EBX                             ; 005c1cd3
        ;   Label: LAB_005c1cd3
    RET                                 ; 005c1cd4

