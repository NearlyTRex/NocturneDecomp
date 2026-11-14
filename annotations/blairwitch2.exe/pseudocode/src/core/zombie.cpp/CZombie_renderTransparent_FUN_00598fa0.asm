; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_zombie_cpp_CZombie_renderTransparent_FUN_00598fa0(CZombie *this_ptr)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_FUN_00408d70
;   core_charactr.cpp_CCharacter_renderTransparent_FUN_004268b0
;   core_dlight.cpp_renderConeLightGeometry_FUN_0044d060
;   core_skeleton.cpp_CDeformableModelInstance_getBoneModelMatrix_FUN_00546790
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
;   core_xform.cpp_FUN_00591530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00598fa0
        ;   Label: core_zombie.cpp_CZombie_renderTransparent_FUN_00598fa0
    PUSH ESI                            ; 00598fa1
    PUSH EDI                            ; 00598fa2
    PUSH EBP                            ; 00598fa3
    MOV EBP,ESP                         ; 00598fa4
    SUB ESP,0x144                       ; 00598fa6
    SUB EBP,0x7e                        ; 00598fac
    MOV EBX,dword ptr [EBP + 0x92]      ; 00598faf
    CMP dword ptr [EBX + 0x2828],0x0    ; 00598fb5
    JZ 0x00599131                       ; 00598fbc
        ;   XREF to: 00599131 (CONDITIONAL_JUMP)  ; LAB_00599131
    CMP dword ptr [EBX + 0x10b7c],0x0   ; 00598fc2
    JZ 0x00599131                       ; 00598fc9
        ;   XREF to: 00599131 (CONDITIONAL_JUMP)  ; LAB_00599131
    MOV ESI,dword ptr [EBX + 0x10b88]   ; 00598fcf
    PUSH ESI                            ; 00598fd5
    LEA EAX,[EBX + 0x2b4]               ; 00598fd6
    PUSH EAX                            ; 00598fdc
    LEA ESI,[EBP + 0xffffff6a]          ; 00598fdd
    LEA EDI,[EBP + 0xffffff3a]          ; 00598fe3
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelMatrix_FUN_00546790 ; 00598fe9
        ;   XREF to: 00546790 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelMatrix_FUN_00546790(CDeformableModelInstance * this_ptr, int bone_index, CMatrix3x4f * out_matrix)
    MOV ECX,0xc                         ; 00598fee
    ADD ESP,0x8                         ; 00598ff3
    LEA EAX,[EBP + 0xffffff3a]          ; 00598ff6
    LEA ESI,[EBP + 0xffffff6a]          ; 00598ffc
    PUSH EAX                            ; 00599002
    MOVSD.REP ES:EDI,ESI                ; 00599003
    MOV EAX,0x3f000000                  ; 00599005
    LEA ESI,[EBP + -0x2a]               ; 0059900a
    MOV dword ptr [EBP + -0x4a],EAX     ; 0059900d
    MOV dword ptr [EBP + -0x46],EAX     ; 00599010
    LEA EAX,[EBP + -0x4e]               ; 00599013
    XOR EDI,EDI                         ; 00599016
    PUSH EAX                            ; 00599018
    MOV dword ptr [EBP + -0x4e],EDI     ; 00599019
    LEA EDI,[EBP + -0x66]               ; 0059901c
    CALL core_xform.cpp_FUN_00591530    ; 0059901f
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 00599024
    LEA EAX,[EBP + -0x66]               ; 00599027
    LEA ESI,[EBP + -0x2a]               ; 0059902a
    PUSH EAX                            ; 0059902d
    MOVSD ES:EDI,ESI                    ; 0059902e
    MOVSD ES:EDI,ESI                    ; 0059902f
    MOVSD ES:EDI,ESI                    ; 00599030
    PUSH EBX                            ; 00599031
    LEA ESI,[EBP + -0x1e]               ; 00599032
    LEA EDI,[EBP + -0x5a]               ; 00599035
    CALL core_actor.cpp_FUN_00408d70    ; 00599038
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[EBP + -0x1e]               ; 0059903d
    ADD ESP,0x8                         ; 00599040
    LEA EAX,[EBP + 0xffffff3a]          ; 00599043
    XOR ECX,ECX                         ; 00599049
    PUSH EAX                            ; 0059904b
    MOV dword ptr [EBP + -0x6],ECX      ; 0059904c
    MOV dword ptr [EBP + -0x2],ECX      ; 0059904f
    MOV dword ptr [EBP + 0x2],ECX       ; 00599052
    LEA EAX,[EBP + -0x6]                ; 00599055
    MOVSD ES:EDI,ESI                    ; 00599058
    MOVSD ES:EDI,ESI                    ; 00599059
    MOVSD ES:EDI,ESI                    ; 0059905a
    PUSH EAX                            ; 0059905b
    LEA ESI,[EBP + -0x12]               ; 0059905c
    LEA EDI,[EBP + 0x1e]                ; 0059905f
    CALL core_xform.cpp_FUN_00591530    ; 00599062
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 00599067
    LEA EAX,[EBP + 0x1e]                ; 0059906a
    LEA ESI,[EBP + -0x12]               ; 0059906d
    PUSH EAX                            ; 00599070
    MOVSD ES:EDI,ESI                    ; 00599071
    MOVSD ES:EDI,ESI                    ; 00599072
    MOVSD ES:EDI,ESI                    ; 00599073
    PUSH EBX                            ; 00599074
    LEA ESI,[EBP + 0x66]                ; 00599075
    LEA EDI,[EBP + -0x42]               ; 00599078
    CALL core_actor.cpp_FUN_00408cf0    ; 0059907b
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[EBP + 0x66]                ; 00599080
    ADD ESP,0x8                         ; 00599083
    LEA EAX,[EBP + 0xffffff3a]          ; 00599086
    MOV ECX,0x3f800000                  ; 0059908c
    PUSH EAX                            ; 00599091
    XOR EAX,EAX                         ; 00599092
    MOV dword ptr [EBP + -0x2e],ECX     ; 00599094
    MOV dword ptr [EBP + -0x36],EAX     ; 00599097
    MOV dword ptr [EBP + -0x32],EAX     ; 0059909a
    LEA EAX,[EBP + -0x36]               ; 0059909d
    MOVSD ES:EDI,ESI                    ; 005990a0
    MOVSD ES:EDI,ESI                    ; 005990a1
    MOVSD ES:EDI,ESI                    ; 005990a2
    PUSH EAX                            ; 005990a3
    LEA ESI,[EBP + 0x6]                 ; 005990a4
    LEA EDI,[EBP + 0x5a]                ; 005990a7
    CALL core_xform.cpp_FUN_00591530    ; 005990aa
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 005990af
    LEA EAX,[EBP + 0x5a]                ; 005990b2
    LEA ESI,[EBP + 0x6]                 ; 005990b5
    PUSH EAX                            ; 005990b8
    MOVSD ES:EDI,ESI                    ; 005990b9
    MOVSD ES:EDI,ESI                    ; 005990ba
    MOVSD ES:EDI,ESI                    ; 005990bb
    PUSH EBX                            ; 005990bc
    LEA ESI,[EBP + 0x12]                ; 005990bd
    LEA EDI,[EBP + 0x72]                ; 005990c0
    CALL core_actor.cpp_FUN_00408cf0    ; 005990c3
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[EBP + 0x12]                ; 005990c8
    LEA EAX,[EBP + 0x36]                ; 005990cb
    MOVSD ES:EDI,ESI                    ; 005990ce
    MOVSD ES:EDI,ESI                    ; 005990cf
    MOVSD ES:EDI,ESI                    ; 005990d0
    ADD ESP,0x8                         ; 005990d1
    FLD float ptr [EBP + 0x72]          ; 005990d4
    FLD float ptr [EBP + 0x76]          ; 005990d7
    FLD float ptr [EBP + 0x7a]          ; 005990da
    LEA EDI,[EBP + 0x36]                ; 005990dd
    LEA ESI,[EBP + 0x42]                ; 005990e0
    FXCH ST2                            ; 005990e3
    FSUB float ptr [EBP + -0x42]        ; 005990e5
    FXCH                                ; 005990e8
    FSUB float ptr [EBP + -0x3e]        ; 005990ea
    FXCH ST2                            ; 005990ed
    FSUB float ptr [EBP + -0x3a]        ; 005990ef
    FXCH                                ; 005990f2
    FSTP float ptr [EBP + 0x42]         ; 005990f4
    FXCH                                ; 005990f7
    FSTP float ptr [EBP + 0x46]         ; 005990f9
    FSTP float ptr [EBP + 0x4a]         ; 005990fc
    MOVSD ES:EDI,ESI                    ; 005990ff
    MOVSD ES:EDI,ESI                    ; 00599100
    MOVSD ES:EDI,ESI                    ; 00599101
    PUSH EAX                            ; 00599102
    LEA ESI,[EBP + 0x4e]                ; 00599103
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 00599106
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    ADD ESP,0x4                         ; 0059910b
    PUSH 0x40c00000                     ; 0059910e
    LEA EAX,[EBP + 0x2a]                ; 00599113
    PUSH 0x42600000                     ; 00599116
    LEA EDI,[EBP + 0x2a]                ; 0059911b
    PUSH EAX                            ; 0059911e
    LEA EAX,[EBP + -0x5a]               ; 0059911f
    LEA ESI,[EBP + 0x4e]                ; 00599122
    PUSH EAX                            ; 00599125
    MOVSD ES:EDI,ESI                    ; 00599126
    MOVSD ES:EDI,ESI                    ; 00599127
    MOVSD ES:EDI,ESI                    ; 00599128
    CALL core_dlight.cpp_renderConeLightGeometry_FUN_0044d060 ; 00599129
        ;   XREF to: 0044d060 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_renderConeLightGeometry_FUN_0044d060(CVector3f * position, CVector3f * rotation, float fov, float falloff)
    ADD ESP,0x10                        ; 0059912e
    CMP dword ptr [EBX + 0x2828],0x0    ; 00599131
        ;   Label: LAB_00599131
    JNZ 0x00599148                      ; 00599138
        ;   XREF to: 00599148 (CONDITIONAL_JUMP)  ; LAB_00599148
    MOV EAX,dword ptr [EBX + 0x2828]    ; 0059913a
    LEA ESP,[EBP + 0x7e]                ; 00599140
    POP EBP                             ; 00599143
    POP EDI                             ; 00599144
    POP ESI                             ; 00599145
    POP EBX                             ; 00599146
    RET                                 ; 00599147
    PUSH EBX                            ; 00599148
        ;   Label: LAB_00599148
    CALL core_charactr.cpp_CCharacter_renderTransparent_FUN_004268b0 ; 00599149
        ;   XREF to: 004268b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderTransparent_FUN_004268b0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0059914e
    MOV EAX,dword ptr [EBX + 0x2828]    ; 00599151
    LEA ESP,[EBP + 0x7e]                ; 00599157
    POP EBP                             ; 0059915a
    POP EDI                             ; 0059915b
    POP ESI                             ; 0059915c
    POP EBX                             ; 0059915d
    RET                                 ; 0059915e

