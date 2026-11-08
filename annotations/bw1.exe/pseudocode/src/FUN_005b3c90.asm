; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_005b3c90(int param_1,int *param_2,float param_3,float param_4)
;
;
; XREF[1]:
;   FUN_005b3d70 at 005b3e68
;
; Referenced Globals:
;   undefined4 DAT_005f9ec7
;   undefined4 DAT_02c9d294
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005b3c90
        ;   Label: FUN_005b3c90
    PUSH EDI                            ; 005b3c91
    SUB ESP,0x10                        ; 005b3c92
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005b3c95
    MOV EAX,dword ptr [ESP + 0x20]      ; 005b3c99
    CMP EDX,dword ptr [EAX]             ; 005b3c9d
    JL 0x005b3d2f                       ; 005b3c9f
        ;   XREF to: 005b3d2f (CONDITIONAL_JUMP)  ; LAB_005b3d2f
    CMP EDX,dword ptr [EAX + 0x4]       ; 005b3ca5
        ;   Label: LAB_005b3ca5
    JLE 0x005b3cad                      ; 005b3ca8
        ;   XREF to: 005b3cad (CONDITIONAL_JUMP)  ; LAB_005b3cad
    MOV dword ptr [EAX + 0x4],EDX       ; 005b3caa
    FLD float ptr [ESP + 0x24]          ; 005b3cad
        ;   Label: LAB_005b3cad
    FADD float ptr [ESP + 0x28]         ; 005b3cb1
    FMUL double ptr [0x005f9ec7]        ; 005b3cb5 | DAT_005f9ec7
    MOV ESI,dword ptr [0x02c9d294]      ; 005b3cbb | DAT_02c9d294
    FSTP float ptr [ESP]                ; 005b3cc1
    TEST ESI,ESI                        ; 005b3cc4
    JZ 0x005b3ccb                       ; 005b3cc6
        ;   XREF to: 005b3ccb (CONDITIONAL_JUMP)  ; LAB_005b3ccb
    MOV dword ptr [EAX + 0x8],EDX       ; 005b3cc8
    MOV EDI,dword ptr [EAX + 0x8]       ; 005b3ccb
        ;   Label: LAB_005b3ccb
    CMP EDX,EDI                         ; 005b3cce
    JGE 0x005b3d3b                      ; 005b3cd0
        ;   XREF to: 005b3d3b (CONDITIONAL_JUMP)  ; LAB_005b3d3b
    MOV ECX,dword ptr [EAX]             ; 005b3cd2
    CMP ECX,EDI                         ; 005b3cd4
    JGE 0x005b3d36                      ; 005b3cd6
        ;   XREF to: 005b3d36 (CONDITIONAL_JUMP)  ; LAB_005b3d36
    SUB EDX,ECX                         ; 005b3cd8
    MOV dword ptr [ESP + 0xc],EDX       ; 005b3cda
    FILD dword ptr [ESP + 0xc]          ; 005b3cde
    FLD float ptr [ESP]                 ; 005b3ce2
    MOV EDX,EDI                         ; 005b3ce5
    FLD float ptr [ESP + 0x24]          ; 005b3ce7
    FXCH                                ; 005b3ceb
        ;   Label: LAB_005b3ceb
    FSUB ST0,ST1                        ; 005b3ced
    SUB EDX,ECX                         ; 005b3cef
    FMULP ST2                           ; 005b3cf1
    MOV dword ptr [ESP + 0xc],EDX       ; 005b3cf3
    FILD dword ptr [ESP + 0xc]          ; 005b3cf7
    FDIVP ST2,ST0                       ; 005b3cfb
    FADDP                               ; 005b3cfd
    FSTP float ptr [ESP + 0x4]          ; 005b3cff
    FLD float ptr [ESP + 0x4]           ; 005b3d03
    FCOMP float ptr [ESP + 0x24]        ; 005b3d07
    FNSTSW AX                           ; 005b3d0b
    SAHF                                ; 005b3d0d
    JC 0x005b3d57                       ; 005b3d0e
        ;   XREF to: 005b3d57 (CONDITIONAL_JUMP)  ; LAB_005b3d57
    FLD float ptr [ESP + 0x4]           ; 005b3d10
    FCOMP float ptr [ESP + 0x28]        ; 005b3d14
    FNSTSW AX                           ; 005b3d18
    SAHF                                ; 005b3d1a
    JBE 0x005b3d5d                      ; 005b3d1b
        ;   XREF to: 005b3d5d (CONDITIONAL_JUMP)  ; LAB_005b3d5d
    MOV EAX,dword ptr [ESP + 0x28]      ; 005b3d1d
    MOV dword ptr [ESP + 0x8],EAX       ; 005b3d21
        ;   Label: LAB_005b3d21
    MOV EAX,dword ptr [ESP + 0x8]       ; 005b3d25
    ADD ESP,0x10                        ; 005b3d29
    POP EDI                             ; 005b3d2c
    POP ESI                             ; 005b3d2d
    RET                                 ; 005b3d2e
    MOV dword ptr [EAX],EDX             ; 005b3d2f
        ;   Label: LAB_005b3d2f
    JMP 0x005b3ca5                      ; 005b3d31
        ;   XREF to: 005b3ca5 (UNCONDITIONAL_JUMP)  ; LAB_005b3ca5
    MOV EAX,dword ptr [ESP]             ; 005b3d36
        ;   Label: LAB_005b3d36
    JMP 0x005b3d21                      ; 005b3d39
        ;   XREF to: 005b3d21 (UNCONDITIONAL_JUMP)  ; LAB_005b3d21
    MOV ECX,dword ptr [EAX + 0x4]       ; 005b3d3b
        ;   Label: LAB_005b3d3b
    CMP ECX,EDI                         ; 005b3d3e
    JLE 0x005b3d36                      ; 005b3d40
        ;   XREF to: 005b3d36 (CONDITIONAL_JUMP)  ; LAB_005b3d36
    SUB EDX,ECX                         ; 005b3d42
    MOV dword ptr [ESP + 0xc],EDX       ; 005b3d44
    FILD dword ptr [ESP + 0xc]          ; 005b3d48
    FLD float ptr [ESP]                 ; 005b3d4c
    MOV EDX,EDI                         ; 005b3d4f
    FLD float ptr [ESP + 0x28]          ; 005b3d51
    JMP 0x005b3ceb                      ; 005b3d55
        ;   XREF to: 005b3ceb (UNCONDITIONAL_JUMP)  ; LAB_005b3ceb
    MOV EAX,dword ptr [ESP + 0x24]      ; 005b3d57
        ;   Label: LAB_005b3d57
    JMP 0x005b3d21                      ; 005b3d5b
        ;   XREF to: 005b3d21 (UNCONDITIONAL_JUMP)  ; LAB_005b3d21
    MOV EAX,dword ptr [ESP + 0x4]       ; 005b3d5d
        ;   Label: LAB_005b3d5d
    MOV dword ptr [ESP + 0x8],EAX       ; 005b3d61
    MOV EAX,dword ptr [ESP + 0x8]       ; 005b3d65
    ADD ESP,0x10                        ; 005b3d69
    POP EDI                             ; 005b3d6c
    POP ESI                             ; 005b3d6d
    RET                                 ; 005b3d6e

