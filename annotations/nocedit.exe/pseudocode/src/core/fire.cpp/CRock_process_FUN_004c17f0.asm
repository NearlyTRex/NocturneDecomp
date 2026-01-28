; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_fire_cpp_CRock_process_FUN_004c17f0(CRock *this_ptr)
;
; Parameters:
; CRock *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   double DOUBLE_00629ccb = 32767.7000000000
;   int g_GlobalDeltaTimeInt
;
; Called Functions:
;   core_particle.cpp_CParticle_process_FUN_00545760
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c17f0
        ;   Label: core_fire.cpp_CRock_process_FUN_004c17f0
    SUB ESP,0x4                         ; 004c17f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004c17f4
    PUSH EBX                            ; 004c17f8
    CALL core_particle.cpp_CParticle_process_FUN_00545760 ; 004c17f9
        ;   XREF to: 00545760 (UNCONDITIONAL_CALL)  ; void core_particle.cpp_CParticle_process_FUN_00545760(CParticle * this_ptr)
    LEA EAX,[EBX + 0xc]                 ; 004c17fe
    FLD float ptr [EAX + 0x4]           ; 004c1801
    FMUL ST0                            ; 004c1804
    FLD float ptr [EAX]                 ; 004c1806
    FMUL ST0                            ; 004c1808
    FADDP                               ; 004c180a
    FLD float ptr [EAX + 0x8]           ; 004c180c
    FMUL ST0                            ; 004c180f
    FADDP                               ; 004c1811
    FSQRT                               ; 004c1813
    MOV EAX,[0x02cf6a80]                ; 004c1815 | g_GlobalDeltaTimeInt
    MOV EDX,EAX                         ; 004c181a
    SAR EDX,0x1f                        ; 004c181c
    SHL EDX,0x2                         ; 004c181f
    SBB EAX,EDX                         ; 004c1822
    SAR EAX,0x2                         ; 004c1824
    FMUL double ptr [0x00629ccb]        ; 004c1827 | DOUBLE_00629ccb
    ADD ESP,0x4                         ; 004c182d
    CALL crt_math.c_round_FUN_005fe6b0  ; 004c1830
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP]               ; 004c1835
    MOV EDX,dword ptr [ESP]             ; 004c1838
    IMUL EDX                            ; 004c183b
    SHRD EAX,EDX,0x10                   ; 004c183d
    MOV EDX,dword ptr [EBX + 0x38]      ; 004c1841
    ADD EDX,EAX                         ; 004c1844
    MOV EAX,[0x02cf6a80]                ; 004c1846 | g_GlobalDeltaTimeInt
    MOV dword ptr [EBX + 0x38],EDX      ; 004c184b
    MOV EDX,EAX                         ; 004c184e
    SAR EDX,0x1f                        ; 004c1850
    SUB EAX,EDX                         ; 004c1853
    SAR EAX,0x1                         ; 004c1855
    MOV EDX,dword ptr [ESP]             ; 004c1857
    IMUL EDX                            ; 004c185a
    SHRD EAX,EDX,0x10                   ; 004c185c
    ADD dword ptr [EBX + 0x3c],EAX      ; 004c1860
    ADD ESP,0x4                         ; 004c1863
    POP EBX                             ; 004c1866
    RET                                 ; 004c1867

