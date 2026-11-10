; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_CWeapon_renderAimBeam_FUN_005adf90(CWeapon *this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x38]:1  local_38
;
; XREF[3]:
;   core_lightgun.cpp_CLightGun_renderAimBeam_FUN_00500f90 at 005014c8
;   core_lightpis.cpp_CLightPis_renderAimBeam_FUN_005026f0 at 00502c28
;   core_rifle.cpp_CRifle_renderAimBeam_FUN_005409b0 at 005409b5
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_0061c010
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01bc120c
;   undefined4 g_CHeroClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408b40
;   core_fire.cpp_FUN_004b6420
;   core_fire.cpp_SLaserInfo_ctor_FUN_004b63e0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00559250
;   core_setcolid.cpp_CDemonSet_init_FUN_00559220
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005adf90
        ;   Label: core_weapon.cpp_CWeapon_renderAimBeam_FUN_005adf90
    PUSH EBP                            ; 005adf91
    SUB ESP,0xa8                        ; 005adf92
    MOV EBX,dword ptr [ESP + 0xb4]      ; 005adf98
    MOV EDX,dword ptr [0x00612560]      ; 005adf9f | DAT_00612560
    PUSH EDX                            ; 005adfa5 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 005adfa6
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005adfab
    TEST EAX,EAX                        ; 005adfae
    JZ 0x005adfc1                       ; 005adfb0
        ;   XREF to: 005adfc1 (CONDITIONAL_JUMP)  ; LAB_005adfc1
    ADD ESP,0xa8                        ; 005adfb2
    POP EBP                             ; 005adfb8
    POP EBX                             ; 005adfb9
    LEA EAX,[EAX]                       ; 005adfba
    PUSH EDI                            ; 005adfc1
        ;   Label: LAB_005adfc1
    PUSH ESI                            ; 005adfc2
    PUSH EBX                            ; 005adfc3
    MOV EAX,dword ptr [EBX + 0x154]     ; 005adfc4
    LEA ESI,[ESP + 0x84]                ; 005adfca
    LEA EDI,[ESP + 0x6c]                ; 005adfd1
    CALL dword ptr [EAX + 0xe0]         ; 005adfd5
    ADD ESP,0x4                         ; 005adfdb
    LEA EAX,[ESP + 0x68]                ; 005adfde
    LEA ESI,[ESP + 0x80]                ; 005adfe2
    PUSH EAX                            ; 005adfe9
    MOVSD ES:EDI,ESI                    ; 005adfea
    MOVSD ES:EDI,ESI                    ; 005adfeb
    MOVSD ES:EDI,ESI                    ; 005adfec
    PUSH EBX                            ; 005adfed
    LEA ESI,[ESP + 0xac]                ; 005adfee
    LEA EDI,[ESP + 0x64]                ; 005adff5
    CALL core_actor.cpp_FUN_00408b40    ; 005adff9
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0xac]                ; 005adffe
    ADD ESP,0x8                         ; 005ae005
    MOVSD ES:EDI,ESI                    ; 005ae008
    MOVSD ES:EDI,ESI                    ; 005ae009
    MOVSD ES:EDI,ESI                    ; 005ae00a
    MOV EAX,dword ptr [EBX + 0x2e8]     ; 005ae00b
    MOV dword ptr [ESP + 0x94],EAX      ; 005ae011
    LEA EAX,[ESP + 0x8c]                ; 005ae018
    XOR ECX,ECX                         ; 005ae01f
    PUSH EAX                            ; 005ae021
    LEA ESI,[ESP + 0x9c]                ; 005ae022
    LEA EDI,[ESP + 0x78]                ; 005ae029
    PUSH EBX                            ; 005ae02d
    MOV dword ptr [ESP + 0x94],ECX      ; 005ae02e
    MOV dword ptr [ESP + 0x98],ECX      ; 005ae035
    CALL core_actor.cpp_FUN_00408ac0    ; 005ae03c
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0xa0]                ; 005ae041
    ADD ESP,0x8                         ; 005ae048
    MOVSD ES:EDI,ESI                    ; 005ae04b
    MOVSD ES:EDI,ESI                    ; 005ae04c
    MOVSD ES:EDI,ESI                    ; 005ae04d
    MOV EDI,dword ptr [0x00622c18]      ; 005ae04e | g_CDemonSetPtr
    PUSH EDI                            ; 005ae054 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 005ae055
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005ae05a
    PUSH EBX                            ; 005ae05d
    MOV EBP,dword ptr [0x00622c18]      ; 005ae05e | g_CDemonSetPtr
    PUSH EBP                            ; 005ae064 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 005ae065
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    MOV EAX,dword ptr [EBX + 0x304]     ; 005ae06a
    ADD ESP,0x8                         ; 005ae070
    TEST EAX,EAX                        ; 005ae073
    JZ 0x005ae087                       ; 005ae075
        ;   XREF to: 005ae087 (CONDITIONAL_JUMP)  ; LAB_005ae087
    PUSH EAX                            ; 005ae077
    MOV ECX,dword ptr [0x00622c18]      ; 005ae078 | g_CDemonSetPtr
    PUSH ECX                            ; 005ae07e | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 005ae07f
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005ae084
    LEA EAX,[ESP + 0x8]                 ; 005ae087
        ;   Label: LAB_005ae087
    PUSH EAX                            ; 005ae08b
    MOV ESI,0x1                         ; 005ae08c
    CALL core_fire.cpp_SLaserInfo_ctor_FUN_004b63e0 ; 005ae091
        ;   XREF to: 004b63e0 (UNCONDITIONAL_CALL)  ; SLaserInfo * core_fire.cpp_SLaserInfo_ctor_FUN_004b63e0(SLaserInfo * this_ptr)
    ADD ESP,0x4                         ; 005ae096
    MOV dword ptr [ESP + 0x10],ESI      ; 005ae099
    MOV EAX,dword ptr [EBX + 0x2f4]     ; 005ae09d
    MOV dword ptr [ESP + 0x14],EAX      ; 005ae0a3
    MOV EAX,dword ptr [EBX + 0x2f8]     ; 005ae0a7
    MOV dword ptr [ESP + 0x18],EAX      ; 005ae0ad
    MOV EDI,0x3f800000                  ; 005ae0b1
    MOV EAX,dword ptr [EBX + 0x2fc]     ; 005ae0b6
    MOV EBP,dword ptr [0x01d06b10]      ; 005ae0bc | g_CHeroClassInfo.name_hash
    MOV dword ptr [ESP + 0x1c],EAX      ; 005ae0c2
    MOV dword ptr [ESP + 0x8],EDI       ; 005ae0c6
    PUSH EBP                            ; 005ae0ca
    MOV EAX,dword ptr [EBX + 0x304]     ; 005ae0cb
    PUSH EAX                            ; 005ae0d1
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 005ae0d2
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 005ae0d7
    TEST EAX,EAX                        ; 005ae0da
    SETNZ AL                            ; 005ae0dc
    PUSH 0x0                            ; 005ae0df
    AND EAX,0xff                        ; 005ae0e1
    MOV dword ptr [ESP + 0x28],ESI      ; 005ae0e6
    MOV dword ptr [ESP + 0x24],EAX      ; 005ae0ea
    SUB ESP,0x54                        ; 005ae0ee
    MOV ECX,0x15                        ; 005ae0f1
    MOV EDI,ESP                         ; 005ae0f6
    LEA EAX,[ESP + 0xcc]                ; 005ae0f8
    LEA ESI,[ESP + 0x60]                ; 005ae0ff
    PUSH EAX                            ; 005ae103
    LEA EAX,[ESP + 0xb8]                ; 005ae104
    MOVSD.REP ES:EDI,ESI                ; 005ae10b
    PUSH EAX                            ; 005ae10d
    MOV ECX,dword ptr [0x0061c010]      ; 005ae10e | DAT_0061c010
    PUSH ECX                            ; 005ae114
    CALL core_fire.cpp_FUN_004b6420     ; 005ae115
        ;   XREF to: 004b6420 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004b6420()
    ADD ESP,0x64                        ; 005ae11a
    MOV EBX,dword ptr [0x00622c18]      ; 005ae11d | g_CDemonSetPtr
    PUSH EBX                            ; 005ae123 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 005ae124
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005ae129
    POP ESI                             ; 005ae12c
    POP EDI                             ; 005ae12d
    ADD ESP,0xa8                        ; 005ae12e
    POP EBP                             ; 005ae134
    POP EBX                             ; 005ae135
    RET                                 ; 005ae136

