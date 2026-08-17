; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_free_FUN_00517cc0(CDeformableModel *this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_skeleton.cpp_CDeformableModel_allocLOD_FUN_00517ec0 at 0051801f
;   core_skeleton.cpp_CDeformableModel_allocMemory_FUN_00517da0 at 00517db5
;   core_skeleton.cpp_CDeformableModel_dtor_FUN_00517c80 at 00517c86
;   core_skeleton.cpp_freeAllModels_FUN_0051f650 at 0051f65e
;
; Referenced Globals:
;   WatcomTypeInfo g_SVertTypeInfo_005a1ee0
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_memset_FUN_00563cc0
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00517cc0
        ;   Label: core_skeleton.cpp_CDeformableModel_free_FUN_00517cc0
    PUSH EDI                            ; 00517cc1
    PUSH EBP                            ; 00517cc2
    MOV EDI,dword ptr [ESP + 0x10]      ; 00517cc3
    MOV EDX,dword ptr [EDI]             ; 00517cc7
    XOR ESI,ESI                         ; 00517cc9
    TEST EDX,EDX                        ; 00517ccb
    JLE 0x00517d60                      ; 00517ccd
        ;   XREF to: 00517d60 (CONDITIONAL_JUMP)  ; LAB_00517d60
    PUSH EBX                            ; 00517cd3
    MOV EBX,EDI                         ; 00517cd4
    PUSH 0x5a1ee0                       ; 00517cd6 | g_SVertTypeInfo_005a1ee0
        ;   Label: LAB_00517cd6
    MOV ECX,dword ptr [EBX + 0x40]      ; 00517cdb
    PUSH ECX                            ; 00517cde
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 00517cdf
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00517ce4
    PUSH EAX                            ; 00517ce7
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00517ce8
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00517ced
    MOV EBP,dword ptr [EBX + 0x7c]      ; 00517cf0
    PUSH EBP                            ; 00517cf3
    MOV dword ptr [EBX + 0x40],0x0      ; 00517cf4
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00517cfb
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00517d00
    MOV EAX,dword ptr [EBX + 0x90]      ; 00517d03
    PUSH EAX                            ; 00517d09
    MOV dword ptr [EBX + 0x7c],0x0      ; 00517d0a
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00517d11
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00517d16
    MOV EDX,dword ptr [EBX + 0xa4]      ; 00517d19
    ADD EBX,0x4                         ; 00517d1f
    PUSH EDX                            ; 00517d22
    MOV dword ptr [EBX + 0x8c],0x0      ; 00517d23
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00517d2d
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    MOV dword ptr [EBX + 0xa0],0x0      ; 00517d32
    MOV dword ptr [EBX + 0x28],0x0      ; 00517d3c
    MOV dword ptr [EBX + 0x50],0x0      ; 00517d43
    MOV dword ptr [EBX + 0x64],0x0      ; 00517d4a
    INC ESI                             ; 00517d51
    MOV ECX,dword ptr [EDI]             ; 00517d52
    ADD ESP,0x4                         ; 00517d54
    CMP ESI,ECX                         ; 00517d57
    JL 0x00517cd6                       ; 00517d59
        ;   XREF to: 00517cd6 (CONDITIONAL_JUMP)  ; LAB_00517cd6
    POP EBX                             ; 00517d5f
    PUSH 0xb40                          ; 00517d60
        ;   Label: LAB_00517d60
    PUSH 0x0                            ; 00517d65
    LEA EAX,[EDI + 0xc0]                ; 00517d67
    MOV dword ptr [EDI + 0xb8],0x0      ; 00517d6d
    PUSH EAX                            ; 00517d77
    MOV dword ptr [EDI + 0xbc],0x0      ; 00517d78
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00517d82
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    MOV dword ptr [EDI + 0xc00],0x0     ; 00517d87
    ADD ESP,0xc                         ; 00517d91
    MOV dword ptr [EDI],0x0             ; 00517d94
    POP EBP                             ; 00517d9a
    POP EDI                             ; 00517d9b
    POP ESI                             ; 00517d9c
    RET                                 ; 00517d9d

