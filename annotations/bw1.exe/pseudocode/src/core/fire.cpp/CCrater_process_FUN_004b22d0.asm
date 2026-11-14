; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CCrater_process_FUN_004b22d0(CCrater *this_ptr)
;
; Parameters:
; CCrater *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_004b4dd0 at 004b5005
;
; Referenced Globals:
;   undefined4 DAT_005df3f4
;   undefined4 DAT_005df3fc
;   undefined4 DAT_0061c010
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 g_CGameInstance.delta_time_float
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b22d0
        ;   Label: core_fire.cpp_CCrater_process_FUN_004b22d0
    PUSH ESI                            ; 004b22d1
    PUSH EBP                            ; 004b22d2
    SUB ESP,0xc                         ; 004b22d3
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004b22d6
    CMP dword ptr [EBX],0x0             ; 004b22da
    JZ 0x004b2360                       ; 004b22dd
        ;   XREF to: 004b2360 (CONDITIONAL_JUMP)  ; LAB_004b2360
    FLD float ptr [EBX + 0x8]           ; 004b22e3
    FLDZ                                ; 004b22e6
    FCOMPP                              ; 004b22e8
    FNSTSW AX                           ; 004b22ea
    SAHF                                ; 004b22ec
    JC 0x004b2367                       ; 004b22ed
        ;   XREF to: 004b2367 (CONDITIONAL_JUMP)  ; LAB_004b2367
    MOV ESI,dword ptr [0x0061d95c]      ; 004b22f3 | g_CGamePtr
        ;   Label: LAB_004b22f3
    LEA EAX,[EBX + 0x18]                ; 004b22f9
    FLD float ptr [ESI + 0x294]         ; 004b22fc | g_CGameInstance.delta_time_float
    FADD float ptr [EAX]                ; 004b2302
    FSTP float ptr [EAX]                ; 004b2304
    FLD float ptr [EBX + 0x18]          ; 004b2306
    FCOMP double ptr [0x005df3f4]       ; 004b2309 | DAT_005df3f4
    FNSTSW AX                           ; 004b230f
    SAHF                                ; 004b2311
    JBE 0x004b2360                      ; 004b2312
        ;   XREF to: 004b2360 (CONDITIONAL_JUMP)  ; LAB_004b2360
    FLD float ptr [EBX + 0x18]          ; 004b2314
    MOV ESI,0x3f800000                  ; 004b2317
    FADD float ptr [0x005df3fc]         ; 004b231c | DAT_005df3fc
    XOR ECX,ECX                         ; 004b2322
    FSTP float ptr [EBX + 0x18]         ; 004b2324
    MOV dword ptr [ESP],ECX             ; 004b2327
    MOV dword ptr [ESP + 0x4],ESI       ; 004b232a
    LEA ESI,[EBX + 0x1c]                ; 004b232e
    MOV dword ptr [ESP + 0x8],ECX       ; 004b2331
    MOV EBX,ESI                         ; 004b2335
    ADD ESI,0x24                        ; 004b2337
    PUSH 0xffff                         ; 004b233a
        ;   Label: LAB_004b233a
    LEA EAX,[ESP + 0x4]                 ; 004b233f
    PUSH EAX                            ; 004b2343
    PUSH 0x3f800000                     ; 004b2344
    PUSH EBX                            ; 004b2349
    MOV EBP,dword ptr [0x0061c010]      ; 004b234a | DAT_0061c010
    PUSH EBP                            ; 004b2350
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30 ; 004b2351
        ;   XREF to: 004b5b30 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD EBX,0xc                         ; 004b2356
    ADD ESP,0x14                        ; 004b2359
    CMP EBX,ESI                         ; 004b235c
    JNZ 0x004b233a                      ; 004b235e
        ;   XREF to: 004b233a (CONDITIONAL_JUMP)  ; LAB_004b233a
    ADD ESP,0xc                         ; 004b2360
        ;   Label: LAB_004b2360
    POP EBP                             ; 004b2363
    POP ESI                             ; 004b2364
    POP EBX                             ; 004b2365
    RET                                 ; 004b2366
    MOV ESI,dword ptr [0x0061d95c]      ; 004b2367 | g_CGamePtr
        ;   Label: LAB_004b2367
    LEA EAX,[EBX + 0x8]                 ; 004b236d
    FLD float ptr [ESI + 0x294]         ; 004b2370 | g_CGameInstance.delta_time_float
    FSUBR float ptr [EAX]               ; 004b2376
    FSTP float ptr [EAX]                ; 004b2378
    FLD float ptr [EBX + 0x8]           ; 004b237a
    FLDZ                                ; 004b237d
    FCOMPP                              ; 004b237f
    FNSTSW AX                           ; 004b2381
    SAHF                                ; 004b2383
    JBE 0x004b22f3                      ; 004b2384
        ;   XREF to: 004b22f3 (CONDITIONAL_JUMP)  ; LAB_004b22f3
    MOV dword ptr [EBX + 0x4],0x1       ; 004b238a
    MOV dword ptr [EBX + 0x8],0x0       ; 004b2391
    JMP 0x004b22f3                      ; 004b2398
        ;   XREF to: 004b22f3 (UNCONDITIONAL_JUMP)  ; LAB_004b22f3

