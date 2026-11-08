; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00483ea0(int param_1,int param_2,int param_3,int param_4,int param_5)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_00484440 at 004845b0
;   FUN_00484f20 at 00484f50
;
; Referenced Globals:
;   undefined4 DAT_01c25f84
;   undefined4 DAT_01c263f4
;   undefined4 DAT_01c26400
;   undefined4 DAT_01c26404
;   undefined4 DAT_01c35838
;   undefined4 DAT_01c35839
;   undefined4 DAT_01c3583a
;   undefined4 DAT_01c35e60
;
; Called Functions:
;   FUN_00402f30
;   FUN_00403040
;   FUN_004031c0
;   FUN_004f8e20
;   FUN_004f90d0
;   FUN_004f9390
;   FUN_004f93b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483ea0
        ;   Label: FUN_00483ea0
    PUSH ESI                            ; 00483ea1
    PUSH EDI                            ; 00483ea2
    PUSH EBP                            ; 00483ea3
    SUB ESP,0xc                         ; 00483ea4
    MOV EBX,dword ptr [ESP + 0x20]      ; 00483ea7
    MOV ESI,dword ptr [ESP + 0x24]      ; 00483eab
    MOV EDI,dword ptr [ESP + 0x28]      ; 00483eaf
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00483eb3
    CMP dword ptr [ESP + 0x30],0x0      ; 00483eb7
    JZ 0x00484035                       ; 00483ebc
        ;   XREF to: 00484035 (CONDITIONAL_JUMP)  ; LAB_00484035
    MOV EAX,[0x01c26404]                ; 00483ec2 | DAT_01c26404
    CMP dword ptr [0x01c25f84],0x0      ; 00483ec7 | DAT_01c25f84
        ;   Label: LAB_00483ec7
    JZ 0x0048403f                       ; 00483ece
        ;   XREF to: 0048403f (CONDITIONAL_JUMP)  ; LAB_0048403f
    AND EAX,0xff                        ; 00483ed4
    MOV EDX,EAX                         ; 00483ed9
    SHL EAX,0x2                         ; 00483edb
    SUB EAX,EDX                         ; 00483ede
    XOR ECX,ECX                         ; 00483ee0
    XOR EDX,EDX                         ; 00483ee2
    MOV CL,byte ptr [EAX + 0x1c35838]   ; 00483ee4 | DAT_01c35838
    MOV DL,byte ptr [EAX + 0x1c35839]   ; 00483eea | DAT_01c35839
    SHL EDX,0x8                         ; 00483ef0
    SHL ECX,0x10                        ; 00483ef3
    MOV AL,byte ptr [EAX + 0x1c3583a]   ; 00483ef6 | DAT_01c3583a
    OR EDX,ECX                          ; 00483efc
    AND EAX,0xff                        ; 00483efe
    OR EAX,EDX                          ; 00483f03
    PUSH EAX                            ; 00483f05
    CALL FUN_004f8e20                   ; 00483f06
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; undefined FUN_004f8e20()
    ADD ESP,0x4                         ; 00483f0b
    MOV EDX,dword ptr [0x01c25f84]      ; 00483f0e | DAT_01c25f84
        ;   Label: LAB_00483f0e
    LEA EAX,[EDI + -0x1]                ; 00483f14
    TEST EDX,EDX                        ; 00483f17
    JZ 0x00484049                       ; 00483f19
        ;   XREF to: 00484049 (CONDITIONAL_JUMP)  ; LAB_00484049
    PUSH EAX                            ; 00483f1f
    PUSH ESI                            ; 00483f20
    PUSH EBX                            ; 00483f21
    CALL FUN_004f9390                   ; 00483f22
        ;   XREF to: 004f9390 (UNCONDITIONAL_CALL)  ; undefined FUN_004f9390()
    ADD ESP,0xc                         ; 00483f27
        ;   Label: LAB_00483f27
    MOV ECX,dword ptr [0x01c25f84]      ; 00483f2a | DAT_01c25f84
    LEA EAX,[EBP + -0x1]                ; 00483f30
    TEST ECX,ECX                        ; 00483f33
    JZ 0x00484056                       ; 00483f35
        ;   XREF to: 00484056 (CONDITIONAL_JUMP)  ; LAB_00484056
    PUSH EAX                            ; 00483f3b
    PUSH ESI                            ; 00483f3c
    PUSH EBX                            ; 00483f3d
    CALL FUN_004f93b0                   ; 00483f3e
        ;   XREF to: 004f93b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f93b0()
    ADD ESP,0xc                         ; 00483f43
        ;   Label: LAB_00483f43
    CMP dword ptr [ESP + 0x30],0x0      ; 00483f46
    JZ 0x00484063                       ; 00483f4b
        ;   XREF to: 00484063 (CONDITIONAL_JUMP)  ; LAB_00484063
    MOV EAX,[0x01c26400]                ; 00483f51 | DAT_01c26400
    CMP dword ptr [0x01c25f84],0x0      ; 00483f56 | DAT_01c25f84
        ;   Label: LAB_00483f56
    JZ 0x0048406d                       ; 00483f5d
        ;   XREF to: 0048406d (CONDITIONAL_JUMP)  ; LAB_0048406d
    AND EAX,0xff                        ; 00483f63
    MOV EDX,EAX                         ; 00483f68
    SHL EAX,0x2                         ; 00483f6a
    SUB EAX,EDX                         ; 00483f6d
    XOR EDX,EDX                         ; 00483f6f
    MOV DL,byte ptr [EAX + 0x1c35839]   ; 00483f71 | DAT_01c35839
    SHL EDX,0x8                         ; 00483f77
    MOV dword ptr [ESP],EDX             ; 00483f7a
    XOR EDX,EDX                         ; 00483f7d
    MOV DL,byte ptr [EAX + 0x1c35838]   ; 00483f7f | DAT_01c35838
    MOV ECX,dword ptr [ESP]             ; 00483f85
    SHL EDX,0x10                        ; 00483f88
    MOV AL,byte ptr [EAX + 0x1c3583a]   ; 00483f8b | DAT_01c3583a
    OR EDX,ECX                          ; 00483f91
    AND EAX,0xff                        ; 00483f93
    OR EAX,EDX                          ; 00483f98
    PUSH EAX                            ; 00483f9a
    CALL FUN_004f8e20                   ; 00483f9b
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; undefined FUN_004f8e20()
    ADD ESP,0x4                         ; 00483fa0
    MOV ECX,dword ptr [0x01c25f84]      ; 00483fa3 | DAT_01c25f84
        ;   Label: LAB_00483fa3
    LEA EDX,[EDI + -0x1]                ; 00483fa9
    LEA EAX,[EBP + -0x1]                ; 00483fac
    TEST ECX,ECX                        ; 00483faf
    JZ 0x00484077                       ; 00483fb1
        ;   XREF to: 00484077 (CONDITIONAL_JUMP)  ; LAB_00484077
    PUSH EDX                            ; 00483fb7
    PUSH EAX                            ; 00483fb8
    PUSH EBX                            ; 00483fb9
    CALL FUN_004f9390                   ; 00483fba
        ;   XREF to: 004f9390 (UNCONDITIONAL_CALL)  ; undefined FUN_004f9390()
    ADD ESP,0xc                         ; 00483fbf
        ;   Label: LAB_00483fbf
    MOV ECX,dword ptr [0x01c25f84]      ; 00483fc2 | DAT_01c25f84
    LEA EAX,[EBP + -0x1]                ; 00483fc8
    LEA EDX,[EDI + -0x1]                ; 00483fcb
    TEST ECX,ECX                        ; 00483fce
    JZ 0x00484084                       ; 00483fd0
        ;   XREF to: 00484084 (CONDITIONAL_JUMP)  ; LAB_00484084
    PUSH EAX                            ; 00483fd6
    PUSH ESI                            ; 00483fd7
    PUSH EDX                            ; 00483fd8
    CALL FUN_004f93b0                   ; 00483fd9
        ;   XREF to: 004f93b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f93b0()
    ADD ESP,0xc                         ; 00483fde
        ;   Label: LAB_00483fde
    MOV EAX,[0x01c263f4]                ; 00483fe1 | DAT_01c263f4
    LEA EDX,[EBX + 0x1]                 ; 00483fe6
    LEA ECX,[ESI + 0x1]                 ; 00483fe9
    LEA EBX,[EDI + -0x2]                ; 00483fec
    LEA ESI,[EBP + -0x2]                ; 00483fef
    MOV EDI,EDX                         ; 00483ff2
    MOV EBP,ECX                         ; 00483ff4
    MOV dword ptr [ESP + 0x4],EBX       ; 00483ff6
    MOV dword ptr [ESP + 0x8],ESI       ; 00483ffa
    CMP dword ptr [0x01c25f84],0x0      ; 00483ffe | DAT_01c25f84
    JZ 0x004840d2                       ; 00484005
        ;   XREF to: 004840d2 (CONDITIONAL_JUMP)  ; LAB_004840d2
    CMP dword ptr [0x01c25f84],0x0      ; 0048400b | DAT_01c25f84
    JNZ 0x00484091                      ; 00484012
        ;   XREF to: 00484091 (CONDITIONAL_JUMP)  ; LAB_00484091
    MOV [0x01c35e60],EAX                ; 00484014 | DAT_01c35e60
    MOV ESI,dword ptr [ESP + 0x8]       ; 00484019
        ;   Label: LAB_00484019
    PUSH ESI                            ; 0048401d
    MOV EAX,dword ptr [ESP + 0x8]       ; 0048401e
    PUSH EAX                            ; 00484022
    PUSH EBP                            ; 00484023
    PUSH EDI                            ; 00484024
    CALL FUN_004f90d0                   ; 00484025
        ;   XREF to: 004f90d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f90d0()
    ADD ESP,0x10                        ; 0048402a
    ADD ESP,0xc                         ; 0048402d
    POP EBP                             ; 00484030
    POP EDI                             ; 00484031
    POP ESI                             ; 00484032
    POP EBX                             ; 00484033
    RET                                 ; 00484034
    MOV EAX,[0x01c26400]                ; 00484035 | DAT_01c26400
        ;   Label: LAB_00484035
    JMP 0x00483ec7                      ; 0048403a
        ;   XREF to: 00483ec7 (UNCONDITIONAL_JUMP)  ; LAB_00483ec7
    MOV [0x01c35e60],EAX                ; 0048403f | DAT_01c35e60
        ;   Label: LAB_0048403f
    JMP 0x00483f0e                      ; 00484044
        ;   XREF to: 00483f0e (UNCONDITIONAL_JUMP)  ; LAB_00483f0e
    PUSH EAX                            ; 00484049
        ;   Label: LAB_00484049
    PUSH ESI                            ; 0048404a
    PUSH EBX                            ; 0048404b
    CALL FUN_00402f30                   ; 0048404c
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00402f30()
    JMP 0x00483f27                      ; 00484051
        ;   XREF to: 00483f27 (UNCONDITIONAL_JUMP)  ; LAB_00483f27
    PUSH EAX                            ; 00484056
        ;   Label: LAB_00484056
    PUSH ESI                            ; 00484057
    PUSH EBX                            ; 00484058
    CALL FUN_00403040                   ; 00484059
        ;   XREF to: 00403040 (UNCONDITIONAL_CALL)  ; undefined FUN_00403040()
    JMP 0x00483f43                      ; 0048405e
        ;   XREF to: 00483f43 (UNCONDITIONAL_JUMP)  ; LAB_00483f43
    MOV EAX,[0x01c26404]                ; 00484063 | DAT_01c26404
        ;   Label: LAB_00484063
    JMP 0x00483f56                      ; 00484068
        ;   XREF to: 00483f56 (UNCONDITIONAL_JUMP)  ; LAB_00483f56
    MOV [0x01c35e60],EAX                ; 0048406d | DAT_01c35e60
        ;   Label: LAB_0048406d
    JMP 0x00483fa3                      ; 00484072
        ;   XREF to: 00483fa3 (UNCONDITIONAL_JUMP)  ; LAB_00483fa3
    PUSH EDX                            ; 00484077
        ;   Label: LAB_00484077
    PUSH EAX                            ; 00484078
    PUSH EBX                            ; 00484079
    CALL FUN_00402f30                   ; 0048407a
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00402f30()
    JMP 0x00483fbf                      ; 0048407f
        ;   XREF to: 00483fbf (UNCONDITIONAL_JUMP)  ; LAB_00483fbf
    PUSH EAX                            ; 00484084
        ;   Label: LAB_00484084
    PUSH ESI                            ; 00484085
    PUSH EDX                            ; 00484086
    CALL FUN_00403040                   ; 00484087
        ;   XREF to: 00403040 (UNCONDITIONAL_CALL)  ; undefined FUN_00403040()
    JMP 0x00483fde                      ; 0048408c
        ;   XREF to: 00483fde (UNCONDITIONAL_JUMP)  ; LAB_00483fde
    AND EAX,0xff                        ; 00484091
        ;   Label: LAB_00484091
    MOV EBX,EAX                         ; 00484096
    SHL EAX,0x2                         ; 00484098
    SUB EAX,EBX                         ; 0048409b
    XOR EDX,EDX                         ; 0048409d
    MOV DL,byte ptr [EAX + 0x1c35839]   ; 0048409f | DAT_01c35839
    MOV ECX,EDX                         ; 004840a5
    XOR EDX,EDX                         ; 004840a7
    MOV DL,byte ptr [EAX + 0x1c35838]   ; 004840a9 | DAT_01c35838
    SHL ECX,0x8                         ; 004840af
    SHL EDX,0x10                        ; 004840b2
    MOV AL,byte ptr [EAX + 0x1c3583a]   ; 004840b5 | DAT_01c3583a
    OR EDX,ECX                          ; 004840bb
    AND EAX,0xff                        ; 004840bd
    OR EAX,EDX                          ; 004840c2
    PUSH EAX                            ; 004840c4
    CALL FUN_004f8e20                   ; 004840c5
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; undefined FUN_004f8e20()
    ADD ESP,0x4                         ; 004840ca
    JMP 0x00484019                      ; 004840cd
        ;   XREF to: 00484019 (UNCONDITIONAL_JUMP)  ; LAB_00484019
    PUSH EAX                            ; 004840d2
        ;   Label: LAB_004840d2
    PUSH ESI                            ; 004840d3
    PUSH EBX                            ; 004840d4
    PUSH ECX                            ; 004840d5
    PUSH EDX                            ; 004840d6
    CALL FUN_004031c0                   ; 004840d7
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004031c0()
    ADD ESP,0x14                        ; 004840dc
    ADD ESP,0xc                         ; 004840df
    POP EBP                             ; 004840e2
    POP EDI                             ; 004840e3
    POP ESI                             ; 004840e4
    POP EBX                             ; 004840e5
    RET                                 ; 004840e6

