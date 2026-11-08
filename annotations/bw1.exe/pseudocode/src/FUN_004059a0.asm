; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004059a0(int param_1)
;
;
; XREF[1]:
;   FUN_004077b0 at 004077da
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_0062902c
;   undefined4 DAT_00629030
;   undefined4 DAT_00713a60
;   undefined4 DAT_00713a98
;   undefined4 DAT_00713a9c
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51cac
;   undefined4 DAT_01c51d00
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   FUN_00403920
;   FUN_0043cbf0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004059a0
        ;   Label: FUN_004059a0
    PUSH EDI                            ; 004059a1
    PUSH EBP                            ; 004059a2
    MOV EBP,dword ptr [0x00713a60]      ; 004059a3 | DAT_00713a60
    MOV EDI,dword ptr [ESP + 0x10]      ; 004059a9
    LEA ESI,[EDI + 0x18]                ; 004059ad
    LEA EAX,[EDI + 0x8]                 ; 004059b0
    PUSH EAX                            ; 004059b3
    CALL FUN_00403920                   ; 004059b4
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined FUN_00403920()
    ADD ESP,0x4                         ; 004059b9
    TEST EAX,EAX                        ; 004059bc
    JZ 0x00405b06                       ; 004059be
        ;   XREF to: 00405b06 (CONDITIONAL_JUMP)  ; LAB_00405b06
    PUSH EBX                            ; 004059c4
    MOV EDX,dword ptr [0x01c51cac]      ; 004059c5 | DAT_01c51cac
    MOV EBP,dword ptr [0x00713a60]      ; 004059cb | DAT_00713a60
    TEST EDX,EDX                        ; 004059d1
    JZ 0x00405a90                       ; 004059d3
        ;   XREF to: 00405a90 (CONDITIONAL_JUMP)  ; LAB_00405a90
    CMP dword ptr [0x01c51d00],0x0      ; 004059d9 | DAT_01c51d00
    JNZ 0x00405a69                      ; 004059e0
        ;   XREF to: 00405a69 (CONDITIONAL_JUMP)  ; LAB_00405a69
    CMP dword ptr [0x0061b4a0],0x20     ; 004059e6 | DAT_0061b4a0
    JNZ 0x00405a5d                      ; 004059ed
        ;   XREF to: 00405a5d (CONDITIONAL_JUMP)  ; LAB_00405a5d
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 004059ef | DAT_01c4f02c
    MOV EBX,0x1                         ; 004059f9
        ;   Label: LAB_004059f9
    MOV ECX,0xcd                        ; 004059fe
    MOV dword ptr [0x01c51d18],EBX      ; 00405a03 | DAT_01c51d18
    MOV dword ptr [0x01c51d14],ECX      ; 00405a09 | DAT_01c51d14
    MOV EBX,0x713a98                    ; 00405a0f | DAT_00713a98
        ;   Label: LAB_00405a0f
    MOV EAX,ESI                         ; 00405a14
    XOR ECX,ECX                         ; 00405a16
    MOV EDX,dword ptr [EDI + 0x4]       ; 00405a18
        ;   Label: LAB_00405a18
    LEA EDX,[EDX + EDX*0x2]             ; 00405a1b
    MOV dword ptr [0x00713a60],EBP      ; 00405a1e | DAT_00713a60
    CMP ECX,EDX                         ; 00405a24
    JGE 0x00405af4                      ; 00405a26
        ;   XREF to: 00405af4 (CONDITIONAL_JUMP)  ; LAB_00405af4
    MOV EDX,dword ptr [EAX]             ; 00405a2c
    ADD EDX,EBP                         ; 00405a2e
    MOV dword ptr [EBX],EDX             ; 00405a30 | DAT_00713a98 | DAT_00713a9c
    MOV EDX,dword ptr [EAX]             ; 00405a32
    ADD EDX,EBP                         ; 00405a34
    IMUL EDX,EDX,0x30                   ; 00405a36
    MOV ESI,dword ptr [EAX + 0x4]       ; 00405a39
    MOV dword ptr [EDX + 0x62902c],ESI  ; 00405a3c | DAT_0062902c
    MOV EDX,dword ptr [EAX]             ; 00405a42
    ADD EDX,EBP                         ; 00405a44
    IMUL ESI,EDX,0x30                   ; 00405a46
    ADD EAX,0xc                         ; 00405a49
    ADD EBX,0x4                         ; 00405a4c
    MOV EDX,dword ptr [EAX + -0x4]      ; 00405a4f
    ADD ECX,0x3                         ; 00405a52
    MOV dword ptr [ESI + 0x629030],EDX  ; 00405a55 | DAT_00629030
    JMP 0x00405a18                      ; 00405a5b
        ;   XREF to: 00405a18 (UNCONDITIONAL_JUMP)  ; LAB_00405a18
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00405a5d | DAT_01c4f02c
        ;   Label: LAB_00405a5d
    JMP 0x004059f9                      ; 00405a67
        ;   XREF to: 004059f9 (UNCONDITIONAL_JUMP)  ; LAB_004059f9
    CMP dword ptr [0x0061b4a0],0x20     ; 00405a69 | DAT_0061b4a0
        ;   Label: LAB_00405a69
    JNZ 0x00405a81                      ; 00405a70
        ;   XREF to: 00405a81 (CONDITIONAL_JUMP)  ; LAB_00405a81
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00405a72 | DAT_01c4f02c | LAB_0057de01
    JMP 0x004059f9                      ; 00405a7c
        ;   XREF to: 004059f9 (UNCONDITIONAL_JUMP)  ; LAB_004059f9
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00405a81 | DAT_01c4f02c | LAB_0057e5e3
        ;   Label: LAB_00405a81
    JMP 0x004059f9                      ; 00405a8b
        ;   XREF to: 004059f9 (UNCONDITIONAL_JUMP)  ; LAB_004059f9
    CMP dword ptr [0x01c51d00],0x0      ; 00405a90 | DAT_01c51d00
        ;   Label: LAB_00405a90
    JNZ 0x00405ad3                      ; 00405a97
        ;   XREF to: 00405ad3 (CONDITIONAL_JUMP)  ; LAB_00405ad3
    CMP dword ptr [0x0061b4a0],0x20     ; 00405a99 | DAT_0061b4a0
    JNZ 0x00405ac7                      ; 00405aa0
        ;   XREF to: 00405ac7 (CONDITIONAL_JUMP)  ; LAB_00405ac7
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 00405aa2 | DAT_01c4f02c
    MOV ECX,0x1                         ; 00405aac
        ;   Label: LAB_00405aac
    MOV EDX,0xc5                        ; 00405ab1
    MOV dword ptr [0x01c51d18],ECX      ; 00405ab6 | DAT_01c51d18
    MOV dword ptr [0x01c51d14],EDX      ; 00405abc | DAT_01c51d14
    JMP 0x00405a0f                      ; 00405ac2
        ;   XREF to: 00405a0f (UNCONDITIONAL_JUMP)  ; LAB_00405a0f
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00405ac7 | DAT_01c4f02c
        ;   Label: LAB_00405ac7
    JMP 0x00405aac                      ; 00405ad1
        ;   XREF to: 00405aac (UNCONDITIONAL_JUMP)  ; LAB_00405aac
    CMP dword ptr [0x0061b4a0],0x20     ; 00405ad3 | DAT_0061b4a0
        ;   Label: LAB_00405ad3
    JNZ 0x00405ae8                      ; 00405ada
        ;   XREF to: 00405ae8 (CONDITIONAL_JUMP)  ; LAB_00405ae8
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00405adc | DAT_01c4f02c | LAB_0057de01
    JMP 0x00405aac                      ; 00405ae6
        ;   XREF to: 00405aac (UNCONDITIONAL_JUMP)  ; LAB_00405aac
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00405ae8 | DAT_01c4f02c | LAB_0057e5e3
        ;   Label: LAB_00405ae8
    JMP 0x00405aac                      ; 00405af2
        ;   XREF to: 00405aac (UNCONDITIONAL_JUMP)  ; LAB_00405aac
    PUSH 0x713a98                       ; 00405af4 | DAT_00713a98
        ;   Label: LAB_00405af4
    MOV ESI,dword ptr [EDI + 0x4]       ; 00405af9
    PUSH ESI                            ; 00405afc
    CALL FUN_0043cbf0                   ; 00405afd
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043cbf0()
    ADD ESP,0x8                         ; 00405b02
    POP EBX                             ; 00405b05
    MOV EDX,dword ptr [EDI + 0x4]       ; 00405b06
        ;   Label: LAB_00405b06
    LEA EAX,[EDX*0x4 + 0x0]             ; 00405b09
    SUB EAX,EDX                         ; 00405b10
    LEA EDX,[EAX*0x4 + 0x0]             ; 00405b12
    LEA EAX,[EDI + 0x18]                ; 00405b19
    MOV EBP,dword ptr [0x00713a60]      ; 00405b1c | DAT_00713a60
    ADD EAX,EDX                         ; 00405b22
    POP EBP                             ; 00405b24
    POP EDI                             ; 00405b25
    POP ESI                             ; 00405b26
    RET                                 ; 00405b27

