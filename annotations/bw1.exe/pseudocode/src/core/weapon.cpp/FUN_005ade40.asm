; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_weapon_cpp_FUN_005ade40(int param_1)
;
; Local Variables:
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x7c]:1  local_7c
;
; XREF[2]:
;   core_weapon.cpp_CWeapon_onDropped_FUN_005ada60 at 005ada7a
;   core_weapon.cpp_CWeapon_setup_FUN_005ad640 at 005ad65e
;
; Referenced Globals:
;   undefined4 DAT_005f9916
;   undefined4 DAT_0078a123
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_box.cpp_CBox_setupCorners_FUN_0041dac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ade40
        ;   Label: core_weapon.cpp_FUN_005ade40
    SUB ESP,0x90                        ; 005ade41
    MOV EBX,dword ptr [ESP + 0x98]      ; 005ade47
    LEA EAX,[EBX + 0x158]               ; 005ade4e
    CMP dword ptr [EAX + 0x178],0x0     ; 005ade54
    JZ 0x005ade66                       ; 005ade5b
        ;   XREF to: 005ade66 (CONDITIONAL_JUMP)  ; LAB_005ade66
    CMP dword ptr [EBX + 0x68],0x78a123 ; 005ade5d | DAT_0078a123
    JZ 0x005ade6e                       ; 005ade64
        ;   XREF to: 005ade6e (CONDITIONAL_JUMP)  ; LAB_005ade6e
    ADD ESP,0x90                        ; 005ade66
        ;   Label: LAB_005ade66
    POP EBX                             ; 005ade6c
    RET                                 ; 005ade6d
    PUSH EDI                            ; 005ade6e
        ;   Label: LAB_005ade6e
    PUSH ESI                            ; 005ade6f
    PUSH EBX                            ; 005ade70
    MOV EAX,dword ptr [EBX + 0x154]     ; 005ade71
    LEA ESI,[ESP + 0xc]                 ; 005ade77
    LEA EDI,[ESP + 0x24]                ; 005ade7b
    CALL dword ptr [EAX + 0x1c]         ; 005ade7f
    MOV ECX,0x6                         ; 005ade82
    LEA ESI,[ESP + 0xc]                 ; 005ade87
    ADD ESP,0x4                         ; 005ade8b
    MOVSD.REP ES:EDI,ESI                ; 005ade8e
    FLD float ptr [ESP + 0x20]          ; 005ade90
    FLD float ptr [ESP + 0x24]          ; 005ade94
    FLD float ptr [ESP + 0x28]          ; 005ade98
    LEA EDI,[ESP + 0x80]                ; 005ade9c
    LEA ESI,[ESP + 0x5c]                ; 005adea3
    FXCH ST2                            ; 005adea7
    FADD float ptr [ESP + 0x2c]         ; 005adea9
    FXCH                                ; 005adead
    FADD float ptr [ESP + 0x30]         ; 005adeaf
    FXCH ST2                            ; 005adeb3
    FADD float ptr [ESP + 0x34]         ; 005adeb5
    FXCH                                ; 005adeb9
    FSTP float ptr [ESP + 0x5c]         ; 005adebb
    FXCH                                ; 005adebf
    FSTP float ptr [ESP + 0x60]         ; 005adec1
    FSTP float ptr [ESP + 0x64]         ; 005adec5
    MOVSD ES:EDI,ESI                    ; 005adec9
    MOVSD ES:EDI,ESI                    ; 005adeca
    MOVSD ES:EDI,ESI                    ; 005adecb
    FLD float ptr [0x005f9916]          ; 005adecc | DAT_005f9916
    FLD float ptr [ESP + 0x80]          ; 005aded2
    FMUL ST1                            ; 005aded9
    FLD float ptr [ESP + 0x84]          ; 005adedb
    FMUL ST2                            ; 005adee2
    FLD float ptr [ESP + 0x88]          ; 005adee4
    FMULP ST3                           ; 005adeeb
    LEA EDI,[ESP + 0x8c]                ; 005adeed
    LEA ESI,[ESP + 0x74]                ; 005adef4
    FXCH                                ; 005adef8
    FSTP float ptr [ESP + 0x74]         ; 005adefa
    FSTP float ptr [ESP + 0x78]         ; 005adefe
    FSTP float ptr [ESP + 0x7c]         ; 005adf02
    MOVSD ES:EDI,ESI                    ; 005adf06
    MOVSD ES:EDI,ESI                    ; 005adf07
    MOVSD ES:EDI,ESI                    ; 005adf08
    LEA ESI,[ESP + 0x8c]                ; 005adf09
    PUSH ESI                            ; 005adf10
    PUSH EBX                            ; 005adf11
    LEA ESI,[ESP + 0x58]                ; 005adf12
    LEA EDI,[ESP + 0x70]                ; 005adf16
    CALL core_actor.cpp_FUN_00408b40    ; 005adf1a
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 005adf1f
    LEA ESI,[ESP + 0x50]                ; 005adf22
    FLD float ptr [ESP + 0x2c]          ; 005adf26
    FLD float ptr [ESP + 0x30]          ; 005adf2a
    MOVSD ES:EDI,ESI                    ; 005adf2e
    MOVSD ES:EDI,ESI                    ; 005adf2f
    MOVSD ES:EDI,ESI                    ; 005adf30
    FLD float ptr [ESP + 0x34]          ; 005adf31
    LEA EDI,[ESP + 0x44]                ; 005adf35
    LEA ESI,[ESP + 0x38]                ; 005adf39
    FXCH ST2                            ; 005adf3d
    FSUB float ptr [ESP + 0x20]         ; 005adf3f
    FXCH                                ; 005adf43
    FSUB float ptr [ESP + 0x24]         ; 005adf45
    FXCH ST2                            ; 005adf49
    FSUB float ptr [ESP + 0x28]         ; 005adf4b
    FXCH                                ; 005adf4f
    FSTP float ptr [ESP + 0x38]         ; 005adf51
    FXCH                                ; 005adf55
    FSTP float ptr [ESP + 0x3c]         ; 005adf57
    FSTP float ptr [ESP + 0x40]         ; 005adf5b
    MOVSD ES:EDI,ESI                    ; 005adf5f
    MOVSD ES:EDI,ESI                    ; 005adf60
    MOVSD ES:EDI,ESI                    ; 005adf61
    LEA EAX,[ESP + 0x44]                ; 005adf62
    PUSH dword ptr [EBX + 0x564]        ; 005adf66
    PUSH EAX                            ; 005adf6c
    LEA EAX,[EBX + 0x30]                ; 005adf6d
    PUSH EAX                            ; 005adf70
    LEA EAX,[ESP + 0x74]                ; 005adf71
    PUSH EAX                            ; 005adf75
    ADD EBX,0x308                       ; 005adf76
    PUSH EBX                            ; 005adf7c
    CALL core_box.cpp_CBox_setupCorners_FUN_0041dac0 ; 005adf7d
        ;   XREF to: 0041dac0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupCorners_FUN_0041dac0(CBox * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * extents, ...)
    ADD ESP,0x14                        ; 005adf82
    POP ESI                             ; 005adf85
    POP EDI                             ; 005adf86
    ADD ESP,0x90                        ; 005adf87
    POP EBX                             ; 005adf8d
    RET                                 ; 005adf8e

