; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_advanceTween_FUN_004e1d80(int *param_1,int param_2,float param_3,float *param_4)
;
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_motion.cpp_CMotionController_advance_FUN_004e11c0 at 004e1384
;
; Referenced Globals:
;   double DOUBLE_0058b3ad = 0.00100000000000000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e1d80
        ;   Label: core_motion.cpp_CMotionController_advanceTween_FUN_004e1d80
    PUSH ESI                            ; 004e1d81
    PUSH EDI                            ; 004e1d82
    PUSH EBP                            ; 004e1d83
    MOV EBP,ESP                         ; 004e1d84
    SUB ESP,0x18                        ; 004e1d86
    AND ESP,0xfffffff8                  ; 004e1d89
    IMUL EBX,dword ptr [EBP + 0x18],0x54c ; 004e1d8c
    MOV EDX,dword ptr [EBP + 0x14]      ; 004e1d93
    MOV EDX,dword ptr [EDX]             ; 004e1d96
    ADD EDX,0x968                       ; 004e1d98
    ADD EBX,EDX                         ; 004e1d9e
    MOV EDX,dword ptr [EBP + 0x20]      ; 004e1da0
    FLD float ptr [EDX]                 ; 004e1da3
    FMUL float ptr [EBX + 0x20]         ; 004e1da5
    FADD float ptr [EBP + 0x1c]         ; 004e1da8
    XOR ECX,ECX                         ; 004e1dab
    FSTP float ptr [ESP + 0x8]          ; 004e1dad
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e1db1
    MOV ESI,dword ptr [EBX + 0x4a4]     ; 004e1db5
    MOV dword ptr [ESP + 0x10],EDX      ; 004e1dbb
    TEST ESI,ESI                        ; 004e1dbf
    JLE 0x004e1de9                      ; 004e1dc1
        ;   XREF to: 004e1de9 (CONDITIONAL_JUMP)  ; LAB_004e1de9
    MOV EDX,EBX                         ; 004e1dc3
    FLD float ptr [EBP + 0x1c]          ; 004e1dc5
        ;   Label: LAB_004e1dc5
    FILD dword ptr [EDX + 0x4a8]        ; 004e1dc8
    FSTP float ptr [ESP + 0xc]          ; 004e1dce
    FCOMP float ptr [ESP + 0xc]         ; 004e1dd2
    FNSTSW AX                           ; 004e1dd6
    SAHF                                ; 004e1dd8
    JBE 0x004e1e19                      ; 004e1dd9
        ;   XREF to: 004e1e19 (CONDITIONAL_JUMP)  ; LAB_004e1e19
    INC ECX                             ; 004e1ddb
        ;   Label: LAB_004e1ddb
    MOV EDI,dword ptr [EBX + 0x4a4]     ; 004e1ddc
    ADD EDX,0x8                         ; 004e1de2
    CMP ECX,EDI                         ; 004e1de5
    JL 0x004e1dc5                       ; 004e1de7
        ;   XREF to: 004e1dc5 (CONDITIONAL_JUMP)  ; LAB_004e1dc5
    FLD float ptr [ESP + 0x8]           ; 004e1de9
        ;   Label: LAB_004e1de9
    FILD dword ptr [EBX + 0x64]         ; 004e1ded
    FSTP float ptr [ESP + 0x14]         ; 004e1df0
    FCOMP float ptr [ESP + 0x14]        ; 004e1df4
    FNSTSW AX                           ; 004e1df8
    SAHF                                ; 004e1dfa
    JBE 0x004e1e05                      ; 004e1dfb
        ;   XREF to: 004e1e05 (CONDITIONAL_JUMP)  ; LAB_004e1e05
    MOV EDX,dword ptr [ESP + 0x14]      ; 004e1dfd
    MOV dword ptr [ESP + 0x8],EDX       ; 004e1e01
    FLD float ptr [ESP + 0x8]           ; 004e1e05
        ;   Label: LAB_004e1e05
    FCOMP float ptr [ESP + 0x10]        ; 004e1e09
    FNSTSW AX                           ; 004e1e0d
    SAHF                                ; 004e1e0f
    JC 0x004e1e41                       ; 004e1e10
        ;   XREF to: 004e1e41 (CONDITIONAL_JUMP)  ; LAB_004e1e41
    MOV ESP,EBP                         ; 004e1e12
    POP EBP                             ; 004e1e14
    POP EDI                             ; 004e1e15
    POP ESI                             ; 004e1e16
    POP EBX                             ; 004e1e17
    RET                                 ; 004e1e18
    FLD float ptr [ESP + 0x8]           ; 004e1e19
        ;   Label: LAB_004e1e19
    FADD double ptr [0x0058b3ad]        ; 004e1e1d | DOUBLE_0058b3ad
    FLD float ptr [ESP + 0xc]           ; 004e1e23
    FSTP double ptr [ESP]               ; 004e1e27
    FCOMP double ptr [ESP]              ; 004e1e2a
    FNSTSW AX                           ; 004e1e2d
    SAHF                                ; 004e1e2f
    JC 0x004e1ddb                       ; 004e1e30
        ;   XREF to: 004e1ddb (CONDITIONAL_JUMP)  ; LAB_004e1ddb
    FLD double ptr [ESP]                ; 004e1e32
    FADD double ptr [0x0058b3ad]        ; 004e1e35 | DOUBLE_0058b3ad
    FSTP float ptr [ESP + 0x8]          ; 004e1e3b
    JMP 0x004e1ddb                      ; 004e1e3f
        ;   XREF to: 004e1ddb (UNCONDITIONAL_JUMP)  ; LAB_004e1ddb
    FLD float ptr [ESP + 0x8]           ; 004e1e41
        ;   Label: LAB_004e1e41
    FSUB float ptr [EBP + 0x1c]         ; 004e1e45
    FDIV float ptr [EBX + 0x20]         ; 004e1e48
    MOV EDX,dword ptr [EBP + 0x20]      ; 004e1e4b
    FSTP float ptr [EDX]                ; 004e1e4e
    MOV ESP,EBP                         ; 004e1e50
    POP EBP                             ; 004e1e52
    POP EDI                             ; 004e1e53
    POP ESI                             ; 004e1e54
    POP EBX                             ; 004e1e55
    RET                                 ; 004e1e56

