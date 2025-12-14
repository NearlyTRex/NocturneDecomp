; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_dynamite.cpp_FUN_0049cf70()
;
;
; XREF[1]:
;   core_stranger.cpp_CStranger_FUN_005c5270 at 005c5381
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049cf70
        ;   Label: core_dynamite.cpp_FUN_0049cf70
    FLD float ptr [EAX + 0x578]         ; 0049cf74
    FLDZ                                ; 0049cf7a
    FCOMPP                              ; 0049cf7c
    FNSTSW AX                           ; 0049cf7e
    SAHF                                ; 0049cf80
    JNC 0x0049cf89                      ; 0049cf81
        ;   XREF to: 0049cf89 (CONDITIONAL_JUMP)  ; LAB_0049cf89
    MOV EAX,0x1                         ; 0049cf83
    RET                                 ; 0049cf88
    XOR EAX,EAX                         ; 0049cf89
        ;   Label: LAB_0049cf89
    RET                                 ; 0049cf8b

