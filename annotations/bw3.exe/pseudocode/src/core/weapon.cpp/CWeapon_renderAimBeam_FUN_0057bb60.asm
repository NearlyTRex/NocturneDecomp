; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_CWeapon_renderAimBeam_FUN_0057bb60(CWeapon *this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_rifle.cpp_CRifle_renderAimBeam_FUN_00528650 at 00528655
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fc5a0
;   CGame* g_CGamePtr = 01d2130c
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01bdd7e4
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.show_crosshair
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b80
;   core_fire.cpp_FUN_004a2e20
;   core_fire.cpp_SLaserInfo_ctor_FUN_004a2de0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10
;   core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0
;   core_setcolid.cpp_CDemonSet_skipExactCollisions_FUN_0053ebd0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057bb60
        ;   Label: core_weapon.cpp_CWeapon_renderAimBeam_FUN_0057bb60
    PUSH ESI                            ; 0057bb61
    PUSH EBP                            ; 0057bb62
    SUB ESP,0xa8                        ; 0057bb63
    MOV EBX,dword ptr [ESP + 0xb8]      ; 0057bb69
    MOV EAX,ESP                         ; 0057bb70
    PUSH EAX                            ; 0057bb72
    CALL core_fire.cpp_SLaserInfo_ctor_FUN_004a2de0 ; 0057bb73
        ;   XREF to: 004a2de0 (UNCONDITIONAL_CALL)  ; SLaserInfo * core_fire.cpp_SLaserInfo_ctor_FUN_004a2de0(SLaserInfo * this_ptr)
    MOV EDX,dword ptr [EBX + 0x57c]     ; 0057bb78
    ADD ESP,0x4                         ; 0057bb7e
    TEST EDX,EDX                        ; 0057bb81
    JZ 0x0057bb93                       ; 0057bb83
        ;   XREF to: 0057bb93 (CONDITIONAL_JUMP)  ; LAB_0057bb93
    MOV EAX,[0x005fe9dc]                ; 0057bb85 | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0xe4],0x0      ; 0057bb8a | g_CGameInstance.show_crosshair
    JNZ 0x0057bba1                      ; 0057bb91
        ;   XREF to: 0057bba1 (CONDITIONAL_JUMP)  ; LAB_0057bba1
    ADD ESP,0xa8                        ; 0057bb93
        ;   Label: LAB_0057bb93
    POP EBP                             ; 0057bb99
    POP ESI                             ; 0057bb9a
    POP EBX                             ; 0057bb9b
    LEA EAX,[EAX]                       ; 0057bb9c
    MOV ESI,dword ptr [0x005f2afc]      ; 0057bba1 | DAT_005f2afc
        ;   Label: LAB_0057bba1
    PUSH ESI                            ; 0057bba7 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 0057bba8
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0057bbad
    TEST EAX,EAX                        ; 0057bbb0
    JNZ 0x0057bb93                      ; 0057bbb2
        ;   XREF to: 0057bb93 (CONDITIONAL_JUMP)  ; LAB_0057bb93
    PUSH EDI                            ; 0057bbb4
    PUSH EBX                            ; 0057bbb5
    MOV EAX,dword ptr [EBX + 0x154]     ; 0057bbb6
    LEA ESI,[ESP + 0x5c]                ; 0057bbbc
    LEA EDI,[ESP + 0xa4]                ; 0057bbc0
    CALL dword ptr [EAX + 0xe0]         ; 0057bbc7
    ADD ESP,0x4                         ; 0057bbcd
    LEA EAX,[ESP + 0xa0]                ; 0057bbd0
    LEA ESI,[ESP + 0x58]                ; 0057bbd7
    PUSH EAX                            ; 0057bbdb
    MOVSD ES:EDI,ESI                    ; 0057bbdc
    MOVSD ES:EDI,ESI                    ; 0057bbdd
    MOVSD ES:EDI,ESI                    ; 0057bbde
    PUSH EBX                            ; 0057bbdf
    LEA ESI,[ESP + 0x6c]                ; 0057bbe0
    LEA EDI,[ESP + 0x84]                ; 0057bbe4
    CALL core_actor.cpp_FUN_00408b80    ; 0057bbeb
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x6c]                ; 0057bbf0
    ADD ESP,0x8                         ; 0057bbf4
    MOVSD ES:EDI,ESI                    ; 0057bbf7
    MOVSD ES:EDI,ESI                    ; 0057bbf8
    MOVSD ES:EDI,ESI                    ; 0057bbf9
    MOV EAX,dword ptr [EBX + 0x2e8]     ; 0057bbfa
    MOV dword ptr [ESP + 0x90],EAX      ; 0057bc00
    LEA EAX,[ESP + 0x88]                ; 0057bc07
    XOR EDI,EDI                         ; 0057bc0e
    PUSH EAX                            ; 0057bc10
    LEA ESI,[ESP + 0x74]                ; 0057bc11
    MOV dword ptr [ESP + 0x8c],EDI      ; 0057bc15
    PUSH EBX                            ; 0057bc1c
    MOV dword ptr [ESP + 0x94],EDI      ; 0057bc1d
    LEA EDI,[ESP + 0x9c]                ; 0057bc24
    CALL core_actor.cpp_FUN_00408b00    ; 0057bc2b
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    ADD ESP,0x8                         ; 0057bc30
    MOV EAX,[0x00603b28]                ; 0057bc33 | g_CDemonSetPtr
    LEA ESI,[ESP + 0x70]                ; 0057bc38
    PUSH EAX                            ; 0057bc3c | g_CDemonSetInstance
    MOVSD ES:EDI,ESI                    ; 0057bc3d
    MOVSD ES:EDI,ESI                    ; 0057bc3e
    MOVSD ES:EDI,ESI                    ; 0057bc3f
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 0057bc40
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0057bc45
    PUSH EBX                            ; 0057bc48
    MOV EDX,dword ptr [0x00603b28]      ; 0057bc49 | g_CDemonSetPtr
    PUSH EDX                            ; 0057bc4f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 0057bc50
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    MOV ECX,dword ptr [EBX + 0x304]     ; 0057bc55
    ADD ESP,0x8                         ; 0057bc5b
    TEST ECX,ECX                        ; 0057bc5e
    JZ 0x0057bc72                       ; 0057bc60
        ;   XREF to: 0057bc72 (CONDITIONAL_JUMP)  ; LAB_0057bc72
    PUSH ECX                            ; 0057bc62
    MOV EDI,dword ptr [0x00603b28]      ; 0057bc63 | g_CDemonSetPtr
    PUSH EDI                            ; 0057bc69 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 0057bc6a
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0057bc6f
    MOV dword ptr [ESP + 0xc],0x1       ; 0057bc72
        ;   Label: LAB_0057bc72
    MOV EAX,dword ptr [EBX + 0x2f4]     ; 0057bc7a
    MOV dword ptr [ESP + 0x10],EAX      ; 0057bc80
    MOV EAX,dword ptr [EBX + 0x2f8]     ; 0057bc84
    MOV dword ptr [ESP + 0x14],EAX      ; 0057bc8a
    MOV EAX,dword ptr [EBX + 0x2fc]     ; 0057bc8e
    MOV dword ptr [ESP + 0x18],EAX      ; 0057bc94
    XOR EAX,EAX                         ; 0057bc98
    MOV dword ptr [ESP + 0x8],EAX       ; 0057bc9a
    FLDZ                                ; 0057bc9e
    FCOMP float ptr [EBX + 0x300]       ; 0057bca0
    FNSTSW AX                           ; 0057bca6
    SAHF                                ; 0057bca8
    JNC 0x0057bd16                      ; 0057bca9
        ;   XREF to: 0057bd16 (CONDITIONAL_JUMP)  ; LAB_0057bd16
    MOV dword ptr [ESP + 0x4],0x3f000000 ; 0057bcab
    MOV ESI,dword ptr [0x00603b28]      ; 0057bcb3 | g_CDemonSetPtr
        ;   Label: LAB_0057bcb3
    MOV EBX,0x1                         ; 0057bcb9
    PUSH ESI                            ; 0057bcbe | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x24],EBX      ; 0057bcbf
    CALL core_setcolid.cpp_CDemonSet_skipExactCollisions_FUN_0053ebd0 ; 0057bcc3
        ;   XREF to: 0053ebd0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_skipExactCollisions_FUN_0053ebd0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0057bcc8
    PUSH 0x0                            ; 0057bccb
    SUB ESP,0x54                        ; 0057bccd
    MOV ECX,0x15                        ; 0057bcd0
    MOV EDI,ESP                         ; 0057bcd5
    LEA EAX,[ESP + 0xec]                ; 0057bcd7
    LEA ESI,[ESP + 0x5c]                ; 0057bcde
    PUSH EAX                            ; 0057bce2
    LEA EAX,[ESP + 0xd8]                ; 0057bce3
    MOVSD.REP ES:EDI,ESI                ; 0057bcea
    PUSH EAX                            ; 0057bcec
    MOV EDI,dword ptr [0x005fc5a0]      ; 0057bced | DAT_005fc5a0
    PUSH EDI                            ; 0057bcf3
    CALL core_fire.cpp_FUN_004a2e20     ; 0057bcf4
        ;   XREF to: 004a2e20 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a2e20()
    ADD ESP,0x64                        ; 0057bcf9
    MOV EBP,dword ptr [0x00603b28]      ; 0057bcfc | g_CDemonSetPtr
    PUSH EBP                            ; 0057bd02 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 0057bd03
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0057bd08
    POP EDI                             ; 0057bd0b
    ADD ESP,0xa8                        ; 0057bd0c
    POP EBP                             ; 0057bd12
    POP ESI                             ; 0057bd13
    POP EBX                             ; 0057bd14
    RET                                 ; 0057bd15
    MOV dword ptr [ESP + 0x4],0x3f800000 ; 0057bd16
        ;   Label: LAB_0057bd16
    JMP 0x0057bcb3                      ; 0057bd1e
        ;   XREF to: 0057bcb3 (UNCONDITIONAL_JUMP)  ; LAB_0057bcb3

