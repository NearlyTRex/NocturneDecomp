; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00417ac0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)
;
;
; XREF[1]:
;   FUN_00427eb0 at 00428054
;
; Called Functions:
;   FUN_00454510
;   FUN_00454580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00417ac0
        ;   Label: FUN_00417ac0
    PUSH ESI                            ; 00417ac1
    PUSH EBP                            ; 00417ac2
    MOV EDX,dword ptr [ESP + 0x10]      ; 00417ac3
    MOV ECX,dword ptr [ESP + 0x18]      ; 00417ac7
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00417acb
    MOV ESI,dword ptr [EDX + 0x284]     ; 00417acf
    CMP ESI,0x3                         ; 00417ad5
    JGE 0x00417b26                      ; 00417ad8
        ;   XREF to: 00417b26 (CONDITIONAL_JUMP)  ; LAB_00417b26
    MOV EBP,ESI                         ; 00417ada
    IMUL ESI,ESI,0x194                  ; 00417adc
    LEA EAX,[EDX + 0x288]               ; 00417ae2
    INC EBP                             ; 00417ae8
    ADD EAX,ESI                         ; 00417ae9
    MOV dword ptr [EDX + 0x284],EBP     ; 00417aeb
    CMP EAX,ECX                         ; 00417af1
    JNZ 0x00417b2a                      ; 00417af3
        ;   XREF to: 00417b2a (CONDITIONAL_JUMP)  ; LAB_00417b2a
    LEA EDX,[EAX + 0xc]                 ; 00417af5
        ;   Label: LAB_00417af5
    CMP EDX,EBX                         ; 00417af8
    JZ 0x00417b0c                       ; 00417afa
        ;   XREF to: 00417b0c (CONDITIONAL_JUMP)  ; LAB_00417b0c
    MOV ECX,dword ptr [EBX]             ; 00417afc
    MOV dword ptr [EDX],ECX             ; 00417afe
    MOV ECX,dword ptr [EBX + 0x4]       ; 00417b00
    MOV dword ptr [EDX + 0x4],ECX       ; 00417b03
    MOV ECX,dword ptr [EBX + 0x8]       ; 00417b06
    MOV dword ptr [EDX + 0x8],ECX       ; 00417b09
    MOV EDX,dword ptr [ESP + 0x14]      ; 00417b0c
        ;   Label: LAB_00417b0c
    PUSH EDX                            ; 00417b10
    LEA EBX,[EAX + 0x18]                ; 00417b11
    PUSH EBX                            ; 00417b14
    CALL FUN_00454580                   ; 00417b15
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined FUN_00454580()
    ADD ESP,0x8                         ; 00417b1a
    PUSH EBX                            ; 00417b1d
    CALL FUN_00454510                   ; 00417b1e
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined FUN_00454510()
    ADD ESP,0x4                         ; 00417b23
    POP EBP                             ; 00417b26
        ;   Label: LAB_00417b26
    POP ESI                             ; 00417b27
    POP EBX                             ; 00417b28
    RET                                 ; 00417b29
    MOV EDX,dword ptr [ECX]             ; 00417b2a
        ;   Label: LAB_00417b2a
    MOV dword ptr [EAX],EDX             ; 00417b2c
    MOV EDX,dword ptr [ECX + 0x4]       ; 00417b2e
    MOV dword ptr [EAX + 0x4],EDX       ; 00417b31
    MOV EDX,dword ptr [ECX + 0x8]       ; 00417b34
    MOV dword ptr [EAX + 0x8],EDX       ; 00417b37
    JMP 0x00417af5                      ; 00417b3a
        ;   XREF to: 00417af5 (UNCONDITIONAL_JUMP)  ; LAB_00417af5

