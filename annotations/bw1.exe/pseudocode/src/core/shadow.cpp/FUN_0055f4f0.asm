; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_FUN_0055f4f0(int param_1)
;
;
; XREF[1]:
;   core_shadow.cpp_CShadow_processDamage_FUN_0055fea0 at 0055ff53
;
; Referenced Globals:
;   TerminatedCString s_shb_damage_wav_005f16b3
;   TerminatedCString s_child_cry_wav_005f16c4
;
; Called Functions:
;   sound_sndmain.cpp_FUN_005735a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055f4f0
        ;   Label: core_shadow.cpp_FUN_0055f4f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0055f4f1
    MOV EDX,dword ptr [EBX + 0xc29c]    ; 0055f4f5
    PUSH EDX                            ; 0055f4fb
    CALL sound_sndmain.cpp_FUN_005735a0 ; 0055f4fc
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0055f501
    TEST EAX,EAX                        ; 0055f504
    JNZ 0x0055f533                      ; 0055f506
        ;   XREF to: 0055f533 (CONDITIONAL_JUMP)  ; LAB_0055f533
    CMP dword ptr [EBX + 0xc2d4],0x1    ; 0055f508
    JZ 0x0055f535                       ; 0055f50f
        ;   XREF to: 0055f535 (CONDITIONAL_JUMP)  ; LAB_0055f535
    PUSH 0x5f16c4                       ; 0055f511 | = "child-cry?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0055f516
        ;   Label: LAB_0055f516
    PUSH EBX                            ; 0055f51c
    CALL dword ptr [EAX + 0x2c]         ; 0055f51d
    ADD ESP,0x8                         ; 0055f520
    MOV dword ptr [EBX + 0xc29c],EAX    ; 0055f523
    MOV dword ptr [EBX + 0xc298],0x40800000 ; 0055f529
    POP EBX                             ; 0055f533
        ;   Label: LAB_0055f533
    RET                                 ; 0055f534
    PUSH 0x5f16b3                       ; 0055f535 | = "shb_damage??.wav"
        ;   Label: LAB_0055f535
    JMP 0x0055f516                      ; 0055f53a
        ;   XREF to: 0055f516 (UNCONDITIONAL_JUMP)  ; LAB_0055f516

