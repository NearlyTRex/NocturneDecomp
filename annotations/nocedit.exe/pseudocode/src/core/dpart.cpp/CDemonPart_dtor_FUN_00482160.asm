; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonPart * __cdecl core_dpart_cpp_CDemonPart_dtor_FUN_00482160(CDemonPart *this_ptr,uint flags)
;
; Parameters:
; CDemonPart *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004942d0 at 00494341
;
; Called Functions:
;   core_dpart.cpp_CDemonPart_free_FUN_004822b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482160
        ;   Label: core_dpart.cpp_CDemonPart_dtor_FUN_00482160
    MOV EBX,dword ptr [ESP + 0x8]       ; 00482161
    PUSH EBX                            ; 00482165
    CALL core_dpart.cpp_CDemonPart_free_FUN_004822b0 ; 00482166
        ;   XREF to: 004822b0 (UNCONDITIONAL_CALL)  ; void core_dpart.cpp_CDemonPart_free_FUN_004822b0(CDemonPart * this_ptr)
    ADD ESP,0x4                         ; 0048216b
    MOV EAX,EBX                         ; 0048216e
    POP EBX                             ; 00482170
    RET                                 ; 00482171

