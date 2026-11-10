; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadowsc_cpp_FUN_005610a0(int param_1)
;
;
; XREF[1]:
;   core_shadowsc.cpp_CShadowsc_processDamage_FUN_00561330 at 005613eb
;
; Referenced Globals:
;   TerminatedCString s_scorp_die1_wav_4_005f1913
;
; Called Functions:
;   sound_sndmain.cpp_FUN_005735a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005610a0
        ;   Label: core_shadowsc.cpp_FUN_005610a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005610a1
    MOV EDX,dword ptr [EBX + 0xc27c]    ; 005610a5
    PUSH EDX                            ; 005610ab
    CALL sound_sndmain.cpp_FUN_005735a0 ; 005610ac
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 005610b1
    TEST EAX,EAX                        ; 005610b4
    JZ 0x005610ba                       ; 005610b6
        ;   XREF to: 005610ba (CONDITIONAL_JUMP)  ; LAB_005610ba
    POP EBX                             ; 005610b8
    RET                                 ; 005610b9
    PUSH 0x5f1913                       ; 005610ba | = "scorp-die1.wav @ 4"
        ;   Label: LAB_005610ba
    MOV EAX,dword ptr [EBX + 0x154]     ; 005610bf
    PUSH EBX                            ; 005610c5
    CALL dword ptr [EAX + 0x2c]         ; 005610c6
    MOV dword ptr [EBX + 0xc284],0x41000000 ; 005610c9
    ADD ESP,0x8                         ; 005610d3
    MOV dword ptr [EBX + 0xc27c],EAX    ; 005610d6
    POP EBX                             ; 005610dc
    RET                                 ; 005610dd

