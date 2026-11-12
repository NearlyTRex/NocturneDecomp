; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SVert * __cdecl core_skeleton_cpp_SVert_ctor_FUN_00550520(SVert *this_ptr)
;
; Parameters:
; SVert *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005a30d7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00550520
        ;   Label: core_skeleton.cpp_SVert_ctor_FUN_00550520
    PUSH 0x5db0f0                       ; 00550524
    PUSH 0x3                            ; 00550529
    ADD EAX,0x10                        ; 0055052b
    PUSH EAX                            ; 0055052e
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 0055052f
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00550534
    SUB EAX,0x10                        ; 00550537
    RET                                 ; 0055053a

