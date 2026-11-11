; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_memory_c_calloc_FUN_005b98d0(int param_1,int param_2)
;
;
; XREF[7]:
;   core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_00446510 at 0044651a
;   core_dpart.cpp_CDemonPart_alloc_FUN_004614d0 at 00461508
;   core_dtrace.cpp_FUN_00472470 at 00472484
;   crt_unknown.c_FUN_005c2624 at 005c2654
;   crt_unknown.c_FUN_005c293c at 005c294e
;   crt_unknown.c_FUN_005c4a88 at 005c4ae7
;   crt_unknown.c_FUN_005c4b60 at 005c4b75
;
; Called Functions:
;   crt_memory.c_malloc_FUN_005b8580
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b98d0
        ;   Label: crt_memory.c_calloc_FUN_005b98d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b98d1
    IMUL EBX,dword ptr [ESP + 0xc]      ; 005b98d5
    PUSH EBX                            ; 005b98da
    CALL crt_memory.c_malloc_FUN_005b8580 ; 005b98db
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 005b98e0
    TEST EAX,EAX                        ; 005b98e3
    JZ 0x005b98f3                       ; 005b98e5
        ;   XREF to: 005b98f3 (CONDITIONAL_JUMP)  ; LAB_005b98f3
    PUSH EBX                            ; 005b98e7
    PUSH 0x0                            ; 005b98e8
    PUSH EAX                            ; 005b98ea
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005b98eb
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005b98f0
    POP EBX                             ; 005b98f3
        ;   Label: LAB_005b98f3
    RET                                 ; 005b98f4

