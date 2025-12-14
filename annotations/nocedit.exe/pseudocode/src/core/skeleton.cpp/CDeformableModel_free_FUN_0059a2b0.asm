; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_skeleton.cpp_CDeformableModel_free_FUN_0059a2b0(CDeformableModel * this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_skeledit.cpp_FUN_0058b660 at 0058b68f
;   core_skeledit.cpp_FUN_0058c190 at 0058c1eb
;   core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510 at 0059a6f7
;   core_skeleton.cpp_CDeformableModel_allocMemory_FUN_0059a3f0 at 0059a405
;   core_skeleton.cpp_CDeformableModel_dtor_FUN_0059a270 at 0059a276
;   core_skeleton.cpp_freeAllModels_FUN_005a1dc0 at 005a1dce
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_0064e4ba
;   TerminatedCString s_core_skeleton_cpp_0064e4cf
;   TerminatedCString s_core_skeleton_cpp_0064e4e4
;   TerminatedCString s_core_skeleton_cpp_0064e4f9
;   WatcomTypeInfo g_SVertTypeInfo
;   char* g_CurrentDebugFilename = 0067d200
;   int g_CurrentDebugLine
;
; Called Functions:
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0059a2b0
        ;   Label: core_skeleton.cpp_CDeformableModel_free_FUN_0059a2b0
    PUSH EDI                            ; 0059a2b1
    PUSH EBP                            ; 0059a2b2
    MOV EDI,dword ptr [ESP + 0x10]      ; 0059a2b3
    MOV EDX,dword ptr [EDI]             ; 0059a2b7
    XOR ESI,ESI                         ; 0059a2b9
    TEST EDX,EDX                        ; 0059a2bb
    JLE 0x0059a3a6                      ; 0059a2bd
        ;   XREF to: 0059a3a6 (CONDITIONAL_JUMP)  ; LAB_0059a3a6
    PUSH EBX                            ; 0059a2c3
    MOV EBX,EDI                         ; 0059a2c4
    MOV ECX,0x64e4ba                    ; 0059a2c6 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_0059a2c6
    PUSH 0x662ed0                       ; 0059a2cb | g_SVertTypeInfo
    MOV EAX,dword ptr [EBX + 0x40]      ; 0059a2d0
    MOV EBP,0x23a                       ; 0059a2d3
    PUSH EAX                            ; 0059a2d8
    MOV dword ptr [0x0067d20c],ECX      ; 0059a2d9 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EBP      ; 0059a2df | g_CurrentDebugLine
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 0059a2e5
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0059a2ea
    PUSH EAX                            ; 0059a2ed
    ADD EBX,0x4                         ; 0059a2ee
    CALL crt_memory.c_free_FUN_005fe659 ; 0059a2f1
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    MOV EDX,0x64e4cf                    ; 0059a2f6 | = "..\\core\\skeleton.cpp"
    MOV ECX,0x23d                       ; 0059a2fb
    ADD ESP,0x4                         ; 0059a300
    MOV EBP,dword ptr [EBX + 0x78]      ; 0059a303
    MOV dword ptr [EBX + 0x3c],0x0      ; 0059a306
    PUSH EBP                            ; 0059a30d
    MOV dword ptr [0x0067d20c],EDX      ; 0059a30e | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ECX      ; 0059a314 | g_CurrentDebugLine
    CALL crt_memory.c_free_FUN_005fe659 ; 0059a31a
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    MOV EAX,0x64e4e4                    ; 0059a31f | = "..\\core\\skeleton.cpp"
    MOV EDX,0x240                       ; 0059a324
    MOV EBP,0x64e4f9                    ; 0059a329 | = "..\\core\\skeleton.cpp"
    ADD ESP,0x4                         ; 0059a32e
    MOV ECX,dword ptr [EBX + 0x8c]      ; 0059a331
    MOV dword ptr [EBX + 0x78],0x0      ; 0059a337
    PUSH ECX                            ; 0059a33e
    MOV [0x0067d20c],EAX                ; 0059a33f | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EDX      ; 0059a344 | g_CurrentDebugLine
    CALL crt_memory.c_free_FUN_005fe659 ; 0059a34a
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    MOV EAX,0x243                       ; 0059a34f
    ADD ESP,0x4                         ; 0059a354
    MOV EDX,dword ptr [EBX + 0xa0]      ; 0059a357
    MOV dword ptr [0x0067d20c],EBP      ; 0059a35d | g_CurrentDebugFilename
    PUSH EDX                            ; 0059a363
    MOV dword ptr [EBX + 0x8c],0x0      ; 0059a364
    MOV [0x02f0d944],EAX                ; 0059a36e | g_CurrentDebugLine
    CALL crt_memory.c_free_FUN_005fe659 ; 0059a373
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    MOV dword ptr [EBX + 0xa0],0x0      ; 0059a378
    MOV dword ptr [EBX + 0x28],0x0      ; 0059a382
    MOV dword ptr [EBX + 0x50],0x0      ; 0059a389
    MOV dword ptr [EBX + 0x64],0x0      ; 0059a390
    INC ESI                             ; 0059a397
    MOV ECX,dword ptr [EDI]             ; 0059a398
    ADD ESP,0x4                         ; 0059a39a
    CMP ESI,ECX                         ; 0059a39d
    JL 0x0059a2c6                       ; 0059a39f
        ;   XREF to: 0059a2c6 (CONDITIONAL_JUMP)  ; LAB_0059a2c6
    POP EBX                             ; 0059a3a5
    PUSH 0x7080                         ; 0059a3a6
        ;   Label: LAB_0059a3a6
    PUSH 0x0                            ; 0059a3ab
    LEA EAX,[EDI + 0xc0]                ; 0059a3ad
    MOV dword ptr [EDI + 0xb8],0x0      ; 0059a3b3
    PUSH EAX                            ; 0059a3bd
    MOV dword ptr [EDI + 0xbc],0x0      ; 0059a3be
    CALL crt_memory.c_memset_FUN_005fde40 ; 0059a3c8
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV dword ptr [EDI + 0x7140],0x0    ; 0059a3cd
    ADD ESP,0xc                         ; 0059a3d7
    MOV dword ptr [EDI],0x0             ; 0059a3da
    POP EBP                             ; 0059a3e0
    POP EDI                             ; 0059a3e1
    POP ESI                             ; 0059a3e2
    RET                                 ; 0059a3e3

