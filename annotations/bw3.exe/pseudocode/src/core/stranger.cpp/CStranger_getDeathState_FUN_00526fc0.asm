; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EDeathState __cdecl core_stranger_cpp_CStranger_getDeathState_FUN_00526fc0(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_docCannotDie_005cd9f4
;   undefined4 DAT_005fba60
;
; Called Functions:
;   core_charactr.cpp_FUN_00431000
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;
; *****************************************************************************

section .text

    PUSH 0x5cd9f4                       ; 00526fc0 | = "docCannotDie"
        ;   Label: core_stranger.cpp_CStranger_getDeathState_FUN_00526fc0
    MOV EDX,dword ptr [0x005fba60]      ; 00526fc5 | DAT_005fba60
    PUSH EDX                            ; 00526fcb
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 00526fcc
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00526fd1
    TEST EAX,EAX                        ; 00526fd4
    JZ 0x00526fdb                       ; 00526fd6
        ;   XREF to: 00526fdb (CONDITIONAL_JUMP)  ; LAB_00526fdb
    XOR EAX,EAX                         ; 00526fd8
    RET                                 ; 00526fda
    MOV ECX,dword ptr [ESP + 0x4]       ; 00526fdb
        ;   Label: LAB_00526fdb
    PUSH ECX                            ; 00526fdf
    CALL core_charactr.cpp_FUN_00431000 ; 00526fe0
        ;   XREF to: 00431000 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00431000()
    ADD ESP,0x4                         ; 00526fe5
    RET                                 ; 00526fe8

