; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CShell_process_FUN_004c6300(CShell *this_ptr)
;
; Parameters:
; CShell *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   CGame* g_CGamePtr = 02d81a9c
;   undefined4 g_CGameInstance.delta_time_float
;
; Called Functions:
;   core_particle.cpp_CParticle_process_FUN_00545760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6300
        ;   Label: core_fire.cpp_CShell_process_FUN_004c6300
    SUB ESP,0x10                        ; 004c6301
    MOV EBX,dword ptr [ESP + 0x18]      ; 004c6304
    FLD float ptr [EBX + 0x18]          ; 004c6308
    FLDZ                                ; 004c630b
    FCOMPP                              ; 004c630d
    FNSTSW AX                           ; 004c630f
    SAHF                                ; 004c6311
    JC 0x004c6319                       ; 004c6312
        ;   XREF to: 004c6319 (CONDITIONAL_JUMP)  ; LAB_004c6319
    ADD ESP,0x10                        ; 004c6314
    POP EBX                             ; 004c6317
    RET                                 ; 004c6318
    PUSH EBX                            ; 004c6319
        ;   Label: LAB_004c6319
    CALL core_particle.cpp_CParticle_process_FUN_00545760 ; 004c631a
        ;   XREF to: 00545760 (UNCONDITIONAL_CALL)  ; void core_particle.cpp_CParticle_process_FUN_00545760(CParticle * this_ptr)
    MOV EAX,[0x0067b654]                ; 004c631f | g_CGamePtr
    ADD ESP,0x4                         ; 004c6324
    MOV EAX,dword ptr [EAX + 0x264]     ; 004c6327 | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP + 0xc],EAX       ; 004c632d
    LEA EAX,[EBX + 0x44]                ; 004c6331
    FLD float ptr [EAX]                 ; 004c6334
    FMUL float ptr [ESP + 0xc]          ; 004c6336
    FSTP float ptr [ESP]                ; 004c633a
    FLD float ptr [EAX + 0x4]           ; 004c633d
    FMUL float ptr [ESP + 0xc]          ; 004c6340
    FSTP float ptr [ESP + 0x4]          ; 004c6344
    FLD float ptr [EAX + 0x8]           ; 004c6348
    FMUL float ptr [ESP + 0xc]          ; 004c634b
    LEA EAX,[EBX + 0x38]                ; 004c634f
    FSTP float ptr [ESP + 0x8]          ; 004c6352
    FLD float ptr [EAX]                 ; 004c6356
    FADD float ptr [ESP]                ; 004c6358
    FLD float ptr [EAX + 0x4]           ; 004c635b
    FXCH                                ; 004c635e
    FSTP float ptr [EAX]                ; 004c6360
    FADD float ptr [ESP + 0x4]          ; 004c6362
    FLD float ptr [EAX + 0x8]           ; 004c6366
    FXCH                                ; 004c6369
    FSTP float ptr [EAX + 0x4]          ; 004c636b
    FADD float ptr [ESP + 0x8]          ; 004c636e
    FSTP float ptr [EAX + 0x8]          ; 004c6372
    ADD ESP,0x10                        ; 004c6375
    POP EBX                             ; 004c6378
    RET                                 ; 004c6379

