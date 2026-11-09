; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_0049eb8e(undefined4 param_1,SProjectedVertex *param_2,float *param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005f64e4
;
; Called Functions:
;   engine_special.cpp_FUN_0055d9ec
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0049eb8e
        ;   Label: core_fire.cpp_FUN_0049eb8e
    PUSH EBX                            ; 0049eb90
    SUB ESP,0xc                         ; 0049eb91
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0049eb94
    MOV EBX,ESP                         ; 0049eb98
    FLD float ptr [EAX]                 ; 0049eb9a
    FMUL float ptr [0x005f64e4]         ; 0049eb9c | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049eba2
    FLD float ptr [EAX + 0x4]           ; 0049eba4
    FMUL float ptr [0x005f64e4]         ; 0049eba7 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049ebad
    FLD float ptr [EAX + 0x8]           ; 0049ebb0
    FMUL float ptr [0x005f64e4]         ; 0049ebb3 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049ebb9
    MOV EBX,ESP                         ; 0049ebbc
    PUSH EBX                            ; 0049ebbe
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0049ebbf
    PUSH EDX                            ; 0049ebc3
    CALL engine_special.cpp_FUN_0055d9ec ; 0049ebc4
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049ebc9
    ADD ESP,0xc                         ; 0049ebcc
    POP EBX                             ; 0049ebcf
    RET                                 ; 0049ebd0

