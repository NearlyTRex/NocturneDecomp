; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTurret * __cdecl core_turret_cpp_CTurret_ctor_FUN_005e20f0(CTurret *this_ptr)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
; Local Variables:
; CVector3f        Stack[-0x24]:12  local_24
; CVector3f        Stack[-0x18]:12  local_18
;
; XREF[1]:
;   core_turret.cpp_factoryFuncTurret_FUN_005e20b0 at 005e20cd
;
; Referenced Globals:
;   TerminatedCString s_gturret_head_kfm_006565c3
;   TerminatedCString s_gturret_tripod_kfm_006565d4
;   TerminatedCString s_CCharacter_006565e7
;   undefined4 s_Character_006565e8
;   undefined4 s_haracter_006565e9
;   undefined4 s_aracter_006565ea
;   CWeapon_full_vtable g_CTurretVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_weapon.cpp_CWeapon_ctor_FUN_005ede70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e20f0
        ;   Label: core_turret.cpp_CTurret_ctor_FUN_005e20f0
    PUSH ESI                            ; 005e20f1
    PUSH EDI                            ; 005e20f2
    SUB ESP,0x18                        ; 005e20f3
    MOV EBX,dword ptr [ESP + 0x28]      ; 005e20f6
    PUSH EBX                            ; 005e20fa
    CALL core_weapon.cpp_CWeapon_ctor_FUN_005ede70 ; 005e20fb
        ;   XREF to: 005ede70 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_005ede70(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 005e2100
    ADD EAX,0x584                       ; 005e2103
    PUSH EAX                            ; 005e2108
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 005e2109
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005e210e
    LEA EBX,[EAX + 0xfffffa7c]          ; 005e2111
    PUSH 0x6565c3                       ; 005e2117 | = "gturret_head.kfm"
    LEA EAX,[EBX + 0x158]               ; 005e211c
    PUSH EAX                            ; 005e2122
    MOV dword ptr [EBX + 0x154],0x664b84 ; 005e2123 | g_CTurretVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 005e212d
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005e2132
    PUSH 0x6565d4                       ; 005e2135 | = "gturret_tripod.kfm"
    LEA EAX,[EBX + 0x584]               ; 005e213a
    PUSH EAX                            ; 005e2140
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 005e2141
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x700],0x0     ; 005e2146
    MOV byte ptr [EBX + 0x704],0x0      ; 005e2150
    MOV dword ptr [EBX + 0x768],0x40400000 ; 005e2157
    MOV dword ptr [EBX + 0x76c],0x40c00000 ; 005e2161
    MOV dword ptr [EBX + 0x770],0x40400000 ; 005e216b
    MOV dword ptr [EBX + 0x774],0x3e4ccccd ; 005e2175
    MOV dword ptr [EBX + 0x778],0x41f00000 ; 005e217f
    MOV ESI,0x6565e7                    ; 005e2189 | = "CCharacter"
    MOV dword ptr [EBX + 0x77c],0x0     ; 005e218e
    ADD ESP,0x8                         ; 005e2198
    MOV dword ptr [EBX + 0x300],0x0     ; 005e219b
    LEA EDI,[EBX + 0x784]               ; 005e21a5
    MOV dword ptr [EBX + 0x780],0x0     ; 005e21ab
    PUSH EDI                            ; 005e21b5
    MOV AL,byte ptr [ESI]               ; 005e21b6 | = "CCharacter" | s_haracter_006565e9
        ;   Label: LAB_005e21b6
    MOV byte ptr [EDI],AL               ; 005e21b8
    CMP AL,0x0                          ; 005e21ba
    JZ 0x005e21ce                       ; 005e21bc
        ;   XREF to: 005e21ce (CONDITIONAL_JUMP)  ; LAB_005e21ce
    MOV AL,byte ptr [ESI + 0x1]         ; 005e21be | s_Character_006565e8 | s_aracter_006565ea
    ADD ESI,0x2                         ; 005e21c1
    MOV byte ptr [EDI + 0x1],AL         ; 005e21c4
    ADD EDI,0x2                         ; 005e21c7
    CMP AL,0x0                          ; 005e21ca
    JNZ 0x005e21b6                      ; 005e21cc
        ;   XREF to: 005e21b6 (CONDITIONAL_JUMP)  ; LAB_005e21b6
    POP EDI                             ; 005e21ce
        ;   Label: LAB_005e21ce
    LEA EAX,[ESP + 0xc]                 ; 005e21cf
    PUSH EAX                            ; 005e21d3
    LEA EAX,[ESP + 0x4]                 ; 005e21d4
    XOR EDX,EDX                         ; 005e21d8
    PUSH EAX                            ; 005e21da
    MOV ESI,0x3f800000                  ; 005e21db
    MOV dword ptr [ESP + 0x14],EDX      ; 005e21e0
    PUSH EBX                            ; 005e21e4
    MOV dword ptr [ESP + 0x1c],EDX      ; 005e21e5
    MOV dword ptr [ESP + 0x20],ESI      ; 005e21e9
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005e21ed
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    LEA EDX,[EBX + 0x84c]               ; 005e21f2
    ADD ESP,0xc                         ; 005e21f8
    CMP EDX,EAX                         ; 005e21fb
    JNZ 0x005e2226                      ; 005e21fd
        ;   XREF to: 005e2226 (CONDITIONAL_JUMP)  ; LAB_005e2226
    MOV dword ptr [EBX + 0x85c],0x0     ; 005e21ff
        ;   Label: LAB_005e21ff
    MOV dword ptr [EBX + 0x86c],0x0     ; 005e2209
    MOV EAX,EBX                         ; 005e2213
    MOV dword ptr [EBX + 0x858],0x0     ; 005e2215
    ADD ESP,0x18                        ; 005e221f
    POP EDI                             ; 005e2222
    POP ESI                             ; 005e2223
    POP EBX                             ; 005e2224
    RET                                 ; 005e2225
    MOV ECX,dword ptr [EAX]             ; 005e2226
        ;   Label: LAB_005e2226
    MOV dword ptr [EDX],ECX             ; 005e2228
    MOV ECX,dword ptr [EAX + 0x4]       ; 005e222a
    MOV dword ptr [EDX + 0x4],ECX       ; 005e222d
    MOV ECX,dword ptr [EAX + 0x8]       ; 005e2230
    MOV dword ptr [EDX + 0x8],ECX       ; 005e2233
    JMP 0x005e21ff                      ; 005e2236
        ;   XREF to: 005e21ff (UNCONDITIONAL_JUMP)  ; LAB_005e21ff

