; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_rifle_cpp_CRifle_onFired_FUN_005284d0(CRifle *this_ptr)
;
; Parameters:
; CRifle *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_rifbullet_kfm_005cdb4f+2
;   TerminatedCString s_shotgun_cock_wav_005cdb5f
;   undefined4 DAT_005fc5a0
;
; Called Functions:
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
;   core_dirmat.cpp_FUN_0045b800
;   core_dmodel.cpp_loadModel_FUN_00462420
;   core_fire.cpp_CFireEffect_createShell_FUN_004a3e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005284d0
        ;   Label: core_rifle.cpp_CRifle_onFired_FUN_005284d0
    PUSH EBP                            ; 005284d1
    SUB ESP,0x74                        ; 005284d2
    MOV EBX,dword ptr [ESP + 0x80]      ; 005284d5
    CMP dword ptr [EBX + 0x568],0x0     ; 005284dc
    JG 0x005284eb                       ; 005284e3
        ;   XREF to: 005284eb (CONDITIONAL_JUMP)  ; LAB_005284eb
    ADD ESP,0x74                        ; 005284e5
    POP EBP                             ; 005284e8
    POP EBX                             ; 005284e9
    RET                                 ; 005284ea
    PUSH EDI                            ; 005284eb
        ;   Label: LAB_005284eb
    PUSH ESI                            ; 005284ec
    PUSH 0x3ec90fdb                     ; 005284ed
    MOV ECX,0x40a00000                  ; 005284f2
    MOV ESI,0x40c00000                  ; 005284f7
    MOV EDI,0xc0c00000                  ; 005284fc
    PUSH 0xbec90fdb                     ; 00528501
    MOV dword ptr [ESP + 0x44],ECX      ; 00528506
    MOV dword ptr [ESP + 0x48],ESI      ; 0052850a
    MOV dword ptr [ESP + 0x4c],EDI      ; 0052850e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00528512
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x80],EAX      ; 00528517
    FLD float ptr [ESP + 0x80]          ; 0052851e
    ADD ESP,0x8                         ; 00528525
    PUSH 0x3ec90fdb                     ; 00528528
    PUSH 0xbec90fdb                     ; 0052852d
    FSTP float ptr [ESP + 0x50]         ; 00528532
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00528536
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x80],EAX      ; 0052853b
    FLD float ptr [ESP + 0x80]          ; 00528542
    ADD ESP,0x8                         ; 00528549
    LEA EAX,[ESP + 0x48]                ; 0052854c
    PUSH EAX                            ; 00528550
    LEA EAX,[ESP + 0xc]                 ; 00528551
    XOR EBP,EBP                         ; 00528555
    PUSH EAX                            ; 00528557
    FSTP float ptr [ESP + 0x54]         ; 00528558
    MOV dword ptr [ESP + 0x58],EBP      ; 0052855c
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550 ; 00528560
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00528565
    LEA EAX,[ESP + 0x3c]                ; 00528568
    PUSH EAX                            ; 0052856c
    LEA EAX,[ESP + 0xc]                 ; 0052856d
    PUSH EAX                            ; 00528571
    LEA ESI,[ESP + 0x38]                ; 00528572
    LEA EDI,[ESP + 0x74]                ; 00528576
    CALL core_dirmat.cpp_FUN_0045b800   ; 0052857a
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    ADD ESP,0x8                         ; 0052857f
    LEA EAX,[ESP + 0x6c]                ; 00528582
    LEA ESI,[ESP + 0x30]                ; 00528586
    PUSH EAX                            ; 0052858a
    MOVSD ES:EDI,ESI                    ; 0052858b
    MOVSD ES:EDI,ESI                    ; 0052858c
    MOVSD ES:EDI,ESI                    ; 0052858d
    PUSH EBX                            ; 0052858e
    LEA ESI,[ESP + 0x5c]                ; 0052858f
    LEA EDI,[ESP + 0x68]                ; 00528593
    CALL core_actor.cpp_FUN_00408b00    ; 00528597
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x5c]                ; 0052859c
    ADD ESP,0x8                         ; 005285a0
    MOVSD ES:EDI,ESI                    ; 005285a3
    MOVSD ES:EDI,ESI                    ; 005285a4
    MOVSD ES:EDI,ESI                    ; 005285a5
    LEA EAX,[ESP + 0x60]                ; 005285a6
    LEA ESI,[ESP + 0x3c]                ; 005285aa
    CMP ESI,EAX                         ; 005285ae
    JZ 0x005285ca                       ; 005285b0
        ;   XREF to: 005285ca (CONDITIONAL_JUMP)  ; LAB_005285ca
    MOV EAX,dword ptr [ESP + 0x60]      ; 005285b2
    MOV dword ptr [ESP + 0x3c],EAX      ; 005285b6
    MOV EAX,dword ptr [ESP + 0x64]      ; 005285ba
    MOV dword ptr [ESP + 0x40],EAX      ; 005285be
    MOV EAX,dword ptr [ESP + 0x68]      ; 005285c2
    MOV dword ptr [ESP + 0x44],EAX      ; 005285c6
    PUSH 0x5cdb51                       ; 005285ca | s_rifbullet_kfm_005cdb4f+2
        ;   Label: LAB_005285ca
    CALL core_dmodel.cpp_loadModel_FUN_00462420 ; 005285cf
        ;   XREF to: 00462420 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_loadModel_FUN_00462420(char * filename)
    ADD ESP,0x4                         ; 005285d4
    PUSH EAX                            ; 005285d7
    LEA EAX,[ESP + 0x40]                ; 005285d8
    PUSH EAX                            ; 005285dc
    LEA EAX,[EBX + 0x30]                ; 005285dd
    PUSH EAX                            ; 005285e0
    LEA EAX,[EBX + 0x20]                ; 005285e1
    PUSH EAX                            ; 005285e4
    MOV EAX,[0x005fc5a0]                ; 005285e5 | DAT_005fc5a0
    PUSH EAX                            ; 005285ea
    CALL core_fire.cpp_CFireEffect_createShell_FUN_004a3e70 ; 005285eb
        ;   XREF to: 004a3e70 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createShell_FUN_004a3e70(CFireEffect * this_ptr, CVector3f * position, CVector3f * euler_angles, CVector3f * velocity, ...)
    ADD ESP,0x14                        ; 005285f0
    PUSH 0x5cdb5f                       ; 005285f3 | = "shotgun-cock.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005285f8
    PUSH EBX                            ; 005285fe
    CALL dword ptr [EAX + 0x2c]         ; 005285ff
    ADD ESP,0x8                         ; 00528602
    POP ESI                             ; 00528605
    POP EDI                             ; 00528606
    ADD ESP,0x74                        ; 00528607
    POP EBP                             ; 0052860a
    POP EBX                             ; 0052860b
    RET                                 ; 0052860c

