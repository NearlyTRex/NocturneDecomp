; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_CRock_process_FUN_00484cc0(CParticle *param_1)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   double DOUBLE_00581134 = 32767.7000000000
;   undefined4 DAT_01bd1d80
;
; Called Functions:
;   core_particle.cpp_CParticle_process_FUN_004ef120
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484cc0
        ;   Label: core_fire.cpp_CRock_process_FUN_00484cc0
    SUB ESP,0x4                         ; 00484cc1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00484cc4
    PUSH EBX                            ; 00484cc8
    CALL core_particle.cpp_CParticle_process_FUN_004ef120 ; 00484cc9
        ;   XREF to: 004ef120 (UNCONDITIONAL_CALL)  ; void core_particle.cpp_CParticle_process_FUN_004ef120(CParticle * this_ptr)
    LEA EAX,[EBX + 0xc]                 ; 00484cce
    FLD float ptr [EAX + 0x4]           ; 00484cd1
    FMUL ST0                            ; 00484cd4
    FLD float ptr [EAX]                 ; 00484cd6
    FMUL ST0                            ; 00484cd8
    FADDP                               ; 00484cda
    FLD float ptr [EAX + 0x8]           ; 00484cdc
    FMUL ST0                            ; 00484cdf
    FADDP                               ; 00484ce1
    FSQRT                               ; 00484ce3
    MOV EAX,[0x01bd1d80]                ; 00484ce5 | DAT_01bd1d80
    MOV EDX,EAX                         ; 00484cea
    SAR EDX,0x1f                        ; 00484cec
    SHL EDX,0x2                         ; 00484cef
    SBB EAX,EDX                         ; 00484cf2
    SAR EAX,0x2                         ; 00484cf4
    FMUL double ptr [0x00581134]        ; 00484cf7 | DOUBLE_00581134
    ADD ESP,0x4                         ; 00484cfd
    CALL crt_math.c_round_FUN_00563a30  ; 00484d00
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP]               ; 00484d05
    MOV EDX,dword ptr [ESP]             ; 00484d08
    IMUL EDX                            ; 00484d0b
    SHRD EAX,EDX,0x10                   ; 00484d0d
    MOV EDX,dword ptr [EBX + 0x38]      ; 00484d11
    ADD EDX,EAX                         ; 00484d14
    MOV EAX,[0x01bd1d80]                ; 00484d16 | DAT_01bd1d80
    MOV dword ptr [EBX + 0x38],EDX      ; 00484d1b
    MOV EDX,EAX                         ; 00484d1e
    SAR EDX,0x1f                        ; 00484d20
    SUB EAX,EDX                         ; 00484d23
    SAR EAX,0x1                         ; 00484d25
    MOV EDX,dword ptr [ESP]             ; 00484d27
    IMUL EDX                            ; 00484d2a
    SHRD EAX,EDX,0x10                   ; 00484d2c
    ADD dword ptr [EBX + 0x3c],EAX      ; 00484d30
    ADD ESP,0x4                         ; 00484d33
    POP EBX                             ; 00484d36
    RET                                 ; 00484d37

