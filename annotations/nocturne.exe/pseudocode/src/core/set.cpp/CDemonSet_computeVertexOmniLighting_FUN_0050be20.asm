; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_0050be20(undefined4 param_1,float *param_2,float *param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   FUN_00551c00 at 00551d41
;   core_water.cpp_CWater_render_FUN_00550cb0 at 00550ede
;
; Referenced Globals:
;   undefined4 DAT_0059064a
;   undefined4 DAT_005c5014
;   undefined4 DAT_005c5034
;   undefined4 DAT_005c5038
;   undefined4 DAT_005c503c
;   undefined4 DAT_01c7070c
;   undefined4 DAT_01fba9a4
;   undefined4 DAT_01fba9a8
;   undefined4 DAT_01fba9ac
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050be20
        ;   Label: core_set.cpp_CDemonSet_computeVertexOmniLighting_FUN_0050be20
    PUSH ESI                            ; 0050be21
    PUSH EBP                            ; 0050be22
    MOV EBP,ESP                         ; 0050be23
    SUB ESP,0x34                        ; 0050be25
    AND ESP,0xfffffff8                  ; 0050be28
    MOV ESI,dword ptr [0x01c7070c]      ; 0050be2b | DAT_01c7070c
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050be31
    MOV EAX,dword ptr [EBP + 0x18]      ; 0050be34
    XOR ECX,ECX                         ; 0050be37
    FLD float ptr [EDX]                 ; 0050be39
    MOV dword ptr [ESP + 0x4],ECX       ; 0050be3b
    FADD float ptr [EAX]                ; 0050be3f
    MOV dword ptr [ESP],ECX             ; 0050be41
    FSTP float ptr [ESP + 0x18]         ; 0050be44
    FLD float ptr [EDX + 0x4]           ; 0050be48
    FADD float ptr [EAX + 0x4]          ; 0050be4b
    MOV dword ptr [ESP + 0x8],ECX       ; 0050be4e
    FSTP float ptr [ESP + 0x1c]         ; 0050be52
    FLD float ptr [EDX + 0x8]           ; 0050be56
    FADD float ptr [EAX + 0x8]          ; 0050be59
    MOV EAX,[0x01fba9a4]                ; 0050be5c | DAT_01fba9a4
    FSTP float ptr [ESP + 0x20]         ; 0050be61
    TEST EAX,EAX                        ; 0050be65
    JLE 0x0050be8d                      ; 0050be67
        ;   XREF to: 0050be8d (CONDITIONAL_JUMP)  ; LAB_0050be8d
    LEA EBX,[EAX*0x4 + 0x0]             ; 0050be69
    MOV EDX,dword ptr [ECX + 0x1fba9a8] ; 0050be70 | DAT_01fba9a8 | DAT_01fba9ac
        ;   Label: LAB_0050be70
    TEST dword ptr [EDX + 0x11d4],0x7fffffff ; 0050be76
    JNZ 0x0050bf4d                      ; 0050be80
        ;   XREF to: 0050bf4d (CONDITIONAL_JUMP)  ; LAB_0050bf4d
    ADD ECX,0x4                         ; 0050be86
        ;   Label: LAB_0050be86
    CMP ECX,EBX                         ; 0050be89
    JL 0x0050be70                       ; 0050be8b
        ;   XREF to: 0050be70 (CONDITIONAL_JUMP)  ; LAB_0050be70
    CMP dword ptr [0x01fba9a4],0x0      ; 0050be8d | DAT_01fba9a4
        ;   Label: LAB_0050be8d
    JNZ 0x0050bea6                      ; 0050be94
        ;   XREF to: 0050bea6 (CONDITIONAL_JUMP)  ; LAB_0050bea6
    MOV ECX,0x43000000                  ; 0050be96
    MOV dword ptr [ESP],ECX             ; 0050be9b
    MOV dword ptr [ESP + 0x8],ECX       ; 0050be9e
    MOV dword ptr [ESP + 0x4],ECX       ; 0050bea2
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0050bea6
        ;   Label: LAB_0050bea6
    LEA EAX,[EDX*0x4 + 0x0]             ; 0050bea9
    SUB EAX,EDX                         ; 0050beb0
    MOV EBX,0x5c5014                    ; 0050beb2 | DAT_005c5014
    SHL EAX,0x4                         ; 0050beb7
    FLD float ptr [ESP + 0x4]           ; 0050beba
    ADD EBX,EAX                         ; 0050bebe
    FCOMP double ptr [0x0059064a]       ; 0050bec0 | DAT_0059064a
    FNSTSW AX                           ; 0050bec6
    SAHF                                ; 0050bec8
    JBE 0x0050bed3                      ; 0050bec9
        ;   XREF to: 0050bed3 (CONDITIONAL_JUMP)  ; LAB_0050bed3
    MOV dword ptr [ESP + 0x4],0x437f0000 ; 0050becb
    FLD float ptr [ESP]                 ; 0050bed3
        ;   Label: LAB_0050bed3
    FCOMP double ptr [0x0059064a]       ; 0050bed6 | DAT_0059064a
    FNSTSW AX                           ; 0050bedc
    SAHF                                ; 0050bede
    JBE 0x0050bee8                      ; 0050bedf
        ;   XREF to: 0050bee8 (CONDITIONAL_JUMP)  ; LAB_0050bee8
    MOV dword ptr [ESP],0x437f0000      ; 0050bee1
    FLD float ptr [ESP + 0x8]           ; 0050bee8
        ;   Label: LAB_0050bee8
    FCOMP double ptr [0x0059064a]       ; 0050beec | DAT_0059064a
    FNSTSW AX                           ; 0050bef2
    SAHF                                ; 0050bef4
    JA 0x0050bff5                       ; 0050bef5
        ;   XREF to: 0050bff5 (CONDITIONAL_JUMP)  ; LAB_0050bff5
    FLD float ptr [ESP + 0x4]           ; 0050befb
        ;   Label: LAB_0050befb
    FLD float ptr [ESP]                 ; 0050beff
    FLD float ptr [ESP + 0x8]           ; 0050bf02
    FXCH ST2                            ; 0050bf06
    CALL crt_math.c_round_FUN_00563a30  ; 0050bf08
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x28]        ; 0050bf0d
    MOV EAX,dword ptr [ESP + 0x28]      ; 0050bf11
    CALL crt_math.c_round_FUN_00563a30  ; 0050bf15
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    SHL EAX,0x8                         ; 0050bf1a
    FISTP dword ptr [ESP + 0x28]        ; 0050bf1d
    MOV dword ptr [EBX + 0x20],EAX      ; 0050bf21 | DAT_005c5034
    MOV EAX,dword ptr [ESP + 0x28]      ; 0050bf24
    CALL crt_math.c_round_FUN_00563a30  ; 0050bf28
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    SHL EAX,0x8                         ; 0050bf2d
    FISTP dword ptr [ESP + 0x28]        ; 0050bf30
    MOV dword ptr [EBX + 0x24],EAX      ; 0050bf34 | DAT_005c5038
    MOV EAX,dword ptr [ESP + 0x28]      ; 0050bf37
    SHL EAX,0x8                         ; 0050bf3b
    MOV dword ptr [EBX + 0x28],EAX      ; 0050bf3e | DAT_005c503c
    MOV dword ptr [0x01c7070c],ESI      ; 0050bf41 | DAT_01c7070c
    MOV ESP,EBP                         ; 0050bf47
    POP EBP                             ; 0050bf49
    POP ESI                             ; 0050bf4a
    POP EBX                             ; 0050bf4b
    RET                                 ; 0050bf4c
    LEA EAX,[EDX + 0x104]               ; 0050bf4d
        ;   Label: LAB_0050bf4d
    FLD float ptr [EAX]                 ; 0050bf53
    FSUB float ptr [ESP + 0x18]         ; 0050bf55
    FSTP float ptr [ESP + 0xc]          ; 0050bf59
    FLD float ptr [EAX + 0x4]           ; 0050bf5d
    FSUB float ptr [ESP + 0x1c]         ; 0050bf60
    FST float ptr [ESP + 0x10]          ; 0050bf64
    FMUL float ptr [ESP + 0x10]         ; 0050bf68
    FLD float ptr [ESP + 0xc]           ; 0050bf6c
    FMUL ST0                            ; 0050bf70
    FLD float ptr [EAX + 0x8]           ; 0050bf72
    FSUB float ptr [ESP + 0x20]         ; 0050bf75
    FXCH                                ; 0050bf79
    FADDP ST2,ST0                       ; 0050bf7b
    FST float ptr [ESP + 0x14]          ; 0050bf7d
    FMUL float ptr [ESP + 0x14]         ; 0050bf81
    FADDP                               ; 0050bf85
    FSTP float ptr [ESP + 0x30]         ; 0050bf87
    MOV EAX,dword ptr [ESP + 0x30]      ; 0050bf8b
    SAR EAX,0x1                         ; 0050bf8f
    ADD EAX,ESI                         ; 0050bf91
    MOV dword ptr [ESP + 0x2c],EAX      ; 0050bf93
    FLD float ptr [ESP + 0x2c]          ; 0050bf97
    FCOMP float ptr [EDX + 0x11d4]      ; 0050bf9b
    FNSTSW AX                           ; 0050bfa1
    SAHF                                ; 0050bfa3
    JA 0x0050be86                       ; 0050bfa4
        ;   XREF to: 0050be86 (CONDITIONAL_JUMP)  ; LAB_0050be86
    FLD float ptr [ESP + 0x2c]          ; 0050bfaa
    FDIV float ptr [EDX + 0x11d4]       ; 0050bfae
    FLD float ptr [EDX + 0x11c4]        ; 0050bfb4
    FLD1                                ; 0050bfba
    FSUBRP ST2,ST0                      ; 0050bfbc
    FMUL ST1                            ; 0050bfbe
    FLD float ptr [EDX + 0x11c8]        ; 0050bfc0
    FMUL ST2                            ; 0050bfc6
    FLD float ptr [EDX + 0x11cc]        ; 0050bfc8
    FMULP ST3                           ; 0050bfce
    FXCH                                ; 0050bfd0
    FADD float ptr [ESP + 0x4]          ; 0050bfd2
    FXCH                                ; 0050bfd6
    FADD float ptr [ESP]                ; 0050bfd8
    FXCH ST2                            ; 0050bfdb
    FADD float ptr [ESP + 0x8]          ; 0050bfdd
    FXCH                                ; 0050bfe1
    FSTP float ptr [ESP + 0x4]          ; 0050bfe3
    FXCH                                ; 0050bfe7
    FSTP float ptr [ESP]                ; 0050bfe9
    FSTP float ptr [ESP + 0x8]          ; 0050bfec
    JMP 0x0050be86                      ; 0050bff0
        ;   XREF to: 0050be86 (UNCONDITIONAL_JUMP)  ; LAB_0050be86
    MOV dword ptr [ESP + 0x8],0x437f0000 ; 0050bff5
        ;   Label: LAB_0050bff5
    JMP 0x0050befb                      ; 0050bffd
        ;   XREF to: 0050befb (UNCONDITIONAL_JUMP)  ; LAB_0050befb

