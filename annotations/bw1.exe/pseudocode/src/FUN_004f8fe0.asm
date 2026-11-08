; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f8fe0(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_004d0ee0 at 004d12b9
;   FUN_004d9260 at 004d9576
;
; Referenced Globals:
;   undefined4 DAT_02c99770
;
; Called Functions:
;   FUN_00408830
;   FUN_0040c600
;   FUN_004fa4e0
;   FUN_004fa6c0
;   FUN_005c0f80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f8fe0
        ;   Label: FUN_004f8fe0
    PUSH ESI                            ; 004f8fe1
    PUSH EDI                            ; 004f8fe2
    PUSH EBP                            ; 004f8fe3
    SUB ESP,0x4                         ; 004f8fe4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004f8fe7
    PUSH 0x1                            ; 004f8feb
    PUSH ESI                            ; 004f8fed
    CALL FUN_004fa6c0                   ; 004f8fee
        ;   XREF to: 004fa6c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fa6c0()
    MOV EDX,dword ptr [ESI + 0x338]     ; 004f8ff3
    ADD ESP,0x8                         ; 004f8ff9
    TEST EDX,EDX                        ; 004f8ffc
    JZ 0x004f9049                       ; 004f8ffe
        ;   XREF to: 004f9049 (CONDITIONAL_JUMP)  ; LAB_004f9049
    MOV ECX,dword ptr [ESI + 0x10]      ; 004f9000
    XOR EBX,EBX                         ; 004f9003
    TEST ECX,ECX                        ; 004f9005
    JLE 0x004f9016                      ; 004f9007
        ;   XREF to: 004f9016 (CONDITIONAL_JUMP)  ; LAB_004f9016
    MOV EDI,ESI                         ; 004f9009
    MOV EDX,dword ptr [ESI + 0x338]     ; 004f900b
        ;   Label: LAB_004f900b
    CMP EDX,dword ptr [EDI + 0x14]      ; 004f9011
    JNZ 0x004f9051                      ; 004f9014
        ;   XREF to: 004f9051 (CONDITIONAL_JUMP)  ; LAB_004f9051
    XOR EBP,EBP                         ; 004f9016
        ;   Label: LAB_004f9016
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004f9018
        ;   Label: LAB_004f9018
    MOV EDI,dword ptr [ESI + 0x10]      ; 004f901c
    ADD EBX,ECX                         ; 004f901f
    CMP EBX,EDI                         ; 004f9021
    JL 0x004f905e                       ; 004f9023
        ;   XREF to: 004f905e (CONDITIONAL_JUMP)  ; LAB_004f905e
    XOR EBX,EBX                         ; 004f9025
    MOV EAX,[0x02c99770]                ; 004f9027 | DAT_02c99770
        ;   Label: LAB_004f9027
    PUSH EAX                            ; 004f902c
    MOV EDX,dword ptr [ESI + EBX*0x4 + 0x14] ; 004f902d
    PUSH EDX                            ; 004f9031
    CALL FUN_0040c600                   ; 004f9032
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    ADD ESP,0x8                         ; 004f9037
    MOV EDI,EAX                         ; 004f903a
    MOV dword ptr [ESP],EAX             ; 004f903c
    TEST EAX,EAX                        ; 004f903f
    JNZ 0x004f9067                      ; 004f9041
        ;   XREF to: 004f9067 (CONDITIONAL_JUMP)  ; LAB_004f9067
    INC EBP                             ; 004f9043
        ;   Label: LAB_004f9043
    CMP EBP,0x64                        ; 004f9044
    JL 0x004f9018                       ; 004f9047
        ;   XREF to: 004f9018 (CONDITIONAL_JUMP)  ; LAB_004f9018
    ADD ESP,0x4                         ; 004f9049
        ;   Label: LAB_004f9049
    POP EBP                             ; 004f904c
    POP EDI                             ; 004f904d
    POP ESI                             ; 004f904e
    POP EBX                             ; 004f904f
    RET                                 ; 004f9050
    INC EBX                             ; 004f9051
        ;   Label: LAB_004f9051
    MOV EBP,dword ptr [ESI + 0x10]      ; 004f9052
    ADD EDI,0x4                         ; 004f9055
    CMP EBX,EBP                         ; 004f9058
    JL 0x004f900b                       ; 004f905a
        ;   XREF to: 004f900b (CONDITIONAL_JUMP)  ; LAB_004f900b
    JMP 0x004f9016                      ; 004f905c
        ;   XREF to: 004f9016 (UNCONDITIONAL_JUMP)  ; LAB_004f9016
    TEST EBX,EBX                        ; 004f905e
        ;   Label: LAB_004f905e
    JGE 0x004f9027                      ; 004f9060
        ;   XREF to: 004f9027 (CONDITIONAL_JUMP)  ; LAB_004f9027
    LEA EBX,[EDI + -0x1]                ; 004f9062
    JMP 0x004f9027                      ; 004f9065
        ;   XREF to: 004f9027 (UNCONDITIONAL_JUMP)  ; LAB_004f9027
    MOV ECX,dword ptr [ESI + 0x338]     ; 004f9067
        ;   Label: LAB_004f9067
    PUSH ECX                            ; 004f906d
    CALL FUN_00408830                   ; 004f906e
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 004f9073
    PUSH EAX                            ; 004f9076
    PUSH EDI                            ; 004f9077
    CALL FUN_00408830                   ; 004f9078
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 004f907d
    PUSH EAX                            ; 004f9080
    CALL FUN_005c0f80                   ; 004f9081
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0f80()
    ADD ESP,0x8                         ; 004f9086
    TEST EAX,EAX                        ; 004f9089
    JNZ 0x004f9043                      ; 004f908b
        ;   XREF to: 004f9043 (CONDITIONAL_JUMP)  ; LAB_004f9043
    MOV EBX,dword ptr [ESI + 0x338]     ; 004f908d
    CMP EDI,EBX                         ; 004f9093
    JZ 0x004f9049                       ; 004f9095
        ;   XREF to: 004f9049 (CONDITIONAL_JUMP)  ; LAB_004f9049
    TEST EBX,EBX                        ; 004f9097
    JZ 0x004f90af                       ; 004f9099
        ;   XREF to: 004f90af (CONDITIONAL_JUMP)  ; LAB_004f90af
    MOV EAX,EBX                         ; 004f909b
    PUSH 0x3dcccccd                     ; 004f909d
    PUSH EAX                            ; 004f90a2
    MOV EBX,dword ptr [EBX + 0x154]     ; 004f90a3
    CALL dword ptr [EBX + 0xc]          ; 004f90a9
    ADD ESP,0x8                         ; 004f90ac
    PUSH 0x3e7                          ; 004f90af
        ;   Label: LAB_004f90af
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f90b4
    PUSH ESI                            ; 004f90b8
    MOV dword ptr [ESI + 0x338],EAX     ; 004f90b9
    CALL FUN_004fa4e0                   ; 004f90bf
        ;   XREF to: 004fa4e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fa4e0()
    ADD ESP,0x8                         ; 004f90c4
    ADD ESP,0x4                         ; 004f90c7
    POP EBP                             ; 004f90ca
    POP EDI                             ; 004f90cb
    POP ESI                             ; 004f90cc
    POP EBX                             ; 004f90cd
    RET                                 ; 004f90ce

