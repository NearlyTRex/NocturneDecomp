; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_storm_cpp_CStorm_fire_FUN_00568b50(CStorm *this_ptr)
;
; Parameters:
; CStorm *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_wp_nomana_wav_005d5cd9
;   undefined4 DAT_005fc5a0
;   undefined4 DAT_006045f8
;
; Called Functions:
;   core_actor.cpp_FUN_00408b00
;   core_fire.cpp_CFireEffect_createStormToss_FUN_004a3a00
;   core_sound.cpp_CSound_playActorSound_FUN_005609d0
;   core_weapon.cpp_CWeapon_fire_FUN_0057b880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568b50
        ;   Label: core_storm.cpp_CStorm_fire_FUN_00568b50
    PUSH EBP                            ; 00568b51
    SUB ESP,0x24                        ; 00568b52
    MOV EBX,dword ptr [ESP + 0x30]      ; 00568b55
    PUSH EBX                            ; 00568b59
    CALL core_weapon.cpp_CWeapon_fire_FUN_0057b880 ; 00568b5a
        ;   XREF to: 0057b880 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_0057b880(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 00568b5f
    LEA EBP,[EBX + 0x20]                ; 00568b62
    TEST EAX,EAX                        ; 00568b65
    JZ 0x00568ba3                       ; 00568b67
        ;   XREF to: 00568ba3 (CONDITIONAL_JUMP)  ; LAB_00568ba3
    PUSH EDI                            ; 00568b69
    PUSH ESI                            ; 00568b6a
    MOV ESI,0xc1200000                  ; 00568b6b
    MOV EDI,0x41200000                  ; 00568b70
    XOR ECX,ECX                         ; 00568b75
    MOV dword ptr [ESP + 0x24],ESI      ; 00568b77
    MOV dword ptr [ESP + 0x28],EDI      ; 00568b7b
    MOV dword ptr [ESP + 0x20],ECX      ; 00568b7f
    CMP dword ptr [EBX + 0x304],0x0     ; 00568b83
    JNZ 0x00568bc7                      ; 00568b8a
        ;   XREF to: 00568bc7 (CONDITIONAL_JUMP)  ; LAB_00568bc7
    MOV EAX,0x1                         ; 00568b8c
        ;   Label: LAB_00568b8c
    MOV dword ptr [EBX + 0x300],0x40a00000 ; 00568b91
    POP ESI                             ; 00568b9b
    POP EDI                             ; 00568b9c
    ADD ESP,0x24                        ; 00568b9d
        ;   Label: LAB_00568b9d
    POP EBP                             ; 00568ba0
    POP EBX                             ; 00568ba1
    RET                                 ; 00568ba2
    PUSH EBP                            ; 00568ba3
        ;   Label: LAB_00568ba3
    PUSH 0x5d5cd9                       ; 00568ba4 | = "wp_nomana.wav"
    PUSH EBX                            ; 00568ba9
    MOV EDX,dword ptr [0x006045f8]      ; 00568baa | DAT_006045f8
    PUSH EDX                            ; 00568bb0
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 00568bb1
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 00568bb6
    MOV dword ptr [EBX + 0x300],0x3f800000 ; 00568bb9
    XOR EAX,EAX                         ; 00568bc3
    JMP 0x00568b9d                      ; 00568bc5
        ;   XREF to: 00568b9d (UNCONDITIONAL_JUMP)  ; LAB_00568b9d
    LEA EAX,[ESP + 0x20]                ; 00568bc7
        ;   Label: LAB_00568bc7
    PUSH EAX                            ; 00568bcb
    MOV EDX,dword ptr [EBX + 0x304]     ; 00568bcc
    PUSH EDX                            ; 00568bd2
    LEA ESI,[ESP + 0x10]                ; 00568bd3
    LEA EDI,[ESP + 0x1c]                ; 00568bd7
    CALL core_actor.cpp_FUN_00408b00    ; 00568bdb
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x10]                ; 00568be0
    ADD ESP,0x8                         ; 00568be4
    LEA EAX,[ESP + 0x14]                ; 00568be7
    MOVSD ES:EDI,ESI                    ; 00568beb
    MOVSD ES:EDI,ESI                    ; 00568bec
    MOVSD ES:EDI,ESI                    ; 00568bed
    PUSH EAX                            ; 00568bee
    MOV EAX,dword ptr [EBX + 0x304]     ; 00568bef
    ADD EAX,0x30                        ; 00568bf5
    PUSH EAX                            ; 00568bf8
    PUSH EBP                            ; 00568bf9
    MOV ECX,dword ptr [0x005fc5a0]      ; 00568bfa | DAT_005fc5a0
    PUSH ECX                            ; 00568c00
    CALL core_fire.cpp_CFireEffect_createStormToss_FUN_004a3a00 ; 00568c01
        ;   XREF to: 004a3a00 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createStormToss_FUN_004a3a00(CFireEffect * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * velocity)
    ADD ESP,0x10                        ; 00568c06
    JMP 0x00568b8c                      ; 00568c09
        ;   XREF to: 00568b8c (UNCONDITIONAL_JUMP)  ; LAB_00568b8c

