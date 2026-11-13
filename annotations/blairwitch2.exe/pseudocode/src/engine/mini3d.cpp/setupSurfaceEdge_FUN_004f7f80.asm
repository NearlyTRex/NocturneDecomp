; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setupSurfaceEdge_FUN_004f7f80(float *v0,float *v1)
;
; Parameters:
; float *          Stack[0x4]:4   v0
; float *          Stack[0x8]:4   v1
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_mini3d.cpp_fillSurfaceTriangle_FUN_004f8110 at 004f8179
;
; Referenced Globals:
;   undefined4 DAT_00618118
;   undefined4 DAT_00618120
;   undefined4 DAT_01d17ab4
;   undefined4 DAT_01d17ab8
;   undefined4 DAT_01d17ac0
;   undefined4 DAT_01d17ac4
;   undefined4 DAT_01d17fb8
;   undefined4 DAT_01d17fbc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f7f80
        ;   Label: engine_mini3d.cpp_setupSurfaceEdge_FUN_004f7f80
    PUSH ESI                            ; 004f7f81
    PUSH EDI                            ; 004f7f82
    PUSH EBP                            ; 004f7f83
    SUB ESP,0x10                        ; 004f7f84
    MOV EBP,dword ptr [ESP + 0x24]      ; 004f7f87
    MOV EAX,[0x01d17ab4]                ; 004f7f8b | DAT_01d17ab4
    LEA EDI,[EAX*0x4 + 0x0]             ; 004f7f90
    ADD EDI,EAX                         ; 004f7f97
    MOV EAX,dword ptr [ESP + 0x28]      ; 004f7f99
    SHL EDI,0x4                         ; 004f7f9d
    FLD float ptr [EBP + 0x18]          ; 004f7fa0
    ADD EDI,0x1d17ab8                   ; 004f7fa3
    FCOMP float ptr [EAX + 0x18]        ; 004f7fa9
    FNSTSW AX                           ; 004f7fac
    SAHF                                ; 004f7fae
    JBE 0x004f7fbb                      ; 004f7faf
        ;   XREF to: 004f7fbb (CONDITIONAL_JUMP)  ; LAB_004f7fbb
    MOV EAX,EBP                         ; 004f7fb1
    MOV EBP,dword ptr [ESP + 0x28]      ; 004f7fb3
    MOV dword ptr [ESP + 0x28],EAX      ; 004f7fb7
    LEA EBX,[EBP + 0x18]                ; 004f7fbb
        ;   Label: LAB_004f7fbb
    MOV EAX,EDI                         ; 004f7fbe
    FLD float ptr [EBX]                 ; 004f7fc0
    FLD float ptr [0x00618118]          ; 004f7fc2 | DAT_00618118
    FSUBP                               ; 004f7fc8
    FISTP dword ptr [EAX]               ; 004f7fca | DAT_01d17ab8
    MOV EBX,dword ptr [ESP + 0x28]      ; 004f7fcc
    LEA EAX,[EDI + 0x4]                 ; 004f7fd0
    ADD EBX,0x18                        ; 004f7fd3
    FLD float ptr [EBX]                 ; 004f7fd6
    FLD float ptr [0x00618118]          ; 004f7fd8 | DAT_00618118
    FSUBP                               ; 004f7fde
    FISTP dword ptr [EAX]               ; 004f7fe0
    MOV EAX,dword ptr [EDI]             ; 004f7fe2 | DAT_01d17ab8
    CMP EAX,dword ptr [EDI + 0x4]       ; 004f7fe4
    JZ 0x004f80a8                       ; 004f7fe7
        ;   XREF to: 004f80a8 (CONDITIONAL_JUMP)  ; LAB_004f80a8
    CMP EAX,dword ptr [0x01d17fb8]      ; 004f7fed | DAT_01d17fb8
    JGE 0x004f7ffa                      ; 004f7ff3
        ;   XREF to: 004f7ffa (CONDITIONAL_JUMP)  ; LAB_004f7ffa
    MOV [0x01d17fb8],EAX                ; 004f7ff5 | DAT_01d17fb8
    MOV EBX,dword ptr [0x01d17fbc]      ; 004f7ffa | DAT_01d17fbc
        ;   Label: LAB_004f7ffa
    MOV EAX,dword ptr [EDI + 0x4]       ; 004f8000
    CMP EAX,EBX                         ; 004f8003
    JLE 0x004f800c                      ; 004f8005
        ;   XREF to: 004f800c (CONDITIONAL_JUMP)  ; LAB_004f800c
    MOV [0x01d17fbc],EAX                ; 004f8007 | DAT_01d17fbc
    MOV EAX,dword ptr [ESP + 0x28]      ; 004f800c
        ;   Label: LAB_004f800c
    FLD float ptr [EAX + 0x18]          ; 004f8010
    FSUB float ptr [EBP + 0x18]         ; 004f8013
    FSTP float ptr [ESP + 0x8]          ; 004f8016
    CMP dword ptr [ESP + 0x8],0x3f800000 ; 004f801a
    JGE 0x004f80b0                      ; 004f8022
        ;   XREF to: 004f80b0 (CONDITIONAL_JUMP)  ; LAB_004f80b0
    XOR EAX,EAX                         ; 004f8028
    MOV dword ptr [ESP + 0x8],EAX       ; 004f802a
    FLD1                                ; 004f802e
        ;   Label: LAB_004f802e
    MOV EAX,dword ptr [ESP + 0x28]      ; 004f8030
    FSUB float ptr [EBP + 0x18]         ; 004f8034
    FILD dword ptr [EDI]                ; 004f8037 | DAT_01d17ab8
    FLD float ptr [EAX + 0x14]          ; 004f8039
    FSUB float ptr [EBP + 0x14]         ; 004f803c
    FXCH                                ; 004f803f
    FADDP ST2,ST0                       ; 004f8041
    FLD float ptr [ESP + 0x8]           ; 004f8043
    FXCH                                ; 004f8047
    FMUL ST1                            ; 004f8049
    FXCH ST2                            ; 004f804b
    FMULP                               ; 004f804d
    LEA EBX,[ESP + 0x4]                 ; 004f804f
    LEA EAX,[EDI + 0xc]                 ; 004f8053
    FXCH                                ; 004f8056
    FSTP float ptr [ESP + 0x4]          ; 004f8058
    FSTP float ptr [ESP]                ; 004f805c
    FLD float ptr [EBX]                 ; 004f805f
    FLD float ptr [0x00618120]          ; 004f8061 | DAT_00618120
    FMULP                               ; 004f8067
    FLD float ptr [0x00618118]          ; 004f8069 | DAT_00618118
    FSUBP                               ; 004f806f
    FISTP dword ptr [EAX]               ; 004f8071 | DAT_01d17ac4
    MOV EAX,dword ptr [ESP + 0x28]      ; 004f8073
    FLD float ptr [EAX + 0x14]          ; 004f8077
    FSUB float ptr [EBP + 0x14]         ; 004f807a
    FMUL float ptr [ESP]                ; 004f807d
    LEA EBX,[ESP + 0xc]                 ; 004f8080
    FADD float ptr [EBP + 0x14]         ; 004f8084
    LEA EAX,[EDI + 0x8]                 ; 004f8087
    FSTP float ptr [ESP + 0xc]          ; 004f808a
    FLD float ptr [EBX]                 ; 004f808e
    FLD float ptr [0x00618120]          ; 004f8090 | DAT_00618120
    FMULP                               ; 004f8096
    FLD float ptr [0x00618118]          ; 004f8098 | DAT_00618118
    FSUBP                               ; 004f809e
    FISTP dword ptr [EAX]               ; 004f80a0 | DAT_01d17ac0
    INC dword ptr [0x01d17ab4]          ; 004f80a2 | DAT_01d17ab4
    ADD ESP,0x10                        ; 004f80a8
        ;   Label: LAB_004f80a8
    POP EBP                             ; 004f80ab
    POP EDI                             ; 004f80ac
    POP ESI                             ; 004f80ad
    POP EBX                             ; 004f80ae
    RET                                 ; 004f80af
    FLD1                                ; 004f80b0
        ;   Label: LAB_004f80b0
    FDIV float ptr [ESP + 0x8]          ; 004f80b2
    FSTP float ptr [ESP + 0x8]          ; 004f80b6
    JMP 0x004f802e                      ; 004f80ba
        ;   XREF to: 004f802e (UNCONDITIONAL_JUMP)  ; LAB_004f802e

