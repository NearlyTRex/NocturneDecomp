; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_freeNewCubeList_FUN_004673a0(CDemonRaytrace *this_ptr)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dtrace.cpp_CDemonRaytrace_dtor_FUN_00467220 at 00467238
;   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004676c0 at 004676d0
;
; Referenced Globals:
;   WatcomTypeInfo g_CDemonCubeTypeInfo_0059c8c0
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_0056445f
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004673a0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_freeNewCubeList_FUN_004673a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004673a1
    PUSH 0x59c8c0                       ; 004673a5 | g_CDemonCubeTypeInfo_0059c8c0
    MOV EDX,dword ptr [EBX + 0x50]      ; 004673aa
    PUSH EDX                            ; 004673ad
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004673ae
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004673b3
    PUSH EAX                            ; 004673b6
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004673b7
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    MOV dword ptr [EBX + 0x50],0x0      ; 004673bc
    MOV dword ptr [EBX + 0x48],0x0      ; 004673c3
    MOV EAX,dword ptr [EBX + 0x48]      ; 004673ca
    MOV dword ptr [EBX + 0x44],EAX      ; 004673cd
    ADD ESP,0x4                         ; 004673d0
    MOV dword ptr [EBX + 0x40],EAX      ; 004673d3
    POP EBX                             ; 004673d6
    RET                                 ; 004673d7

