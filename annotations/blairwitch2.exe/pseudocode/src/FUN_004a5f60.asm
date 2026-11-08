; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a5f60(int param_1)
;
;
; XREF[1]:
;   FUN_004bd570 at 004bd980
;
; Referenced Globals:
;   undefined4 DAT_00616010
;   undefined4 DAT_00616028
;   undefined4 DAT_0061602c
;   undefined4 DAT_00616040
;   undefined4 DAT_00616494
;   undefined4 DAT_00617dd4
;   undefined4 DAT_01c2a37c
;   undefined4 DAT_01c2a380
;   undefined4 DAT_01c2a384
;   undefined4 DAT_01cacb4c
;   undefined4 DAT_01caf110
;   undefined4 DAT_01caf224
;   undefined4 DAT_01caf228
;   undefined4 DAT_01caf27c
;   undefined4 DAT_01caf488
;   ... and 4 more
;
; Called Functions:
;   FUN_0040d540
;   FUN_004a1bb0
;   FUN_004a1c60
;   FUN_004a2730
;   FUN_004a3a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a5f60
        ;   Label: FUN_004a5f60
    PUSH ESI                            ; 004a5f61
    PUSH EBP                            ; 004a5f62
    MOV EDX,dword ptr [0x01cacb4c]      ; 004a5f63 | DAT_01cacb4c
    XOR EBX,EBX                         ; 004a5f69
    TEST EDX,EDX                        ; 004a5f6b
    JLE 0x004a5f90                      ; 004a5f6d
        ;   XREF to: 004a5f90 (CONDITIONAL_JUMP)  ; LAB_004a5f90
    MOV ESI,0x1cacb50                   ; 004a5f6f
    PUSH ESI                            ; 004a5f74
        ;   Label: LAB_004a5f74
    CALL FUN_004a3a60                   ; 004a5f75
        ;   XREF to: 004a3a60 (UNCONDITIONAL_CALL)  ; undefined FUN_004a3a60()
    INC EBX                             ; 004a5f7a
    MOV ECX,dword ptr [0x01cacb4c]      ; 004a5f7b | DAT_01cacb4c
    ADD ESP,0x4                         ; 004a5f81
    ADD ESI,0x970                       ; 004a5f84
    CMP EBX,ECX                         ; 004a5f8a
    JL 0x004a5f74                       ; 004a5f8c
        ;   XREF to: 004a5f74 (CONDITIONAL_JUMP)  ; LAB_004a5f74
    MOV EAX,EAX                         ; 004a5f8e
    MOV EAX,dword ptr [ESP + 0x10]      ; 004a5f90
        ;   Label: LAB_004a5f90
    CMP dword ptr [EAX + 0x40],0x0      ; 004a5f94
    JZ 0x004a5fb0                       ; 004a5f98
        ;   XREF to: 004a5fb0 (CONDITIONAL_JUMP)  ; LAB_004a5fb0
    MOV EAX,[0x00616494]                ; 004a5f9a | DAT_00616494
    CMP dword ptr [EAX + 0x244],0x0     ; 004a5f9f | DAT_01cb6b44
    JZ 0x004a606e                       ; 004a5fa6
        ;   XREF to: 004a606e (CONDITIONAL_JUMP)  ; LAB_004a606e
    POP EBP                             ; 004a5fac
        ;   Label: LAB_004a5fac
    POP ESI                             ; 004a5fad
    POP EBX                             ; 004a5fae
    RET                                 ; 004a5faf
    PUSH 0x1caf114                      ; 004a5fb0
        ;   Label: LAB_004a5fb0
    MOV EBX,0x1caf128                   ; 004a5fb5
    CALL FUN_0040d540                   ; 004a5fba
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d540()
    ADD ESP,0x4                         ; 004a5fbf
    LEA ESI,[EBX + 0x78]                ; 004a5fc2
    PUSH EBX                            ; 004a5fc5
        ;   Label: LAB_004a5fc5
    CALL FUN_0040d540                   ; 004a5fc6
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d540()
    ADD EBX,0x14                        ; 004a5fcb
    ADD ESP,0x4                         ; 004a5fce
    CMP EBX,ESI                         ; 004a5fd1
    JNZ 0x004a5fc5                      ; 004a5fd3
        ;   XREF to: 004a5fc5 (CONDITIONAL_JUMP)  ; LAB_004a5fc5
    PUSH 0x1caf1a0                      ; 004a5fd5
    CALL FUN_0040d540                   ; 004a5fda
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d540()
    ADD ESP,0x4                         ; 004a5fdf
    PUSH 0x1caf1b4                      ; 004a5fe2
    CALL FUN_0040d540                   ; 004a5fe7
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d540()
    ADD ESP,0x4                         ; 004a5fec
    PUSH 0x1caf1c8                      ; 004a5fef
    CALL FUN_0040d540                   ; 004a5ff4
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d540()
    ADD ESP,0x4                         ; 004a5ff9
    PUSH 0x1caf1dc                      ; 004a5ffc
    CALL FUN_0040d540                   ; 004a6001
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d540()
    ADD ESP,0x4                         ; 004a6006
    PUSH 0x1caf1f0                      ; 004a6009
    CALL FUN_0040d540                   ; 004a600e
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d540()
    ADD ESP,0x4                         ; 004a6013
    PUSH 0x1caf204                      ; 004a6016
    CALL FUN_0040d540                   ; 004a601b
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d540()
    ADD ESP,0x4                         ; 004a6020
    PUSH 0x1caf218                      ; 004a6023
    CALL FUN_0040d540                   ; 004a6028
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d540()
    ADD ESP,0x4                         ; 004a602d
    PUSH 0x1caf22c                      ; 004a6030
    XOR EBX,ESI                         ; 004a6035
    CALL FUN_0040d540                   ; 004a6037
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d540()
    MOV EAX,0x1                         ; 004a603c
    MOV ECX,0xffffffff                  ; 004a6041
    ADD ESP,0x4                         ; 004a6046
    MOV dword ptr [0x01caf568],EBX      ; 004a6049 | DAT_01caf568
    XOR EDX,EDX                         ; 004a604f
    MOV [0x00616010],EAX                ; 004a6051 | DAT_00616010
    MOV dword ptr [0x01caf488],EDX      ; 004a6056 | DAT_01caf488
    XOR DH,DH                           ; 004a605c
    MOV dword ptr [0x00616040],ECX      ; 004a605e | DAT_00616040
    MOV byte ptr [0x01caf4a0],DH        ; 004a6064 | DAT_01caf4a0
    POP EBP                             ; 004a606a
    POP ESI                             ; 004a606b
    POP EBX                             ; 004a606c
    RET                                 ; 004a606d
    PUSH 0x200                          ; 004a606e
        ;   Label: LAB_004a606e
    MOV EAX,[0x00617dd4]                ; 004a6073 | DAT_00617dd4
    PUSH EAX                            ; 004a6078 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004a6079 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004a607b
    MOV AH,byte ptr [0x01c2a384]        ; 004a607e | DAT_01c2a384
    ADD ESP,0x8                         ; 004a6084
    TEST AH,0x1                         ; 004a6087
    JZ 0x004a5fac                       ; 004a608a
        ;   XREF to: 004a5fac (CONDITIONAL_JUMP)  ; LAB_004a5fac
    PUSH EDI                            ; 004a6090
    MOV EDI,dword ptr [0x01c2a380]      ; 004a6091 | DAT_01c2a380
    PUSH EDI                            ; 004a6097
    MOV EBP,dword ptr [0x01c2a37c]      ; 004a6098 | DAT_01c2a37c
    PUSH EBP                            ; 004a609e
    CALL FUN_004a1bb0                   ; 004a609f
        ;   XREF to: 004a1bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a1bb0()
    ADD ESP,0x8                         ; 004a60a4
    TEST EAX,EAX                        ; 004a60a7
    JL 0x004a60ca                       ; 004a60a9
        ;   XREF to: 004a60ca (CONDITIONAL_JUMP)  ; LAB_004a60ca
    LEA EBX,[EAX*0x8 + 0x0]             ; 004a60ab
    ADD EBX,EAX                         ; 004a60b2
    SHL EBX,0x2                         ; 004a60b4
    ADD EBX,EAX                         ; 004a60b7
    SHL EBX,0x2                         ; 004a60b9
    MOV EAX,EBX                         ; 004a60bc
    MOV EAX,dword ptr [EAX + EBX*0x4 + 0x1cabb34] ; 004a60be
    MOV [0x01caf110],EAX                ; 004a60c5 | DAT_01caf110
    MOV EAX,[0x01c2a380]                ; 004a60ca | DAT_01c2a380
        ;   Label: LAB_004a60ca
    PUSH EAX                            ; 004a60cf
    MOV EDX,dword ptr [0x01c2a37c]      ; 004a60d0 | DAT_01c2a37c
    PUSH EDX                            ; 004a60d6
    CALL FUN_004a1c60                   ; 004a60d7
        ;   XREF to: 004a1c60 (UNCONDITIONAL_CALL)  ; undefined FUN_004a1c60()
    MOV ECX,dword ptr [0x01caf110]      ; 004a60dc | DAT_01caf110
    MOV EBX,dword ptr [0x01c2a37c]      ; 004a60e2 | DAT_01c2a37c
    MOV ESI,dword ptr [0x01c2a380]      ; 004a60e8 | DAT_01c2a380
    MOV EDI,dword ptr [0x00616028]      ; 004a60ee | DAT_00616028
    ADD ECX,EAX                         ; 004a60f4
    ADD ESP,0x8                         ; 004a60f6
    MOV dword ptr [0x01caf110],ECX      ; 004a60f9 | DAT_01caf110
    CMP EBX,EDI                         ; 004a60ff
    JGE 0x004a616a                      ; 004a6101
        ;   XREF to: 004a616a (CONDITIONAL_JUMP)  ; LAB_004a616a
    MOV EBX,dword ptr [0x01c2a380]      ; 004a6103 | DAT_01c2a380
        ;   Label: LAB_004a6103
    MOV EAX,[0x01caf110]                ; 004a6109 | DAT_01caf110
    PUSH EBX                            ; 004a610e
    LEA EBX,[EAX*0x4 + 0x0]             ; 004a610f
    ADD EBX,EAX                         ; 004a6116
    SHL EBX,0x4                         ; 004a6118
    MOV ESI,dword ptr [0x01c2a37c]      ; 004a611b | DAT_01c2a37c
    ADD EBX,EAX                         ; 004a6121
    MOV EAX,[0x01caf27c]                ; 004a6123 | DAT_01caf27c
    SHL EBX,0x2                         ; 004a6128
    PUSH ESI                            ; 004a612b
    ADD EAX,EBX                         ; 004a612c
    PUSH EAX                            ; 004a612e
    CALL FUN_004a2730                   ; 004a612f
        ;   XREF to: 004a2730 (UNCONDITIONAL_CALL)  ; undefined FUN_004a2730()
    ADD ESP,0xc                         ; 004a6134
    TEST EAX,EAX                        ; 004a6137
    JZ 0x004a615e                       ; 004a6139
        ;   XREF to: 004a615e (CONDITIONAL_JUMP)  ; LAB_004a615e
    MOV EBX,dword ptr [0x01c2a380]      ; 004a613b | DAT_01c2a380
    MOV EBP,dword ptr [EAX + 0x4]       ; 004a6141
    MOV EDX,dword ptr [0x01c2a37c]      ; 004a6144 | DAT_01c2a37c
    SUB EBX,EBP                         ; 004a614a
    MOV EDI,dword ptr [EAX]             ; 004a614c
    PUSH EBX                            ; 004a614e
    SUB EDX,EDI                         ; 004a614f
    PUSH EDX                            ; 004a6151
    PUSH 0x1                            ; 004a6152
    MOV ESI,dword ptr [EAX + 0x14]      ; 004a6154
    PUSH EAX                            ; 004a6157
    CALL dword ptr [ESI + 0x8]          ; 004a6158
    ADD ESP,0x10                        ; 004a615b
    AND byte ptr [0x01c2a384],0xfe      ; 004a615e | DAT_01c2a384
        ;   Label: LAB_004a615e
    POP EDI                             ; 004a6165
    POP EBP                             ; 004a6166
    POP ESI                             ; 004a6167
    POP EBX                             ; 004a6168
    RET                                 ; 004a6169
    MOV EBP,dword ptr [0x0061602c]      ; 004a616a | DAT_0061602c
        ;   Label: LAB_004a616a
    CMP ESI,EBP                         ; 004a6170
    JL 0x004a6103                       ; 004a6172
        ;   XREF to: 004a6103 (CONDITIONAL_JUMP)  ; LAB_004a6103
    MOV EDX,dword ptr [0x01caf224]      ; 004a6174 | DAT_01caf224
    LEA EAX,[EDI + EDX*0x1]             ; 004a617a
    CMP EBX,EAX                         ; 004a617d
    JGE 0x004a6103                      ; 004a617f
        ;   XREF to: 004a6103 (CONDITIONAL_JUMP)  ; LAB_004a6103
    MOV ECX,dword ptr [0x01caf228]      ; 004a6181 | DAT_01caf228
    LEA EAX,[ECX + EBP*0x1]             ; 004a6187
    CMP ESI,EAX                         ; 004a618a
    JGE 0x004a6103                      ; 004a618c
        ;   XREF to: 004a6103 (CONDITIONAL_JUMP)  ; LAB_004a6103
    MOV EAX,dword ptr [ESP + 0x14]      ; 004a6192
    MOV dword ptr [EAX + 0x40],0x0      ; 004a6196
    JMP 0x004a6103                      ; 004a619d
        ;   XREF to: 004a6103 (UNCONDITIONAL_JUMP)  ; LAB_004a6103

