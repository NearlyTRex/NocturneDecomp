; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0046ec80(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b80f0
;
; Called Functions:
;   FUN_0048c2a0
;   FUN_00554600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046ec80
        ;   Label: FUN_0046ec80
    MOV EBX,dword ptr [ESP + 0x8]       ; 0046ec81
    PUSH EBX                            ; 0046ec85
    CALL FUN_00554600                   ; 0046ec86
        ;   XREF to: 00554600 (UNCONDITIONAL_CALL)  ; undefined FUN_00554600()
    ADD ESP,0x4                         ; 0046ec8b
    TEST EAX,EAX                        ; 0046ec8e
    JNZ 0x0046ec94                      ; 0046ec90
        ;   XREF to: 0046ec94 (CONDITIONAL_JUMP)  ; LAB_0046ec94
    POP EBX                             ; 0046ec92
    RET                                 ; 0046ec93
    PUSH ESI                            ; 0046ec94
        ;   Label: LAB_0046ec94
    MOV EDX,dword ptr [EBX + 0x580]     ; 0046ec95
    PUSH EDX                            ; 0046ec9b
    LEA ESI,[EBX + 0x574]               ; 0046ec9c
    PUSH dword ptr [EBX + 0x570]        ; 0046eca2
    PUSH ESI                            ; 0046eca8
    LEA EAX,[EBX + 0x30]                ; 0046eca9
    PUSH EAX                            ; 0046ecac
    LEA EAX,[EBX + 0x20]                ; 0046ecad
    PUSH EAX                            ; 0046ecb0
    MOV ECX,dword ptr [0x005b80f0]      ; 0046ecb1 | DAT_005b80f0
    PUSH ECX                            ; 0046ecb7
    CALL FUN_0048c2a0                   ; 0046ecb8
        ;   XREF to: 0048c2a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048c2a0()
    MOV dword ptr [EBX + 0x580],0x0     ; 0046ecbd
    MOV dword ptr [EBX + 0x570],0xbf800000 ; 0046ecc7
    MOV EAX,0x1                         ; 0046ecd1
    MOV dword ptr [ESI + 0x8],0x0       ; 0046ecd6
    ADD ESP,0x18                        ; 0046ecdd
    MOV EDX,dword ptr [ESI + 0x8]       ; 0046ece0
    MOV dword ptr [ESI + 0x4],EDX       ; 0046ece3
    MOV EDX,dword ptr [ESI + 0x4]       ; 0046ece6
    MOV dword ptr [ESI],EDX             ; 0046ece9
    POP ESI                             ; 0046eceb
    POP EBX                             ; 0046ecec
    RET                                 ; 0046eced

