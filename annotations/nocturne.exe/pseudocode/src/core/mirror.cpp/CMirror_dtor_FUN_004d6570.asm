; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mirror_cpp_CMirror_dtor_FUN_004d6570(int param_1)
;
;
; XREF[1]:
;   FUN_004adef0 at 004adf15
;
; Called Functions:
;   core_mirror.cpp_SClipPlane_arrdtor_FUN_004d7d90
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d6570
        ;   Label: core_mirror.cpp_CMirror_dtor_FUN_004d6570
    PUSH 0x0                            ; 004d6574
    ADD EAX,0x98                        ; 004d6576
    PUSH EAX                            ; 004d657b
    CALL core_mirror.cpp_SClipPlane_arrdtor_FUN_004d7d90 ; 004d657c
        ;   XREF to: 004d7d90 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_SClipPlane_arrdtor_FUN_004d7d90()
    ADD ESP,0x8                         ; 004d6581
    SUB EAX,0x98                        ; 004d6584
    RET                                 ; 004d6589

