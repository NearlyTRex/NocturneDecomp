; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_motion_cpp_FUN_00524f40(int *param_1,int param_2,float param_3,float *param_4)
;
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_motion.cpp_CMotionController_advance_FUN_00524270 at 00524482
;
; Referenced Globals:
;   undefined4 DAT_005eaf83
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524f40
        ;   Label: core_motion.cpp_FUN_00524f40
    PUSH ESI                            ; 00524f41
    PUSH EBP                            ; 00524f42
    MOV EBP,ESP                         ; 00524f43
    SUB ESP,0x18                        ; 00524f45
    AND ESP,0xfffffff8                  ; 00524f48
    MOV ECX,dword ptr [EBP + 0x14]      ; 00524f4b
    MOV EBX,dword ptr [EBP + 0x10]      ; 00524f4e
    LEA EDX,[ECX*0x8 + 0x0]             ; 00524f51
    MOV EBX,dword ptr [EBX]             ; 00524f58
    ADD EDX,ECX                         ; 00524f5a
    ADD EBX,0x1c28                      ; 00524f5c
    SHL EDX,0x5                         ; 00524f62
    ADD EBX,EDX                         ; 00524f65
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00524f67
    FLD float ptr [EDX]                 ; 00524f6a
    FMUL float ptr [EBX + 0x20]         ; 00524f6c
    FADD float ptr [EBP + 0x18]         ; 00524f6f
    FSTP float ptr [ESP + 0xc]          ; 00524f72
    MOV EDX,dword ptr [ESP + 0xc]       ; 00524f76
    MOV ECX,dword ptr [EBX + 0x78]      ; 00524f7a
    MOV dword ptr [ESP + 0x10],EDX      ; 00524f7d
    XOR EDX,EDX                         ; 00524f81
    TEST ECX,ECX                        ; 00524f83
    JLE 0x00524fa7                      ; 00524f85
        ;   XREF to: 00524fa7 (CONDITIONAL_JUMP)  ; LAB_00524fa7
    MOV ECX,EBX                         ; 00524f87
    FLD float ptr [EBP + 0x18]          ; 00524f89
        ;   Label: LAB_00524f89
    FILD dword ptr [ECX + 0x7c]         ; 00524f8c
    FSTP float ptr [ESP + 0x8]          ; 00524f8f
    FCOMP float ptr [ESP + 0x8]         ; 00524f93
    FNSTSW AX                           ; 00524f97
    SAHF                                ; 00524f99
    JBE 0x00524fd6                      ; 00524f9a
        ;   XREF to: 00524fd6 (CONDITIONAL_JUMP)  ; LAB_00524fd6
    INC EDX                             ; 00524f9c
        ;   Label: LAB_00524f9c
    MOV ESI,dword ptr [EBX + 0x78]      ; 00524f9d
    ADD ECX,0x8                         ; 00524fa0
    CMP EDX,ESI                         ; 00524fa3
    JL 0x00524f89                       ; 00524fa5
        ;   XREF to: 00524f89 (CONDITIONAL_JUMP)  ; LAB_00524f89
    FLD float ptr [ESP + 0xc]           ; 00524fa7
        ;   Label: LAB_00524fa7
    FILD dword ptr [EBX + 0x64]         ; 00524fab
    FSTP float ptr [ESP + 0x14]         ; 00524fae
    FCOMP float ptr [ESP + 0x14]        ; 00524fb2
    FNSTSW AX                           ; 00524fb6
    SAHF                                ; 00524fb8
    JBE 0x00524fc3                      ; 00524fb9
        ;   XREF to: 00524fc3 (CONDITIONAL_JUMP)  ; LAB_00524fc3
    MOV EDX,dword ptr [ESP + 0x14]      ; 00524fbb
    MOV dword ptr [ESP + 0xc],EDX       ; 00524fbf
    FLD float ptr [ESP + 0xc]           ; 00524fc3
        ;   Label: LAB_00524fc3
    FCOMP float ptr [ESP + 0x10]        ; 00524fc7
    FNSTSW AX                           ; 00524fcb
    SAHF                                ; 00524fcd
    JC 0x00524ffe                       ; 00524fce
        ;   XREF to: 00524ffe (CONDITIONAL_JUMP)  ; LAB_00524ffe
    MOV ESP,EBP                         ; 00524fd0
    POP EBP                             ; 00524fd2
    POP ESI                             ; 00524fd3
    POP EBX                             ; 00524fd4
    RET                                 ; 00524fd5
    FLD float ptr [ESP + 0xc]           ; 00524fd6
        ;   Label: LAB_00524fd6
    FADD double ptr [0x005eaf83]        ; 00524fda | DAT_005eaf83
    FLD float ptr [ESP + 0x8]           ; 00524fe0
    FSTP double ptr [ESP]               ; 00524fe4
    FCOMP double ptr [ESP]              ; 00524fe7
    FNSTSW AX                           ; 00524fea
    SAHF                                ; 00524fec
    JC 0x00524f9c                       ; 00524fed
        ;   XREF to: 00524f9c (CONDITIONAL_JUMP)  ; LAB_00524f9c
    FLD double ptr [ESP]                ; 00524fef
    FADD double ptr [0x005eaf83]        ; 00524ff2 | DAT_005eaf83
    FSTP float ptr [ESP + 0xc]          ; 00524ff8
    JMP 0x00524f9c                      ; 00524ffc
        ;   XREF to: 00524f9c (UNCONDITIONAL_JUMP)  ; LAB_00524f9c
    FLD float ptr [ESP + 0xc]           ; 00524ffe
        ;   Label: LAB_00524ffe
    FSUB float ptr [EBP + 0x18]         ; 00525002
    FDIV float ptr [EBX + 0x20]         ; 00525005
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00525008
    FSTP float ptr [EDX]                ; 0052500b
    MOV ESP,EBP                         ; 0052500d
    POP EBP                             ; 0052500f
    POP ESI                             ; 00525010
    POP EBX                             ; 00525011
    RET                                 ; 00525012

