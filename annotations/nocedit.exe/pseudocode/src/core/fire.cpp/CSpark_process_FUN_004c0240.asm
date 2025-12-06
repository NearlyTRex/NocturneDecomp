; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_CSpark_process_FUN_004c0240(CSpark * this_ptr)
;
; Parameters:
; CSpark *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   double DOUBLE_00629c63 = 0.0000152587890625
;   CGame* g_CGamePtr = 02d81a9c
;   int g_GlobalDeltaTimeInt
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.delta_time_float
;
; Called Functions:
;   core_game.cpp_CGame_slamDT_FUN_004e3080
;   core_particle.cpp_CParticle_process_FUN_00545760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c0240
        ;   Label: core_fire.cpp_CSpark_process_FUN_004c0240
    PUSH EDI                            ; 004c0241
    PUSH EBP                            ; 004c0242
    SUB ESP,0x8                         ; 004c0243
    MOV EBX,dword ptr [ESP + 0x18]      ; 004c0246
    CMP dword ptr [EBX + 0x40],0x0      ; 004c024a
    JNZ 0x004c02b9                      ; 004c024e | LAB_004c02b9
        ;   XREF to: 004c02b9 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x40],0x1      ; 004c0250
    MOV EAX,[0x0067b654]                ; 004c0257 | CGame * g_CGamePtr
        ;   Label: LAB_004c0257
    MOV EAX,dword ptr [EAX + 0x264]     ; 004c025c | g_CGameInstance.delta_time_float
    MOV EDX,dword ptr [0x02cf6a80]      ; 004c0262 | int g_GlobalDeltaTimeInt
    MOV dword ptr [ESP],EAX             ; 004c0268
    MOV EAX,dword ptr [EBX + 0x48]      ; 004c026b
    IMUL EDX                            ; 004c026e
    SHRD EAX,EDX,0x10                   ; 004c0270
    MOV dword ptr [ESP + 0x4],EAX       ; 004c0274
    FILD dword ptr [ESP + 0x4]          ; 004c0278
    FMUL double ptr [0x00629c63]        ; 004c027c | double DOUBLE_00629c63
    SUB ESP,0x4                         ; 004c0282
    MOV EDI,dword ptr [0x0067b654]      ; 004c0285 | CGame * g_CGamePtr
    FSTP float ptr [ESP]                ; 004c028b
    PUSH EDI                            ; 004c028e | CGame g_CGameInstance
    CALL core_game.cpp_CGame_slamDT_FUN_004e3080 ; 004c028f | void core_game.cpp_CGame_slamDT_FUN_004e3080(CGame * this_ptr, float delta_time)
        ;   XREF to: 004e3080 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004c0294
    PUSH EBX                            ; 004c0297
    CALL core_particle.cpp_CParticle_process_FUN_00545760 ; 004c0298 | void core_particle.cpp_CParticle_process_FUN_00545760(CParticle * this_ptr)
        ;   XREF to: 00545760 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004c029d
    MOV EBP,dword ptr [0x0067b654]      ; 004c02a0 | CGame * g_CGamePtr
    PUSH dword ptr [ESP]                ; 004c02a6
    PUSH EBP                            ; 004c02a9 | CGame g_CGameInstance
    CALL core_game.cpp_CGame_slamDT_FUN_004e3080 ; 004c02aa | void core_game.cpp_CGame_slamDT_FUN_004e3080(CGame * this_ptr, float delta_time)
        ;   XREF to: 004e3080 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004c02af
    ADD ESP,0x8                         ; 004c02b2
    POP EBP                             ; 004c02b5
    POP EDI                             ; 004c02b6
    POP EBX                             ; 004c02b7
    RET                                 ; 004c02b8
    MOV EAX,[0x02cf6a80]                ; 004c02b9 | int g_GlobalDeltaTimeInt
        ;   Label: LAB_004c02b9
    MOV EDX,dword ptr [EBX + 0x48]      ; 004c02be
    MOV ECX,dword ptr [EBX + 0x3c]      ; 004c02c1
    IMUL EDX                            ; 004c02c4
    SHRD EAX,EDX,0x10                   ; 004c02c6
    MOV EDX,EAX                         ; 004c02ca
    MOV EAX,ECX                         ; 004c02cc
    IMUL EDX                            ; 004c02ce
    SHRD EAX,EDX,0x10                   ; 004c02d0
    MOV ECX,dword ptr [EBX + 0x38]      ; 004c02d4
    SUB ECX,EAX                         ; 004c02d7
    MOV dword ptr [EBX + 0x38],ECX      ; 004c02d9
    TEST ECX,ECX                        ; 004c02dc
    JGE 0x004c0257                      ; 004c02de | LAB_004c0257
        ;   XREF to: 004c0257 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x18],0x0      ; 004c02e4
    MOV dword ptr [EBX + 0x38],0x0      ; 004c02eb
    JMP 0x004c0257                      ; 004c02f2 | LAB_004c0257
        ;   XREF to: 004c0257 (UNCONDITIONAL_JUMP)

