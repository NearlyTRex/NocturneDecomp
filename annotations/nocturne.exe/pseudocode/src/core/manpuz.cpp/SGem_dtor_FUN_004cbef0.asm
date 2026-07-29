; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SGem * __cdecl core_manpuz_cpp_SGem_dtor_FUN_004cbef0(SGem *this_ptr,uint flags)
;
; Parameters:
; SGem *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_manpuz.cpp_CDemonTriangle_arrdtor_FUN_004cc000
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cbef0
        ;   Label: core_manpuz.cpp_SGem_dtor_FUN_004cbef0
    PUSH 0x0                            ; 004cbef4
    ADD EAX,0x3c                        ; 004cbef6
    PUSH EAX                            ; 004cbef9
    CALL core_manpuz.cpp_CDemonTriangle_arrdtor_FUN_004cc000 ; 004cbefa
        ;   XREF to: 004cc000 (UNCONDITIONAL_CALL)  ; CDemonTriangle * core_manpuz.cpp_CDemonTriangle_arrdtor_FUN_004cc000(CDemonTriangle * objs, uint flags)
    ADD ESP,0x8                         ; 004cbeff
    SUB EAX,0x3c                        ; 004cbf02
    RET                                 ; 004cbf05

