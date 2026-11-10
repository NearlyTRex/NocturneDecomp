; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_snddx_cpp_FUN_00556ed0(undefined4 param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005e9a3b
;   undefined4 s_Get_active_sfx_secondary_005ea0a0+1
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005b7790
;   sound_snddx.cpp_FUN_00554ad0
;   sound_sndmain.cpp_FUN_005549c0
;
; *****************************************************************************

section .text

    SUB ESP,0x194                       ; 00556ed0
        ;   Label: sound_snddx.cpp_FUN_00556ed0
    MOV EDX,dword ptr [ESP + 0x19c]     ; 00556ed6
    MOV EDX,dword ptr [EDX + 0x60]      ; 00556edd
    TEST EDX,EDX                        ; 00556ee0
    JLE 0x00556ee9                      ; 00556ee2
        ;   XREF to: 00556ee9 (CONDITIONAL_JUMP)  ; LAB_00556ee9
    CMP EDX,0x1f                        ; 00556ee4
    JL 0x00556ef2                       ; 00556ee7
        ;   XREF to: 00556ef2 (CONDITIONAL_JUMP)  ; LAB_00556ef2
    XOR EAX,EAX                         ; 00556ee9
        ;   Label: LAB_00556ee9
    ADD ESP,0x194                       ; 00556eeb
    RET                                 ; 00556ef1
    LEA EAX,[EDX*0x8 + 0x0]             ; 00556ef2
        ;   Label: LAB_00556ef2
    ADD EAX,EDX                         ; 00556ef9
    CMP dword ptr [EAX*0x4 + 0x264ac10],0x0 ; 00556efb
    JZ 0x00556ee9                       ; 00556f03
        ;   XREF to: 00556ee9 (CONDITIONAL_JUMP)  ; LAB_00556ee9
    LEA EAX,[EDX*0x8 + 0x0]             ; 00556f05
    LEA ECX,[ESP + 0x190]               ; 00556f0c
    ADD EAX,EDX                         ; 00556f13
    PUSH ECX                            ; 00556f15
    MOV EAX,dword ptr [EAX*0x4 + 0x264ac10] ; 00556f16
    PUSH EAX                            ; 00556f1d
    MOV EDX,dword ptr [EAX]             ; 00556f1e
    CALL dword ptr [EDX + 0x24]         ; 00556f20
    TEST EAX,EAX                        ; 00556f23
    JNZ 0x00556f3d                      ; 00556f25
        ;   XREF to: 00556f3d (CONDITIONAL_JUMP)  ; LAB_00556f3d
    TEST byte ptr [ESP + 0x190],0x1     ; 00556f27
    JZ 0x00556ee9                       ; 00556f2f
        ;   XREF to: 00556ee9 (CONDITIONAL_JUMP)  ; LAB_00556ee9
    MOV EAX,0x1                         ; 00556f31
    ADD ESP,0x194                       ; 00556f36
    RET                                 ; 00556f3c
    PUSH EAX                            ; 00556f3d
        ;   Label: LAB_00556f3d
    CALL sound_snddx.cpp_FUN_00554ad0   ; 00556f3e
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 00556f43
    PUSH EAX                            ; 00556f46
    PUSH 0x5ea0a1                       ; 00556f47 | s_Get_active_sfx_secondary_005ea0a0+1
    PUSH 0x5e9a3b                       ; 00556f4c | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 00556f51
    PUSH EAX                            ; 00556f55
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00556f56
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 00556f5b
    MOV EAX,ESP                         ; 00556f5e
    PUSH EAX                            ; 00556f60
    CALL sound_sndmain.cpp_FUN_005549c0 ; 00556f61
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 00556f66
    XOR EAX,EAX                         ; 00556f69
    ADD ESP,0x194                       ; 00556f6b
    RET                                 ; 00556f71

