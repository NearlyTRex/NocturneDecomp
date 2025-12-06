; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_dynamite.cpp_FUN_0049cf90()
;
;
; XREF[1]:
;   core_stranger.cpp_CStranger_FUN_005c6590 at 005c65d3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049cf90
        ;   Label: core_dynamite.cpp_FUN_0049cf90
    TEST dword ptr [EAX + 0x578],0x7fffffff ; 0049cf94
    SETZ AL                             ; 0049cf9e
    AND EAX,0xff                        ; 0049cfa1
    RET                                 ; 0049cfa6

