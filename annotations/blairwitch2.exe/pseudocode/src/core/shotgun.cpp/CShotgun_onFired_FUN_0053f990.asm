; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_shotgun_cpp_CShotgun_onFired_FUN_0053f990(CShotgun *this_ptr)
;
; Parameters:
; CShotgun *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_shell_kfm_005e6815
;   TerminatedCString s_shotgun_cock_wav_005e681f
;   undefined4 DAT_00614d30
;
; Called Functions:
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
;   core_dirmat.cpp_FUN_00449530
;   core_dmodel.cpp_loadModel_FUN_0044fba0
;   core_fire.cpp_CFireEffect_createShell_FUN_0049e970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053f990
        ;   Label: core_shotgun.cpp_CShotgun_onFired_FUN_0053f990
    PUSH EBP                            ; 0053f991
    SUB ESP,0x74                        ; 0053f992
    MOV EBX,dword ptr [ESP + 0x80]      ; 0053f995
    CMP dword ptr [EBX + 0x6c4],0x0     ; 0053f99c
    JG 0x0053f9ab                       ; 0053f9a3
        ;   XREF to: 0053f9ab (CONDITIONAL_JUMP)  ; LAB_0053f9ab
    ADD ESP,0x74                        ; 0053f9a5
    POP EBP                             ; 0053f9a8
    POP EBX                             ; 0053f9a9
    RET                                 ; 0053f9aa
    PUSH EDI                            ; 0053f9ab
        ;   Label: LAB_0053f9ab
    PUSH ESI                            ; 0053f9ac
    PUSH 0x3ec90fdb                     ; 0053f9ad
    MOV ECX,0x40a00000                  ; 0053f9b2
    MOV ESI,0x40c00000                  ; 0053f9b7
    MOV EDI,0xc0c00000                  ; 0053f9bc
    PUSH 0xbec90fdb                     ; 0053f9c1
    MOV dword ptr [ESP + 0x44],ECX      ; 0053f9c6
    MOV dword ptr [ESP + 0x48],ESI      ; 0053f9ca
    MOV dword ptr [ESP + 0x4c],EDI      ; 0053f9ce
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0053f9d2
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x80],EAX      ; 0053f9d7
    FLD float ptr [ESP + 0x80]          ; 0053f9de
    ADD ESP,0x8                         ; 0053f9e5
    PUSH 0x3ec90fdb                     ; 0053f9e8
    PUSH 0xbec90fdb                     ; 0053f9ed
    FSTP float ptr [ESP + 0x50]         ; 0053f9f2
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0053f9f6
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x80],EAX      ; 0053f9fb
    FLD float ptr [ESP + 0x80]          ; 0053fa02
    ADD ESP,0x8                         ; 0053fa09
    LEA EAX,[ESP + 0x48]                ; 0053fa0c
    PUSH EAX                            ; 0053fa10
    LEA EAX,[ESP + 0xc]                 ; 0053fa11
    XOR EBP,EBP                         ; 0053fa15
    PUSH EAX                            ; 0053fa17
    FSTP float ptr [ESP + 0x54]         ; 0053fa18
    MOV dword ptr [ESP + 0x58],EBP      ; 0053fa1c
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280 ; 0053fa20
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0053fa25
    LEA EAX,[ESP + 0x3c]                ; 0053fa28
    PUSH EAX                            ; 0053fa2c
    LEA EAX,[ESP + 0xc]                 ; 0053fa2d
    PUSH EAX                            ; 0053fa31
    LEA ESI,[ESP + 0x38]                ; 0053fa32
    LEA EDI,[ESP + 0x74]                ; 0053fa36
    CALL core_dirmat.cpp_FUN_00449530   ; 0053fa3a
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    ADD ESP,0x8                         ; 0053fa3f
    LEA EAX,[ESP + 0x6c]                ; 0053fa42
    LEA ESI,[ESP + 0x30]                ; 0053fa46
    PUSH EAX                            ; 0053fa4a
    MOVSD ES:EDI,ESI                    ; 0053fa4b
    MOVSD ES:EDI,ESI                    ; 0053fa4c
    MOVSD ES:EDI,ESI                    ; 0053fa4d
    PUSH EBX                            ; 0053fa4e
    LEA ESI,[ESP + 0x5c]                ; 0053fa4f
    LEA EDI,[ESP + 0x68]                ; 0053fa53
    CALL core_actor.cpp_FUN_00408cf0    ; 0053fa57
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[ESP + 0x5c]                ; 0053fa5c
    ADD ESP,0x8                         ; 0053fa60
    MOVSD ES:EDI,ESI                    ; 0053fa63
    MOVSD ES:EDI,ESI                    ; 0053fa64
    MOVSD ES:EDI,ESI                    ; 0053fa65
    LEA EAX,[ESP + 0x60]                ; 0053fa66
    LEA ESI,[ESP + 0x3c]                ; 0053fa6a
    CMP ESI,EAX                         ; 0053fa6e
    JZ 0x0053fa8a                       ; 0053fa70
        ;   XREF to: 0053fa8a (CONDITIONAL_JUMP)  ; LAB_0053fa8a
    MOV EAX,dword ptr [ESP + 0x60]      ; 0053fa72
    MOV dword ptr [ESP + 0x3c],EAX      ; 0053fa76
    MOV EAX,dword ptr [ESP + 0x64]      ; 0053fa7a
    MOV dword ptr [ESP + 0x40],EAX      ; 0053fa7e
    MOV EAX,dword ptr [ESP + 0x68]      ; 0053fa82
    MOV dword ptr [ESP + 0x44],EAX      ; 0053fa86
    PUSH 0x5e6815                       ; 0053fa8a | = "shell.kfm"
        ;   Label: LAB_0053fa8a
    CALL core_dmodel.cpp_loadModel_FUN_0044fba0 ; 0053fa8f
        ;   XREF to: 0044fba0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_loadModel_FUN_0044fba0()
    ADD ESP,0x4                         ; 0053fa94
    PUSH EAX                            ; 0053fa97
    LEA EAX,[ESP + 0x40]                ; 0053fa98
    PUSH EAX                            ; 0053fa9c
    LEA EAX,[EBX + 0x30]                ; 0053fa9d
    PUSH EAX                            ; 0053faa0
    LEA EAX,[EBX + 0x20]                ; 0053faa1
    PUSH EAX                            ; 0053faa4
    MOV EAX,[0x00614d30]                ; 0053faa5 | DAT_00614d30
    PUSH EAX                            ; 0053faaa
    CALL core_fire.cpp_CFireEffect_createShell_FUN_0049e970 ; 0053faab
        ;   XREF to: 0049e970 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createShell_FUN_0049e970(CFireEffect * this_ptr, CVector3f * position, CVector3f * euler_angles, CVector3f * velocity, ...)
    ADD ESP,0x14                        ; 0053fab0
    PUSH 0x5e681f                       ; 0053fab3 | = "shotgun-cock.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0053fab8
    PUSH EBX                            ; 0053fabe
    CALL dword ptr [EAX + 0x34]         ; 0053fabf
    ADD ESP,0x8                         ; 0053fac2
    POP ESI                             ; 0053fac5
    POP EDI                             ; 0053fac6
    ADD ESP,0x74                        ; 0053fac7
    POP EBP                             ; 0053faca
    POP EBX                             ; 0053facb
    RET                                 ; 0053facc

