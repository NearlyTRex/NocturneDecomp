; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_weapon_cpp_FUN_0058a2f0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x7c]:1  local_7c
;
; XREF[2]:
;   core_weapon.cpp_CWeapon_onDropped_FUN_00589f10 at 00589f2a
;   core_weapon.cpp_CWeapon_setup_FUN_00589b50 at 00589b6e
;
; Referenced Globals:
;   undefined4 DAT_005ee53e
;   undefined4 DAT_0078a123
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_box.cpp_CBox_setupCorners_FUN_005b1c80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058a2f0
        ;   Label: core_weapon.cpp_FUN_0058a2f0
    SUB ESP,0x90                        ; 0058a2f1
    MOV EBX,dword ptr [ESP + 0x98]      ; 0058a2f7
    LEA EAX,[EBX + 0x2b4]               ; 0058a2fe
    CMP dword ptr [EAX + 0x178],0x0     ; 0058a304
    JZ 0x0058a316                       ; 0058a30b
        ;   XREF to: 0058a316 (CONDITIONAL_JUMP)  ; LAB_0058a316
    CMP dword ptr [EBX + 0x68],0x78a123 ; 0058a30d | DAT_0078a123
    JZ 0x0058a31e                       ; 0058a314
        ;   XREF to: 0058a31e (CONDITIONAL_JUMP)  ; LAB_0058a31e
    ADD ESP,0x90                        ; 0058a316
        ;   Label: LAB_0058a316
    POP EBX                             ; 0058a31c
    RET                                 ; 0058a31d
    PUSH EDI                            ; 0058a31e
        ;   Label: LAB_0058a31e
    PUSH ESI                            ; 0058a31f
    PUSH EBX                            ; 0058a320
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0058a321
    LEA ESI,[ESP + 0xc]                 ; 0058a327
    LEA EDI,[ESP + 0x24]                ; 0058a32b
    CALL dword ptr [EAX + 0x24]         ; 0058a32f
    MOV ECX,0x6                         ; 0058a332
    LEA ESI,[ESP + 0xc]                 ; 0058a337
    ADD ESP,0x4                         ; 0058a33b
    MOVSD.REP ES:EDI,ESI                ; 0058a33e
    FLD float ptr [ESP + 0x20]          ; 0058a340
    FLD float ptr [ESP + 0x24]          ; 0058a344
    FLD float ptr [ESP + 0x28]          ; 0058a348
    LEA EDI,[ESP + 0x80]                ; 0058a34c
    LEA ESI,[ESP + 0x5c]                ; 0058a353
    FXCH ST2                            ; 0058a357
    FADD float ptr [ESP + 0x2c]         ; 0058a359
    FXCH                                ; 0058a35d
    FADD float ptr [ESP + 0x30]         ; 0058a35f
    FXCH ST2                            ; 0058a363
    FADD float ptr [ESP + 0x34]         ; 0058a365
    FXCH                                ; 0058a369
    FSTP float ptr [ESP + 0x5c]         ; 0058a36b
    FXCH                                ; 0058a36f
    FSTP float ptr [ESP + 0x60]         ; 0058a371
    FSTP float ptr [ESP + 0x64]         ; 0058a375
    MOVSD ES:EDI,ESI                    ; 0058a379
    MOVSD ES:EDI,ESI                    ; 0058a37a
    MOVSD ES:EDI,ESI                    ; 0058a37b
    FLD float ptr [0x005ee53e]          ; 0058a37c | DAT_005ee53e
    FLD float ptr [ESP + 0x80]          ; 0058a382
    FMUL ST1                            ; 0058a389
    FLD float ptr [ESP + 0x84]          ; 0058a38b
    FMUL ST2                            ; 0058a392
    FLD float ptr [ESP + 0x88]          ; 0058a394
    FMULP ST3                           ; 0058a39b
    LEA EDI,[ESP + 0x8c]                ; 0058a39d
    LEA ESI,[ESP + 0x74]                ; 0058a3a4
    FXCH                                ; 0058a3a8
    FSTP float ptr [ESP + 0x74]         ; 0058a3aa
    FSTP float ptr [ESP + 0x78]         ; 0058a3ae
    FSTP float ptr [ESP + 0x7c]         ; 0058a3b2
    MOVSD ES:EDI,ESI                    ; 0058a3b6
    MOVSD ES:EDI,ESI                    ; 0058a3b7
    MOVSD ES:EDI,ESI                    ; 0058a3b8
    LEA ESI,[ESP + 0x8c]                ; 0058a3b9
    PUSH ESI                            ; 0058a3c0
    PUSH EBX                            ; 0058a3c1
    LEA ESI,[ESP + 0x58]                ; 0058a3c2
    LEA EDI,[ESP + 0x70]                ; 0058a3c6
    CALL core_actor.cpp_FUN_00408d70    ; 0058a3ca
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0058a3cf
    LEA ESI,[ESP + 0x50]                ; 0058a3d2
    FLD float ptr [ESP + 0x2c]          ; 0058a3d6
    FLD float ptr [ESP + 0x30]          ; 0058a3da
    MOVSD ES:EDI,ESI                    ; 0058a3de
    MOVSD ES:EDI,ESI                    ; 0058a3df
    MOVSD ES:EDI,ESI                    ; 0058a3e0
    FLD float ptr [ESP + 0x34]          ; 0058a3e1
    LEA EDI,[ESP + 0x44]                ; 0058a3e5
    LEA ESI,[ESP + 0x38]                ; 0058a3e9
    FXCH ST2                            ; 0058a3ed
    FSUB float ptr [ESP + 0x20]         ; 0058a3ef
    FXCH                                ; 0058a3f3
    FSUB float ptr [ESP + 0x24]         ; 0058a3f5
    FXCH ST2                            ; 0058a3f9
    FSUB float ptr [ESP + 0x28]         ; 0058a3fb
    FXCH                                ; 0058a3ff
    FSTP float ptr [ESP + 0x38]         ; 0058a401
    FXCH                                ; 0058a405
    FSTP float ptr [ESP + 0x3c]         ; 0058a407
    FSTP float ptr [ESP + 0x40]         ; 0058a40b
    MOVSD ES:EDI,ESI                    ; 0058a40f
    MOVSD ES:EDI,ESI                    ; 0058a410
    MOVSD ES:EDI,ESI                    ; 0058a411
    LEA EAX,[ESP + 0x44]                ; 0058a412
    PUSH dword ptr [EBX + 0x6c0]        ; 0058a416
    PUSH EAX                            ; 0058a41c
    LEA EAX,[EBX + 0x30]                ; 0058a41d
    PUSH EAX                            ; 0058a420
    LEA EAX,[ESP + 0x74]                ; 0058a421
    PUSH EAX                            ; 0058a425
    ADD EBX,0x464                       ; 0058a426
    PUSH EBX                            ; 0058a42c
    CALL core_box.cpp_CBox_setupCorners_FUN_005b1c80 ; 0058a42d
        ;   XREF to: 005b1c80 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupCorners_FUN_005b1c80(CBox * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * extents, ...)
    ADD ESP,0x14                        ; 0058a432
    POP ESI                             ; 0058a435
    POP EDI                             ; 0058a436
    ADD ESP,0x90                        ; 0058a437
    POP EBX                             ; 0058a43d
    RET                                 ; 0058a43e

