; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_snddx_cpp_FUN_0055ca70(undefined4 param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005d452f
;   undefined4 s_Get_active_sfx_secondary_005d4b94+1
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005a28c0
;   sound_snddx.cpp_FUN_0055a670
;   sound_sndmain.cpp_FUN_0055a560
;
; *****************************************************************************

section .text

    SUB ESP,0x194                       ; 0055ca70
        ;   Label: sound_snddx.cpp_FUN_0055ca70
    MOV EDX,dword ptr [ESP + 0x19c]     ; 0055ca76
    MOV EDX,dword ptr [EDX + 0x60]      ; 0055ca7d
    TEST EDX,EDX                        ; 0055ca80
    JLE 0x0055ca89                      ; 0055ca82
        ;   XREF to: 0055ca89 (CONDITIONAL_JUMP)  ; LAB_0055ca89
    CMP EDX,0x1f                        ; 0055ca84
    JL 0x0055ca92                       ; 0055ca87
        ;   XREF to: 0055ca92 (CONDITIONAL_JUMP)  ; LAB_0055ca92
    XOR EAX,EAX                         ; 0055ca89
        ;   Label: LAB_0055ca89
    ADD ESP,0x194                       ; 0055ca8b
    RET                                 ; 0055ca91
    LEA EAX,[EDX*0x8 + 0x0]             ; 0055ca92
        ;   Label: LAB_0055ca92
    ADD EAX,EDX                         ; 0055ca99
    CMP dword ptr [EAX*0x4 + 0x2cf500c],0x0 ; 0055ca9b
    JZ 0x0055ca89                       ; 0055caa3
        ;   XREF to: 0055ca89 (CONDITIONAL_JUMP)  ; LAB_0055ca89
    LEA EAX,[EDX*0x8 + 0x0]             ; 0055caa5
    LEA ECX,[ESP + 0x190]               ; 0055caac
    ADD EAX,EDX                         ; 0055cab3
    PUSH ECX                            ; 0055cab5
    MOV EAX,dword ptr [EAX*0x4 + 0x2cf500c] ; 0055cab6
    PUSH EAX                            ; 0055cabd
    MOV EDX,dword ptr [EAX]             ; 0055cabe
    CALL dword ptr [EDX + 0x24]         ; 0055cac0
    TEST EAX,EAX                        ; 0055cac3
    JNZ 0x0055cadd                      ; 0055cac5
        ;   XREF to: 0055cadd (CONDITIONAL_JUMP)  ; LAB_0055cadd
    TEST byte ptr [ESP + 0x190],0x1     ; 0055cac7
    JZ 0x0055ca89                       ; 0055cacf
        ;   XREF to: 0055ca89 (CONDITIONAL_JUMP)  ; LAB_0055ca89
    MOV EAX,0x1                         ; 0055cad1
    ADD ESP,0x194                       ; 0055cad6
    RET                                 ; 0055cadc
    PUSH EAX                            ; 0055cadd
        ;   Label: LAB_0055cadd
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055cade
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055cae3
    PUSH EAX                            ; 0055cae6
    PUSH 0x5d4b95                       ; 0055cae7 | s_Get_active_sfx_secondary_005d4b94+1
    PUSH 0x5d452f                       ; 0055caec | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0055caf1
    PUSH EAX                            ; 0055caf5
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055caf6
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055cafb
    MOV EAX,ESP                         ; 0055cafe
    PUSH EAX                            ; 0055cb00
    CALL sound_sndmain.cpp_FUN_0055a560 ; 0055cb01
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    ADD ESP,0x4                         ; 0055cb06
    XOR EAX,EAX                         ; 0055cb09
    ADD ESP,0x194                       ; 0055cb0b
    RET                                 ; 0055cb11

