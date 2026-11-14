; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_prye_cpp_FUN_005228c0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005cd697
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0
;   crt_math.c_acos_FUN_005a4b74
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005228c0
        ;   Label: core_prye.cpp_FUN_005228c0
    PUSH EBP                            ; 005228c1
    MOV EBP,ESP                         ; 005228c2
    SUB ESP,0x18                        ; 005228c4
    AND ESP,0xfffffff8                  ; 005228c7
    MOV EBX,dword ptr [EBP + 0xc]       ; 005228ca
    FLD float ptr [EBP + 0x10]          ; 005228cd
    FST double ptr [ESP + 0x8]          ; 005228d0
    FCOMP double ptr [0x005cd697]       ; 005228d4 | DAT_005cd697
    FNSTSW AX                           ; 005228da
    SAHF                                ; 005228dc
    JC 0x0052293e                       ; 005228dd
        ;   XREF to: 0052293e (CONDITIONAL_JUMP)  ; LAB_0052293e
    FLD float ptr [EBP + 0x10]          ; 005228df
    FMUL ST0                            ; 005228e2
    FLD float ptr [EBP + 0x14]          ; 005228e4
    FMUL ST0                            ; 005228e7
    FSUBP                               ; 005228e9
    FSQRT                               ; 005228eb
    FDIV double ptr [ESP + 0x8]         ; 005228ed
    FLD1                                ; 005228f1
    FXCH                                ; 005228f3
    FSTP double ptr [ESP]               ; 005228f5
    FCOMP double ptr [ESP]              ; 005228f8
    FNSTSW AX                           ; 005228fb
    SAHF                                ; 005228fd
    JBE 0x0052293e                      ; 005228fe
        ;   XREF to: 0052293e (CONDITIONAL_JUMP)  ; LAB_0052293e
    FLDZ                                ; 00522900
    FCOMP double ptr [ESP]              ; 00522902
    FNSTSW AX                           ; 00522905
    SAHF                                ; 00522907
    JA 0x0052293e                       ; 00522908
        ;   XREF to: 0052293e (CONDITIONAL_JUMP)  ; LAB_0052293e
    FLD double ptr [ESP]                ; 0052290a
    CALL crt_math.c_acos_FUN_005a4b74   ; 0052290d
        ;   XREF to: 005a4b74 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005a4b74()
    FLDZ                                ; 00522912
    FXCH                                ; 00522914
    FSTP float ptr [ESP + 0x10]         ; 00522916
    FCOMP float ptr [EBP + 0x14]        ; 0052291a
    FNSTSW AX                           ; 0052291d
    SAHF                                ; 0052291f
    JA 0x00522943                       ; 00522920
        ;   XREF to: 00522943 (CONDITIONAL_JUMP)  ; LAB_00522943
    FLD float ptr [EBX]                 ; 00522922
    FADD float ptr [ESP + 0x10]         ; 00522924
    FSTP float ptr [EBX]                ; 00522928
        ;   Label: LAB_00522928
    PUSH dword ptr [EBX]                ; 0052292a
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 0052292c
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0(float angle_radians)
    MOV dword ptr [ESP + 0x18],EAX      ; 00522931
    MOV EAX,dword ptr [ESP + 0x18]      ; 00522935
    MOV dword ptr [EBX],EAX             ; 00522939
    ADD ESP,0x4                         ; 0052293b
    MOV ESP,EBP                         ; 0052293e
        ;   Label: LAB_0052293e
    POP EBP                             ; 00522940
    POP EBX                             ; 00522941
    RET                                 ; 00522942
    FLD float ptr [EBX]                 ; 00522943
        ;   Label: LAB_00522943
    FSUB float ptr [ESP + 0x10]         ; 00522945
    JMP 0x00522928                      ; 00522949
        ;   XREF to: 00522928 (UNCONDITIONAL_JUMP)  ; LAB_00522928

