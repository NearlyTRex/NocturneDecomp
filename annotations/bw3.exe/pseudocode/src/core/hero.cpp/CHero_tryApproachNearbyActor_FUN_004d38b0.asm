; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_CHero_tryApproachNearbyActor_FUN_004d38b0(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined        Stack[-0x80]:1  local_80
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_hero.cpp_FUN_004d4900 at 004d4a48
;
; Referenced Globals:
;   undefined4 DAT_005c4db5
;   undefined4 DAT_005c4dbd
;   undefined4 DAT_005c4dc5
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_00408bf0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d38b0
        ;   Label: core_hero.cpp_CHero_tryApproachNearbyActor_FUN_004d38b0
    PUSH ESI                            ; 004d38b1
    PUSH EDI                            ; 004d38b2
    PUSH EBP                            ; 004d38b3
    MOV EBP,ESP                         ; 004d38b4
    SUB ESP,0xa4                        ; 004d38b6
    AND ESP,0xfffffff8                  ; 004d38bc
    XOR EDX,EDX                         ; 004d38bf
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d38c1
    MOV dword ptr [ESP + 0x94],EDX      ; 004d38c4
    ADD EAX,0x20                        ; 004d38cb
    MOV dword ptr [ESP + 0x98],EDX      ; 004d38ce
    MOV dword ptr [ESP + 0x9c],EAX      ; 004d38d5
    MOV EAX,[0x00603b28]                ; 004d38dc | g_CDemonSetPtr
        ;   Label: LAB_004d38dc
    MOV EBX,dword ptr [ESP + 0x94]      ; 004d38e1
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 004d38e8 | g_CDemonSetInstance.actor_count
    JGE 0x004d3ad8                      ; 004d38ee
        ;   XREF to: 004d3ad8 (CONDITIONAL_JUMP)  ; LAB_004d3ad8
    ADD EAX,dword ptr [ESP + 0x98]      ; 004d38f4
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 004d38fb | g_CDemonSetInstance.actors[0]
    LEA EAX,[EBX + 0x20]                ; 004d3901
    MOV ESI,dword ptr [ESP + 0x9c]      ; 004d3904
    LEA EDI,[ESP + 0x44]                ; 004d390b
    FLD float ptr [EAX]                 ; 004d390f
    FLD float ptr [EAX + 0x4]           ; 004d3911
    FLD float ptr [EAX + 0x8]           ; 004d3914
    FXCH ST2                            ; 004d3917
    FSUB float ptr [ESI]                ; 004d3919
    FXCH                                ; 004d391b
    FSUB float ptr [ESI + 0x4]          ; 004d391d
    FXCH ST2                            ; 004d3920
    FSUB float ptr [ESI + 0x8]          ; 004d3922
    FXCH                                ; 004d3925
    FSTP float ptr [ESP + 0x2c]         ; 004d3927
    FXCH                                ; 004d392b
    FSTP float ptr [ESP + 0x30]         ; 004d392d
    LEA ESI,[ESP + 0x2c]                ; 004d3931
    FSTP float ptr [ESP + 0x34]         ; 004d3935
    MOVSD ES:EDI,ESI                    ; 004d3939
    MOVSD ES:EDI,ESI                    ; 004d393a
    MOVSD ES:EDI,ESI                    ; 004d393b
    FLD float ptr [ESP + 0x48]          ; 004d393c
    FABS                                ; 004d3940
    FCOMP double ptr [0x005c4db5]       ; 004d3942 | DAT_005c4db5
    FNSTSW AX                           ; 004d3948
    SAHF                                ; 004d394a
    JBE 0x004d3972                      ; 004d394b
        ;   XREF to: 004d3972 (CONDITIONAL_JUMP)  ; LAB_004d3972
    MOV EBX,dword ptr [ESP + 0x94]      ; 004d394d
        ;   Label: LAB_004d394d
    MOV ECX,dword ptr [ESP + 0x98]      ; 004d3954
    INC EBX                             ; 004d395b
    ADD ECX,0x4                         ; 004d395c
    MOV dword ptr [ESP + 0x94],EBX      ; 004d395f
    MOV dword ptr [ESP + 0x98],ECX      ; 004d3966
    JMP 0x004d38dc                      ; 004d396d
        ;   XREF to: 004d38dc (UNCONDITIONAL_JUMP)  ; LAB_004d38dc
    FLD float ptr [ESP + 0x44]          ; 004d3972
        ;   Label: LAB_004d3972
    FMUL ST0                            ; 004d3976
    FLD float ptr [ESP + 0x4c]          ; 004d3978
    FMUL ST0                            ; 004d397c
    XOR EAX,EAX                         ; 004d397e
    FADDP                               ; 004d3980
    MOV dword ptr [ESP + 0x48],EAX      ; 004d3982
    FSQRT                               ; 004d3986
    FCOMP double ptr [0x005c4db5]       ; 004d3988 | DAT_005c4db5
    FNSTSW AX                           ; 004d398e
    SAHF                                ; 004d3990
    JA 0x004d394d                       ; 004d3991
        ;   XREF to: 004d394d (CONDITIONAL_JUMP)  ; LAB_004d394d
    CMP EBX,dword ptr [EBP + 0x14]      ; 004d3993
    JZ 0x004d394d                       ; 004d3996
        ;   XREF to: 004d394d (CONDITIONAL_JUMP)  ; LAB_004d394d
    LEA EAX,[ESP + 0x44]                ; 004d3998
    PUSH EAX                            ; 004d399c
    LEA ESI,[ESP + 0x6c]                ; 004d399d
    LEA EDI,[ESP + 0x60]                ; 004d39a1
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 004d39a5
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[ESP + 0x6c]                ; 004d39aa
    ADD ESP,0x4                         ; 004d39ae
    MOVSD ES:EDI,ESI                    ; 004d39b1
    MOVSD ES:EDI,ESI                    ; 004d39b2
    MOVSD ES:EDI,ESI                    ; 004d39b3
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d39b4
    FLD float ptr [ESP + 0x60]          ; 004d39b7
    FSUB float ptr [EAX + 0x34]         ; 004d39bb
    SUB ESP,0x4                         ; 004d39be
    FSTP float ptr [ESP]                ; 004d39c1
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 004d39c4
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0()
    MOV dword ptr [ESP + 0xa4],EAX      ; 004d39c9
    FLD float ptr [ESP + 0xa4]          ; 004d39d0
    FABS                                ; 004d39d7
    ADD ESP,0x4                         ; 004d39d9
    FCOMP double ptr [0x005c4dbd]       ; 004d39dc | DAT_005c4dbd
    FNSTSW AX                           ; 004d39e2
    SAHF                                ; 004d39e4
    JA 0x004d394d                       ; 004d39e5
        ;   XREF to: 004d394d (CONDITIONAL_JUMP)  ; LAB_004d394d
    MOV ECX,dword ptr [ESP + 0x9c]      ; 004d39eb
    PUSH ECX                            ; 004d39f2
    PUSH EBX                            ; 004d39f3
    LEA ESI,[ESP + 0x40]                ; 004d39f4
    LEA EDI,[ESP + 0x7c]                ; 004d39f8
    CALL core_actor.cpp_FUN_00408bf0    ; 004d39fc
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x40]                ; 004d3a01
    ADD ESP,0x8                         ; 004d3a05
    MOVSD ES:EDI,ESI                    ; 004d3a08
    MOVSD ES:EDI,ESI                    ; 004d3a09
    MOVSD ES:EDI,ESI                    ; 004d3a0a
    FLD float ptr [ESP + 0x7c]          ; 004d3a0b
    FLDZ                                ; 004d3a0f
    FCOMPP                              ; 004d3a11
    FNSTSW AX                           ; 004d3a13
    SAHF                                ; 004d3a15
    JC 0x004d394d                       ; 004d3a16
        ;   XREF to: 004d394d (CONDITIONAL_JUMP)  ; LAB_004d394d
    MOV EAX,ESP                         ; 004d3a1c
    PUSH EAX                            ; 004d3a1e
    MOV ESI,dword ptr [EBX + 0x154]     ; 004d3a1f
    PUSH EBX                            ; 004d3a25
    CALL dword ptr [ESI + 0x98]         ; 004d3a26
    ADD ESP,0x8                         ; 004d3a2c
    CMP dword ptr [ESP],0x0             ; 004d3a2f
    JZ 0x004d394d                       ; 004d3a33
        ;   XREF to: 004d394d (CONDITIONAL_JUMP)  ; LAB_004d394d
    MOV EDI,dword ptr [ESP + 0x4]       ; 004d3a39
    TEST EDI,EDI                        ; 004d3a3d
    JNZ 0x004d394d                      ; 004d3a3f
        ;   XREF to: 004d394d (CONDITIONAL_JUMP)  ; LAB_004d394d
    MOV EAX,dword ptr [ESP + 0x8]       ; 004d3a45
    MOV dword ptr [ESP + 0x88],EAX      ; 004d3a49
    LEA EAX,[ESP + 0x80]                ; 004d3a50
    PUSH EAX                            ; 004d3a57
    LEA ESI,[ESP + 0x24]                ; 004d3a58
    MOV dword ptr [ESP + 0x84],EDI      ; 004d3a5c
    PUSH EBX                            ; 004d3a63
    MOV dword ptr [ESP + 0x8c],EDI      ; 004d3a64
    LEA EDI,[ESP + 0x58]                ; 004d3a6b
    CALL core_actor.cpp_FUN_00408b80    ; 004d3a6f
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x28]                ; 004d3a74
    ADD ESP,0x8                         ; 004d3a78
    MOVSD ES:EDI,ESI                    ; 004d3a7b
    MOVSD ES:EDI,ESI                    ; 004d3a7c
    MOVSD ES:EDI,ESI                    ; 004d3a7d
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004d3a7e
    FLD float ptr [ESP + 0x50]          ; 004d3a85
    FSUB float ptr [EAX]                ; 004d3a89
    FMUL ST0                            ; 004d3a8b
    FLD float ptr [ESP + 0x58]          ; 004d3a8d
    FSUB float ptr [EAX + 0x8]          ; 004d3a91
    FMUL ST0                            ; 004d3a94
    FADDP                               ; 004d3a96
    FSQRT                               ; 004d3a98
    FCOMP double ptr [0x005c4dc5]       ; 004d3a9a | DAT_005c4dc5
    FNSTSW AX                           ; 004d3aa0
    SAHF                                ; 004d3aa2
    JA 0x004d394d                       ; 004d3aa3
        ;   XREF to: 004d394d (CONDITIONAL_JUMP)  ; LAB_004d394d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d3aa9
    MOV dword ptr [EAX + 0x20b7c],0x0   ; 004d3aac
    MOV dword ptr [EAX + 0x20b68],0xa   ; 004d3ab6
    MOV dword ptr [EAX + 0x20b6c],EBX   ; 004d3ac0
    MOV dword ptr [EAX + 0x20b70],EBX   ; 004d3ac6
    MOV EAX,0x1                         ; 004d3acc
    MOV ESP,EBP                         ; 004d3ad1
    POP EBP                             ; 004d3ad3
    POP EDI                             ; 004d3ad4
    POP ESI                             ; 004d3ad5
    POP EBX                             ; 004d3ad6
    RET                                 ; 004d3ad7
    XOR EAX,EAX                         ; 004d3ad8
        ;   Label: LAB_004d3ad8
    MOV ESP,EBP                         ; 004d3ada
    POP EBP                             ; 004d3adc
    POP EDI                             ; 004d3add
    POP ESI                             ; 004d3ade
    POP EBX                             ; 004d3adf
    RET                                 ; 004d3ae0

