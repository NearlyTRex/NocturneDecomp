; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_winrun_cpp_FUN_005b3840(HANDLE param_1)
;
;
; XREF[1]:
;   support_trisock.cpp_FUN_0059deb0 at 0059dfa1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005b3840
        ;   Label: wincore_winrun.cpp_FUN_005b3840
    TEST EAX,EAX                        ; 005b3844
    JNZ 0x005b3849                      ; 005b3846
        ;   XREF to: 005b3849 (CONDITIONAL_JUMP)  ; LAB_005b3849
    RET                                 ; 005b3848
    PUSH EAX                            ; 005b3849
        ;   Label: LAB_005b3849
    CALL dword ptr CS:[0x5d051c]        ; 005b384a
    RET                                 ; 005b3851

