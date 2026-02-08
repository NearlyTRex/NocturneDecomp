; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl crt_unknown_c_FUN_00603dc8(void)
;
; Local Variables:
; undefined2       Stack[-0xa4]:2  local_a4
; undefined2       Stack[-0xa0]:2  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined1       Stack[-0x98]:1  local_98
; undefined1       Stack[-0x97]:1  local_97
; undefined1[12]   Stack[-0x4c]:12  local_4c
; undefined1[10]   Stack[-0x40]:10  local_40
; undefined1[10]   Stack[-0x34]:10  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[3]:
;   crt_fltused.c_staticInit_FUN_005fde60 at 005fde6c
;   crt_unknown.c_FUN_0060af5d at 0060b00f
;   crt_unknown.c_FUN_0060d48c at 0060d4ed
;
; Referenced Globals:
;   void* switchdataD_00603db4 = 00603e5e
;
; Called Functions:
;   crt_unknown.c_FUN_00603d60
;   crt_unknown.c_FUN_0060b07a
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00603dc8
        ;   Label: crt_unknown.c_FUN_00603dc8
    MOV EBP,ESP                         ; 00603dc9
    PUSH EBX                            ; 00603dcb
    PUSH ESI                            ; 00603dcc
    PUSH EDI                            ; 00603dcd
    SUB ESP,0x88                        ; 00603dce
    MOV EBX,dword ptr [EBP + 0x8]       ; 00603dd4
    MOV ESI,dword ptr [EBP + 0xc]       ; 00603dd7
    PUSH 0x0                            ; 00603dda
    FSTCW word ptr [ESP]                ; 00603ddc
    POP EAX                             ; 00603de0
    MOV dword ptr [EBP + -0x14],EAX     ; 00603de1
    OR AH,0x3                           ; 00603de4
    AND EAX,0xffff                      ; 00603de7
    PUSH EAX                            ; 00603dec
    FLDCW word ptr [ESP]                ; 00603ded
    POP EAX                             ; 00603df0
    MOV dword ptr [ESI + 0x14],0x0      ; 00603df1
    MOV AX,word ptr [EBX + 0x8]         ; 00603df8
    MOV word ptr [EBP + -0x40],AX       ; 00603dfc
    MOV EAX,dword ptr [EBX + 0x4]       ; 00603e00
    MOV dword ptr [EBP + -0x44],EAX     ; 00603e03
    MOV EAX,dword ptr [EBX]             ; 00603e06
    MOV dword ptr [EBP + -0x48],EAX     ; 00603e08
    TEST byte ptr [EBP + -0x3f],0x80    ; 00603e0b
    JZ 0x00603e18                       ; 00603e0f
        ;   XREF to: 00603e18 (CONDITIONAL_JUMP)  ; LAB_00603e18
    MOV dword ptr [ESI + 0x14],0xffffffff ; 00603e11
    AND byte ptr [EBP + -0x3f],0x7f     ; 00603e18
        ;   Label: LAB_00603e18
    MOV dword ptr [ESI + 0x1c],0x0      ; 00603e1c
    MOV dword ptr [ESI + 0x20],0x0      ; 00603e23
    LEA EAX,[EBP + -0x48]               ; 00603e2a
    MOV dword ptr [ESI + 0x24],0x0      ; 00603e2d
    PUSH EAX                            ; 00603e34
    MOV dword ptr [ESI + 0x28],0x0      ; 00603e35
    XOR EDI,EDI                         ; 00603e3c
    MOV dword ptr [ESI + 0x18],0x0      ; 00603e3e
    CALL crt_unknown.c_FUN_0060b07a     ; 00603e45
        ;   XREF to: 0060b07a (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0060b07a()
    ADD ESP,0x4                         ; 00603e4a
    CMP EAX,0x4                         ; 00603e4d
    JA 0x00603fd0                       ; 00603e50
        ;   XREF to: 00603fd0 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr CS:[EAX*0x4 + 0x603db4] ; 00603e56 | caseD_0 | caseD_2 | caseD_3
        ;   Label: switchD
    XOR ECX,ECX                         ; 00603e5e
        ;   Label: caseD_0
    MOV dword ptr [ESI + 0x14],0x0      ; 00603e60
    MOV dword ptr [EBP + -0x20],ECX     ; 00603e67
    JMP 0x00603fd0                      ; 00603e6a
        ;   XREF to: 00603fd0 (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x10]      ; 00603e6f
        ;   Label: caseD_2
    MOV byte ptr [EAX],0x6e             ; 00603e72
    MOV byte ptr [EAX + 0x1],0x61       ; 00603e75
    MOV byte ptr [EAX + 0x2],0x6e       ; 00603e79
    MOV byte ptr [EAX + 0x3],0x0        ; 00603e7d
        ;   Label: LAB_00603e7d
    MOV dword ptr [ESI + 0x1c],0x3      ; 00603e81
    JMP 0x0060425c                      ; 00603e88
        ;   XREF to: 0060425c (UNCONDITIONAL_JUMP)  ; LAB_0060425c
    MOV EAX,dword ptr [EBP + 0x10]      ; 00603e8d
        ;   Label: caseD_3
    MOV byte ptr [EAX],0x69             ; 00603e90
    MOV byte ptr [EAX + 0x1],0x6e       ; 00603e93
    MOV byte ptr [EAX + 0x2],0x66       ; 00603e97
    JMP 0x00603e7d                      ; 00603e9b
        ;   XREF to: 00603e7d (UNCONDITIONAL_JUMP)  ; LAB_00603e7d
    XOR EAX,EAX                         ; 00603e9d
        ;   Label: caseD_1
    MOV AX,word ptr [EBP + -0x40]       ; 00603e9f
    SUB EAX,0x3ffe                      ; 00603ea3
    MOV dword ptr [EBP + -0x20],EAX     ; 00603ea8
    IMUL EDX,EAX,0x7597                 ; 00603eab
    MOV EBX,0x186a0                     ; 00603eb1
    MOV EAX,EDX                         ; 00603eb6
    SAR EDX,0x1f                        ; 00603eb8
    IDIV EBX                            ; 00603ebb
    MOV dword ptr [EBP + -0x20],EAX     ; 00603ebd
    LEA ECX,[EAX + -0x4]                ; 00603ec0
    MOV dword ptr [EBP + -0x20],ECX     ; 00603ec3
    TEST ECX,ECX                        ; 00603ec6
    JZ 0x00603fd0                       ; 00603ec8
        ;   XREF to: 00603fd0 (CONDITIONAL_JUMP)  ; default
    JGE 0x00603ef1                      ; 00603ece
        ;   XREF to: 00603ef1 (CONDITIONAL_JUMP)  ; LAB_00603ef1
    MOV EAX,ECX                         ; 00603ed0
    NEG EAX                             ; 00603ed2
    ADD EAX,0x3                         ; 00603ed4
    AND AL,0xfc                         ; 00603ed7
    MOV EBX,EAX                         ; 00603ed9
    NEG EBX                             ; 00603edb
    MOV dword ptr [EBP + -0x20],EAX     ; 00603edd
    MOV EAX,EBX                         ; 00603ee0
    NEG EAX                             ; 00603ee2
    PUSH EAX                            ; 00603ee4
    LEA EAX,[EBP + -0x48]               ; 00603ee5
    PUSH EAX                            ; 00603ee8
    MOV dword ptr [EBP + -0x20],EBX     ; 00603ee9
    JMP 0x00603fc8                      ; 00603eec
        ;   XREF to: 00603fc8 (UNCONDITIONAL_JUMP)  ; LAB_00603fc8
    MOV EDX,dword ptr [EBP + -0x40]     ; 00603ef1
        ;   Label: LAB_00603ef1
    CMP DX,0x4019                       ; 00603ef4
    JC 0x00603f06                       ; 00603ef9
        ;   XREF to: 00603f06 (CONDITIONAL_JUMP)  ; LAB_00603f06
    JNZ 0x00603f10                      ; 00603efb
        ;   XREF to: 00603f10 (CONDITIONAL_JUMP)  ; LAB_00603f10
    CMP dword ptr [EBP + -0x44],0xbebc2000 ; 00603efd
    JNC 0x00603f10                      ; 00603f04
        ;   XREF to: 00603f10 (CONDITIONAL_JUMP)  ; LAB_00603f10
    XOR EDX,EDX                         ; 00603f06
        ;   Label: LAB_00603f06
    MOV dword ptr [EBP + -0x20],EDX     ; 00603f08
    JMP 0x00603fd0                      ; 00603f0b
        ;   XREF to: 00603fd0 (UNCONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EBP + -0x40]     ; 00603f10
        ;   Label: LAB_00603f10
    CMP CX,0x4034                       ; 00603f13
    JC 0x00603f3e                       ; 00603f18
        ;   XREF to: 00603f3e (CONDITIONAL_JUMP)  ; LAB_00603f3e
    JNZ 0x00603fba                      ; 00603f1a
        ;   XREF to: 00603fba (CONDITIONAL_JUMP)  ; LAB_00603fba
    MOV ECX,dword ptr [EBP + -0x44]     ; 00603f20
    CMP ECX,0x8e1bc9bf                  ; 00603f23
    JC 0x00603f3e                       ; 00603f29
        ;   XREF to: 00603f3e (CONDITIONAL_JUMP)  ; LAB_00603f3e
    JNZ 0x00603fba                      ; 00603f2b
        ;   XREF to: 00603fba (CONDITIONAL_JUMP)  ; LAB_00603fba
    CMP dword ptr [EBP + -0x48],0x4000000 ; 00603f31
    JNC 0x00603fba                      ; 00603f38
        ;   XREF to: 00603fba (CONDITIONAL_JUMP)  ; LAB_00603fba
    MOV EDX,0x4019                      ; 00603f3e
        ;   Label: LAB_00603f3e
    MOV EBX,0xbebc2000                  ; 00603f43
    LEA EAX,[EBP + -0x48]               ; 00603f48
    XOR ECX,ECX                         ; 00603f4b
    MOV word ptr [EBP + -0x34],DX       ; 00603f4d
    MOV dword ptr [EBP + -0x38],EBX     ; 00603f51
    LEA EBX,[EBP + -0x30]               ; 00603f54
    LEA EDX,[EBP + -0x3c]               ; 00603f57
    MOV dword ptr [EBP + -0x3c],ECX     ; 00603f5a
    FLD extended double ptr [EAX]       ; 00603f5d
    FLD extended double ptr [EDX]       ; 00603f5f
    FDIVP                               ; 00603f61
    FSTP extended double ptr [EBX]      ; 00603f63
    LEA EAX,[EBP + -0x30]               ; 00603f65
    LEA EBX,[EBP + -0x3c]               ; 00603f68
    FLD extended double ptr [EAX]       ; 00603f6b
    PUSH EAX                            ; 00603f6d
    PUSH EAX                            ; 00603f6e
    FSTCW word ptr [ESP]                ; 00603f6f
    POP EAX                             ; 00603f73
    PUSH EAX                            ; 00603f74
    OR AH,0xc                           ; 00603f75
    PUSH EAX                            ; 00603f78
    FLDCW word ptr [ESP]                ; 00603f79
    POP EAX                             ; 00603f7c
    FISTP dword ptr [ESP + 0x4]         ; 00603f7d
    FLDCW word ptr [ESP]                ; 00603f81
    POP EAX                             ; 00603f84
    POP EAX                             ; 00603f85
    LEA EDX,[EBP + -0x30]               ; 00603f86
    MOV EDI,EAX                         ; 00603f89
    PUSH EAX                            ; 00603f8b
    FILD dword ptr [ESP]                ; 00603f8c
    POP EAX                             ; 00603f8f
    FSTP extended double ptr [EDX]      ; 00603f90
    LEA EDX,[EBP + -0x3c]               ; 00603f92
    LEA EAX,[EBP + -0x30]               ; 00603f95
    FLD extended double ptr [EAX]       ; 00603f98
    FLD extended double ptr [EDX]       ; 00603f9a
    FMULP                               ; 00603f9c
    FSTP extended double ptr [EBX]      ; 00603f9e
    LEA EBX,[EBP + -0x48]               ; 00603fa0
    LEA EDX,[EBP + -0x3c]               ; 00603fa3
    LEA EAX,[EBP + -0x48]               ; 00603fa6
    FLD extended double ptr [EAX]       ; 00603fa9
    FLD extended double ptr [EDX]       ; 00603fab
    FSUBP                               ; 00603fad
    FSTP extended double ptr [EBX]      ; 00603faf
    MOV dword ptr [EBP + -0x20],0x8     ; 00603fb1
    JMP 0x00603fd0                      ; 00603fb8
        ;   XREF to: 00603fd0 (UNCONDITIONAL_JUMP)  ; default
    AND byte ptr [EBP + -0x20],0xfc     ; 00603fba
        ;   Label: LAB_00603fba
    MOV EAX,dword ptr [EBP + -0x20]     ; 00603fbe
    NEG EAX                             ; 00603fc1
    PUSH EAX                            ; 00603fc3
    LEA EAX,[EBP + -0x48]               ; 00603fc4
    PUSH EAX                            ; 00603fc7
    CALL crt_unknown.c_FUN_00603d60     ; 00603fc8
        ;   XREF to: 00603d60 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_00603d60()
        ;   Label: LAB_00603fc8
    ADD ESP,0x8                         ; 00603fcd
    TEST byte ptr [ESI + 0x8],0x2       ; 00603fd0
        ;   Label: default
    JZ 0x00603ff2                       ; 00603fd4
        ;   XREF to: 00603ff2 (CONDITIONAL_JUMP)  ; LAB_00603ff2
    MOV EDX,dword ptr [EBP + -0x20]     ; 00603fd6
    MOV EAX,dword ptr [ESI]             ; 00603fd9
    ADD EAX,EDX                         ; 00603fdb
    ADD EAX,0xa                         ; 00603fdd
    MOV EBX,dword ptr [ESI + 0x4]       ; 00603fe0
    MOV dword ptr [EBP + -0x18],EAX     ; 00603fe3
    TEST EBX,EBX                        ; 00603fe6
    JLE 0x00603ffa                      ; 00603fe8
        ;   XREF to: 00603ffa (CONDITIONAL_JUMP)  ; LAB_00603ffa
    LEA ECX,[EAX + EBX*0x1]             ; 00603fea
    MOV dword ptr [EBP + -0x18],ECX     ; 00603fed
    JMP 0x00603ffa                      ; 00603ff0
        ;   XREF to: 00603ffa (UNCONDITIONAL_JUMP)  ; LAB_00603ffa
    MOV EAX,dword ptr [ESI]             ; 00603ff2
        ;   Label: LAB_00603ff2
    ADD EAX,0x7                         ; 00603ff4
    MOV dword ptr [EBP + -0x18],EAX     ; 00603ff7
    MOV BH,byte ptr [ESI + 0x8]         ; 00603ffa
        ;   Label: LAB_00603ffa
    MOV EAX,0xf                         ; 00603ffd
    TEST BH,0x20                        ; 00604002
    JZ 0x0060400c                       ; 00604005
        ;   XREF to: 0060400c (CONDITIONAL_JUMP)  ; LAB_0060400c
    MOV EAX,0x14                        ; 00604007
    TEST byte ptr [ESI + 0x8],0x40      ; 0060400c
        ;   Label: LAB_0060400c
    JZ 0x00604014                       ; 00604010
        ;   XREF to: 00604014 (CONDITIONAL_JUMP)  ; LAB_00604014
    ADD EAX,EAX                         ; 00604012
    MOV EDX,dword ptr [EBP + -0x18]     ; 00604014
        ;   Label: LAB_00604014
    ADD EAX,0x4                         ; 00604017
    CMP EAX,EDX                         ; 0060401a
    JGE 0x00604021                      ; 0060401c
        ;   XREF to: 00604021 (CONDITIONAL_JUMP)  ; LAB_00604021
    MOV dword ptr [EBP + -0x18],EAX     ; 0060401e
    MOV CH,0x30                         ; 00604021
        ;   Label: LAB_00604021
    XOR AL,AL                           ; 00604023
    XOR EBX,EBX                         ; 00604025
    MOV byte ptr [EBP + 0xffffff6c],CH  ; 00604027
    MOV byte ptr [EBP + 0xffffff6d],AL  ; 0060402d
    LEA EAX,[EBP + 0xffffff6d]          ; 00604033
    MOV dword ptr [EBP + -0x24],EBX     ; 00604039
    MOV dword ptr [EBP + -0x1c],EAX     ; 0060403c

