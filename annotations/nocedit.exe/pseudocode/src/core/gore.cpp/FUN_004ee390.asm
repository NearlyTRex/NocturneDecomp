; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CFootstep * core_gore.cpp_FUN_004ee390(CFootstep * this_ptr)
;
; Parameters:
; CFootstep *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_dracbrid.cpp_FUN_00486e30
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ee390
        ;   Label: core_gore.cpp_FUN_004ee390
    PUSH 0x0                            ; 004ee394
    ADD EAX,0x8                         ; 004ee396
    PUSH EAX                            ; 004ee399
    CALL core_dracbrid.cpp_FUN_00486e30 ; 004ee39a | undefined core_dracbrid.cpp_FUN_00486e30()
        ;   XREF to: 00486e30 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004ee39f
    SUB EAX,0x8                         ; 004ee3a2
    RET                                 ; 004ee3a5

