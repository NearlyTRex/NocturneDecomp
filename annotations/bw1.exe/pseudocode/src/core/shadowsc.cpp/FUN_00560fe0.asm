; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadowsc_cpp_FUN_00560fe0(int param_1)
;
;
; XREF[1]:
;   core_shadowsc.cpp_CShadowsc_process_FUN_00560630 at 00560c75
;
; Referenced Globals:
;   undefined4 s_Gscorp_attack_wav_4_005f18d0+1
;
; Called Functions:
;   sound_sndmain.cpp_FUN_005735a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00560fe0
        ;   Label: core_shadowsc.cpp_FUN_00560fe0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00560fe1
    MOV EDX,dword ptr [EBX + 0xc27c]    ; 00560fe5
    PUSH EDX                            ; 00560feb
    CALL sound_sndmain.cpp_FUN_005735a0 ; 00560fec
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00560ff1
    TEST EAX,EAX                        ; 00560ff4
    JZ 0x00560ffa                       ; 00560ff6
        ;   XREF to: 00560ffa (CONDITIONAL_JUMP)  ; LAB_00560ffa
    POP EBX                             ; 00560ff8
    RET                                 ; 00560ff9
    PUSH 0x5f18d1                       ; 00560ffa | s_Gscorp_attack_wav_4_005f18d0+1
        ;   Label: LAB_00560ffa
    MOV EAX,dword ptr [EBX + 0x154]     ; 00560fff
    PUSH EBX                            ; 00561005
    CALL dword ptr [EAX + 0x2c]         ; 00561006
    MOV dword ptr [EBX + 0xc284],0x41700000 ; 00561009
    ADD ESP,0x8                         ; 00561013
    MOV dword ptr [EBX + 0xc27c],EAX    ; 00561016
    POP EBX                             ; 0056101c
    RET                                 ; 0056101d

