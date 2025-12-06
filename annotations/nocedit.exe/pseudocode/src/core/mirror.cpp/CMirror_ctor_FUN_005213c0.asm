; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMirror * core_mirror.cpp_CMirror_ctor_FUN_005213c0(CMirror * this_ptr)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_glass.cpp_CGlass_ctor_FUN_004e9040 at 004e9055
;
; Referenced Globals:
;   WatcomTypeInfo g_SClipPlaneTypeInfo
;
; Called Functions:
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005213c0
        ;   Label: core_mirror.cpp_CMirror_ctor_FUN_005213c0
    PUSH 0x661700                       ; 005213c4 | WatcomTypeInfo g_SClipPlaneTypeInfo
    PUSH 0x5                            ; 005213c9
    ADD EAX,0x98                        ; 005213cb
    PUSH EAX                            ; 005213d0
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 005213d1 | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005213d6
    SUB EAX,0x98                        ; 005213d9
    RET                                 ; 005213de

