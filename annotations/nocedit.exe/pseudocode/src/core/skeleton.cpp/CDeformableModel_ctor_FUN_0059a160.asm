; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModel_ctor_FUN_0059a160(CDeformableModel *this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fileman.cpp_CDemonFileManager_addDeformableModelToExtractList_FUN_004be070 at 004be120
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;   WatcomTypeInfo g_CBoundingBox3DTypeInfo
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005fe667
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059a160
        ;   Label: core_skeleton.cpp_CDeformableModel_ctor_FUN_0059a160
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059a161
    PUSH 0x6598c0                       ; 0059a165 | g_CVectorTypeInfo
    PUSH 0x64                           ; 0059a16a
    ADD EBX,0x7c90                      ; 0059a16c
    PUSH EBX                            ; 0059a172
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 0059a173
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0059a178
    PUSH 0x659900                       ; 0059a17b | g_CBoundingBox3DTypeInfo
    PUSH 0x64                           ; 0059a180
    ADD EAX,0x4bc                       ; 0059a182
    PUSH EAX                            ; 0059a187
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 0059a188
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    LEA EBX,[EAX + 0xffff7eb4]          ; 0059a18d
    ADD ESP,0xc                         ; 0059a193
    MOV EAX,EBX                         ; 0059a196
    LEA EDX,[EBX + 0x14]                ; 0059a198
    XOR ECX,ECX                         ; 0059a19b
    ADD EAX,0x4                         ; 0059a19d
        ;   Label: LAB_0059a19d
    MOV dword ptr [EAX + 0x3c],ECX      ; 0059a1a0
    MOV dword ptr [EAX + 0x50],ECX      ; 0059a1a3
    MOV dword ptr [EAX + 0x64],ECX      ; 0059a1a6
    MOV dword ptr [EAX + 0x78],ECX      ; 0059a1a9
    MOV dword ptr [EAX + 0x8c],ECX      ; 0059a1ac
    MOV dword ptr [EAX + 0xa0],ECX      ; 0059a1b2
    MOV dword ptr [EAX + 0x28],ECX      ; 0059a1b8
    CMP EAX,EDX                         ; 0059a1bb
    JNZ 0x0059a19d                      ; 0059a1bd
        ;   XREF to: 0059a19d (CONDITIONAL_JUMP)  ; LAB_0059a19d
    PUSH 0x7080                         ; 0059a1bf
    PUSH 0x0                            ; 0059a1c4
    LEA EAX,[EBX + 0xc0]                ; 0059a1c6
    MOV dword ptr [EBX + 0xb8],0x0      ; 0059a1cc
    PUSH EAX                            ; 0059a1d6
    MOV dword ptr [EBX + 0xbc],0x0      ; 0059a1d7
    CALL crt_memory.c_memset_FUN_005fde40 ; 0059a1e1
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0059a1e6
    PUSH 0xb40                          ; 0059a1e9
    PUSH 0x0                            ; 0059a1ee
    LEA EAX,[EBX + 0x7144]              ; 0059a1f0
    PUSH EAX                            ; 0059a1f6
    MOV dword ptr [EBX + 0x7140],0x0    ; 0059a1f7
    CALL crt_memory.c_memset_FUN_005fde40 ; 0059a201
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV byte ptr [EBX + 0x8f5c],0x0     ; 0059a206
    MOV dword ptr [EBX + 0x8fac],0x0    ; 0059a20d
    MOV dword ptr [EBX + 0x7c8c],0x3f800000 ; 0059a217
    ADD ESP,0xc                         ; 0059a221
    MOV dword ptr [EBX],0x0             ; 0059a224
    LEA EAX,[EBX + 0x4]                 ; 0059a22a
    FLD float ptr [EBX + 0x7c8c]        ; 0059a22d
    PUSH 0x28                           ; 0059a233
    FSTP float ptr [EBX + 0x7c88]       ; 0059a235
    PUSH 0x0                            ; 0059a23b
    FLD float ptr [EBX + 0x7c88]        ; 0059a23d
    PUSH EAX                            ; 0059a243
    FSTP float ptr [EBX + 0x7c84]       ; 0059a244
    CALL crt_memory.c_memset_FUN_005fde40 ; 0059a24a
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    LEA EAX,[EBX + 0x8140]              ; 0059a24f
    MOV dword ptr [EAX + 0x8],0x0       ; 0059a255
    ADD ESP,0xc                         ; 0059a25c
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059a25f
    MOV dword ptr [EAX + 0x4],EDX       ; 0059a262
    MOV EDX,dword ptr [EAX + 0x4]       ; 0059a265
    MOV dword ptr [EAX],EDX             ; 0059a268
    MOV EAX,EBX                         ; 0059a26a
    POP EBX                             ; 0059a26c
    RET                                 ; 0059a26d

