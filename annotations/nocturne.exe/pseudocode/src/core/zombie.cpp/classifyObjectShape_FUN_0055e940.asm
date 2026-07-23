; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_zombie_cpp_classifyObjectShape_FUN_0055e940(float *param_1)
;
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[1]:
;   core_zombie.cpp_FUN_00561010 at 0056164e
;
; Referenced Globals:
;   double DOUBLE_005983ce = 2
;   double DOUBLE_005983d6 = 0.700000000000000
;   double DOUBLE_005983de = 6
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0055e940
        ;   Label: core_zombie.cpp_classifyObjectShape_FUN_0055e940
    MOV EBP,ESP                         ; 0055e941
    SUB ESP,0x28                        ; 0055e943
    AND ESP,0xfffffff8                  ; 0055e946
    MOV EDX,dword ptr [EBP + 0x8]       ; 0055e949
    FLD float ptr [EDX]                 ; 0055e94c
    FST double ptr [ESP + 0x8]          ; 0055e94e
    FCOMP double ptr [0x005983ce]       ; 0055e952 | DOUBLE_005983ce
    FNSTSW AX                           ; 0055e958
    SAHF                                ; 0055e95a
    JC 0x0055ea18                       ; 0055e95b
        ;   XREF to: 0055ea18 (CONDITIONAL_JUMP)  ; LAB_0055ea18
    FLD float ptr [EDX]                 ; 0055e961
        ;   Label: LAB_0055e961
    FLD1                                ; 0055e963
    FCOMPP                              ; 0055e965
    FNSTSW AX                           ; 0055e967
    SAHF                                ; 0055e969
    JBE 0x0055e9b2                      ; 0055e96a
        ;   XREF to: 0055e9b2 (CONDITIONAL_JUMP)  ; LAB_0055e9b2
    FLD float ptr [EDX + 0x4]           ; 0055e96c
    FLD1                                ; 0055e96f
    FCOMPP                              ; 0055e971
    FNSTSW AX                           ; 0055e973
    SAHF                                ; 0055e975
    JBE 0x0055e9b2                      ; 0055e976
        ;   XREF to: 0055e9b2 (CONDITIONAL_JUMP)  ; LAB_0055e9b2
    FLD float ptr [EDX + 0x8]           ; 0055e978
    FST double ptr [ESP + 0x20]         ; 0055e97b
    FCOMP double ptr [0x005983ce]       ; 0055e97f | DOUBLE_005983ce
    FNSTSW AX                           ; 0055e985
    SAHF                                ; 0055e987
    JBE 0x0055e9b2                      ; 0055e988
        ;   XREF to: 0055e9b2 (CONDITIONAL_JUMP)  ; LAB_0055e9b2
    FLD double ptr [ESP + 0x20]         ; 0055e98a
    FCOMP double ptr [0x005983de]       ; 0055e98e | DOUBLE_005983de
    FNSTSW AX                           ; 0055e994
    SAHF                                ; 0055e996
    JNC 0x0055e9b2                      ; 0055e997
        ;   XREF to: 0055e9b2 (CONDITIONAL_JUMP)  ; LAB_0055e9b2
    FLD float ptr [EDX + 0x8]           ; 0055e999
    FCOMP float ptr [EDX]               ; 0055e99c
    FNSTSW AX                           ; 0055e99e
    SAHF                                ; 0055e9a0
    JBE 0x0055e9b2                      ; 0055e9a1
        ;   XREF to: 0055e9b2 (CONDITIONAL_JUMP)  ; LAB_0055e9b2
    FLD float ptr [EDX + 0x8]           ; 0055e9a3
    FCOMP float ptr [EDX + 0x4]         ; 0055e9a6
    FNSTSW AX                           ; 0055e9a9
    SAHF                                ; 0055e9ab
    JA 0x0055ea81                       ; 0055e9ac
        ;   XREF to: 0055ea81 (CONDITIONAL_JUMP)  ; LAB_0055ea81
    FLD float ptr [EDX]                 ; 0055e9b2
        ;   Label: LAB_0055e9b2
    FLD1                                ; 0055e9b4
    FCOMPP                              ; 0055e9b6
    FNSTSW AX                           ; 0055e9b8
    SAHF                                ; 0055e9ba
    JBE 0x0055ea7b                      ; 0055e9bb
        ;   XREF to: 0055ea7b (CONDITIONAL_JUMP)  ; LAB_0055ea7b
    FLD float ptr [EDX + 0x4]           ; 0055e9c1
    FLD1                                ; 0055e9c4
    FCOMPP                              ; 0055e9c6
    FNSTSW AX                           ; 0055e9c8
    SAHF                                ; 0055e9ca
    JBE 0x0055ea7b                      ; 0055e9cb
        ;   XREF to: 0055ea7b (CONDITIONAL_JUMP)  ; LAB_0055ea7b
    FLD1                                ; 0055e9d1
    FLD float ptr [EDX + 0x8]           ; 0055e9d3
    FSTP double ptr [ESP + 0x10]        ; 0055e9d6
    FCOMP double ptr [ESP + 0x10]       ; 0055e9da
    FNSTSW AX                           ; 0055e9de
    SAHF                                ; 0055e9e0
    JNC 0x0055ea7b                      ; 0055e9e1
        ;   XREF to: 0055ea7b (CONDITIONAL_JUMP)  ; LAB_0055ea7b
    FLD double ptr [ESP + 0x10]         ; 0055e9e7
    FCOMP double ptr [0x005983ce]       ; 0055e9eb | DOUBLE_005983ce
    FNSTSW AX                           ; 0055e9f1
    SAHF                                ; 0055e9f3
    JNC 0x0055ea7b                      ; 0055e9f4
        ;   XREF to: 0055ea7b (CONDITIONAL_JUMP)  ; LAB_0055ea7b
    FLD float ptr [EDX + 0x8]           ; 0055e9fa
    FCOMP float ptr [EDX]               ; 0055e9fd
    FNSTSW AX                           ; 0055e9ff
    SAHF                                ; 0055ea01
    JBE 0x0055ea7b                      ; 0055ea02
        ;   XREF to: 0055ea7b (CONDITIONAL_JUMP)  ; LAB_0055ea7b
    FLD float ptr [EDX + 0x8]           ; 0055ea04
    FCOMP float ptr [EDX + 0x4]         ; 0055ea07
    FNSTSW AX                           ; 0055ea0a
    SAHF                                ; 0055ea0c
    JBE 0x0055ea7b                      ; 0055ea0d
        ;   XREF to: 0055ea7b (CONDITIONAL_JUMP)  ; LAB_0055ea7b
    MOV EAX,0x3                         ; 0055ea0f
    MOV ESP,EBP                         ; 0055ea14
    POP EBP                             ; 0055ea16
    RET                                 ; 0055ea17
    FLD float ptr [EDX + 0x4]           ; 0055ea18
        ;   Label: LAB_0055ea18
    FST double ptr [ESP + 0x18]         ; 0055ea1b
    FCOMP double ptr [0x005983ce]       ; 0055ea1f | DOUBLE_005983ce
    FNSTSW AX                           ; 0055ea25
    SAHF                                ; 0055ea27
    JNC 0x0055e961                      ; 0055ea28
        ;   XREF to: 0055e961 (CONDITIONAL_JUMP)  ; LAB_0055e961
    FLD float ptr [EDX + 0x8]           ; 0055ea2e
    FST double ptr [ESP]                ; 0055ea31
    FCOMP double ptr [0x005983ce]       ; 0055ea34 | DOUBLE_005983ce
    FNSTSW AX                           ; 0055ea3a
    SAHF                                ; 0055ea3c
    JNC 0x0055e961                      ; 0055ea3d
        ;   XREF to: 0055e961 (CONDITIONAL_JUMP)  ; LAB_0055e961
    FLD double ptr [ESP + 0x8]          ; 0055ea43
    FCOMP double ptr [0x005983d6]       ; 0055ea47 | DOUBLE_005983d6
    FNSTSW AX                           ; 0055ea4d
    SAHF                                ; 0055ea4f
    JBE 0x0055e961                      ; 0055ea50
        ;   XREF to: 0055e961 (CONDITIONAL_JUMP)  ; LAB_0055e961
    FLD double ptr [ESP + 0x18]         ; 0055ea56
    FCOMP double ptr [0x005983d6]       ; 0055ea5a | DOUBLE_005983d6
    FNSTSW AX                           ; 0055ea60
    SAHF                                ; 0055ea62
    JBE 0x0055e961                      ; 0055ea63
        ;   XREF to: 0055e961 (CONDITIONAL_JUMP)  ; LAB_0055e961
    FLD double ptr [ESP]                ; 0055ea69
    FCOMP double ptr [0x005983d6]       ; 0055ea6c | DOUBLE_005983d6
    FNSTSW AX                           ; 0055ea72
    SAHF                                ; 0055ea74
    JBE 0x0055e961                      ; 0055ea75
        ;   XREF to: 0055e961 (CONDITIONAL_JUMP)  ; LAB_0055e961
    XOR EAX,EAX                         ; 0055ea7b
        ;   Label: LAB_0055ea7b
    MOV ESP,EBP                         ; 0055ea7d
    POP EBP                             ; 0055ea7f
    RET                                 ; 0055ea80
    MOV EAX,0x1                         ; 0055ea81
        ;   Label: LAB_0055ea81
    MOV ESP,EBP                         ; 0055ea86
    POP EBP                             ; 0055ea88
    RET                                 ; 0055ea89

