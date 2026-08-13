; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModel_ctor_FUN_00517b70(CDeformableModel *this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo_005993b0
;   WatcomTypeInfo g_CBoundingBox3DTypeInfo_005993f0
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005644a7
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517b70
        ;   Label: core_skeleton.cpp_CDeformableModel_ctor_FUN_00517b70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00517b71
    PUSH 0x5993b0                       ; 00517b75 | g_CVectorTypeInfo_005993b0
    PUSH 0x64                           ; 00517b7a
    ADD EBX,0x1750                      ; 00517b7c
    PUSH EBX                            ; 00517b82
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 00517b83
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00517b88
    PUSH 0x5993f0                       ; 00517b8b | g_CBoundingBox3DTypeInfo_005993f0
    PUSH 0x64                           ; 00517b90
    ADD EAX,0x4bc                       ; 00517b92
    PUSH EAX                            ; 00517b97
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 00517b98
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    LEA EBX,[EAX + 0xffffe3f4]          ; 00517b9d
    ADD ESP,0xc                         ; 00517ba3
    MOV EAX,EBX                         ; 00517ba6
    LEA EDX,[EBX + 0x14]                ; 00517ba8
    XOR ECX,ECX                         ; 00517bab
    ADD EAX,0x4                         ; 00517bad
        ;   Label: LAB_00517bad
    MOV dword ptr [EAX + 0x3c],ECX      ; 00517bb0
    MOV dword ptr [EAX + 0x50],ECX      ; 00517bb3
    MOV dword ptr [EAX + 0x64],ECX      ; 00517bb6
    MOV dword ptr [EAX + 0x78],ECX      ; 00517bb9
    MOV dword ptr [EAX + 0x8c],ECX      ; 00517bbc
    MOV dword ptr [EAX + 0xa0],ECX      ; 00517bc2
    MOV dword ptr [EAX + 0x28],ECX      ; 00517bc8
    CMP EAX,EDX                         ; 00517bcb
    JNZ 0x00517bad                      ; 00517bcd
        ;   XREF to: 00517bad (CONDITIONAL_JUMP)  ; LAB_00517bad
    PUSH 0xb40                          ; 00517bcf
    PUSH 0x0                            ; 00517bd4
    LEA EAX,[EBX + 0xc0]                ; 00517bd6
    MOV dword ptr [EBX + 0xb8],0x0      ; 00517bdc
    PUSH EAX                            ; 00517be6
    MOV dword ptr [EBX + 0xbc],0x0      ; 00517be7
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00517bf1
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00517bf6
    PUSH 0xb40                          ; 00517bf9
    PUSH 0x0                            ; 00517bfe
    LEA EAX,[EBX + 0xc04]               ; 00517c00
    PUSH EAX                            ; 00517c06
    MOV dword ptr [EBX + 0xc00],0x0     ; 00517c07
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00517c11
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    MOV byte ptr [EBX + 0x2a1c],0x0     ; 00517c16
    MOV dword ptr [EBX + 0x2a6c],0x0    ; 00517c1d
    MOV dword ptr [EBX + 0x174c],0x3f800000 ; 00517c27
    ADD ESP,0xc                         ; 00517c31
    MOV dword ptr [EBX],0x0             ; 00517c34
    LEA EAX,[EBX + 0x4]                 ; 00517c3a
    FLD float ptr [EBX + 0x174c]        ; 00517c3d
    PUSH 0x28                           ; 00517c43
    FSTP float ptr [EBX + 0x1748]       ; 00517c45
    PUSH 0x0                            ; 00517c4b
    FLD float ptr [EBX + 0x1748]        ; 00517c4d
    PUSH EAX                            ; 00517c53
    FSTP float ptr [EBX + 0x1744]       ; 00517c54
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00517c5a
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    LEA EAX,[EBX + 0x1c00]              ; 00517c5f
    MOV dword ptr [EAX + 0x8],0x0       ; 00517c65
    ADD ESP,0xc                         ; 00517c6c
    MOV EDX,dword ptr [EAX + 0x8]       ; 00517c6f
    MOV dword ptr [EAX + 0x4],EDX       ; 00517c72
    MOV EDX,dword ptr [EAX + 0x4]       ; 00517c75
    MOV dword ptr [EAX],EDX             ; 00517c78
    MOV EAX,EBX                         ; 00517c7a
    POP EBX                             ; 00517c7c
    RET                                 ; 00517c7d

