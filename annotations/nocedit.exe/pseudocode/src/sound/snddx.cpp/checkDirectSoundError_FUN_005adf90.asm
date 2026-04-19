; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_snddx_cpp_checkDirectSoundError_FUN_005adf90(HRESULT error_code,char *operation_description)
;
; Parameters:
; HRESULT          Stack[0x4]:4   error_code
; char *           Stack[0x8]:4   operation_description
; Local Variables:
; char[400]        Stack[-0x190]:400  local_190
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;
; *****************************************************************************

section .text

    SUB ESP,0x190                       ; 005adf90
        ;   Label: sound_snddx.cpp_checkDirectSoundError_FUN_005adf90
    MOV EAX,dword ptr [ESP + 0x194]     ; 005adf96
    TEST EAX,EAX                        ; 005adf9d
    JNZ 0x005adfad                      ; 005adf9f
        ;   XREF to: 005adfad (CONDITIONAL_JUMP)  ; LAB_005adfad
    MOV EAX,0x1                         ; 005adfa1
    ADD ESP,0x190                       ; 005adfa6
    RET                                 ; 005adfac
    PUSH EAX                            ; 005adfad
        ;   Label: LAB_005adfad
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005adfae
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
    ADD ESP,0x4                         ; 005adfb3
    PUSH EAX                            ; 005adfb6
    MOV EDX,dword ptr [ESP + 0x19c]     ; 005adfb7
    PUSH EDX                            ; 005adfbe
    PUSH 0x651a6c                       ; 005adfbf | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 005adfc4
    PUSH EAX                            ; 005adfc8
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005adfc9
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005adfce
    MOV EAX,ESP                         ; 005adfd1
    PUSH EAX                            ; 005adfd3
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005adfd4
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005adfd9
    XOR EAX,EAX                         ; 005adfdc
    ADD ESP,0x190                       ; 005adfde
    RET                                 ; 005adfe4

