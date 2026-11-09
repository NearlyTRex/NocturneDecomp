; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_004aefc0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005df264
;   undefined4 DAT_01c43530
;
; Called Functions:
;   core_particle.cpp_FUN_00532250
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aefc0
        ;   Label: core_fire.cpp_FUN_004aefc0
    PUSH EBP                            ; 004aefc1
    MOV EBP,ESP                         ; 004aefc2
    SUB ESP,0x4                         ; 004aefc4
    AND ESP,0xfffffff8                  ; 004aefc7
    MOV EBX,dword ptr [EBP + 0xc]       ; 004aefca
    PUSH EBX                            ; 004aefcd
    CALL core_particle.cpp_FUN_00532250 ; 004aefce
        ;   XREF to: 00532250 (UNCONDITIONAL_CALL)  ; undefined core_particle.cpp_FUN_00532250()
    LEA EAX,[EBX + 0xc]                 ; 004aefd3
    FLD float ptr [EAX + 0x4]           ; 004aefd6
    FMUL ST0                            ; 004aefd9
    FLD float ptr [EAX]                 ; 004aefdb
    FMUL ST0                            ; 004aefdd
    FADDP                               ; 004aefdf
    FLD float ptr [EAX + 0x8]           ; 004aefe1
    FMUL ST0                            ; 004aefe4
    FADDP                               ; 004aefe6
    ADD ESP,0x4                         ; 004aefe8
    FSQRT                               ; 004aefeb
    MOV EAX,[0x01c43530]                ; 004aefed | DAT_01c43530
    MOV EDX,EAX                         ; 004aeff2
    SAR EDX,0x1f                        ; 004aeff4
    SHL EDX,0x2                         ; 004aeff7
    SBB EAX,EDX                         ; 004aeffa
    SAR EAX,0x2                         ; 004aeffc
    FMUL double ptr [0x005df264]        ; 004aefff | DAT_005df264
    CALL crt_math.c_round_FUN_005c03a0  ; 004af005
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP]               ; 004af00a
    MOV EDX,dword ptr [ESP]             ; 004af00d
    IMUL EDX                            ; 004af010
    SHRD EAX,EDX,0x10                   ; 004af012
    MOV EDX,dword ptr [EBX + 0x40]      ; 004af016
    ADD EDX,EAX                         ; 004af019
    MOV EAX,[0x01c43530]                ; 004af01b | DAT_01c43530
    MOV dword ptr [EBX + 0x40],EDX      ; 004af020
    MOV EDX,EAX                         ; 004af023
    SAR EDX,0x1f                        ; 004af025
    SUB EAX,EDX                         ; 004af028
    SAR EAX,0x1                         ; 004af02a
    MOV EDX,dword ptr [ESP]             ; 004af02c
    IMUL EDX                            ; 004af02f
    SHRD EAX,EDX,0x10                   ; 004af031
    ADD dword ptr [EBX + 0x44],EAX      ; 004af035
    MOV ESP,EBP                         ; 004af038
    POP EBP                             ; 004af03a
    POP EBX                             ; 004af03b
    RET                                 ; 004af03c

