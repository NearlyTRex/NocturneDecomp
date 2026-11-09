; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_0049a010(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005c05a0
;   undefined4 DAT_01c5fad0
;
; Called Functions:
;   core_particle.cpp_FUN_00509f30
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a010
        ;   Label: core_fire.cpp_FUN_0049a010
    PUSH EBP                            ; 0049a011
    MOV EBP,ESP                         ; 0049a012
    SUB ESP,0x4                         ; 0049a014
    AND ESP,0xfffffff8                  ; 0049a017
    MOV EBX,dword ptr [EBP + 0xc]       ; 0049a01a
    PUSH EBX                            ; 0049a01d
    CALL core_particle.cpp_FUN_00509f30 ; 0049a01e
        ;   XREF to: 00509f30 (UNCONDITIONAL_CALL)  ; undefined core_particle.cpp_FUN_00509f30()
    LEA EAX,[EBX + 0xc]                 ; 0049a023
    FLD float ptr [EAX + 0x4]           ; 0049a026
    FMUL ST0                            ; 0049a029
    FLD float ptr [EAX]                 ; 0049a02b
    FMUL ST0                            ; 0049a02d
    FADDP                               ; 0049a02f
    FLD float ptr [EAX + 0x8]           ; 0049a031
    FMUL ST0                            ; 0049a034
    FADDP                               ; 0049a036
    ADD ESP,0x4                         ; 0049a038
    FSQRT                               ; 0049a03b
    MOV EAX,[0x01c5fad0]                ; 0049a03d | DAT_01c5fad0
    MOV EDX,EAX                         ; 0049a042
    SAR EDX,0x1f                        ; 0049a044
    SHL EDX,0x2                         ; 0049a047
    SBB EAX,EDX                         ; 0049a04a
    SAR EAX,0x2                         ; 0049a04c
    FMUL double ptr [0x005c05a0]        ; 0049a04f | DAT_005c05a0
    CALL crt_math.c_round_FUN_005a3120  ; 0049a055
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP]               ; 0049a05a
    MOV EDX,dword ptr [ESP]             ; 0049a05d
    IMUL EDX                            ; 0049a060
    SHRD EAX,EDX,0x10                   ; 0049a062
    MOV EDX,dword ptr [EBX + 0x40]      ; 0049a066
    ADD EDX,EAX                         ; 0049a069
    MOV EAX,[0x01c5fad0]                ; 0049a06b | DAT_01c5fad0
    MOV dword ptr [EBX + 0x40],EDX      ; 0049a070
    MOV EDX,EAX                         ; 0049a073
    SAR EDX,0x1f                        ; 0049a075
    SUB EAX,EDX                         ; 0049a078
    SAR EAX,0x1                         ; 0049a07a
    MOV EDX,dword ptr [ESP]             ; 0049a07c
    IMUL EDX                            ; 0049a07f
    SHRD EAX,EDX,0x10                   ; 0049a081
    ADD dword ptr [EBX + 0x44],EAX      ; 0049a085
    MOV ESP,EBP                         ; 0049a088
    POP EBP                             ; 0049a08a
    POP EBX                             ; 0049a08b
    RET                                 ; 0049a08c

