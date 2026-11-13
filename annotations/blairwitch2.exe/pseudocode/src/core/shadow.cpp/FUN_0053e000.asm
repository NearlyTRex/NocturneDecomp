; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_FUN_0053e000(int param_1)
;
;
; XREF[1]:
;   core_shadow.cpp_CShadow_processDamage_FUN_0053ea00 at 0053ead0
;
; Referenced Globals:
;   TerminatedCString s_shb_damage_wav_005e66da
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00550b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053e000
        ;   Label: core_shadow.cpp_FUN_0053e000
    MOV EBX,dword ptr [ESP + 0x8]       ; 0053e001
    MOV EDX,dword ptr [EBX + 0x10b1c]   ; 0053e005
    PUSH EDX                            ; 0053e00b
    CALL sound_sndmain.cpp_FUN_00550b70 ; 0053e00c
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 0053e011
    TEST EAX,EAX                        ; 0053e014
    JZ 0x0053e01a                       ; 0053e016
        ;   XREF to: 0053e01a (CONDITIONAL_JUMP)  ; LAB_0053e01a
    POP EBX                             ; 0053e018
    RET                                 ; 0053e019
    PUSH 0x5e66da                       ; 0053e01a | = "shb_damage??.wav"
        ;   Label: LAB_0053e01a
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0053e01f
    PUSH EBX                            ; 0053e025
    CALL dword ptr [EAX + 0x34]         ; 0053e026
    MOV dword ptr [EBX + 0x10b20],0x40800000 ; 0053e029
    ADD ESP,0x8                         ; 0053e033
    MOV dword ptr [EBX + 0x10b1c],EAX   ; 0053e036
    POP EBX                             ; 0053e03c
    RET                                 ; 0053e03d

