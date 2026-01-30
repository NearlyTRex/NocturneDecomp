; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SFreaky * __cdecl core_dracbrid_cpp_dtor_FUN_00486d50(SFreaky *this_ptr)
;
; Parameters:
; SFreaky *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_dracbrid.cpp_FUN_00486e30
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00486d50
        ;   Label: core_dracbrid.cpp_dtor_FUN_00486d50
    PUSH 0x0                            ; 00486d54
    ADD EAX,0x20                        ; 00486d56
    PUSH EAX                            ; 00486d59
    CALL core_dracbrid.cpp_FUN_00486e30 ; 00486d5a
        ;   XREF to: 00486e30 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_FUN_00486e30()
    ADD ESP,0x8                         ; 00486d5f
    SUB EAX,0x20                        ; 00486d62
    RET                                 ; 00486d65

