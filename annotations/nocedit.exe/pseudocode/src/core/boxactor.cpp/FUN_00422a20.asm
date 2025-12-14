; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_boxactor.cpp_FUN_00422a20()
;
;
; Called Functions:
;   core_boxactor.cpp_FUN_00421830
;   core_boxactor.cpp_FUN_00422d60
;   core_dlight.cpp_CDemonLight_init_FUN_004727c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422a20
        ;   Label: core_boxactor.cpp_FUN_00422a20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00422a21
    PUSH EBX                            ; 00422a25
    CALL core_boxactor.cpp_FUN_00422d60 ; 00422a26
        ;   XREF to: 00422d60 (UNCONDITIONAL_CALL)  ; undefined core_boxactor.cpp_FUN_00422d60()
    ADD ESP,0x4                         ; 00422a2b
    PUSH EBX                            ; 00422a2e
    CALL core_boxactor.cpp_FUN_00421830 ; 00422a2f
        ;   XREF to: 00421830 (UNCONDITIONAL_CALL)  ; undefined core_boxactor.cpp_FUN_00421830()
    ADD ESP,0x4                         ; 00422a34
    LEA EAX,[EBX + 0x670]               ; 00422a37
    PUSH EAX                            ; 00422a3d
    CALL core_dlight.cpp_CDemonLight_init_FUN_004727c0 ; 00422a3e
        ;   XREF to: 004727c0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_init_FUN_004727c0(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 00422a43
    POP EBX                             ; 00422a46
    RET                                 ; 00422a47

