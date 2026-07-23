; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_snddx_cpp_CDirectSoundDevice_isSfxPlaying_FUN_0052b7e0(undefined4 param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x4]:1  local_4
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005940b7
;   TerminatedCString s_Get_active_sfx_secondary_00594687
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;   FUN_00529980
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90
;
; *****************************************************************************

section .text

    SUB ESP,0x194                       ; 0052b7e0
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_isSfxPlaying_FUN_0052b7e0
    MOV EAX,dword ptr [ESP + 0x19c]     ; 0052b7e6
    MOV EAX,dword ptr [EAX + 0x6c]      ; 0052b7ed
    TEST EAX,EAX                        ; 0052b7f0
    JLE 0x0052b7f9                      ; 0052b7f2
        ;   XREF to: 0052b7f9 (CONDITIONAL_JUMP)  ; LAB_0052b7f9
    CMP EAX,0x1f                        ; 0052b7f4
    JL 0x0052b802                       ; 0052b7f7
        ;   XREF to: 0052b802 (CONDITIONAL_JUMP)  ; LAB_0052b802
    XOR EAX,EAX                         ; 0052b7f9
        ;   Label: LAB_0052b7f9
    ADD ESP,0x194                       ; 0052b7fb
    RET                                 ; 0052b801
    LEA EDX,[EAX*0x4 + 0x0]             ; 0052b802
        ;   Label: LAB_0052b802
    CMP dword ptr [EDX + 0x2dc92a8],0x0 ; 0052b809
    JZ 0x0052b7f9                       ; 0052b810
        ;   XREF to: 0052b7f9 (CONDITIONAL_JUMP)  ; LAB_0052b7f9
    CMP dword ptr [EDX + 0x2dc9324],0x0 ; 0052b812
    JZ 0x0052b7f9                       ; 0052b819
        ;   XREF to: 0052b7f9 (CONDITIONAL_JUMP)  ; LAB_0052b7f9
    LEA ECX,[ESP + 0x190]               ; 0052b81b
    MOV EAX,dword ptr [EAX*0x4 + 0x2dc92a8] ; 0052b822
    PUSH ECX                            ; 0052b829
    MOV EDX,dword ptr [EAX]             ; 0052b82a
    PUSH EAX                            ; 0052b82c
    CALL dword ptr [EDX + 0x24]         ; 0052b82d
    TEST EAX,EAX                        ; 0052b830
    JNZ 0x0052b84a                      ; 0052b832
        ;   XREF to: 0052b84a (CONDITIONAL_JUMP)  ; LAB_0052b84a
    TEST byte ptr [ESP + 0x190],0x1     ; 0052b834
    JZ 0x0052b7f9                       ; 0052b83c
        ;   XREF to: 0052b7f9 (CONDITIONAL_JUMP)  ; LAB_0052b7f9
    MOV EAX,0x1                         ; 0052b83e
    ADD ESP,0x194                       ; 0052b843
    RET                                 ; 0052b849
    PUSH EAX                            ; 0052b84a
        ;   Label: LAB_0052b84a
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052b84b
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90()
    ADD ESP,0x4                         ; 0052b850
    PUSH EAX                            ; 0052b853
    PUSH 0x594687                       ; 0052b854 | = "Get active sfx secondary buffer status"
    PUSH 0x5940b7                       ; 0052b859 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0052b85e
    PUSH EAX                            ; 0052b862
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052b863
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0052b868
    MOV EAX,ESP                         ; 0052b86b
    PUSH EAX                            ; 0052b86d
    CALL FUN_00529980                   ; 0052b86e
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined FUN_00529980()
    ADD ESP,0x4                         ; 0052b873
    XOR EAX,EAX                         ; 0052b876
    ADD ESP,0x194                       ; 0052b878
    RET                                 ; 0052b87e

