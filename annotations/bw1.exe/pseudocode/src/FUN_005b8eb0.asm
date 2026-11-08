; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b8eb0(int param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005b9170 at 005b917e
;
; Referenced Globals:
;   undefined1* switchdataD_005b8ea0 = 005b8eed
;   TerminatedCString s_limb_wav_005fa344
;   undefined4 DAT_005fa354
;   undefined4 DAT_0061d95c
;   undefined4 DAT_01ccf3a4
;   undefined4 DAT_01ccf58c
;
; Called Functions:
;   FUN_0040cd00
;   FUN_00418940
;   FUN_00419b90
;   FUN_004311a0
;   FUN_00431210
;   FUN_004352e0
;   FUN_005c084c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8eb0
        ;   Label: FUN_005b8eb0
    PUSH ESI                            ; 005b8eb1
    PUSH EDI                            ; 005b8eb2
    PUSH EBP                            ; 005b8eb3
    SUB ESP,0xc                         ; 005b8eb4
    MOV EBX,dword ptr [ESP + 0x20]      ; 005b8eb7
    MOV ESI,dword ptr [ESP + 0x24]      ; 005b8ebb
    FLD float ptr [ESI + 0x2c]          ; 005b8ebf
    FLDZ                                ; 005b8ec2
    FCOMPP                              ; 005b8ec4
    FNSTSW AX                           ; 005b8ec6
    SAHF                                ; 005b8ec8
    JNC 0x005b8ef5                      ; 005b8ec9
        ;   XREF to: 005b8ef5 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 005b8ecb
    JNZ 0x005b8ef5                      ; 005b8ece
        ;   XREF to: 005b8ef5 (CONDITIONAL_JUMP)  ; default
    CALL FUN_005c084c                   ; 005b8ed0
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; undefined FUN_005c084c()
    MOV EDX,EAX                         ; 005b8ed5
    MOV EDI,0x4                         ; 005b8ed7
    SAR EDX,0x1f                        ; 005b8edc
    IDIV EDI                            ; 005b8edf
    CMP EDX,0x3                         ; 005b8ee1
    JA 0x005b8ef5                       ; 005b8ee4
        ;   XREF to: 005b8ef5 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x5b8ea0]  ; 005b8ee6 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xc284]    ; 005b8eed
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 005b8ef3
        ;   Label: LAB_005b8ef3
    MOV ECX,dword ptr [EBX + 0xc284]    ; 005b8ef5
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 005b8efb
    CMP EAX,ECX                         ; 005b8efd
    JNZ 0x005b8f8f                      ; 005b8eff
        ;   XREF to: 005b8f8f (CONDITIONAL_JUMP)  ; LAB_005b8f8f
    MOV EAX,dword ptr [ESI + 0x2c]      ; 005b8f05
        ;   Label: LAB_005b8f05
    MOV ECX,dword ptr [EBX + 0xc29c]    ; 005b8f08
    MOV dword ptr [ESP + 0x8],EAX       ; 005b8f0e
    CMP ECX,dword ptr [ESI]             ; 005b8f12
    JNZ 0x005b8f1e                      ; 005b8f14
        ;   XREF to: 005b8f1e (CONDITIONAL_JUMP)  ; LAB_005b8f1e
    MOV dword ptr [ESP + 0x8],0x3d4ccccd ; 005b8f16
    MOV EBP,dword ptr [EBX + 0xc298]    ; 005b8f1e
        ;   Label: LAB_005b8f1e
    CMP EBP,dword ptr [ESI]             ; 005b8f24
    JNZ 0x005b8f30                      ; 005b8f26
        ;   XREF to: 005b8f30 (CONDITIONAL_JUMP)  ; LAB_005b8f30
    MOV dword ptr [ESP + 0x8],0x3ca3d70a ; 005b8f28
    MOV EAX,[0x0061d95c]                ; 005b8f30 | DAT_0061d95c
        ;   Label: LAB_005b8f30
    CMP dword ptr [EAX + 0x1fc],0x0     ; 005b8f35 | DAT_01ccf58c
    JZ 0x005b8f46                       ; 005b8f3c
        ;   XREF to: 005b8f46 (CONDITIONAL_JUMP)  ; LAB_005b8f46
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 005b8f3e
    MOV EAX,[0x0061d95c]                ; 005b8f46 | DAT_0061d95c
        ;   Label: LAB_005b8f46
    MOV EDI,dword ptr [EAX + 0x14]      ; 005b8f4b | DAT_01ccf3a4
    TEST EDI,EDI                        ; 005b8f4e
    JNZ 0x005b8f56                      ; 005b8f50
        ;   XREF to: 005b8f56 (CONDITIONAL_JUMP)  ; LAB_005b8f56
    MOV dword ptr [ESP + 0x8],EDI       ; 005b8f52
    PUSH dword ptr [ESP + 0x8]          ; 005b8f56
        ;   Label: LAB_005b8f56
    CALL FUN_0040cd00                   ; 005b8f5a
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd00()
    ADD ESP,0x4                         ; 005b8f5f
    TEST EAX,EAX                        ; 005b8f62
    JNZ 0x005b8fb5                      ; 005b8f64
        ;   XREF to: 005b8fb5 (CONDITIONAL_JUMP)  ; LAB_005b8fb5
    ADD ESP,0xc                         ; 005b8f66
        ;   Label: LAB_005b8f66
    POP EBP                             ; 005b8f69
    POP EDI                             ; 005b8f6a
    POP ESI                             ; 005b8f6b
    POP EBX                             ; 005b8f6c
    RET                                 ; 005b8f6d
    MOV EAX,dword ptr [EBX + 0xc288]    ; 005b8f6e
        ;   Label: caseD_1
    JMP 0x005b8ef3                      ; 005b8f74
        ;   XREF to: 005b8ef3 (UNCONDITIONAL_JUMP)  ; LAB_005b8ef3
    MOV EAX,dword ptr [EBX + 0xc29c]    ; 005b8f79
        ;   Label: caseD_2
    JMP 0x005b8ef3                      ; 005b8f7f
        ;   XREF to: 005b8ef3 (UNCONDITIONAL_JUMP)  ; LAB_005b8ef3
    MOV EAX,dword ptr [EBX + 0xc298]    ; 005b8f84
        ;   Label: caseD_3
    JMP 0x005b8ef3                      ; 005b8f8a
        ;   XREF to: 005b8ef3 (UNCONDITIONAL_JUMP)  ; LAB_005b8ef3
    CMP EAX,dword ptr [EBX + 0xc288]    ; 005b8f8f
        ;   Label: LAB_005b8f8f
    JZ 0x005b8f05                       ; 005b8f95
        ;   XREF to: 005b8f05 (CONDITIONAL_JUMP)  ; LAB_005b8f05
    CMP EAX,dword ptr [EBX + 0xc298]    ; 005b8f9b
    JZ 0x005b8f05                       ; 005b8fa1
        ;   XREF to: 005b8f05 (CONDITIONAL_JUMP)  ; LAB_005b8f05
    CMP EAX,dword ptr [EBX + 0xc29c]    ; 005b8fa7
    JZ 0x005b8f05                       ; 005b8fad
        ;   XREF to: 005b8f05 (CONDITIONAL_JUMP)  ; LAB_005b8f05
    JMP 0x005b8f66                      ; 005b8fb3
        ;   XREF to: 005b8f66 (UNCONDITIONAL_JUMP)  ; LAB_005b8f66
    PUSH 0x0                            ; 005b8fb5
        ;   Label: LAB_005b8fb5
    PUSH 0x0                            ; 005b8fb7
    PUSH 0x0                            ; 005b8fb9
    PUSH EBX                            ; 005b8fbb
    LEA EDI,[ESI + 0xc]                 ; 005b8fbc
    PUSH EDI                            ; 005b8fbf
    LEA EAX,[EBX + 0x30]                ; 005b8fc0
    PUSH EAX                            ; 005b8fc3
    LEA EAX,[EBX + 0x20]                ; 005b8fc4
    PUSH EAX                            ; 005b8fc7
    CALL FUN_00418940                   ; 005b8fc8
        ;   XREF to: 00418940 (UNCONDITIONAL_CALL)  ; undefined FUN_00418940()
    ADD ESP,0x1c                        ; 005b8fcd
    PUSH 0x0                            ; 005b8fd0
    MOV EDX,dword ptr [ESI]             ; 005b8fd2
    PUSH EDX                            ; 005b8fd4
    PUSH EAX                            ; 005b8fd5
    PUSH EBX                            ; 005b8fd6
    MOV EBP,EAX                         ; 005b8fd7
    CALL FUN_00431210                   ; 005b8fd9
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; undefined FUN_00431210()
    MOV EAX,dword ptr [ESI]             ; 005b8fde
    MOV ECX,dword ptr [EBX + 0xc298]    ; 005b8fe0
    ADD ESP,0x10                        ; 005b8fe6
    CMP EAX,ECX                         ; 005b8fe9
    JNZ 0x005b90af                      ; 005b8feb
        ;   XREF to: 005b90af (CONDITIONAL_JUMP)  ; LAB_005b90af
    PUSH 0x0                            ; 005b8ff1
    PUSH EDI                            ; 005b8ff3
    MOV EAX,dword ptr [EBX + 0xc284]    ; 005b8ff4
    PUSH EAX                            ; 005b8ffa
    PUSH EBX                            ; 005b8ffb
    CALL FUN_004311a0                   ; 005b8ffc
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004311a0()
    ADD ESP,0x10                        ; 005b9001
    PUSH 0x0                            ; 005b9004
    PUSH EDI                            ; 005b9006
    MOV EDX,dword ptr [EBX + 0xc288]    ; 005b9007
    PUSH EDX                            ; 005b900d
    PUSH EBX                            ; 005b900e
    CALL FUN_004311a0                   ; 005b900f
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004311a0()
    ADD ESP,0x10                        ; 005b9014
    PUSH 0x0                            ; 005b9017
    PUSH EDI                            ; 005b9019
    MOV ECX,dword ptr [EBX + 0xc28c]    ; 005b901a
    PUSH ECX                            ; 005b9020
    PUSH EBX                            ; 005b9021
    CALL FUN_004311a0                   ; 005b9022
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004311a0()
    ADD ESP,0x10                        ; 005b9027
    PUSH 0x0                            ; 005b902a
    PUSH EDI                            ; 005b902c
    MOV EAX,dword ptr [EBX + 0xc290]    ; 005b902d
    PUSH EAX                            ; 005b9033
    PUSH EBX                            ; 005b9034
    CALL FUN_004311a0                   ; 005b9035
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004311a0()
    ADD ESP,0x10                        ; 005b903a
    PUSH 0x0                            ; 005b903d
    PUSH EDI                            ; 005b903f
    MOV EDX,dword ptr [EBX + 0xc294]    ; 005b9040
    PUSH EDX                            ; 005b9046
    PUSH EBX                            ; 005b9047
    CALL FUN_004311a0                   ; 005b9048
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004311a0()
    ADD ESP,0x10                        ; 005b904d
    PUSH 0x0                            ; 005b9050
    PUSH EDI                            ; 005b9052
    MOV ECX,dword ptr [EBX + 0xc29c]    ; 005b9053
    PUSH ECX                            ; 005b9059
    PUSH EBX                            ; 005b905a
    CALL FUN_004311a0                   ; 005b905b
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004311a0()
    ADD ESP,0x10                        ; 005b9060
    PUSH 0x0                            ; 005b9063
    PUSH EDI                            ; 005b9065
    MOV EAX,dword ptr [EBX + 0xc2a0]    ; 005b9066
    PUSH EAX                            ; 005b906c
    PUSH EBX                            ; 005b906d
    CALL FUN_004311a0                   ; 005b906e
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004311a0()
    ADD ESP,0x10                        ; 005b9073
    PUSH 0x0                            ; 005b9076
    PUSH EDI                            ; 005b9078
    MOV EDX,dword ptr [EBX + 0xc2a4]    ; 005b9079
    PUSH EDX                            ; 005b907f
    PUSH EBX                            ; 005b9080
    CALL FUN_004311a0                   ; 005b9081
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004311a0()
    ADD ESP,0x10                        ; 005b9086
    PUSH 0x0                            ; 005b9089
    PUSH EDI                            ; 005b908b
    MOV ECX,dword ptr [EBX + 0xc2a8]    ; 005b908c
    PUSH ECX                            ; 005b9092
    PUSH EBX                            ; 005b9093
    CALL FUN_004311a0                   ; 005b9094
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004311a0()
    ADD ESP,0x10                        ; 005b9099
    PUSH 0x0                            ; 005b909c
    PUSH EDI                            ; 005b909e
    MOV EDI,dword ptr [EBX + 0xc2ac]    ; 005b909f
    PUSH EDI                            ; 005b90a5
    PUSH EBX                            ; 005b90a6
    CALL FUN_004311a0                   ; 005b90a7
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004311a0()
    ADD ESP,0x10                        ; 005b90ac
    PUSH 0x5fa344                       ; 005b90af | = "limb?.wav"
        ;   Label: LAB_005b90af
    PUSH EBX                            ; 005b90b4
    CALL FUN_004352e0                   ; 005b90b5
        ;   XREF to: 004352e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004352e0()
    ADD ESP,0x8                         ; 005b90ba
    PUSH EBP                            ; 005b90bd
    CALL FUN_00419b90                   ; 005b90be
        ;   XREF to: 00419b90 (UNCONDITIONAL_CALL)  ; undefined FUN_00419b90()
    MOV EAX,dword ptr [EBX + 0xc29c]    ; 005b90c3
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x2298] ; 005b90c9
    ADD ESP,0x4                         ; 005b90d0
    TEST EBP,EBP                        ; 005b90d3
    JZ 0x005b9103                       ; 005b90d5
        ;   XREF to: 005b9103 (CONDITIONAL_JUMP)  ; LAB_005b9103
    FLD float ptr [ESI + 0x8]           ; 005b90d7
        ;   Label: LAB_005b90d7
    FLD ST0                             ; 005b90da
    FMUL double ptr [0x005fa354]        ; 005b90dc | DAT_005fa354
    FSTP ST1                            ; 005b90e2
    FSTP float ptr [ESI + 0x8]          ; 005b90e4
    CMP dword ptr [EBX + 0xc298],0x0    ; 005b90e7
    JGE 0x005b8f66                      ; 005b90ee
        ;   XREF to: 005b8f66 (CONDITIONAL_JUMP)  ; LAB_005b8f66
    MOV dword ptr [ESI + 0x4],0x4479c000 ; 005b90f4
    ADD ESP,0xc                         ; 005b90fb
    POP EBP                             ; 005b90fe
    POP EDI                             ; 005b90ff
    POP ESI                             ; 005b9100
    POP EBX                             ; 005b9101
    RET                                 ; 005b9102
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 005b9103
        ;   Label: LAB_005b9103
    JMP 0x005b90d7                      ; 005b910a
        ;   XREF to: 005b90d7 (UNCONDITIONAL_JUMP)  ; LAB_005b90d7

