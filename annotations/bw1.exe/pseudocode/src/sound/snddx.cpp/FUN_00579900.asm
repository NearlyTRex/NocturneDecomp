; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_snddx_cpp_FUN_00579900(undefined4 param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005f4c35
;   undefined4 s_Get_active_sfx_secondary_005f529a+1
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005bfb40
;   sound_snddx.cpp_FUN_00577500
;   sound_sndmain.cpp_logSoundError_FUN_005773f0
;
; *****************************************************************************

section .text

    SUB ESP,0x194                       ; 00579900
        ;   Label: sound_snddx.cpp_FUN_00579900
    MOV EDX,dword ptr [ESP + 0x19c]     ; 00579906
    MOV EDX,dword ptr [EDX + 0x60]      ; 0057990d
    TEST EDX,EDX                        ; 00579910
    JLE 0x00579919                      ; 00579912
        ;   XREF to: 00579919 (CONDITIONAL_JUMP)  ; LAB_00579919
    CMP EDX,0x1f                        ; 00579914
    JL 0x00579922                       ; 00579917
        ;   XREF to: 00579922 (CONDITIONAL_JUMP)  ; LAB_00579922
    XOR EAX,EAX                         ; 00579919
        ;   Label: LAB_00579919
    ADD ESP,0x194                       ; 0057991b
    RET                                 ; 00579921
    LEA EAX,[EDX*0x8 + 0x0]             ; 00579922
        ;   Label: LAB_00579922
    ADD EAX,EDX                         ; 00579929
    CMP dword ptr [EAX*0x4 + 0x2c823e0],0x0 ; 0057992b
    JZ 0x00579919                       ; 00579933
        ;   XREF to: 00579919 (CONDITIONAL_JUMP)  ; LAB_00579919
    LEA EAX,[EDX*0x8 + 0x0]             ; 00579935
    LEA ECX,[ESP + 0x190]               ; 0057993c
    ADD EAX,EDX                         ; 00579943
    PUSH ECX                            ; 00579945
    MOV EAX,dword ptr [EAX*0x4 + 0x2c823e0] ; 00579946
    PUSH EAX                            ; 0057994d
    MOV EDX,dword ptr [EAX]             ; 0057994e
    CALL dword ptr [EDX + 0x24]         ; 00579950
    TEST EAX,EAX                        ; 00579953
    JNZ 0x0057996d                      ; 00579955
        ;   XREF to: 0057996d (CONDITIONAL_JUMP)  ; LAB_0057996d
    TEST byte ptr [ESP + 0x190],0x1     ; 00579957
    JZ 0x00579919                       ; 0057995f
        ;   XREF to: 00579919 (CONDITIONAL_JUMP)  ; LAB_00579919
    MOV EAX,0x1                         ; 00579961
    ADD ESP,0x194                       ; 00579966
    RET                                 ; 0057996c
    PUSH EAX                            ; 0057996d
        ;   Label: LAB_0057996d
    CALL sound_snddx.cpp_FUN_00577500   ; 0057996e
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00577500(uint error_code)
    ADD ESP,0x4                         ; 00579973
    PUSH EAX                            ; 00579976
    PUSH 0x5f529b                       ; 00579977 | s_Get_active_sfx_secondary_005f529a+1
    PUSH 0x5f4c35                       ; 0057997c | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 00579981
    PUSH EAX                            ; 00579985
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00579986
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 0057998b
    MOV EAX,ESP                         ; 0057998e
    PUSH EAX                            ; 00579990
    CALL sound_sndmain.cpp_logSoundError_FUN_005773f0 ; 00579991
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005773f0(char * format)
    ADD ESP,0x4                         ; 00579996
    XOR EAX,EAX                         ; 00579999
    ADD ESP,0x194                       ; 0057999b
    RET                                 ; 005799a1

