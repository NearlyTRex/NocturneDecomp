; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_rifle_cpp_CRifle_onFired_FUN_005407e0(CRifle *this_ptr)
;
; Parameters:
; CRifle *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_rifbullet_kfm_005edc7d+2
;   TerminatedCString s_shotgun_cock_wav_3_005edc8d
;   undefined4 DAT_0061c010
;   undefined4 DAT_006236b8
;   undefined4 DAT_01d06ab4
;
; Called Functions:
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
;   core_dirmat.cpp_FUN_0045f690
;   core_dmodel.cpp_loadModel_FUN_00468780
;   core_fire.cpp_CFireEffect_createShell_FUN_004b7270
;   core_sound.cpp_CSound_playActorSound_FUN_0057d8a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005407e0
        ;   Label: core_rifle.cpp_CRifle_onFired_FUN_005407e0
    PUSH EBP                            ; 005407e1
    SUB ESP,0x74                        ; 005407e2
    MOV EBX,dword ptr [ESP + 0x80]      ; 005407e5
    CMP dword ptr [EBX + 0x568],0x0     ; 005407ec
    JG 0x005407fb                       ; 005407f3
        ;   XREF to: 005407fb (CONDITIONAL_JUMP)  ; LAB_005407fb
    ADD ESP,0x74                        ; 005407f5
    POP EBP                             ; 005407f8
    POP EBX                             ; 005407f9
    RET                                 ; 005407fa
    PUSH EDI                            ; 005407fb
        ;   Label: LAB_005407fb
    PUSH ESI                            ; 005407fc
    PUSH 0x3ec90fdb                     ; 005407fd
    MOV ECX,0x40a00000                  ; 00540802
    MOV ESI,0x40c00000                  ; 00540807
    MOV EDI,0xc0c00000                  ; 0054080c
    PUSH 0xbec90fdb                     ; 00540811
    MOV dword ptr [ESP + 0x44],ECX      ; 00540816
    MOV dword ptr [ESP + 0x48],ESI      ; 0054081a
    MOV dword ptr [ESP + 0x4c],EDI      ; 0054081e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00540822
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x80],EAX      ; 00540827
    FLD float ptr [ESP + 0x80]          ; 0054082e
    ADD ESP,0x8                         ; 00540835
    PUSH 0x3ec90fdb                     ; 00540838
    PUSH 0xbec90fdb                     ; 0054083d
    FSTP float ptr [ESP + 0x68]         ; 00540842
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00540846
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x80],EAX      ; 0054084b
    FLD float ptr [ESP + 0x80]          ; 00540852
    ADD ESP,0x8                         ; 00540859
    LEA EAX,[ESP + 0x60]                ; 0054085c
    PUSH EAX                            ; 00540860
    LEA EAX,[ESP + 0xc]                 ; 00540861
    XOR EBP,EBP                         ; 00540865
    PUSH EAX                            ; 00540867
    FSTP float ptr [ESP + 0x6c]         ; 00540868
    MOV dword ptr [ESP + 0x70],EBP      ; 0054086c
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0 ; 00540870
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00540875
    LEA EAX,[ESP + 0x3c]                ; 00540878
    PUSH EAX                            ; 0054087c
    LEA EAX,[ESP + 0xc]                 ; 0054087d
    PUSH EAX                            ; 00540881
    LEA ESI,[ESP + 0x50]                ; 00540882
    LEA EDI,[ESP + 0x5c]                ; 00540886
    CALL core_dirmat.cpp_FUN_0045f690   ; 0054088a
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    ADD ESP,0x8                         ; 0054088f
    LEA EAX,[ESP + 0x54]                ; 00540892
    LEA ESI,[ESP + 0x48]                ; 00540896
    PUSH EAX                            ; 0054089a
    MOVSD ES:EDI,ESI                    ; 0054089b
    MOVSD ES:EDI,ESI                    ; 0054089c
    MOVSD ES:EDI,ESI                    ; 0054089d
    PUSH EBX                            ; 0054089e
    LEA ESI,[ESP + 0x38]                ; 0054089f
    LEA EDI,[ESP + 0x74]                ; 005408a3
    CALL core_actor.cpp_FUN_00408ac0    ; 005408a7
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0x38]                ; 005408ac
    ADD ESP,0x8                         ; 005408b0
    MOVSD ES:EDI,ESI                    ; 005408b3
    MOVSD ES:EDI,ESI                    ; 005408b4
    MOVSD ES:EDI,ESI                    ; 005408b5
    LEA EAX,[ESP + 0x6c]                ; 005408b6
    LEA ESI,[ESP + 0x3c]                ; 005408ba
    CMP ESI,EAX                         ; 005408be
    JZ 0x005408da                       ; 005408c0
        ;   XREF to: 005408da (CONDITIONAL_JUMP)  ; LAB_005408da
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005408c2
    MOV dword ptr [ESP + 0x3c],EAX      ; 005408c6
    MOV EAX,dword ptr [ESP + 0x70]      ; 005408ca
    MOV dword ptr [ESP + 0x40],EAX      ; 005408ce
    MOV EAX,dword ptr [ESP + 0x74]      ; 005408d2
    MOV dword ptr [ESP + 0x44],EAX      ; 005408d6
    PUSH 0x5edc7f                       ; 005408da | s_rifbullet_kfm_005edc7d+2
        ;   Label: LAB_005408da
    CALL core_dmodel.cpp_loadModel_FUN_00468780 ; 005408df
        ;   XREF to: 00468780 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_loadModel_FUN_00468780()
    ADD ESP,0x4                         ; 005408e4
    PUSH EAX                            ; 005408e7
    LEA EAX,[ESP + 0x40]                ; 005408e8
    PUSH EAX                            ; 005408ec
    LEA EAX,[EBX + 0x30]                ; 005408ed
    PUSH EAX                            ; 005408f0
    LEA EAX,[EBX + 0x20]                ; 005408f1
    PUSH EAX                            ; 005408f4
    MOV EAX,[0x0061c010]                ; 005408f5 | DAT_0061c010
    PUSH EAX                            ; 005408fa
    CALL core_fire.cpp_CFireEffect_createShell_FUN_004b7270 ; 005408fb
        ;   XREF to: 004b7270 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createShell_FUN_004b7270(CFireEffect * this_ptr, CVector3f * position, CVector3f * euler_angles, CVector3f * velocity, ...)
    MOV EAX,[0x01d06ab4]                ; 00540900 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 00540905
    ADD ESP,0x14                        ; 0054090c
    ADD EAX,0x20                        ; 0054090f
    PUSH EAX                            ; 00540912
    PUSH 0x5edc8d                       ; 00540913 | = "shotgun-cock.wav @ .3"
    PUSH EBX                            ; 00540918
    MOV EDX,dword ptr [0x006236b8]      ; 00540919 | DAT_006236b8
    PUSH EDX                            ; 0054091f
    CALL core_sound.cpp_CSound_playActorSound_FUN_0057d8a0 ; 00540920
        ;   XREF to: 0057d8a0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0057d8a0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 00540925
    POP ESI                             ; 00540928
    POP EDI                             ; 00540929
    ADD ESP,0x74                        ; 0054092a
    POP EBP                             ; 0054092d
    POP EBX                             ; 0054092e
    RET                                 ; 0054092f

