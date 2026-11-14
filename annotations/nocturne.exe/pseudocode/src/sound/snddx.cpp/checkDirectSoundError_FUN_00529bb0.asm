; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_snddx_cpp_checkDirectSoundError_FUN_00529bb0(HRESULT error_code,char *operation_description)
;
; Parameters:
; HRESULT          Stack[0x4]:4   error_code
; char *           Stack[0x8]:4   operation_description
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90
;   sound_sndmain.cpp_logSoundError_FUN_00529980
;
; *****************************************************************************

section .text

    SUB ESP,0x190                       ; 00529bb0
        ;   Label: sound_snddx.cpp_checkDirectSoundError_FUN_00529bb0
    MOV EAX,dword ptr [ESP + 0x194]     ; 00529bb6
    TEST EAX,EAX                        ; 00529bbd
    JNZ 0x00529bcd                      ; 00529bbf
        ;   XREF to: 00529bcd (CONDITIONAL_JUMP)  ; LAB_00529bcd
    MOV EAX,0x1                         ; 00529bc1
    ADD ESP,0x190                       ; 00529bc6
    RET                                 ; 00529bcc
    PUSH EAX                            ; 00529bcd
        ;   Label: LAB_00529bcd
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 00529bce
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90(uint error_code)
    ADD ESP,0x4                         ; 00529bd3
    PUSH EAX                            ; 00529bd6
    MOV EDX,dword ptr [ESP + 0x19c]     ; 00529bd7
    PUSH EDX                            ; 00529bde
    PUSH 0x5940b7                       ; 00529bdf
    LEA EAX,[ESP + 0xc]                 ; 00529be4
    PUSH EAX                            ; 00529be8
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00529be9
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x10                        ; 00529bee
    MOV EAX,ESP                         ; 00529bf1
    PUSH EAX                            ; 00529bf3
    CALL sound_sndmain.cpp_logSoundError_FUN_00529980 ; 00529bf4
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_00529980(char * format)
    ADD ESP,0x4                         ; 00529bf9
    XOR EAX,EAX                         ; 00529bfc
    ADD ESP,0x190                       ; 00529bfe
    RET                                 ; 00529c04

