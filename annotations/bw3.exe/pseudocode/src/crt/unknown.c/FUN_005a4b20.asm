; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a4b20(int param_1,int param_2)
;
;
; XREF[7]:
;   core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_00453d10 at 00453d1a
;   core_dpart.cpp_CDemonPart_alloc_FUN_004662b0 at 004662e8
;   core_dtrace.cpp_FUN_004734e0 at 004734f4
;   crt_unknown.c_FUN_005ad794 at 005ad7c4
;   crt_unknown.c_FUN_005adaac at 005adabe
;   crt_unknown.c_FUN_005afb18 at 005afb77
;   crt_unknown.c_FUN_005afbf0 at 005afc05
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;   crt_unknown.c_FUN_005a3650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4b20
        ;   Label: crt_unknown.c_FUN_005a4b20
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a4b21
    IMUL EBX,dword ptr [ESP + 0xc]      ; 005a4b25
    PUSH EBX                            ; 005a4b2a
    CALL crt_unknown.c_FUN_005a3650     ; 005a4b2b
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 005a4b30
    TEST EAX,EAX                        ; 005a4b33
    JZ 0x005a4b43                       ; 005a4b35
        ;   XREF to: 005a4b43 (CONDITIONAL_JUMP)  ; LAB_005a4b43
    PUSH EBX                            ; 005a4b37
    PUSH 0x0                            ; 005a4b38
    PUSH EAX                            ; 005a4b3a
    CALL crt_memory.c_memset_FUN_005a28f0 ; 005a4b3b
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005a4b40
    POP EBX                             ; 005a4b43
        ;   Label: LAB_005a4b43
    RET                                 ; 005a4b44

