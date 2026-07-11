; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00468a20(undefined4 *param_1,float param_2,float param_3,float param_4,float param_5,float param_6,undefined4 param_7,undefined4 param_8)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_00510a40 at 00510a6f
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00468a20
        ;   Label: FUN_00468a20
    MOV EBP,ESP                         ; 00468a21
    SUB ESP,0x14                        ; 00468a23
    AND ESP,0xfffffff8                  ; 00468a26
    MOV EDX,dword ptr [EBP + 0x8]       ; 00468a29
    FLD float ptr [EBP + 0x14]          ; 00468a2c
    FMUL ST0                            ; 00468a2f
    FLD float ptr [EBP + 0x18]          ; 00468a31
    MOV EAX,dword ptr [EBP + 0xc]       ; 00468a34
    FMUL float ptr [EBP + 0x18]         ; 00468a37
    MOV dword ptr [EDX + 0x10],EAX      ; 00468a3a
    MOV EAX,dword ptr [EBP + 0x10]      ; 00468a3d
    MOV dword ptr [EDX + 0x14],EAX      ; 00468a40
    MOV EAX,dword ptr [EBP + 0x14]      ; 00468a43
    MOV dword ptr [EDX + 0x18],EAX      ; 00468a46
    MOV EAX,dword ptr [EBP + 0x18]      ; 00468a49
    MOV dword ptr [EDX + 0x1c],EAX      ; 00468a4c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00468a4f
    MOV dword ptr [EDX + 0x20],EAX      ; 00468a52
    MOV EAX,dword ptr [EBP + 0x24]      ; 00468a55
    MOV dword ptr [EDX + 0x24],EAX      ; 00468a58
    MOV EAX,dword ptr [EBP + 0x20]      ; 00468a5b
    FADDP                               ; 00468a5e
    MOV dword ptr [EDX + 0x28],EAX      ; 00468a60
    FSQRT                               ; 00468a63
    FLD float ptr [EBP + 0x1c]          ; 00468a65
    FDIV ST0,ST1                        ; 00468a68
    FLD float ptr [EBP + 0xc]           ; 00468a6a
    FMUL float ptr [EBP + 0x14]         ; 00468a6d
    FLD float ptr [EBP + 0x10]          ; 00468a70
    FMUL float ptr [EBP + 0x18]         ; 00468a73
    FLD1                                ; 00468a76
    FADDP ST3,ST0                       ; 00468a78
    FLD ST2                             ; 00468a7a
    FMUL float ptr [EBP + 0x14]         ; 00468a7c
    FXCH                                ; 00468a7f
    FADDP ST2,ST0                       ; 00468a81
    FMUL float ptr [EBP + 0x14]         ; 00468a83
    FXCH                                ; 00468a86
    FSTP float ptr [EDX + 0x2c]         ; 00468a88
    FADD float ptr [EDX + 0x2c]         ; 00468a8b
    FXCH                                ; 00468a8e
    FMUL float ptr [EBP + 0x18]         ; 00468a90
    FMUL float ptr [EBP + 0x18]         ; 00468a93
    MOV dword ptr [EDX],0x3f8147ae      ; 00468a96
    FXCH ST2                            ; 00468a9c
    FST float ptr [ESP]                 ; 00468a9e
    FXCH ST2                            ; 00468aa1
    FADDP                               ; 00468aa3
    FLDZ                                ; 00468aa5
    FXCH                                ; 00468aa7
    FSTP float ptr [EDX + 0x30]         ; 00468aa9
    FCOMPP                              ; 00468aac
    FNSTSW AX                           ; 00468aae
    SAHF                                ; 00468ab0
    JNC 0x00468ad0                      ; 00468ab1
        ;   XREF to: 00468ad0 (CONDITIONAL_JUMP)  ; LAB_00468ad0
    FLD1                                ; 00468ab3
    FLD float ptr [EBP + 0x14]          ; 00468ab5
    FXCH                                ; 00468ab8
    FDIV float ptr [ESP]                ; 00468aba
    FXCH                                ; 00468abd
    FMUL ST1                            ; 00468abf
    FLD float ptr [EBP + 0x18]          ; 00468ac1
    FMULP ST2                           ; 00468ac4
    FSTP float ptr [EDX + 0x34]         ; 00468ac6
    FSTP float ptr [EDX + 0x38]         ; 00468ac9
    MOV ESP,EBP                         ; 00468acc
    POP EBP                             ; 00468ace
    RET                                 ; 00468acf
    MOV dword ptr [EDX + 0x38],0x0      ; 00468ad0
        ;   Label: LAB_00468ad0
    MOV dword ptr [EDX + 0x34],0x0      ; 00468ad7
    MOV ESP,EBP                         ; 00468ade
    POP EBP                             ; 00468ae0
    RET                                 ; 00468ae1

