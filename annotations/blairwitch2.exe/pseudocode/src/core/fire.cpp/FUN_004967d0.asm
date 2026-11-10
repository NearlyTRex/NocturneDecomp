; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_004967d0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d543a
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 DAT_01c2a370
;   undefined4 g_CGameInstance.delta_time_float
;
; Called Functions:
;   core_particle.cpp_FUN_00510ef0
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004967d0
        ;   Label: core_fire.cpp_FUN_004967d0
    PUSH ESI                            ; 004967d1
    PUSH EBP                            ; 004967d2
    MOV EBP,ESP                         ; 004967d3
    SUB ESP,0x1c                        ; 004967d5
    AND ESP,0xfffffff8                  ; 004967d8
    MOV EBX,dword ptr [EBP + 0x10]      ; 004967db
    PUSH EBX                            ; 004967de
    CALL core_particle.cpp_FUN_00510ef0 ; 004967df
        ;   XREF to: 00510ef0 (UNCONDITIONAL_CALL)  ; undefined core_particle.cpp_FUN_00510ef0()
    LEA ECX,[EBX + 0xc]                 ; 004967e4
    FLD float ptr [ECX + 0x4]           ; 004967e7
    FMUL ST0                            ; 004967ea
    FLD float ptr [ECX]                 ; 004967ec
    FMUL ST0                            ; 004967ee
    FADDP                               ; 004967f0
    FLD float ptr [ECX + 0x8]           ; 004967f2
    FMUL ST0                            ; 004967f5
    FADDP                               ; 004967f7
    ADD ESP,0x4                         ; 004967f9
    FSQRT                               ; 004967fc
    MOV EAX,[0x01c2a370]                ; 004967fe | DAT_01c2a370
    MOV EDX,EAX                         ; 00496803
    SAR EDX,0x1f                        ; 00496805
    SHL EDX,0x2                         ; 00496808
    SBB EAX,EDX                         ; 0049680b
    SAR EAX,0x2                         ; 0049680d
    FST float ptr [ESP + 0x4]           ; 00496810
    FST double ptr [ESP + 0x8]          ; 00496814
    FMUL double ptr [0x005d543a]        ; 00496818 | DAT_005d543a
    CALL crt_math.c_round_FUN_005b7ff0  ; 0049681e
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x10]        ; 00496823
    MOV EDX,dword ptr [ESP + 0x10]      ; 00496827
    IMUL EDX                            ; 0049682b
    SHRD EAX,EDX,0x10                   ; 0049682d
    MOV EDX,dword ptr [EBX + 0x44]      ; 00496831
    ADD EDX,EAX                         ; 00496834
    MOV EAX,[0x01c2a370]                ; 00496836 | DAT_01c2a370
    MOV dword ptr [EBX + 0x44],EDX      ; 0049683b
    MOV EDX,EAX                         ; 0049683e
    SAR EDX,0x1f                        ; 00496840
    SUB EAX,EDX                         ; 00496843
    SAR EAX,0x1                         ; 00496845
    MOV EDX,dword ptr [ESP + 0x10]      ; 00496847
    IMUL EDX                            ; 0049684b
    SHRD EAX,EDX,0x10                   ; 0049684d
    MOV ESI,dword ptr [EBX + 0x48]      ; 00496851
    ADD ESI,EAX                         ; 00496854
    FLDZ                                ; 00496856
    MOV dword ptr [EBX + 0x48],ESI      ; 00496858
    FCOMP double ptr [ESP + 0x8]        ; 0049685b
    FNSTSW AX                           ; 0049685f
    SAHF                                ; 00496861
    JNC 0x00496898                      ; 00496862
        ;   XREF to: 00496898 (CONDITIONAL_JUMP)  ; LAB_00496898
    FLD float ptr [ESP + 0x4]           ; 00496864
    FLD ST0                             ; 00496868
    MOV EAX,[0x00616494]                ; 0049686a | g_CGamePtr
    FMUL float ptr [EBX + 0x40]         ; 0049686f
    FMUL float ptr [EAX + 0x284]        ; 00496872 | g_CGameInstance.delta_time_float
    FSUBP                               ; 00496878
    FST float ptr [ESP]                 ; 0049687a
    FLDZ                                ; 0049687d
    FCOMPP                              ; 0049687f
    FNSTSW AX                           ; 00496881
    SAHF                                ; 00496883
    JC 0x0049689e                       ; 00496884
        ;   XREF to: 0049689e (CONDITIONAL_JUMP)  ; LAB_0049689e
    MOV dword ptr [ECX + 0x8],0x0       ; 00496886
    MOV EAX,dword ptr [ECX + 0x8]       ; 0049688d
    MOV dword ptr [ECX + 0x4],EAX       ; 00496890
    MOV EAX,dword ptr [ECX + 0x4]       ; 00496893
    MOV dword ptr [ECX],EAX             ; 00496896
    MOV ESP,EBP                         ; 00496898
        ;   Label: LAB_00496898
    POP EBP                             ; 0049689a
    POP ESI                             ; 0049689b
    POP EBX                             ; 0049689c
    RET                                 ; 0049689d
    FLD float ptr [ESP]                 ; 0049689e
        ;   Label: LAB_0049689e
    FDIV float ptr [ESP + 0x4]          ; 004968a1
    FLD float ptr [ECX]                 ; 004968a5
    FXCH                                ; 004968a7
    FSTP float ptr [ESP + 0x18]         ; 004968a9
    FMUL float ptr [ESP + 0x18]         ; 004968ad
    FLD float ptr [ECX + 0x4]           ; 004968b1
    FMUL float ptr [ESP + 0x18]         ; 004968b4
    FLD float ptr [ECX + 0x8]           ; 004968b8
    FMUL float ptr [ESP + 0x18]         ; 004968bb
    FXCH ST2                            ; 004968bf
    FSTP float ptr [ECX]                ; 004968c1
    FSTP float ptr [ECX + 0x4]          ; 004968c3
    FSTP float ptr [ECX + 0x8]          ; 004968c6
    MOV ESP,EBP                         ; 004968c9
    POP EBP                             ; 004968cb
    POP ESI                             ; 004968cc
    POP EBX                             ; 004968cd
    RET                                 ; 004968ce

