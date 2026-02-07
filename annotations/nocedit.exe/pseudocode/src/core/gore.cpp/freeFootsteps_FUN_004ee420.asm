; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CFootstep * __cdecl core_gore_cpp_freeFootsteps_FUN_004ee420(CFootstep *objs)
;
; Parameters:
; CFootstep *      Stack[0x4]:4   objs
;
; Referenced Globals:
;   WatcomTypeInfo g_CFootstepTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65f0e0                       ; 004ee420 | g_CFootstepTypeInfo
        ;   Label: core_gore.cpp_freeFootsteps_FUN_004ee420
    PUSH 0x3e8                          ; 004ee425
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ee42a
    PUSH EDX                            ; 004ee42e
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 004ee42f
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004ee434
    RET                                 ; 004ee437

