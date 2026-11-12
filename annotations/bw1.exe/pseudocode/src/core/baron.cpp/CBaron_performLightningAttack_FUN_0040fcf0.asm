; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_baron_cpp_CBaron_performLightningAttack_FUN_0040fcf0(CBaron *this_ptr)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x1a0]:1  local_1a0
; undefined        Stack[-0x128]:1  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined        Stack[-0xa4]:1  local_a4
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x14]:1  local_14
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_baron.cpp_CBaron_advanceMotion_FUN_00410110 at 00410146
;
; Referenced Globals:
;   TerminatedCString s_baron_attack_wav_005d34ca
;   undefined4 DAT_005d34de
;   WatcomTypeInfo g_CVectorTypeInfo
;   undefined4 DAT_0061c010
;   undefined4 DAT_007c34cc
;   undefined4 DAT_007c34d0
;   undefined4 DAT_02c8af28
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010
;   core_fire.cpp_CFireEffect_createCrater_FUN_004b6f30
;   core_fire.cpp_CFireEffect_createLightningBolt_FUN_004b6fe0
;   core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_004b7060
;   core_hero.cpp_FUN_004ec350
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
;   core_xform.cpp_FUN_005b5080
;   crt_memory.c___arrinit_FUN_005c0357
;   crt_stdlib.c_rand_FUN_005c084c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040fcf0
        ;   Label: core_baron.cpp_CBaron_performLightningAttack_FUN_0040fcf0
    PUSH EBP                            ; 0040fcf1
    SUB ESP,0x198                       ; 0040fcf2
    MOV EBP,dword ptr [ESP + 0x1a4]     ; 0040fcf8
    LEA EAX,[ESP + 0x18c]               ; 0040fcff
    PUSH EAX                            ; 0040fd06
    PUSH EBP                            ; 0040fd07
    CALL core_hero.cpp_FUN_004ec350     ; 0040fd08
        ;   XREF to: 004ec350 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004ec350()
    ADD ESP,0x8                         ; 0040fd0d
    MOV EBX,EAX                         ; 0040fd10
    TEST EAX,EAX                        ; 0040fd12
    JNZ 0x0040fd1f                      ; 0040fd14
        ;   XREF to: 0040fd1f (CONDITIONAL_JUMP)  ; LAB_0040fd1f
    ADD ESP,0x198                       ; 0040fd16
    POP EBP                             ; 0040fd1c
    POP EBX                             ; 0040fd1d
    RET                                 ; 0040fd1e
    PUSH EDI                            ; 0040fd1f
        ;   Label: LAB_0040fd1f
    PUSH ESI                            ; 0040fd20
    ADD EAX,0x20                        ; 0040fd21
    PUSH EAX                            ; 0040fd24
    PUSH EBP                            ; 0040fd25
    LEA ESI,[ESP + 0x10c]               ; 0040fd26
    LEA EDI,[ESP + 0x16c]               ; 0040fd2d
    CALL core_actor.cpp_FUN_00408bb0    ; 0040fd34
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x10c]               ; 0040fd39
    ADD ESP,0x8                         ; 0040fd40
    LEA EAX,[ESP + 0x164]               ; 0040fd43
    MOVSD ES:EDI,ESI                    ; 0040fd4a
    MOVSD ES:EDI,ESI                    ; 0040fd4b
    MOVSD ES:EDI,ESI                    ; 0040fd4c
    PUSH EAX                            ; 0040fd4d
    LEA ESI,[ESP + 0x174]               ; 0040fd4e
    LEA EDI,[ESP + 0x150]               ; 0040fd55
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 0040fd5c
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0x174]               ; 0040fd61
    LEA EAX,[ESP + 0x150]               ; 0040fd68
    ADD ESP,0x4                         ; 0040fd6f
    LEA EDX,[ESP + 0x164]               ; 0040fd72
    MOVSD ES:EDI,ESI                    ; 0040fd79
    MOVSD ES:EDI,ESI                    ; 0040fd7a
    MOVSD ES:EDI,ESI                    ; 0040fd7b
    CMP EDX,EAX                         ; 0040fd7c
    JZ 0x0040fdaa                       ; 0040fd7e
        ;   XREF to: 0040fdaa (CONDITIONAL_JUMP)  ; LAB_0040fdaa
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0040fd80
    MOV dword ptr [ESP + 0x164],EAX     ; 0040fd87
    MOV EAX,dword ptr [ESP + 0x150]     ; 0040fd8e
    MOV dword ptr [ESP + 0x168],EAX     ; 0040fd95
    MOV EAX,dword ptr [ESP + 0x154]     ; 0040fd9c
    MOV dword ptr [ESP + 0x16c],EAX     ; 0040fda3
    PUSH dword ptr [ESP + 0x168]        ; 0040fdaa
        ;   Label: LAB_0040fdaa
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 0040fdb1
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x1a0],EAX     ; 0040fdb6
    FLD float ptr [ESP + 0x1a0]         ; 0040fdbd
    ADD ESP,0x4                         ; 0040fdc4
    FST float ptr [ESP + 0x168]         ; 0040fdc7
    FCOMP float ptr [0x005d34de]        ; 0040fdce | DAT_005d34de
    FNSTSW AX                           ; 0040fdd4
    SAHF                                ; 0040fdd6
    JNC 0x0040fe82                      ; 0040fdd7
        ;   XREF to: 0040fe82 (CONDITIONAL_JUMP)  ; LAB_0040fe82
    PUSH 0x0                            ; 0040fddd
        ;   Label: LAB_0040fddd
    PUSH 0x1                            ; 0040fddf
    LEA ESI,[EBX + 0x20]                ; 0040fde1
    PUSH 0x41800000                     ; 0040fde4
    PUSH ESI                            ; 0040fde9
    MOV ECX,dword ptr [0x0061c010]      ; 0040fdea | DAT_0061c010
    PUSH ECX                            ; 0040fdf0
    CALL core_fire.cpp_CFireEffect_createLightningBolt_FUN_004b6fe0 ; 0040fdf1
        ;   XREF to: 004b6fe0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLightningBolt_FUN_004b6fe0(CFireEffect * this_ptr, CVector3f * start_position, float start_width, int enable_camera_shake, ...)
    ADD ESP,0x14                        ; 0040fdf6
    PUSH 0x40800000                     ; 0040fdf9
    PUSH ESI                            ; 0040fdfe
    MOV ESI,dword ptr [0x0061c010]      ; 0040fdff | DAT_0061c010
    PUSH ESI                            ; 0040fe05
    CALL core_fire.cpp_CFireEffect_createCrater_FUN_004b6f30 ; 0040fe06
        ;   XREF to: 004b6f30 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createCrater_FUN_004b6f30(CFireEffect * this_ptr, CVector3f * position, float radius)
    ADD ESP,0xc                         ; 0040fe0b
    LEA EAX,[ESP + 0x80]                ; 0040fe0e
        ;   Label: LAB_0040fe0e
    PUSH EAX                            ; 0040fe15
    MOV EDI,0x6                         ; 0040fe16
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 0040fe1b
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0040fe20
    MOV EAX,0x42c80000                  ; 0040fe23
    MOV dword ptr [ESP + 0xb0],EDI      ; 0040fe28
    MOV dword ptr [ESP + 0x84],EAX      ; 0040fe2f
    MOV dword ptr [ESP + 0xb4],EBP      ; 0040fe36
    MOV EAX,dword ptr [EBP + 0x20084]   ; 0040fe3d
    MOV dword ptr [ESP + 0xb8],EAX      ; 0040fe43
    TEST EAX,EAX                        ; 0040fe4a
    JNZ 0x0040fe55                      ; 0040fe4c
        ;   XREF to: 0040fe55 (CONDITIONAL_JUMP)  ; LAB_0040fe55
    MOV dword ptr [ESP + 0xb8],EBP      ; 0040fe4e
    LEA EAX,[ESP + 0x80]                ; 0040fe55
        ;   Label: LAB_0040fe55
    PUSH EAX                            ; 0040fe5c
    MOV EDX,dword ptr [EBX + 0x154]     ; 0040fe5d
    PUSH EBX                            ; 0040fe63
    CALL dword ptr [EDX + 0x108]        ; 0040fe64
    ADD ESP,0x8                         ; 0040fe6a
    MOV dword ptr [EBX + 0xb9f0],0x40400000 ; 0040fe6d
    POP ESI                             ; 0040fe77
    POP EDI                             ; 0040fe78
    ADD ESP,0x198                       ; 0040fe79
    POP EBP                             ; 0040fe7f
    POP EBX                             ; 0040fe80
    RET                                 ; 0040fe81
    CMP dword ptr [ESP + 0x168],0x3f490fdb ; 0040fe82
        ;   Label: LAB_0040fe82
    JG 0x0040fddd                       ; 0040fe8d
        ;   XREF to: 0040fddd (CONDITIONAL_JUMP)  ; LAB_0040fddd
    PUSH 0x5fb430                       ; 0040fe93 | g_CVectorTypeInfo
    PUSH 0xa                            ; 0040fe98
    LEA EAX,[ESP + 0x10]                ; 0040fe9a
    PUSH EAX                            ; 0040fe9e
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0040fe9f
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0040fea4
    LEA EAX,[ESP + 0x8]                 ; 0040fea7
    PUSH EAX                            ; 0040feab
    MOV EDX,dword ptr [EBX + 0x154]     ; 0040feac
    PUSH EBX                            ; 0040feb2
    CALL dword ptr [EDX + 0x54]         ; 0040feb3
    ADD ESP,0x8                         ; 0040feb6
    MOV ESI,EAX                         ; 0040feb9
    MOV dword ptr [ESP + 0x198],EAX     ; 0040febb
    CALL crt_stdlib.c_rand_FUN_005c084c ; 0040fec2
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
    MOV EDX,EAX                         ; 0040fec7
    SAR EDX,0x1f                        ; 0040fec9
    IDIV ESI                            ; 0040fecc
    LEA EAX,[EDX*0x4 + 0x0]             ; 0040fece
    SUB EAX,EDX                         ; 0040fed5
    LEA EDX,[ESP + 0x8]                 ; 0040fed7
    SHL EAX,0x2                         ; 0040fedb
    ADD EAX,EDX                         ; 0040fede
    PUSH EAX                            ; 0040fee0
    PUSH EBX                            ; 0040fee1
    LEA ESI,[ESP + 0x130]               ; 0040fee2
    LEA EDI,[ESP + 0xf4]                ; 0040fee9
    CALL core_actor.cpp_FUN_00408b40    ; 0040fef0
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x130]               ; 0040fef5
    LEA EAX,[ESP + 0xf4]                ; 0040fefc
    ADD ESP,0x8                         ; 0040ff03
    LEA EDX,[ESP + 0x158]               ; 0040ff06
    MOVSD ES:EDI,ESI                    ; 0040ff0d
    MOVSD ES:EDI,ESI                    ; 0040ff0e
    MOVSD ES:EDI,ESI                    ; 0040ff0f
    CMP EDX,EAX                         ; 0040ff10
    JZ 0x0040ff3e                       ; 0040ff12
        ;   XREF to: 0040ff3e (CONDITIONAL_JUMP)  ; LAB_0040ff3e
    MOV EAX,dword ptr [ESP + 0xec]      ; 0040ff14
    MOV dword ptr [ESP + 0x158],EAX     ; 0040ff1b
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0040ff22
    MOV dword ptr [ESP + 0x15c],EAX     ; 0040ff29
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0040ff30
    MOV dword ptr [ESP + 0x160],EAX     ; 0040ff37
    CALL crt_stdlib.c_rand_FUN_005c084c ; 0040ff3e
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
        ;   Label: LAB_0040ff3e
    MOV EDX,EAX                         ; 0040ff43
    MOV ECX,dword ptr [ESP + 0x198]     ; 0040ff45
    SAR EDX,0x1f                        ; 0040ff4c
    IDIV ECX                            ; 0040ff4f
    LEA EAX,[EDX*0x4 + 0x0]             ; 0040ff51
    SUB EAX,EDX                         ; 0040ff58
    LEA EDX,[EAX*0x4 + 0x0]             ; 0040ff5a
    LEA EAX,[ESP + 0x8]                 ; 0040ff61
    ADD EAX,EDX                         ; 0040ff65
    PUSH EAX                            ; 0040ff67
    PUSH EBX                            ; 0040ff68
    LEA ESI,[ESP + 0x190]               ; 0040ff69
    LEA EDI,[ESP + 0xdc]                ; 0040ff70
    CALL core_actor.cpp_FUN_00408b40    ; 0040ff77
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x190]               ; 0040ff7c
    LEA EAX,[ESP + 0xdc]                ; 0040ff83
    ADD ESP,0x8                         ; 0040ff8a
    LEA EDX,[ESP + 0x140]               ; 0040ff8d
    MOVSD ES:EDI,ESI                    ; 0040ff94
    MOVSD ES:EDI,ESI                    ; 0040ff95
    MOVSD ES:EDI,ESI                    ; 0040ff96
    CMP EDX,EAX                         ; 0040ff97
    JZ 0x0040ffc5                       ; 0040ff99
        ;   XREF to: 0040ffc5 (CONDITIONAL_JUMP)  ; LAB_0040ffc5
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0040ff9b
    MOV dword ptr [ESP + 0x140],EAX     ; 0040ffa2
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0040ffa9
    MOV dword ptr [ESP + 0x144],EAX     ; 0040ffb0
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0040ffb7
    MOV dword ptr [ESP + 0x148],EAX     ; 0040ffbe
    MOV EDX,dword ptr [0x007c34cc]      ; 0040ffc5 | DAT_007c34cc
        ;   Label: LAB_0040ffc5
    LEA EAX,[EDX*0x4 + 0x0]             ; 0040ffcb
    SUB EAX,EDX                         ; 0040ffd2
    SHL EAX,0x4                         ; 0040ffd4
    LEA EDX,[EBP + 0xfd8]               ; 0040ffd7
    ADD EAX,EDX                         ; 0040ffdd
    PUSH EAX                            ; 0040ffdf
    LEA ESI,[ESP + 0x180]               ; 0040ffe0
    PUSH 0x2c8af28                      ; 0040ffe7 | DAT_02c8af28
    LEA EDI,[ESP + 0xc4]                ; 0040ffec
    MOV dword ptr [ESP + 0x1a4],EDX     ; 0040fff3
    CALL core_xform.cpp_FUN_005b5080    ; 0040fffa
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 0040ffff
    LEA EAX,[ESP + 0xbc]                ; 00410002
    LEA ESI,[ESP + 0x17c]               ; 00410009
    PUSH EAX                            ; 00410010
    MOVSD ES:EDI,ESI                    ; 00410011
    MOVSD ES:EDI,ESI                    ; 00410012
    MOVSD ES:EDI,ESI                    ; 00410013
    PUSH EBP                            ; 00410014
    LEA ESI,[ESP + 0x13c]               ; 00410015
    LEA EDI,[ESP + 0x100]               ; 0041001c
    CALL core_actor.cpp_FUN_00408b40    ; 00410023
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x13c]               ; 00410028
    MOV EDX,dword ptr [0x007c34d0]      ; 0041002f | DAT_007c34d0
    ADD ESP,0x8                         ; 00410035
    LEA EAX,[EDX*0x4 + 0x0]             ; 00410038
    MOVSD ES:EDI,ESI                    ; 0041003f
    MOVSD ES:EDI,ESI                    ; 00410040
    MOVSD ES:EDI,ESI                    ; 00410041
    SUB EAX,EDX                         ; 00410042
    MOV EDI,dword ptr [ESP + 0x19c]     ; 00410044
    SHL EAX,0x4                         ; 0041004b
    ADD EAX,EDI                         ; 0041004e
    PUSH EAX                            ; 00410050
    PUSH 0x2c8af28                      ; 00410051 | DAT_02c8af28
    LEA ESI,[ESP + 0xe8]                ; 00410056
    LEA EDI,[ESP + 0x124]               ; 0041005d
    CALL core_xform.cpp_FUN_005b5080    ; 00410064
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 00410069
    LEA EAX,[ESP + 0x11c]               ; 0041006c
    LEA ESI,[ESP + 0xe0]                ; 00410073
    PUSH EAX                            ; 0041007a
    MOVSD ES:EDI,ESI                    ; 0041007b
    MOVSD ES:EDI,ESI                    ; 0041007c
    MOVSD ES:EDI,ESI                    ; 0041007d
    PUSH EBP                            ; 0041007e
    LEA ESI,[ESP + 0xd0]                ; 0041007f
    CALL core_actor.cpp_FUN_00408b40    ; 00410086
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0041008b
    PUSH 0x40800000                     ; 0041008e
    PUSH 0x3f000000                     ; 00410093
    PUSH 0x1                            ; 00410098
    LEA EAX,[ESP + 0x164]               ; 0041009a
    PUSH EAX                            ; 004100a1
    LEA EAX,[ESP + 0x108]               ; 004100a2
    LEA EDI,[ESP + 0x120]               ; 004100a9
    PUSH EAX                            ; 004100b0
    MOV EAX,[0x0061c010]                ; 004100b1 | DAT_0061c010
    LEA ESI,[ESP + 0xdc]                ; 004100b6
    PUSH EAX                            ; 004100bd
    MOVSD ES:EDI,ESI                    ; 004100be
    MOVSD ES:EDI,ESI                    ; 004100bf
    MOVSD ES:EDI,ESI                    ; 004100c0
    CALL core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_004b7060 ; 004100c1
        ;   XREF to: 004b7060 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_004b7060(CFireEffect * this_ptr, CVector3f * start_position, CVector3f * end_position, int enable_camera_shake, ...)
    ADD ESP,0x18                        ; 004100c6
    PUSH 0x40800000                     ; 004100c9
    PUSH 0x3f000000                     ; 004100ce
    PUSH 0x1                            ; 004100d3
    LEA EAX,[ESP + 0x164]               ; 004100d5
    PUSH EAX                            ; 004100dc
    LEA EAX,[ESP + 0x120]               ; 004100dd
    PUSH EAX                            ; 004100e4
    MOV EDX,dword ptr [0x0061c010]      ; 004100e5 | DAT_0061c010
    PUSH EDX                            ; 004100eb
    CALL core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_004b7060 ; 004100ec
        ;   XREF to: 004b7060 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_004b7060(CFireEffect * this_ptr, CVector3f * start_position, CVector3f * end_position, int enable_camera_shake, ...)
    ADD ESP,0x18                        ; 004100f1
    PUSH 0x5d34ca                       ; 004100f4 | = "baron-attack.wav"
    MOV EAX,dword ptr [EBP + 0x154]     ; 004100f9
    PUSH EBP                            ; 004100ff
    CALL dword ptr [EAX + 0x2c]         ; 00410100
    ADD ESP,0x8                         ; 00410103
    JMP 0x0040fe0e                      ; 00410106
        ;   XREF to: 0040fe0e (UNCONDITIONAL_JUMP)  ; LAB_0040fe0e

