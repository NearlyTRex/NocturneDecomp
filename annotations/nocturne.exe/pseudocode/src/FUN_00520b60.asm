; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00520b60(int param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00520e40 at 00520e82
;
; Referenced Globals:
;   undefined1* switchdataD_00520b44 = 00520bf0
;   string s_limb?.wav_005920d4
;   undefined4 DAT_005920e5
;   undefined4 DAT_005920ed
;   undefined4 DAT_005920f5
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c777cc
;
; Called Functions:
;   FUN_0040dea0
;   FUN_00415b30
;   FUN_00416d40
;   FUN_00427e40
;   FUN_00427eb0
;   FUN_0042b490
;   FUN_0056488c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00520b60
        ;   Label: FUN_00520b60
    PUSH ESI                            ; 00520b61
    PUSH EDI                            ; 00520b62
    PUSH EBP                            ; 00520b63
    SUB ESP,0xc                         ; 00520b64
    MOV EBX,dword ptr [ESP + 0x20]      ; 00520b67
    MOV ESI,dword ptr [ESP + 0x24]      ; 00520b6b
    MOV EDX,dword ptr [ESI + 0x30]      ; 00520b6f
    CMP EDX,0xb                         ; 00520b72
    JLE 0x00520d75                      ; 00520b75
        ;   XREF to: 00520d75 (CONDITIONAL_JUMP)  ; LAB_00520d75
    CMP EDX,0x6b                        ; 00520b7b
    JNZ 0x00520d7d                      ; 00520b7e
        ;   XREF to: 00520d7d (CONDITIONAL_JUMP)  ; LAB_00520d7d
    FLD float ptr [EBX + 0xbd60]        ; 00520b84
    FLDZ                                ; 00520b8a
    FCOMPP                              ; 00520b8c
    FNSTSW AX                           ; 00520b8e
    SAHF                                ; 00520b90
    JC 0x00520d7d                       ; 00520b91
        ;   XREF to: 00520d7d (CONDITIONAL_JUMP)  ; LAB_00520d7d
    FLD1                                ; 00520b97
    MOV EDI,dword ptr [EBX + 0xbd5c]    ; 00520b99
    FADD float ptr [EBX + 0xbd60]       ; 00520b9f
    INC EDI                             ; 00520ba5
    FSTP float ptr [EBX + 0xbd60]       ; 00520ba6
    MOV dword ptr [EBX + 0xbd5c],EDI    ; 00520bac
    CMP EDI,0x3                         ; 00520bb2
    JL 0x00520d7d                       ; 00520bb5
        ;   XREF to: 00520d7d (CONDITIONAL_JUMP)  ; LAB_00520d7d
    MOV dword ptr [ESI + 0x2c],0x3f800000 ; 00520bbb
    FLD float ptr [ESI + 0x2c]          ; 00520bc2
    FLDZ                                ; 00520bc5
    FCOMPP                              ; 00520bc7
    FNSTSW AX                           ; 00520bc9
    SAHF                                ; 00520bcb
    JNC 0x00520bf8                      ; 00520bcc
        ;   XREF to: 00520bf8 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 00520bce
    JNZ 0x00520bf8                      ; 00520bd1
        ;   XREF to: 00520bf8 (CONDITIONAL_JUMP)  ; default
    CALL FUN_0056488c                   ; 00520bd3
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; undefined FUN_0056488c()
    MOV EDX,EAX                         ; 00520bd8
    MOV EDI,0x6                         ; 00520bda
    SAR EDX,0x1f                        ; 00520bdf
    IDIV EDI                            ; 00520be2
    CMP EDX,0x5                         ; 00520be4
    JA 0x00520bf8                       ; 00520be7
        ;   XREF to: 00520bf8 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x520b44]  ; 00520be9 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xbd2c]    ; 00520bf0
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 00520bf6
        ;   Label: LAB_00520bf6
    MOV EDX,dword ptr [EBX + 0xbd2c]    ; 00520bf8
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 00520bfe
    CMP EAX,EDX                         ; 00520c00
    JNZ 0x00520dc3                      ; 00520c02
        ;   XREF to: 00520dc3 (CONDITIONAL_JUMP)  ; LAB_00520dc3
    MOV EAX,dword ptr [ESI + 0x2c]      ; 00520c08
        ;   Label: LAB_00520c08
    MOV dword ptr [ESP + 0x8],EAX       ; 00520c0b
    MOV EAX,[0x005b9354]                ; 00520c0f | DAT_005b9354
    CMP dword ptr [EAX + 0x1e0],0x0     ; 00520c14 | DAT_01c777cc
    JZ 0x00520c25                       ; 00520c1b
        ;   XREF to: 00520c25 (CONDITIONAL_JUMP)  ; LAB_00520c25
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 00520c1d
    PUSH dword ptr [ESP + 0x8]          ; 00520c25
        ;   Label: LAB_00520c25
    CALL FUN_0040dea0                   ; 00520c29
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dea0()
    ADD ESP,0x4                         ; 00520c2e
    TEST EAX,EAX                        ; 00520c31
    JZ 0x00520d4b                       ; 00520c33
        ;   XREF to: 00520d4b (CONDITIONAL_JUMP)  ; LAB_00520d4b
    PUSH 0x0                            ; 00520c39
    PUSH 0x0                            ; 00520c3b
    PUSH 0x0                            ; 00520c3d
    PUSH EBX                            ; 00520c3f
    LEA EAX,[ESI + 0xc]                 ; 00520c40
    PUSH EAX                            ; 00520c43
    LEA EAX,[EBX + 0x30]                ; 00520c44
    PUSH EAX                            ; 00520c47
    LEA EAX,[EBX + 0x20]                ; 00520c48
    PUSH EAX                            ; 00520c4b
    CALL FUN_00415b30                   ; 00520c4c
        ;   XREF to: 00415b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00415b30()
    ADD ESP,0x1c                        ; 00520c51
    MOV EDI,EAX                         ; 00520c54
    PUSH 0x0                            ; 00520c56
    MOV EBP,EAX                         ; 00520c58
    MOV EAX,dword ptr [ESI]             ; 00520c5a
    PUSH EAX                            ; 00520c5c
    PUSH EDI                            ; 00520c5d
    PUSH EBX                            ; 00520c5e
    CALL FUN_00427eb0                   ; 00520c5f
        ;   XREF to: 00427eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00427eb0()
    MOV EAX,dword ptr [ESI]             ; 00520c64
    MOV EDX,dword ptr [EBX + 0xbd2c]    ; 00520c66
    ADD ESP,0x10                        ; 00520c6c
    CMP EAX,EDX                         ; 00520c6f
    JNZ 0x00520c86                      ; 00520c71
        ;   XREF to: 00520c86 (CONDITIONAL_JUMP)  ; LAB_00520c86
    PUSH 0x0                            ; 00520c73
    MOV ECX,dword ptr [EBX + 0xbd30]    ; 00520c75
    PUSH ECX                            ; 00520c7b
    PUSH EDI                            ; 00520c7c
    PUSH EBX                            ; 00520c7d
    CALL FUN_00427eb0                   ; 00520c7e
        ;   XREF to: 00427eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00427eb0()
    ADD ESP,0x10                        ; 00520c83
    MOV EDI,dword ptr [EBX + 0xbd34]    ; 00520c86
        ;   Label: LAB_00520c86
    CMP EDI,dword ptr [ESI]             ; 00520c8c
    JNZ 0x00520ca3                      ; 00520c8e
        ;   XREF to: 00520ca3 (CONDITIONAL_JUMP)  ; LAB_00520ca3
    PUSH 0x0                            ; 00520c90
    MOV EAX,dword ptr [EBX + 0xbd38]    ; 00520c92
    PUSH EAX                            ; 00520c98
    PUSH EBP                            ; 00520c99
    PUSH EBX                            ; 00520c9a
    CALL FUN_00427eb0                   ; 00520c9b
        ;   XREF to: 00427eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00427eb0()
    ADD ESP,0x10                        ; 00520ca0
    MOV EDX,dword ptr [EBX + 0xbd50]    ; 00520ca3
        ;   Label: LAB_00520ca3
    CMP EDX,dword ptr [ESI]             ; 00520ca9
    JNZ 0x00520d0f                      ; 00520cab
        ;   XREF to: 00520d0f (CONDITIONAL_JUMP)  ; LAB_00520d0f
    PUSH 0x0                            ; 00520cad
    LEA EDI,[ESI + 0xc]                 ; 00520caf
    PUSH EDI                            ; 00520cb2
    MOV ECX,dword ptr [EBX + 0xbd34]    ; 00520cb3
    PUSH ECX                            ; 00520cb9
    PUSH EBX                            ; 00520cba
    CALL FUN_00427e40                   ; 00520cbb
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00427e40()
    ADD ESP,0x10                        ; 00520cc0
    PUSH 0x0                            ; 00520cc3
    PUSH EDI                            ; 00520cc5
    MOV EAX,dword ptr [EBX + 0xbd38]    ; 00520cc6
    PUSH EAX                            ; 00520ccc
    PUSH EBX                            ; 00520ccd
    CALL FUN_00427e40                   ; 00520cce
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00427e40()
    ADD ESP,0x10                        ; 00520cd3
    PUSH 0x0                            ; 00520cd6
    PUSH EDI                            ; 00520cd8
    MOV EDX,dword ptr [EBX + 0xbd2c]    ; 00520cd9
    PUSH EDX                            ; 00520cdf
    PUSH EBX                            ; 00520ce0
    CALL FUN_00427e40                   ; 00520ce1
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00427e40()
    ADD ESP,0x10                        ; 00520ce6
    PUSH 0x0                            ; 00520ce9
    PUSH EDI                            ; 00520ceb
    MOV ECX,dword ptr [EBX + 0xbd30]    ; 00520cec
    PUSH ECX                            ; 00520cf2
    PUSH EBX                            ; 00520cf3
    CALL FUN_00427e40                   ; 00520cf4
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00427e40()
    ADD ESP,0x10                        ; 00520cf9
    PUSH 0x0                            ; 00520cfc
    PUSH EDI                            ; 00520cfe
    MOV EDI,dword ptr [EBX + 0xbd54]    ; 00520cff
    PUSH EDI                            ; 00520d05
    PUSH EBX                            ; 00520d06
    CALL FUN_00427e40                   ; 00520d07
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00427e40()
    ADD ESP,0x10                        ; 00520d0c
    PUSH 0x5920d4                       ; 00520d0f | = "limb?.wav"
        ;   Label: LAB_00520d0f
    PUSH EBX                            ; 00520d14
    CALL FUN_0042b490                   ; 00520d15
        ;   XREF to: 0042b490 (UNCONDITIONAL_CALL)  ; undefined FUN_0042b490()
    ADD ESP,0x8                         ; 00520d1a
    PUSH EBP                            ; 00520d1d
    CALL FUN_00416d40                   ; 00520d1e
        ;   XREF to: 00416d40 (UNCONDITIONAL_CALL)  ; undefined FUN_00416d40()
    MOV EAX,dword ptr [EBX + 0xbd54]    ; 00520d23
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x2290] ; 00520d29
    ADD ESP,0x4                         ; 00520d30
    TEST EBP,EBP                        ; 00520d33
    JZ 0x00520e04                       ; 00520d35
        ;   XREF to: 00520e04 (CONDITIONAL_JUMP)  ; LAB_00520e04
    FLD float ptr [ESI + 0x8]           ; 00520d3b
        ;   Label: LAB_00520d3b
    FLD ST0                             ; 00520d3e
    FMUL double ptr [0x005920e5]        ; 00520d40 | DAT_005920e5
    FSTP ST1                            ; 00520d46
    FSTP float ptr [ESI + 0x8]          ; 00520d48
    MOV EDX,dword ptr [EBX + 0xbd54]    ; 00520d4b
        ;   Label: LAB_00520d4b
    MOV EAX,dword ptr [ESI]             ; 00520d51
    CMP EAX,EDX                         ; 00520d53
    JZ 0x00520e10                       ; 00520d55
        ;   XREF to: 00520e10 (CONDITIONAL_JUMP)  ; LAB_00520e10
    CMP EAX,dword ptr [EBX + 0xbd4c]    ; 00520d5b
    JZ 0x00520d6f                       ; 00520d61
        ;   XREF to: 00520d6f (CONDITIONAL_JUMP)  ; LAB_00520d6f
    CMP EAX,dword ptr [EBX + 0xbd50]    ; 00520d63
    JNZ 0x00520e28                      ; 00520d69
        ;   XREF to: 00520e28 (CONDITIONAL_JUMP)  ; LAB_00520e28
    MOV EAX,dword ptr [ESI + 0x4]       ; 00520d6f
        ;   Label: LAB_00520d6f
    MOV dword ptr [ESI + 0x4],EAX       ; 00520d72
    ADD ESP,0xc                         ; 00520d75
        ;   Label: LAB_00520d75
    POP EBP                             ; 00520d78
    POP EDI                             ; 00520d79
    POP ESI                             ; 00520d7a
    POP EBX                             ; 00520d7b
    RET                                 ; 00520d7c
    MOV dword ptr [ESI + 0x4],0x0       ; 00520d7d
        ;   Label: LAB_00520d7d
    ADD ESP,0xc                         ; 00520d84
    POP EBP                             ; 00520d87
    POP EDI                             ; 00520d88
    POP ESI                             ; 00520d89
    POP EBX                             ; 00520d8a
    RET                                 ; 00520d8b
    MOV EAX,dword ptr [EBX + 0xbd30]    ; 00520d8c
        ;   Label: caseD_1
    JMP 0x00520bf6                      ; 00520d92
        ;   XREF to: 00520bf6 (UNCONDITIONAL_JUMP)  ; LAB_00520bf6
    MOV EAX,dword ptr [EBX + 0xbd34]    ; 00520d97
        ;   Label: caseD_2
    JMP 0x00520bf6                      ; 00520d9d
        ;   XREF to: 00520bf6 (UNCONDITIONAL_JUMP)  ; LAB_00520bf6
    MOV EAX,dword ptr [EBX + 0xbd38]    ; 00520da2
        ;   Label: caseD_3
    JMP 0x00520bf6                      ; 00520da8
        ;   XREF to: 00520bf6 (UNCONDITIONAL_JUMP)  ; LAB_00520bf6
    MOV EAX,dword ptr [EBX + 0xbd54]    ; 00520dad
        ;   Label: caseD_4
    JMP 0x00520bf6                      ; 00520db3
        ;   XREF to: 00520bf6 (UNCONDITIONAL_JUMP)  ; LAB_00520bf6
    MOV EAX,dword ptr [EBX + 0xbd50]    ; 00520db8
        ;   Label: caseD_5
    JMP 0x00520bf6                      ; 00520dbe
        ;   XREF to: 00520bf6 (UNCONDITIONAL_JUMP)  ; LAB_00520bf6
    CMP EAX,dword ptr [EBX + 0xbd30]    ; 00520dc3
        ;   Label: LAB_00520dc3
    JZ 0x00520c08                       ; 00520dc9
        ;   XREF to: 00520c08 (CONDITIONAL_JUMP)  ; LAB_00520c08
    CMP EAX,dword ptr [EBX + 0xbd34]    ; 00520dcf
    JZ 0x00520c08                       ; 00520dd5
        ;   XREF to: 00520c08 (CONDITIONAL_JUMP)  ; LAB_00520c08
    CMP EAX,dword ptr [EBX + 0xbd38]    ; 00520ddb
    JZ 0x00520c08                       ; 00520de1
        ;   XREF to: 00520c08 (CONDITIONAL_JUMP)  ; LAB_00520c08
    CMP EAX,dword ptr [EBX + 0xbd50]    ; 00520de7
    JZ 0x00520c08                       ; 00520ded
        ;   XREF to: 00520c08 (CONDITIONAL_JUMP)  ; LAB_00520c08
    CMP EAX,dword ptr [EBX + 0xbd54]    ; 00520df3
    JZ 0x00520c08                       ; 00520df9
        ;   XREF to: 00520c08 (CONDITIONAL_JUMP)  ; LAB_00520c08
    JMP 0x00520d4b                      ; 00520dff
        ;   XREF to: 00520d4b (UNCONDITIONAL_JUMP)  ; LAB_00520d4b
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 00520e04
        ;   Label: LAB_00520e04
    JMP 0x00520d3b                      ; 00520e0b
        ;   XREF to: 00520d3b (UNCONDITIONAL_JUMP)  ; LAB_00520d3b
    FLD float ptr [ESI + 0x4]           ; 00520e10
        ;   Label: LAB_00520e10
    FLD ST0                             ; 00520e13
    FMUL double ptr [0x005920f5]        ; 00520e15 | DAT_005920f5
    FSTP ST1                            ; 00520e1b
    FSTP float ptr [ESI + 0x4]          ; 00520e1d
    ADD ESP,0xc                         ; 00520e20
    POP EBP                             ; 00520e23
    POP EDI                             ; 00520e24
    POP ESI                             ; 00520e25
    POP EBX                             ; 00520e26
    RET                                 ; 00520e27
    FLD float ptr [ESI + 0x4]           ; 00520e28
        ;   Label: LAB_00520e28
    FLD ST0                             ; 00520e2b
    FMUL double ptr [0x005920ed]        ; 00520e2d | DAT_005920ed
    FSTP ST1                            ; 00520e33
    FSTP float ptr [ESI + 0x4]          ; 00520e35
    ADD ESP,0xc                         ; 00520e38
    POP EBP                             ; 00520e3b
    POP EDI                             ; 00520e3c
    POP ESI                             ; 00520e3d
    POP EBX                             ; 00520e3e
    RET                                 ; 00520e3f

