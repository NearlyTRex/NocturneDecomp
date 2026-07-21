; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_motion_cpp_CMotionController_advanceFrameToExitPoint_FUN_004e1bd0(int *param_1,int param_2,float param_3,float *param_4,undefined4 *param_5)
;
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_motion.cpp_CMotionController_advance_FUN_004e11c0 at 004e14cc
;
; Referenced Globals:
;   undefined4 DAT_0058b39d
;   undefined4 DAT_0058b3a5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e1bd0
        ;   Label: core_motion.cpp_CMotionController_advanceFrameToExitPoint_FUN_004e1bd0
    PUSH ESI                            ; 004e1bd1
    PUSH EDI                            ; 004e1bd2
    PUSH EBP                            ; 004e1bd3
    MOV EBP,ESP                         ; 004e1bd4
    SUB ESP,0x1c                        ; 004e1bd6
    AND ESP,0xfffffff8                  ; 004e1bd9
    IMUL EBX,dword ptr [EBP + 0x18],0x54c ; 004e1bdc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e1be3
    MOV EAX,dword ptr [EAX]             ; 004e1be6
    ADD EAX,0x968                       ; 004e1be8
    ADD EBX,EAX                         ; 004e1bed
    MOV EAX,dword ptr [EBP + 0x20]      ; 004e1bef
    FLD float ptr [EAX]                 ; 004e1bf2
    FMUL float ptr [EBX + 0x20]         ; 004e1bf4
    XOR ECX,ECX                         ; 004e1bf7
    XOR ESI,ESI                         ; 004e1bf9
    FADD float ptr [EBP + 0x1c]         ; 004e1bfb
    MOV dword ptr [ESP + 0x10],ECX      ; 004e1bfe
    FSTP float ptr [ESP + 0xc]          ; 004e1c02
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e1c06
    MOV EDI,dword ptr [EBX + 0x4a4]     ; 004e1c0a
    MOV dword ptr [ESP + 0x14],EAX      ; 004e1c10
    TEST EDI,EDI                        ; 004e1c14
    JLE 0x004e1c42                      ; 004e1c16
        ;   XREF to: 004e1c42 (CONDITIONAL_JUMP)  ; LAB_004e1c42
    MOV ECX,EBX                         ; 004e1c18
    FLD float ptr [EBP + 0x1c]          ; 004e1c1a
        ;   Label: LAB_004e1c1a
    FILD dword ptr [ECX + 0x4a8]        ; 004e1c1d
    FSTP float ptr [ESP + 0x8]          ; 004e1c23
    FCOMP float ptr [ESP + 0x8]         ; 004e1c27
    FNSTSW AX                           ; 004e1c2b
    SAHF                                ; 004e1c2d
    JBE 0x004e1cde                      ; 004e1c2e
        ;   XREF to: 004e1cde (CONDITIONAL_JUMP)  ; LAB_004e1cde
    INC ESI                             ; 004e1c34
        ;   Label: LAB_004e1c34
    MOV EAX,dword ptr [EBX + 0x4a4]     ; 004e1c35
    ADD ECX,0x8                         ; 004e1c3b
    CMP ESI,EAX                         ; 004e1c3e
    JL 0x004e1c1a                       ; 004e1c40
        ;   XREF to: 004e1c1a (CONDITIONAL_JUMP)  ; LAB_004e1c1a
    FILD dword ptr [EBX + 0x28]         ; 004e1c42
        ;   Label: LAB_004e1c42
    FADD double ptr [0x0058b39d]        ; 004e1c45 | DAT_0058b39d
    FLD float ptr [ESP + 0xc]           ; 004e1c4b
    FCOMPP                              ; 004e1c4f
    FNSTSW AX                           ; 004e1c51
    SAHF                                ; 004e1c53
    JC 0x004e1d17                       ; 004e1c54
        ;   XREF to: 004e1d17 (CONDITIONAL_JUMP)  ; LAB_004e1d17
    MOV ECX,dword ptr [EBX + 0x60]      ; 004e1c5a
    ADD ECX,dword ptr [EBX + 0x28]      ; 004e1c5d
    PUSH 0x3f800000                     ; 004e1c60
    MOV dword ptr [ESP + 0x1c],ECX      ; 004e1c65
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e1c69
    FILD dword ptr [ESP + 0x1c]         ; 004e1c6c
    SUB ESP,0x4                         ; 004e1c70
    MOV EAX,dword ptr [EAX + 0x50]      ; 004e1c73
    FSTP float ptr [ESP]                ; 004e1c76
    FILD dword ptr [EBX + 0x60]         ; 004e1c79
    FADD float ptr [EBP + 0x1c]         ; 004e1c7c
    SUB ESP,0x4                         ; 004e1c7f
    MOV EDI,dword ptr [EBP + 0x14]      ; 004e1c82
    FSTP float ptr [ESP]                ; 004e1c85
    PUSH EDI                            ; 004e1c88
    CALL dword ptr [EAX + 0x8]          ; 004e1c89
    MOV ECX,0x6                         ; 004e1c8c
    ADD ESP,0x10                        ; 004e1c91
    LEA ESI,[EBX + 0x2c]                ; 004e1c94
    MOV EDI,dword ptr [EBP + 0x24]      ; 004e1c97
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e1c9a
    MOVSD.REP ES:EDI,ESI                ; 004e1c9d
    MOV EDX,dword ptr [EAX + 0x2c]      ; 004e1c9f
    TEST EDX,EDX                        ; 004e1ca2
    JZ 0x004e1cc5                       ; 004e1ca4
        ;   XREF to: 004e1cc5 (CONDITIONAL_JUMP)  ; LAB_004e1cc5
    MOV ESI,dword ptr [EDX + 0x4]       ; 004e1ca6
    MOV ECX,EDX                         ; 004e1ca9
    CMP ESI,0x2                         ; 004e1cab
    JNZ 0x004e1cc5                      ; 004e1cae
        ;   XREF to: 004e1cc5 (CONDITIONAL_JUMP)  ; LAB_004e1cc5
    MOV EAX,dword ptr [EBP + 0x24]      ; 004e1cb0
    MOV ECX,dword ptr [EDX + 0x8]       ; 004e1cb3
    MOV dword ptr [EAX + 0x8],ECX       ; 004e1cb6
    MOV ECX,dword ptr [EBP + 0x14]      ; 004e1cb9
    MOV ECX,dword ptr [ECX + 0x2c]      ; 004e1cbc
    MOV EDX,dword ptr [ECX + 0xc]       ; 004e1cbf
    MOV dword ptr [EAX + 0xc],EDX       ; 004e1cc2
    FILD dword ptr [EBX + 0x28]         ; 004e1cc5
        ;   Label: LAB_004e1cc5
    FSUB float ptr [EBP + 0x1c]         ; 004e1cc8
        ;   Label: LAB_004e1cc8
    FDIV float ptr [EBX + 0x20]         ; 004e1ccb
    MOV EAX,dword ptr [EBP + 0x20]      ; 004e1cce
    FSTP float ptr [EAX]                ; 004e1cd1
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e1cd3
        ;   Label: LAB_004e1cd3
    MOV ESP,EBP                         ; 004e1cd7
    POP EBP                             ; 004e1cd9
    POP EDI                             ; 004e1cda
    POP ESI                             ; 004e1cdb
    POP EBX                             ; 004e1cdc
    RET                                 ; 004e1cdd
    FLD float ptr [ESP + 0xc]           ; 004e1cde
        ;   Label: LAB_004e1cde
    FADD double ptr [0x0058b3a5]        ; 004e1ce2 | DAT_0058b3a5
    FLD float ptr [ESP + 0x8]           ; 004e1ce8
    FSTP double ptr [ESP]               ; 004e1cec
    FCOMP double ptr [ESP]              ; 004e1cef
    FNSTSW AX                           ; 004e1cf2
    SAHF                                ; 004e1cf4
    JC 0x004e1c34                       ; 004e1cf5
        ;   XREF to: 004e1c34 (CONDITIONAL_JUMP)  ; LAB_004e1c34
    FLD double ptr [ESP]                ; 004e1cfb
    MOV EAX,dword ptr [ECX + 0x4ac]     ; 004e1cfe
    FADD double ptr [0x0058b3a5]        ; 004e1d04 | DAT_0058b3a5
    MOV dword ptr [ESP + 0x10],EAX      ; 004e1d0a
    FSTP float ptr [ESP + 0xc]          ; 004e1d0e
    JMP 0x004e1c34                      ; 004e1d12
        ;   XREF to: 004e1c34 (UNCONDITIONAL_JUMP)  ; LAB_004e1c34
    PUSH 0x3f800000                     ; 004e1d17
        ;   Label: LAB_004e1d17
    FILD dword ptr [EBX + 0x60]         ; 004e1d1c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e1d1f
    FLD ST0                             ; 004e1d22
    FADD float ptr [ESP + 0x10]         ; 004e1d24
    SUB ESP,0x4                         ; 004e1d28
    MOV EAX,dword ptr [EAX + 0x50]      ; 004e1d2b
    FSTP float ptr [ESP]                ; 004e1d2e
    FADD float ptr [EBP + 0x1c]         ; 004e1d31
    SUB ESP,0x4                         ; 004e1d34
    MOV EDX,dword ptr [EBP + 0x14]      ; 004e1d37
    FSTP float ptr [ESP]                ; 004e1d3a
    PUSH EDX                            ; 004e1d3d
    CALL dword ptr [EAX + 0x8]          ; 004e1d3e
    ADD ESP,0x10                        ; 004e1d41
    MOV EAX,dword ptr [EBP + 0x24]      ; 004e1d44
    MOV ECX,dword ptr [EBP + 0x24]      ; 004e1d47
    MOV dword ptr [EAX + 0x4],0x1       ; 004e1d4a
    MOV EAX,dword ptr [EBP + 0x18]      ; 004e1d51
    MOV dword ptr [ECX + 0x14],0x0      ; 004e1d54
    MOV dword ptr [ECX + 0x8],EAX       ; 004e1d5b
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e1d5e
    MOV dword ptr [ECX + 0xc],EAX       ; 004e1d62
    FLD float ptr [ECX + 0xc]           ; 004e1d65
    FCOMP float ptr [ESP + 0x14]        ; 004e1d68
    FNSTSW AX                           ; 004e1d6c
    SAHF                                ; 004e1d6e
    JNC 0x004e1cd3                      ; 004e1d6f
        ;   XREF to: 004e1cd3 (CONDITIONAL_JUMP)  ; LAB_004e1cd3
    FLD float ptr [ECX + 0xc]           ; 004e1d75
    JMP 0x004e1cc8                      ; 004e1d78
        ;   XREF to: 004e1cc8 (UNCONDITIONAL_JUMP)  ; LAB_004e1cc8

