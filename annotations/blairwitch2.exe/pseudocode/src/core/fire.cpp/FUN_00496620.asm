; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_00496620(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d5422
;   undefined4 DAT_01c2a370
;
; Called Functions:
;   core_particle.cpp_FUN_00510ef0
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00496620
        ;   Label: core_fire.cpp_FUN_00496620
    PUSH EBP                            ; 00496621
    MOV EBP,ESP                         ; 00496622
    SUB ESP,0x4                         ; 00496624
    AND ESP,0xfffffff8                  ; 00496627
    MOV EBX,dword ptr [EBP + 0xc]       ; 0049662a
    PUSH EBX                            ; 0049662d
    CALL core_particle.cpp_FUN_00510ef0 ; 0049662e
        ;   XREF to: 00510ef0 (UNCONDITIONAL_CALL)  ; undefined core_particle.cpp_FUN_00510ef0()
    LEA EAX,[EBX + 0xc]                 ; 00496633
    FLD float ptr [EAX + 0x4]           ; 00496636
    FMUL ST0                            ; 00496639
    FLD float ptr [EAX]                 ; 0049663b
    FMUL ST0                            ; 0049663d
    FADDP                               ; 0049663f
    FLD float ptr [EAX + 0x8]           ; 00496641
    FMUL ST0                            ; 00496644
    FADDP                               ; 00496646
    ADD ESP,0x4                         ; 00496648
    FSQRT                               ; 0049664b
    MOV EAX,[0x01c2a370]                ; 0049664d | DAT_01c2a370
    MOV EDX,EAX                         ; 00496652
    SAR EDX,0x1f                        ; 00496654
    SHL EDX,0x2                         ; 00496657
    SBB EAX,EDX                         ; 0049665a
    SAR EAX,0x2                         ; 0049665c
    FMUL double ptr [0x005d5422]        ; 0049665f | DAT_005d5422
    CALL crt_math.c_round_FUN_005b7ff0  ; 00496665
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP]               ; 0049666a
    MOV EDX,dword ptr [ESP]             ; 0049666d
    IMUL EDX                            ; 00496670
    SHRD EAX,EDX,0x10                   ; 00496672
    MOV EDX,dword ptr [EBX + 0x40]      ; 00496676
    ADD EDX,EAX                         ; 00496679
    MOV EAX,[0x01c2a370]                ; 0049667b | DAT_01c2a370
    MOV dword ptr [EBX + 0x40],EDX      ; 00496680
    MOV EDX,EAX                         ; 00496683
    SAR EDX,0x1f                        ; 00496685
    SUB EAX,EDX                         ; 00496688
    SAR EAX,0x1                         ; 0049668a
    MOV EDX,dword ptr [ESP]             ; 0049668c
    IMUL EDX                            ; 0049668f
    SHRD EAX,EDX,0x10                   ; 00496691
    ADD dword ptr [EBX + 0x44],EAX      ; 00496695
    MOV ESP,EBP                         ; 00496698
    POP EBP                             ; 0049669a
    POP EBX                             ; 0049669b
    RET                                 ; 0049669c

