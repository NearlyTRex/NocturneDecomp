; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_CShell_process_FUN_004897d0(CParticle *param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c77850
;
; Called Functions:
;   core_particle.cpp_CParticle_process_FUN_004ef120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004897d0
        ;   Label: core_fire.cpp_CShell_process_FUN_004897d0
    SUB ESP,0x10                        ; 004897d1
    MOV EBX,dword ptr [ESP + 0x18]      ; 004897d4
    FLD float ptr [EBX + 0x18]          ; 004897d8
    FLDZ                                ; 004897db
    FCOMPP                              ; 004897dd
    FNSTSW AX                           ; 004897df
    SAHF                                ; 004897e1
    JC 0x004897e9                       ; 004897e2
        ;   XREF to: 004897e9 (CONDITIONAL_JUMP)  ; LAB_004897e9
    ADD ESP,0x10                        ; 004897e4
    POP EBX                             ; 004897e7
    RET                                 ; 004897e8
    PUSH EBX                            ; 004897e9
        ;   Label: LAB_004897e9
    CALL core_particle.cpp_CParticle_process_FUN_004ef120 ; 004897ea
        ;   XREF to: 004ef120 (UNCONDITIONAL_CALL)  ; void core_particle.cpp_CParticle_process_FUN_004ef120(CParticle * this_ptr)
    MOV EAX,[0x005b9354]                ; 004897ef | DAT_005b9354
    ADD ESP,0x4                         ; 004897f4
    MOV EAX,dword ptr [EAX + 0x264]     ; 004897f7 | DAT_01c77850
    MOV dword ptr [ESP + 0xc],EAX       ; 004897fd
    LEA EAX,[EBX + 0x44]                ; 00489801
    FLD float ptr [EAX]                 ; 00489804
    FMUL float ptr [ESP + 0xc]          ; 00489806
    FSTP float ptr [ESP]                ; 0048980a
    FLD float ptr [EAX + 0x4]           ; 0048980d
    FMUL float ptr [ESP + 0xc]          ; 00489810
    FSTP float ptr [ESP + 0x4]          ; 00489814
    FLD float ptr [EAX + 0x8]           ; 00489818
    FMUL float ptr [ESP + 0xc]          ; 0048981b
    LEA EAX,[EBX + 0x38]                ; 0048981f
    FSTP float ptr [ESP + 0x8]          ; 00489822
    FLD float ptr [EAX]                 ; 00489826
    FADD float ptr [ESP]                ; 00489828
    FLD float ptr [EAX + 0x4]           ; 0048982b
    FXCH                                ; 0048982e
    FSTP float ptr [EAX]                ; 00489830
    FADD float ptr [ESP + 0x4]          ; 00489832
    FLD float ptr [EAX + 0x8]           ; 00489836
    FXCH                                ; 00489839
    FSTP float ptr [EAX + 0x4]          ; 0048983b
    FADD float ptr [ESP + 0x8]          ; 0048983e
    FSTP float ptr [EAX + 0x8]          ; 00489842
    ADD ESP,0x10                        ; 00489845
    POP EBX                             ; 00489848
    RET                                 ; 00489849

