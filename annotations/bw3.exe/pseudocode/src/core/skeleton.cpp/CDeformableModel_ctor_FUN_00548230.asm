; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModel_ctor_FUN_00548230(CDeformableModel *this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005a30d7
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548230
        ;   Label: core_skeleton.cpp_CDeformableModel_ctor_FUN_00548230
    MOV EBX,dword ptr [ESP + 0x8]       ; 00548231
    PUSH 0x5db0f0                       ; 00548235
    PUSH 0x64                           ; 0054823a
    ADD EBX,0x2290                      ; 0054823c
    PUSH EBX                            ; 00548242
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 00548243
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00548248
    PUSH 0x5e2c40                       ; 0054824b
    PUSH 0x64                           ; 00548250
    ADD EAX,0x4bc                       ; 00548252
    PUSH EAX                            ; 00548257
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 00548258
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    LEA EBX,[EAX + 0xffffd8b4]          ; 0054825d
    ADD ESP,0xc                         ; 00548263
    MOV EAX,EBX                         ; 00548266
    LEA EDX,[EBX + 0x14]                ; 00548268
    XOR ECX,ECX                         ; 0054826b
    ADD EAX,0x4                         ; 0054826d
        ;   Label: LAB_0054826d
    MOV dword ptr [EAX + 0x3c],ECX      ; 00548270
    MOV dword ptr [EAX + 0x50],ECX      ; 00548273
    MOV dword ptr [EAX + 0x64],ECX      ; 00548276
    MOV dword ptr [EAX + 0x78],ECX      ; 00548279
    MOV dword ptr [EAX + 0x8c],ECX      ; 0054827c
    MOV dword ptr [EAX + 0xa0],ECX      ; 00548282
    MOV dword ptr [EAX + 0x28],ECX      ; 00548288
    CMP EAX,EDX                         ; 0054828b
    JNZ 0x0054826d                      ; 0054828d
        ;   XREF to: 0054826d (CONDITIONAL_JUMP)  ; LAB_0054826d
    PUSH 0xb40                          ; 0054828f
    PUSH 0x0                            ; 00548294
    LEA EAX,[EBX + 0xc0]                ; 00548296
    MOV dword ptr [EBX + 0xb8],0x0      ; 0054829c
    PUSH EAX                            ; 005482a6
    MOV dword ptr [EBX + 0xbc],0x0      ; 005482a7
    CALL crt_memory.c_memset_FUN_005a28f0 ; 005482b1
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005482b6
    PUSH 0x1680                         ; 005482b9
    PUSH 0x0                            ; 005482be
    LEA EAX,[EBX + 0xc04]               ; 005482c0
    PUSH EAX                            ; 005482c6
    MOV dword ptr [EBX + 0xc00],0x0     ; 005482c7
    CALL crt_memory.c_memset_FUN_005a28f0 ; 005482d1
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    MOV byte ptr [EBX + 0x355c],0x0     ; 005482d6
    MOV dword ptr [EBX + 0x35ac],0x0    ; 005482dd
    MOV dword ptr [EBX + 0x228c],0x3f800000 ; 005482e7
    ADD ESP,0xc                         ; 005482f1
    MOV dword ptr [EBX],0x0             ; 005482f4
    LEA EAX,[EBX + 0x4]                 ; 005482fa
    FLD float ptr [EBX + 0x228c]        ; 005482fd
    PUSH 0x28                           ; 00548303
    FSTP float ptr [EBX + 0x2288]       ; 00548305
    PUSH 0x0                            ; 0054830b
    FLD float ptr [EBX + 0x2288]        ; 0054830d
    PUSH EAX                            ; 00548313
    FSTP float ptr [EBX + 0x2284]       ; 00548314
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0054831a
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    LEA EAX,[EBX + 0x2740]              ; 0054831f
    MOV dword ptr [EAX + 0x8],0x0       ; 00548325
    ADD ESP,0xc                         ; 0054832c
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054832f
    MOV dword ptr [EAX + 0x4],EDX       ; 00548332
    MOV EDX,dword ptr [EAX + 0x4]       ; 00548335
    MOV dword ptr [EAX],EDX             ; 00548338
    MOV EAX,EBX                         ; 0054833a
    MOV byte ptr [EBX + 0x35b0],0x0     ; 0054833c
    POP EBX                             ; 00548343
    RET                                 ; 00548344

