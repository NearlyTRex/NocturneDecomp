; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_winrun_cpp_FUN_00581a20(HANDLE param_1)
;
;
; XREF[1]:
;   support_trisock.cpp_FUN_00570f00 at 00570f91
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00581a20
        ;   Label: wincore_winrun.cpp_FUN_00581a20
    TEST EAX,EAX                        ; 00581a24
    JNZ 0x00581a29                      ; 00581a26
        ;   XREF to: 00581a29 (CONDITIONAL_JUMP)  ; LAB_00581a29
    RET                                 ; 00581a28
    PUSH EAX                            ; 00581a29
        ;   Label: LAB_00581a29
    CALL dword ptr CS:[0x5b3518]        ; 00581a2a
    RET                                 ; 00581a31

