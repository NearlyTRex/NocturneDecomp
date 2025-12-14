; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_CCrater_process_FUN_004c4550(CCrater * this_ptr)
;
; Parameters:
; CCrater *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_004c6ec0 at 004c7085
;
; Referenced Globals:
;   double DOUBLE_00629e43 = 0.200000000000000
;   float FLOAT_00629e4b = -0.2000000
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CGame* g_CGamePtr = 02d81a9c
;   CFireEffect g_CFireEffectInstance
;   undefined4 g_CGameInstance.delta_time_float
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c4550
        ;   Label: core_fire.cpp_CCrater_process_FUN_004c4550
    PUSH ESI                            ; 004c4551
    PUSH EBP                            ; 004c4552
    SUB ESP,0xc                         ; 004c4553
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004c4556
    CMP dword ptr [EBX],0x0             ; 004c455a
    JZ 0x004c45e0                       ; 004c455d
        ;   XREF to: 004c45e0 (CONDITIONAL_JUMP)  ; LAB_004c45e0
    FLD float ptr [EBX + 0x8]           ; 004c4563
    FLDZ                                ; 004c4566
    FCOMPP                              ; 004c4568
    FNSTSW AX                           ; 004c456a
    SAHF                                ; 004c456c
    JC 0x004c45e7                       ; 004c456d
        ;   XREF to: 004c45e7 (CONDITIONAL_JUMP)  ; LAB_004c45e7
    MOV ESI,dword ptr [0x0067b654]      ; 004c4573 | g_CGamePtr
        ;   Label: LAB_004c4573
    LEA EAX,[EBX + 0x18]                ; 004c4579
    FLD float ptr [ESI + 0x264]         ; 004c457c | g_CGameInstance.delta_time_float
    FADD float ptr [EAX]                ; 004c4582
    FSTP float ptr [EAX]                ; 004c4584
    FLD float ptr [EBX + 0x18]          ; 004c4586
    FCOMP double ptr [0x00629e43]       ; 004c4589 | DOUBLE_00629e43
    FNSTSW AX                           ; 004c458f
    SAHF                                ; 004c4591
    JBE 0x004c45e0                      ; 004c4592
        ;   XREF to: 004c45e0 (CONDITIONAL_JUMP)  ; LAB_004c45e0
    FLD float ptr [EBX + 0x18]          ; 004c4594
    MOV ESI,0x3f800000                  ; 004c4597
    FADD float ptr [0x00629e4b]         ; 004c459c | FLOAT_00629e4b
    XOR ECX,ECX                         ; 004c45a2
    FSTP float ptr [EBX + 0x18]         ; 004c45a4
    MOV dword ptr [ESP],ECX             ; 004c45a7
    MOV dword ptr [ESP + 0x4],ESI       ; 004c45aa
    LEA ESI,[EBX + 0x1c]                ; 004c45ae
    MOV dword ptr [ESP + 0x8],ECX       ; 004c45b1
    MOV EBX,ESI                         ; 004c45b5
    ADD ESI,0x24                        ; 004c45b7
    PUSH 0xffff                         ; 004c45ba
        ;   Label: LAB_004c45ba
    LEA EAX,[ESP + 0x4]                 ; 004c45bf
    PUSH EAX                            ; 004c45c3
    PUSH 0x3f800000                     ; 004c45c4
    PUSH EBX                            ; 004c45c9
    MOV EBP,dword ptr [0x0067a3d0]      ; 004c45ca | g_CFireEffectPtr
    PUSH EBP                            ; 004c45d0 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20 ; 004c45d1
        ;   XREF to: 004c7b20 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD EBX,0xc                         ; 004c45d6
    ADD ESP,0x14                        ; 004c45d9
    CMP EBX,ESI                         ; 004c45dc
    JNZ 0x004c45ba                      ; 004c45de
        ;   XREF to: 004c45ba (CONDITIONAL_JUMP)  ; LAB_004c45ba
    ADD ESP,0xc                         ; 004c45e0
        ;   Label: LAB_004c45e0
    POP EBP                             ; 004c45e3
    POP ESI                             ; 004c45e4
    POP EBX                             ; 004c45e5
    RET                                 ; 004c45e6
    MOV ESI,dword ptr [0x0067b654]      ; 004c45e7 | g_CGamePtr
        ;   Label: LAB_004c45e7
    LEA EAX,[EBX + 0x8]                 ; 004c45ed
    FLD float ptr [ESI + 0x264]         ; 004c45f0 | g_CGameInstance.delta_time_float
    FSUBR float ptr [EAX]               ; 004c45f6
    FSTP float ptr [EAX]                ; 004c45f8
    FLD float ptr [EBX + 0x8]           ; 004c45fa
    FLDZ                                ; 004c45fd
    FCOMPP                              ; 004c45ff
    FNSTSW AX                           ; 004c4601
    SAHF                                ; 004c4603
    JBE 0x004c4573                      ; 004c4604
        ;   XREF to: 004c4573 (CONDITIONAL_JUMP)  ; LAB_004c4573
    MOV dword ptr [EBX + 0x4],0x1       ; 004c460a
    MOV dword ptr [EBX + 0x8],0x0       ; 004c4611
    JMP 0x004c4573                      ; 004c4618
        ;   XREF to: 004c4573 (UNCONDITIONAL_JUMP)  ; LAB_004c4573

