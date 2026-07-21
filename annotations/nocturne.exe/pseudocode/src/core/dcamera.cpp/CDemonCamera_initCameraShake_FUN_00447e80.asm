; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00447e80(undefined4 param_1,undefined4 param_2,float param_3,float param_4,float param_5)
;
;
; XREF[1]:
;   FUN_0050e660 at 0050e675
;
; Referenced Globals:
;   undefined4 DAT_0057bb6b
;   undefined4 DAT_005ad444
;   undefined4 DAT_005ad448
;   undefined4 DAT_005ad44c
;   undefined4 DAT_012ceb58
;   undefined4 DAT_012ceb5c
;   undefined4 DAT_012ceb60
;   undefined4 DAT_012ceb64
;   undefined4 DAT_012ceb68
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447e80
        ;   Label: core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00447e80
    FLD double ptr [0x0057bb6b]         ; 00447e81 | DAT_0057bb6b
    FLD float ptr [ESP + 0xc]           ; 00447e87
    FMUL ST1                            ; 00447e8b
    FLD float ptr [ESP + 0x14]          ; 00447e8d
    FMUL ST2                            ; 00447e91
    FLD float ptr [ESP + 0x10]          ; 00447e93
    FMUL ST3                            ; 00447e97
    FLD float ptr [ESP + 0x18]          ; 00447e99
    XOR EDX,EDX                         ; 00447e9d
    FMULP ST4                           ; 00447e9f
    MOV dword ptr [0x012ceb60],EDX      ; 00447ea1 | DAT_012ceb60
    FXCH ST2                            ; 00447ea7
    CALL crt_math.c_round_FUN_00563a30  ; 00447ea9
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH                                ; 00447eae
    CALL crt_math.c_round_FUN_00563a30  ; 00447eb0
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST2                            ; 00447eb5
    CALL crt_math.c_round_FUN_00563a30  ; 00447eb7
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST3                            ; 00447ebc
    CALL crt_math.c_round_FUN_00563a30  ; 00447ebe
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST2                            ; 00447ec3
    FISTP dword ptr [0x005ad448]        ; 00447ec5 | DAT_005ad448
    FXCH ST2                            ; 00447ecb
    FISTP dword ptr [0x012ceb5c]        ; 00447ecd | DAT_012ceb5c
    FISTP dword ptr [0x012ceb64]        ; 00447ed3 | DAT_012ceb64
    MOV EBX,dword ptr [0x012ceb5c]      ; 00447ed9 | DAT_012ceb5c
    FISTP dword ptr [0x005ad444]        ; 00447edf | DAT_005ad444
    TEST EBX,EBX                        ; 00447ee5
    JNZ 0x00447efc                      ; 00447ee7
        ;   XREF to: 00447efc (CONDITIONAL_JUMP)  ; LAB_00447efc
    MOV EAX,[0x005ad448]                ; 00447ee9 | DAT_005ad448
    MOV EDX,0x1                         ; 00447eee
    MOV [0x012ceb58],EAX                ; 00447ef3 | DAT_012ceb58
    TEST EAX,EAX                        ; 00447ef8
    JZ 0x00447f04                       ; 00447efa
        ;   XREF to: 00447f04 (CONDITIONAL_JUMP)  ; LAB_00447f04
    MOV dword ptr [0x005ad44c],EDX      ; 00447efc | DAT_005ad44c
        ;   Label: LAB_00447efc
    POP EBX                             ; 00447f02
    RET                                 ; 00447f03
    MOV EAX,[0x012ceb64]                ; 00447f04 | DAT_012ceb64
        ;   Label: LAB_00447f04
    MOV EDX,0x2                         ; 00447f09
    MOV [0x012ceb68],EAX                ; 00447f0e | DAT_012ceb68
    MOV dword ptr [0x005ad44c],EDX      ; 00447f13 | DAT_005ad44c
    POP EBX                             ; 00447f19
    RET                                 ; 00447f1a

