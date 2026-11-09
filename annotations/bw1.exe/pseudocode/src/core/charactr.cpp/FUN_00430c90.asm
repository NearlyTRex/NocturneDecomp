; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_00430c90(CCharacter *param_1,CVector3f *param_2,float param_3)
;
; Local Variables:
; undefined        Stack[-0x84]:1  local_84
; undefined        Stack[-0x6c]:1  local_6c
;
; XREF[1]:
;   core_charactr.cpp_FUN_004319e0 at 00431a5c
;
; Referenced Globals:
;   undefined4 DAT_005d5a53
;   undefined4 DAT_0061c010
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_charactr.cpp_CCharacter_dismember_FUN_00430d90
;   core_fire.cpp_CFireEffect_createExplosion_FUN_004b6c60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00430c90
        ;   Label: core_charactr.cpp_FUN_00430c90
    PUSH ESI                            ; 00430c91
    PUSH EDI                            ; 00430c92
    SUB ESP,0x78                        ; 00430c93
    MOV EBX,dword ptr [ESP + 0x88]      ; 00430c96
    PUSH EBX                            ; 00430c9d
    MOV EAX,dword ptr [EBX + 0x154]     ; 00430c9e
    LEA ESI,[ESP + 0x4]                 ; 00430ca4
    LEA EDI,[ESP + 0x1c]                ; 00430ca8
    CALL dword ptr [EAX + 0x1c]         ; 00430cac
    MOV ECX,0x6                         ; 00430caf
    LEA ESI,[ESP + 0x4]                 ; 00430cb4
    ADD ESP,0x4                         ; 00430cb8
    MOVSD.REP ES:EDI,ESI                ; 00430cbb
    LEA EAX,[ESP + 0x18]                ; 00430cbd
    FLD float ptr [ESP + 0x18]          ; 00430cc1
    FLD float ptr [ESP + 0x1c]          ; 00430cc5
    FLD float ptr [ESP + 0x20]          ; 00430cc9
    LEA EDI,[ESP + 0x6c]                ; 00430ccd
    LEA ESI,[ESP + 0x54]                ; 00430cd1
    FXCH ST2                            ; 00430cd5
    FADD float ptr [EAX + 0xc]          ; 00430cd7
    FXCH                                ; 00430cda
    FADD float ptr [EAX + 0x10]         ; 00430cdc
    FXCH ST2                            ; 00430cdf
    FADD float ptr [EAX + 0x14]         ; 00430ce1
    FXCH                                ; 00430ce4
    FSTP float ptr [ESP + 0x54]         ; 00430ce6
    FXCH                                ; 00430cea
    FSTP float ptr [ESP + 0x58]         ; 00430cec
    FSTP float ptr [ESP + 0x5c]         ; 00430cf0
    MOVSD ES:EDI,ESI                    ; 00430cf4
    MOVSD ES:EDI,ESI                    ; 00430cf5
    MOVSD ES:EDI,ESI                    ; 00430cf6
    FLD float ptr [0x005d5a53]          ; 00430cf7 | DAT_005d5a53
    FLD float ptr [ESP + 0x6c]          ; 00430cfd
    FMUL ST1                            ; 00430d01
    FLD float ptr [ESP + 0x70]          ; 00430d03
    FMUL ST2                            ; 00430d07
    LEA EAX,[ESP + 0x30]                ; 00430d09
    FLD float ptr [ESP + 0x74]          ; 00430d0d
    FMULP ST3                           ; 00430d11
    PUSH EAX                            ; 00430d13
    LEA EDI,[ESP + 0x34]                ; 00430d14
    LEA ESI,[ESP + 0x64]                ; 00430d18
    FXCH                                ; 00430d1c
    FSTP float ptr [ESP + 0x64]         ; 00430d1e
    FSTP float ptr [ESP + 0x68]         ; 00430d22
    FSTP float ptr [ESP + 0x6c]         ; 00430d26
    MOVSD ES:EDI,ESI                    ; 00430d2a
    MOVSD ES:EDI,ESI                    ; 00430d2b
    MOVSD ES:EDI,ESI                    ; 00430d2c
    PUSH EBX                            ; 00430d2d
    LEA ESI,[ESP + 0x50]                ; 00430d2e
    CALL core_actor.cpp_FUN_00408b40    ; 00430d32
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00430d37
    PUSH 0x40800000                     ; 00430d3a
    PUSH 0x44bb8000                     ; 00430d3f
    LEA EAX,[ESP + 0x44]                ; 00430d44
    PUSH 0x40000000                     ; 00430d48
    LEA EDI,[ESP + 0x48]                ; 00430d4d
    PUSH EAX                            ; 00430d51
    MOV EDX,dword ptr [0x0061c010]      ; 00430d52 | DAT_0061c010
    LEA ESI,[ESP + 0x58]                ; 00430d58
    PUSH EDX                            ; 00430d5c
    MOVSD ES:EDI,ESI                    ; 00430d5d
    MOVSD ES:EDI,ESI                    ; 00430d5e
    MOVSD ES:EDI,ESI                    ; 00430d5f
    CALL core_fire.cpp_CFireEffect_createExplosion_FUN_004b6c60 ; 00430d60
        ;   XREF to: 004b6c60 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createExplosion_FUN_004b6c60(CFireEffect * this_ptr, CVector3f * position, float scale, float gore_multiplier, ...)
    ADD ESP,0x14                        ; 00430d65
    PUSH 0x0                            ; 00430d68
    MOV ECX,dword ptr [ESP + 0x90]      ; 00430d6a
    PUSH dword ptr [ESP + 0x94]         ; 00430d71
    PUSH ECX                            ; 00430d78
    PUSH EBX                            ; 00430d79
    CALL core_charactr.cpp_CCharacter_dismember_FUN_00430d90 ; 00430d7a
        ;   XREF to: 00430d90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismember_FUN_00430d90(CCharacter * this_ptr, CVector3f * impact_point, float impact_force, int render_in_background)
    ADD ESP,0x10                        ; 00430d7f
    ADD ESP,0x78                        ; 00430d82
    POP EDI                             ; 00430d85
    POP ESI                             ; 00430d86
    POP EBX                             ; 00430d87
    RET                                 ; 00430d88

