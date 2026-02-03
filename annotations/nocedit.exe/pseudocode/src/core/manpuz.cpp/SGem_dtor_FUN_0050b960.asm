; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SGem * __cdecl core_manpuz_cpp_SGem_dtor_FUN_0050b960(SGem *this_ptr)
;
; Parameters:
; SGem *           Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_manpuz.cpp_freeTriangles_FUN_0050ba70
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0050b960
        ;   Label: core_manpuz.cpp_SGem_dtor_FUN_0050b960
    PUSH 0x0                            ; 0050b964
    ADD EAX,0x3c                        ; 0050b966
    PUSH EAX                            ; 0050b969
    CALL core_manpuz.cpp_freeTriangles_FUN_0050ba70 ; 0050b96a
        ;   XREF to: 0050ba70 (UNCONDITIONAL_CALL)  ; CDemonTriangle * core_manpuz.cpp_freeTriangles_FUN_0050ba70(CDemonTriangle * objs)
    ADD ESP,0x8                         ; 0050b96f
    SUB EAX,0x3c                        ; 0050b972
    RET                                 ; 0050b975

