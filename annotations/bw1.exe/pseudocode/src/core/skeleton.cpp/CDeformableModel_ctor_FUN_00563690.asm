; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDeformableModel * core_skeleton_cpp_CDeformableModel_ctor_FUN_00563690(CDeformableModel *this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005c0357
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00563690
        ;   Label: core_skeleton.cpp_CDeformableModel_ctor_FUN_00563690
    MOV EBX,dword ptr [ESP + 0x8]       ; 00563691
    PUSH 0x5fb430                       ; 00563695
    PUSH 0x64                           ; 0056369a
    ADD EBX,0x2290                      ; 0056369c
    PUSH EBX                            ; 005636a2
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 005636a3
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005636a8
    PUSH 0x6042a0                       ; 005636ab
    PUSH 0x64                           ; 005636b0
    ADD EAX,0x4bc                       ; 005636b2
    PUSH EAX                            ; 005636b7
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 005636b8
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    LEA EBX,[EAX + 0xffffd8b4]          ; 005636bd
    ADD ESP,0xc                         ; 005636c3
    MOV EAX,EBX                         ; 005636c6
    LEA EDX,[EBX + 0x14]                ; 005636c8
    XOR ECX,ECX                         ; 005636cb
    ADD EAX,0x4                         ; 005636cd
        ;   Label: LAB_005636cd
    MOV dword ptr [EAX + 0x3c],ECX      ; 005636d0
    MOV dword ptr [EAX + 0x50],ECX      ; 005636d3
    MOV dword ptr [EAX + 0x64],ECX      ; 005636d6
    MOV dword ptr [EAX + 0x78],ECX      ; 005636d9
    MOV dword ptr [EAX + 0x8c],ECX      ; 005636dc
    MOV dword ptr [EAX + 0xa0],ECX      ; 005636e2
    MOV dword ptr [EAX + 0x28],ECX      ; 005636e8
    CMP EAX,EDX                         ; 005636eb
    JNZ 0x005636cd                      ; 005636ed
        ;   XREF to: 005636cd (CONDITIONAL_JUMP)  ; LAB_005636cd
    PUSH 0xb40                          ; 005636ef
    PUSH 0x0                            ; 005636f4
    LEA EAX,[EBX + 0xc0]                ; 005636f6
    MOV dword ptr [EBX + 0xb8],0x0      ; 005636fc
    PUSH EAX                            ; 00563706
    MOV dword ptr [EBX + 0xbc],0x0      ; 00563707
    CALL crt_memory.c_memset_FUN_005bfb70 ; 00563711
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00563716
    PUSH 0x1680                         ; 00563719
    PUSH 0x0                            ; 0056371e
    LEA EAX,[EBX + 0xc04]               ; 00563720
    PUSH EAX                            ; 00563726
    MOV dword ptr [EBX + 0xc00],0x0     ; 00563727
    CALL crt_memory.c_memset_FUN_005bfb70 ; 00563731
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    MOV byte ptr [EBX + 0x355c],0x0     ; 00563736
    MOV dword ptr [EBX + 0x35ac],0x0    ; 0056373d
    MOV dword ptr [EBX + 0x228c],0x3f800000 ; 00563747
    ADD ESP,0xc                         ; 00563751
    MOV dword ptr [EBX],0x0             ; 00563754
    LEA EAX,[EBX + 0x4]                 ; 0056375a
    FLD float ptr [EBX + 0x228c]        ; 0056375d
    PUSH 0x28                           ; 00563763
    FSTP float ptr [EBX + 0x2288]       ; 00563765
    PUSH 0x0                            ; 0056376b
    FLD float ptr [EBX + 0x2288]        ; 0056376d
    PUSH EAX                            ; 00563773
    FSTP float ptr [EBX + 0x2284]       ; 00563774
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0056377a
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    LEA EAX,[EBX + 0x2740]              ; 0056377f
    MOV dword ptr [EAX + 0x8],0x0       ; 00563785
    ADD ESP,0xc                         ; 0056378c
    MOV EDX,dword ptr [EAX + 0x8]       ; 0056378f
    MOV dword ptr [EAX + 0x4],EDX       ; 00563792
    MOV EDX,dword ptr [EAX + 0x4]       ; 00563795
    MOV dword ptr [EAX],EDX             ; 00563798
    MOV EAX,EBX                         ; 0056379a
    MOV byte ptr [EBX + 0x35b0],0x0     ; 0056379c
    POP EBX                             ; 005637a3
    RET                                 ; 005637a4

