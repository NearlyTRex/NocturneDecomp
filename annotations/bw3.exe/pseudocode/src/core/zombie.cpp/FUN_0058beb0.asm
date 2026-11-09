; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombie_cpp_FUN_0058beb0(int param_1)
;
;
; Called Functions:
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b80
;   core_charactr.cpp_FUN_0042f510
;   core_dlight.cpp_FUN_0045f5a0
;   core_skeleton.cpp_FUN_0054d9c0
;   core_vecdir.cpp_FUN_00576250
;   core_xform.cpp_FUN_00583260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058beb0
        ;   Label: core_zombie.cpp_FUN_0058beb0
    PUSH ESI                            ; 0058beb1
    PUSH EDI                            ; 0058beb2
    PUSH EBP                            ; 0058beb3
    MOV EBP,ESP                         ; 0058beb4
    SUB ESP,0x144                       ; 0058beb6
    SUB EBP,0x7e                        ; 0058bebc
    MOV EBX,dword ptr [EBP + 0x92]      ; 0058bebf
    CMP dword ptr [EBX + 0x27bc],0x0    ; 0058bec5
    JZ 0x0058c041                       ; 0058becc
        ;   XREF to: 0058c041 (CONDITIONAL_JUMP)  ; LAB_0058c041
    CMP dword ptr [EBX + 0xd0d8],0x0    ; 0058bed2
    JZ 0x0058c041                       ; 0058bed9
        ;   XREF to: 0058c041 (CONDITIONAL_JUMP)  ; LAB_0058c041
    MOV ESI,dword ptr [EBX + 0xd0e8]    ; 0058bedf
    PUSH ESI                            ; 0058bee5
    LEA EAX,[EBX + 0x158]               ; 0058bee6
    PUSH EAX                            ; 0058beec
    LEA ESI,[EBP + 0xffffff3a]          ; 0058beed
    LEA EDI,[EBP + 0xffffff6a]          ; 0058bef3
    CALL core_skeleton.cpp_FUN_0054d9c0 ; 0058bef9
        ;   XREF to: 0054d9c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054d9c0()
    MOV ECX,0xc                         ; 0058befe
    ADD ESP,0x8                         ; 0058bf03
    LEA EAX,[EBP + 0xffffff6a]          ; 0058bf06
    LEA ESI,[EBP + 0xffffff3a]          ; 0058bf0c
    PUSH EAX                            ; 0058bf12
    MOVSD.REP ES:EDI,ESI                ; 0058bf13
    MOV EAX,0x3f000000                  ; 0058bf15
    LEA ESI,[EBP + -0x36]               ; 0058bf1a
    MOV dword ptr [EBP + -0x4a],EAX     ; 0058bf1d
    MOV dword ptr [EBP + -0x46],EAX     ; 0058bf20
    LEA EAX,[EBP + -0x4e]               ; 0058bf23
    XOR EDI,EDI                         ; 0058bf26
    PUSH EAX                            ; 0058bf28
    MOV dword ptr [EBP + -0x4e],EDI     ; 0058bf29
    LEA EDI,[EBP + -0x2a]               ; 0058bf2c
    CALL core_xform.cpp_FUN_00583260    ; 0058bf2f
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 0058bf34
    LEA EAX,[EBP + -0x2a]               ; 0058bf37
    LEA ESI,[EBP + -0x36]               ; 0058bf3a
    PUSH EAX                            ; 0058bf3d
    MOVSD ES:EDI,ESI                    ; 0058bf3e
    MOVSD ES:EDI,ESI                    ; 0058bf3f
    MOVSD ES:EDI,ESI                    ; 0058bf40
    PUSH EBX                            ; 0058bf41
    LEA ESI,[EBP + 0x36]                ; 0058bf42
    LEA EDI,[EBP + -0x66]               ; 0058bf45
    CALL core_actor.cpp_FUN_00408b80    ; 0058bf48
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[EBP + 0x36]                ; 0058bf4d
    ADD ESP,0x8                         ; 0058bf50
    LEA EAX,[EBP + 0xffffff6a]          ; 0058bf53
    XOR ECX,ECX                         ; 0058bf59
    PUSH EAX                            ; 0058bf5b
    MOV dword ptr [EBP + -0x12],ECX     ; 0058bf5c
    MOV dword ptr [EBP + -0xe],ECX      ; 0058bf5f
    MOV dword ptr [EBP + -0xa],ECX      ; 0058bf62
    LEA EAX,[EBP + -0x12]               ; 0058bf65
    MOVSD ES:EDI,ESI                    ; 0058bf68
    MOVSD ES:EDI,ESI                    ; 0058bf69
    MOVSD ES:EDI,ESI                    ; 0058bf6a
    PUSH EAX                            ; 0058bf6b
    LEA ESI,[EBP + -0x1e]               ; 0058bf6c
    LEA EDI,[EBP + 0x12]                ; 0058bf6f
    CALL core_xform.cpp_FUN_00583260    ; 0058bf72
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 0058bf77
    LEA EAX,[EBP + 0x12]                ; 0058bf7a
    LEA ESI,[EBP + -0x1e]               ; 0058bf7d
    PUSH EAX                            ; 0058bf80
    MOVSD ES:EDI,ESI                    ; 0058bf81
    MOVSD ES:EDI,ESI                    ; 0058bf82
    MOVSD ES:EDI,ESI                    ; 0058bf83
    PUSH EBX                            ; 0058bf84
    LEA ESI,[EBP + 0x72]                ; 0058bf85
    LEA EDI,[EBP + 0x5a]                ; 0058bf88
    CALL core_actor.cpp_FUN_00408b00    ; 0058bf8b
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[EBP + 0x72]                ; 0058bf90
    ADD ESP,0x8                         ; 0058bf93
    LEA EAX,[EBP + 0xffffff6a]          ; 0058bf96
    MOV ECX,0x3f800000                  ; 0058bf9c
    PUSH EAX                            ; 0058bfa1
    XOR EAX,EAX                         ; 0058bfa2
    MOV dword ptr [EBP + -0x3a],ECX     ; 0058bfa4
    MOV dword ptr [EBP + -0x42],EAX     ; 0058bfa7
    MOV dword ptr [EBP + -0x3e],EAX     ; 0058bfaa
    LEA EAX,[EBP + -0x42]               ; 0058bfad
    MOVSD ES:EDI,ESI                    ; 0058bfb0
    MOVSD ES:EDI,ESI                    ; 0058bfb1
    MOVSD ES:EDI,ESI                    ; 0058bfb2
    PUSH EAX                            ; 0058bfb3
    LEA ESI,[EBP + -0x6]                ; 0058bfb4
    LEA EDI,[EBP + 0x4e]                ; 0058bfb7
    CALL core_xform.cpp_FUN_00583260    ; 0058bfba
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 0058bfbf
    LEA EAX,[EBP + 0x4e]                ; 0058bfc2
    LEA ESI,[EBP + -0x6]                ; 0058bfc5
    PUSH EAX                            ; 0058bfc8
    MOVSD ES:EDI,ESI                    ; 0058bfc9
    MOVSD ES:EDI,ESI                    ; 0058bfca
    MOVSD ES:EDI,ESI                    ; 0058bfcb
    PUSH EBX                            ; 0058bfcc
    LEA ESI,[EBP + 0x6]                 ; 0058bfcd
    LEA EDI,[EBP + 0x66]                ; 0058bfd0
    CALL core_actor.cpp_FUN_00408b00    ; 0058bfd3
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[EBP + 0x6]                 ; 0058bfd8
    LEA EAX,[EBP + -0x5a]               ; 0058bfdb
    MOVSD ES:EDI,ESI                    ; 0058bfde
    MOVSD ES:EDI,ESI                    ; 0058bfdf
    MOVSD ES:EDI,ESI                    ; 0058bfe0
    ADD ESP,0x8                         ; 0058bfe1
    FLD float ptr [EBP + 0x66]          ; 0058bfe4
    FLD float ptr [EBP + 0x6a]          ; 0058bfe7
    FLD float ptr [EBP + 0x6e]          ; 0058bfea
    LEA EDI,[EBP + -0x5a]               ; 0058bfed
    LEA ESI,[EBP + 0x2a]                ; 0058bff0
    FXCH ST2                            ; 0058bff3
    FSUB float ptr [EBP + 0x5a]         ; 0058bff5
    FXCH                                ; 0058bff8
    FSUB float ptr [EBP + 0x5e]         ; 0058bffa
    FXCH ST2                            ; 0058bffd
    FSUB float ptr [EBP + 0x62]         ; 0058bfff
    FXCH                                ; 0058c002
    FSTP float ptr [EBP + 0x2a]         ; 0058c004
    FXCH                                ; 0058c007
    FSTP float ptr [EBP + 0x2e]         ; 0058c009
    FSTP float ptr [EBP + 0x32]         ; 0058c00c
    MOVSD ES:EDI,ESI                    ; 0058c00f
    MOVSD ES:EDI,ESI                    ; 0058c010
    MOVSD ES:EDI,ESI                    ; 0058c011
    PUSH EAX                            ; 0058c012
    LEA ESI,[EBP + 0x42]                ; 0058c013
    CALL core_vecdir.cpp_FUN_00576250   ; 0058c016
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_00576250()
    ADD ESP,0x4                         ; 0058c01b
    PUSH 0x40c00000                     ; 0058c01e
    LEA EAX,[EBP + 0x1e]                ; 0058c023
    PUSH 0x42600000                     ; 0058c026
    LEA EDI,[EBP + 0x1e]                ; 0058c02b
    PUSH EAX                            ; 0058c02e
    LEA EAX,[EBP + -0x66]               ; 0058c02f
    LEA ESI,[EBP + 0x42]                ; 0058c032
    PUSH EAX                            ; 0058c035
    MOVSD ES:EDI,ESI                    ; 0058c036
    MOVSD ES:EDI,ESI                    ; 0058c037
    MOVSD ES:EDI,ESI                    ; 0058c038
    CALL core_dlight.cpp_FUN_0045f5a0   ; 0058c039
        ;   XREF to: 0045f5a0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_FUN_0045f5a0(CVector3f * position, CVector3f * rotation, float fov, float falloff)
    ADD ESP,0x10                        ; 0058c03e
    PUSH EBX                            ; 0058c041
        ;   Label: LAB_0058c041
    CALL core_charactr.cpp_FUN_0042f510 ; 0058c042
        ;   XREF to: 0042f510 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042f510()
    ADD ESP,0x4                         ; 0058c047
    LEA ESP,[EBP + 0x7e]                ; 0058c04a
    POP EBP                             ; 0058c04d
    POP EDI                             ; 0058c04e
    POP ESI                             ; 0058c04f
    POP EBX                             ; 0058c050
    RET                                 ; 0058c051

