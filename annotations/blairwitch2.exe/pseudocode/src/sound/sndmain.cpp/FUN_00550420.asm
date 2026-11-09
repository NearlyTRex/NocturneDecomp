; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00550420(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0264161c
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00550070
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0264161c]      ; 00550420 | DAT_0264161c
        ;   Label: sound_sndmain.cpp_FUN_00550420
    LEA EAX,[EDX*0x4 + 0x0]             ; 00550426
    SUB EAX,EDX                         ; 0055042d
    SHL EAX,0x5                         ; 0055042f
    ADD EAX,0x2641620                   ; 00550432
    PUSH EAX                            ; 00550437
    CALL sound_sndmain.cpp_FUN_00550070 ; 00550438
        ;   XREF to: 00550070 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00550070(CSfxOptions * this_ptr)
    ADD ESP,0x4                         ; 0055043d
    RET                                 ; 00550440

