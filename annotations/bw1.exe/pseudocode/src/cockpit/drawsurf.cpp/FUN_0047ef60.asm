; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_0047ef60(CDrawSurface *param_1,int param_2,int param_3,int param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_005db0d9
;   undefined4 DAT_00612550
;   undefined4 DAT_00612554
;   undefined4 DAT_01bc0f4c
;   undefined4 DAT_01bc0f50
;   undefined4 DAT_01bc0f54
;   undefined4 DAT_01c43530
;   undefined4 DAT_01c43534
;
; Called Functions:
;   cockpit_drawsurf.cpp_FUN_0047e870
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047ef60
        ;   Label: cockpit_drawsurf.cpp_FUN_0047ef60
    PUSH ESI                            ; 0047ef61
    PUSH EDI                            ; 0047ef62
    PUSH EBP                            ; 0047ef63
    SUB ESP,0x1c                        ; 0047ef64
    MOV EBX,dword ptr [ESP + 0x34]      ; 0047ef67
    MOV ESI,dword ptr [ESP + 0x38]      ; 0047ef6b
    MOV EBP,dword ptr [ESP + 0x3c]      ; 0047ef6f
    MOV EDX,dword ptr [ESP + 0x40]      ; 0047ef73
    MOV EDI,dword ptr [0x01c43534]      ; 0047ef77 | DAT_01c43534
    CMP EDI,dword ptr [0x01bc0f54]      ; 0047ef7d | DAT_01bc0f54
    JNZ 0x0047f058                      ; 0047ef83
        ;   XREF to: 0047f058 (CONDITIONAL_JUMP)  ; LAB_0047f058
    FLD float ptr [0x01bc0f50]          ; 0047ef89 | DAT_01bc0f50
        ;   Label: LAB_0047ef89
    MOV EDI,0x1                         ; 0047ef8f
    MOV ECX,dword ptr [ESP + 0x30]      ; 0047ef94
    CALL crt_math.c_round_FUN_005c03a0  ; 0047ef98
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x14]        ; 0047ef9d
    MOV dword ptr [ESP + 0x4],EDI       ; 0047efa1
    MOV EAX,dword ptr [ECX + 0x8]       ; 0047efa5
    MOV EDI,dword ptr [ECX + 0xc]       ; 0047efa8
    SUB EBX,EAX                         ; 0047efab
    SUB EBP,EAX                         ; 0047efad
    MOV EAX,0x1                         ; 0047efaf
    SUB ESI,EDI                         ; 0047efb4
    SUB EDX,EDI                         ; 0047efb6
    MOV dword ptr [ESP],EAX             ; 0047efb8
    CMP ESI,EDX                         ; 0047efbb
    JG 0x0047efc6                       ; 0047efbd
        ;   XREF to: 0047efc6 (CONDITIONAL_JUMP)  ; LAB_0047efc6
    MOV dword ptr [ESP],0xffffffff      ; 0047efbf
    JLE 0x0047efd4                      ; 0047efc6
        ;   XREF to: 0047efd4 (CONDITIONAL_JUMP)  ; LAB_0047efd4
        ;   Label: LAB_0047efc6
    MOV ECX,EBX                         ; 0047efc8
    MOV EBX,EBP                         ; 0047efca
    MOV EBP,ECX                         ; 0047efcc
    MOV ECX,ESI                         ; 0047efce
    MOV ESI,EDX                         ; 0047efd0
    MOV EDX,ECX                         ; 0047efd2
    SUB EDX,ESI                         ; 0047efd4
        ;   Label: LAB_0047efd4
    SUB EBP,EBX                         ; 0047efd6
    MOV dword ptr [ESP + 0x10],EDX      ; 0047efd8
    TEST EBP,EBP                        ; 0047efdc
    JL 0x0047f0ce                       ; 0047efde
        ;   XREF to: 0047f0ce (CONDITIONAL_JUMP)  ; LAB_0047f0ce
    MOV EAX,dword ptr [ESP + 0x10]      ; 0047efe4
        ;   Label: LAB_0047efe4
    CMP EBP,EAX                         ; 0047efe8
    JLE 0x0047f0f2                      ; 0047efea
        ;   XREF to: 0047f0f2 (CONDITIONAL_JUMP)  ; LAB_0047f0f2
    XOR EDX,EDX                         ; 0047eff0
    LEA EDI,[EAX + EAX*0x1]             ; 0047eff2
    MOV dword ptr [ESP + 0xc],EDX       ; 0047eff5
    SUB EDI,EBP                         ; 0047eff9
    TEST EBP,EBP                        ; 0047effb
    JL 0x0047f050                       ; 0047effd
        ;   XREF to: 0047f050 (CONDITIONAL_JUMP)  ; LAB_0047f050
    MOV EAX,dword ptr [ESP + 0x14]      ; 0047efff
        ;   Label: LAB_0047efff
    CDQ                                 ; 0047f003
    XOR EAX,EDX                         ; 0047f004
    SUB EAX,EDX                         ; 0047f006
    MOV EDX,EAX                         ; 0047f008
    MOV ECX,dword ptr [0x00612550]      ; 0047f00a | DAT_00612550
    SAR EDX,0x1f                        ; 0047f010
    ADD ECX,ECX                         ; 0047f013
    IDIV ECX                            ; 0047f015
    CMP EDX,dword ptr [0x00612550]      ; 0047f017 | DAT_00612550
    JL 0x0047f0de                       ; 0047f01d
        ;   XREF to: 0047f0de (CONDITIONAL_JUMP)  ; LAB_0047f0de
    TEST EDI,EDI                        ; 0047f023
        ;   Label: LAB_0047f023
    JLE 0x0047f02a                      ; 0047f025
        ;   XREF to: 0047f02a (CONDITIONAL_JUMP)  ; LAB_0047f02a
    INC ESI                             ; 0047f027
    SUB EDI,EBP                         ; 0047f028
    MOV EDX,dword ptr [ESP]             ; 0047f02a
        ;   Label: LAB_0047f02a
    MOV ECX,dword ptr [ESP + 0x14]      ; 0047f02d
    MOV EAX,dword ptr [ESP + 0x4]       ; 0047f031
    ADD ECX,EDX                         ; 0047f035
    ADD EBX,EAX                         ; 0047f037
    MOV dword ptr [ESP + 0x14],ECX      ; 0047f039
    MOV ECX,dword ptr [ESP + 0xc]       ; 0047f03d
    MOV EDX,dword ptr [ESP + 0x10]      ; 0047f041
    INC ECX                             ; 0047f045
    ADD EDI,EDX                         ; 0047f046
    MOV dword ptr [ESP + 0xc],ECX       ; 0047f048
    CMP EBP,ECX                         ; 0047f04c
    JGE 0x0047efff                      ; 0047f04e
        ;   XREF to: 0047efff (CONDITIONAL_JUMP)  ; LAB_0047efff
    ADD ESP,0x1c                        ; 0047f050
        ;   Label: LAB_0047f050
    POP EBP                             ; 0047f053
    POP EDI                             ; 0047f054
    POP ESI                             ; 0047f055
    POP EBX                             ; 0047f056
    RET                                 ; 0047f057
    FILD dword ptr [0x01c43530]         ; 0047f058 | DAT_01c43530
        ;   Label: LAB_0047f058
    FMUL float ptr [0x005db0d9]         ; 0047f05e | DAT_005db0d9
    FADD float ptr [0x01bc0f4c]         ; 0047f064 | DAT_01bc0f4c
    MOV dword ptr [0x01bc0f54],EDI      ; 0047f06a | DAT_01bc0f54
    FST float ptr [0x01bc0f4c]          ; 0047f070 | DAT_01bc0f4c
    FCOMP float ptr [0x00612554]        ; 0047f076 | DAT_00612554
    FNSTSW AX                           ; 0047f07c
    SAHF                                ; 0047f07e
    JBE 0x0047ef89                      ; 0047f07f
        ;   XREF to: 0047ef89 (CONDITIONAL_JUMP)  ; LAB_0047ef89
    FLD float ptr [0x01bc0f4c]          ; 0047f085 | DAT_01bc0f4c
    FDIV float ptr [0x00612554]         ; 0047f08b | DAT_00612554
    MOV ECX,dword ptr [0x00612550]      ; 0047f091 | DAT_00612550
    ADD ECX,ECX                         ; 0047f097
    MOV dword ptr [ESP + 0x18],ECX      ; 0047f099
    FADD float ptr [0x01bc0f50]         ; 0047f09d | DAT_01bc0f50
    FILD dword ptr [ESP + 0x18]         ; 0047f0a3
    FXCH                                ; 0047f0a7
    FSTP float ptr [0x01bc0f50]         ; 0047f0a9 | DAT_01bc0f50
    FCOMP float ptr [0x01bc0f50]        ; 0047f0af | DAT_01bc0f50
    FNSTSW AX                           ; 0047f0b5
    SAHF                                ; 0047f0b7
    JNC 0x0047f0c1                      ; 0047f0b8
        ;   XREF to: 0047f0c1 (CONDITIONAL_JUMP)  ; LAB_0047f0c1
    XOR EAX,EAX                         ; 0047f0ba
    MOV [0x01bc0f50],EAX                ; 0047f0bc | DAT_01bc0f50
    XOR ECX,ECX                         ; 0047f0c1
        ;   Label: LAB_0047f0c1
    MOV dword ptr [0x01bc0f4c],ECX      ; 0047f0c3 | DAT_01bc0f4c
    JMP 0x0047ef89                      ; 0047f0c9
        ;   XREF to: 0047ef89 (UNCONDITIONAL_JUMP)  ; LAB_0047ef89
    MOV EDI,0xffffffff                  ; 0047f0ce
        ;   Label: LAB_0047f0ce
    NEG EBP                             ; 0047f0d3
    MOV dword ptr [ESP + 0x4],EDI       ; 0047f0d5
    JMP 0x0047efe4                      ; 0047f0d9
        ;   XREF to: 0047efe4 (UNCONDITIONAL_JUMP)  ; LAB_0047efe4
    PUSH ESI                            ; 0047f0de
        ;   Label: LAB_0047f0de
    PUSH EBX                            ; 0047f0df
    MOV EAX,dword ptr [ESP + 0x38]      ; 0047f0e0
    PUSH EAX                            ; 0047f0e4
    CALL cockpit_drawsurf.cpp_FUN_0047e870 ; 0047f0e5
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0047f0ea
    JMP 0x0047f023                      ; 0047f0ed
        ;   XREF to: 0047f023 (UNCONDITIONAL_JUMP)  ; LAB_0047f023
    XOR ECX,ECX                         ; 0047f0f2
        ;   Label: LAB_0047f0f2
    LEA EDI,[EBP + EBP*0x1]             ; 0047f0f4
    MOV dword ptr [ESP + 0x8],ECX       ; 0047f0f8
    SUB EDI,EAX                         ; 0047f0fc
    TEST EAX,EAX                        ; 0047f0fe
    JL 0x0047f050                       ; 0047f100
        ;   XREF to: 0047f050 (CONDITIONAL_JUMP)  ; LAB_0047f050
    MOV EAX,dword ptr [ESP + 0x14]      ; 0047f106
        ;   Label: LAB_0047f106
    CDQ                                 ; 0047f10a
    XOR EAX,EDX                         ; 0047f10b
    SUB EAX,EDX                         ; 0047f10d
    MOV EDX,EAX                         ; 0047f10f
    MOV ECX,dword ptr [0x00612550]      ; 0047f111 | DAT_00612550
    SAR EDX,0x1f                        ; 0047f117
    ADD ECX,ECX                         ; 0047f11a
    IDIV ECX                            ; 0047f11c
    CMP EDX,dword ptr [0x00612550]      ; 0047f11e | DAT_00612550
    JL 0x0047f15d                       ; 0047f124
        ;   XREF to: 0047f15d (CONDITIONAL_JUMP)  ; LAB_0047f15d
    TEST EDI,EDI                        ; 0047f126
        ;   Label: LAB_0047f126
    JLE 0x0047f136                      ; 0047f128
        ;   XREF to: 0047f136 (CONDITIONAL_JUMP)  ; LAB_0047f136
    MOV EAX,dword ptr [ESP + 0x10]      ; 0047f12a
    MOV ECX,dword ptr [ESP + 0x4]       ; 0047f12e
    SUB EDI,EAX                         ; 0047f132
    ADD EBX,ECX                         ; 0047f134
    MOV EDX,dword ptr [ESP]             ; 0047f136
        ;   Label: LAB_0047f136
    MOV ECX,dword ptr [ESP + 0x14]      ; 0047f139
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047f13d
    INC ESI                             ; 0047f141
    ADD EDI,EBP                         ; 0047f142
    ADD ECX,EDX                         ; 0047f144
    INC EAX                             ; 0047f146
    MOV dword ptr [ESP + 0x14],ECX      ; 0047f147
    MOV ECX,dword ptr [ESP + 0x10]      ; 0047f14b
    MOV dword ptr [ESP + 0x8],EAX       ; 0047f14f
    CMP EAX,ECX                         ; 0047f153
    JG 0x0047f050                       ; 0047f155
        ;   XREF to: 0047f050 (CONDITIONAL_JUMP)  ; LAB_0047f050
    JMP 0x0047f106                      ; 0047f15b
        ;   XREF to: 0047f106 (UNCONDITIONAL_JUMP)  ; LAB_0047f106
    PUSH ESI                            ; 0047f15d
        ;   Label: LAB_0047f15d
    PUSH EBX                            ; 0047f15e
    MOV EDX,dword ptr [ESP + 0x38]      ; 0047f15f
    PUSH EDX                            ; 0047f163
    CALL cockpit_drawsurf.cpp_FUN_0047e870 ; 0047f164
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0047f169
    JMP 0x0047f126                      ; 0047f16c
        ;   XREF to: 0047f126 (UNCONDITIONAL_JUMP)  ; LAB_0047f126

