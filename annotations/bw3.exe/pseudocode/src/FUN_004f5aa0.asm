; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f5aa0(int param_1)
;
;
; XREF[1]:
;   FUN_004e44e0 at 004e4b17
;
; Referenced Globals:
;   undefined1 DAT_005c8375
;   undefined1 DAT_005c8376
;   undefined1 DAT_005c8377
;   undefined1 DAT_005c8378
;   undefined4 DAT_01d882a0
;   undefined4 DAT_01d88308
;   undefined4 DAT_01d88309
;   undefined4 DAT_01d8830a
;   undefined4 DAT_01d8830b
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004f5aa0
        ;   Label: FUN_004f5aa0
    PUSH EDI                            ; 004f5aa1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f5aa2
    MOV dword ptr [EDX + 0x1008],0x0    ; 004f5aa6
    MOV dword ptr [EDX + 0x143c],0x0    ; 004f5ab0
    MOV dword ptr [EDX + 0x1440],0x0    ; 004f5aba
    LEA EAX,[EDX + 0x1444]              ; 004f5ac4
    MOV dword ptr [EDX + 0x1450],0xffffffff ; 004f5aca
    MOV ESI,0x5c8375                    ; 004f5ad4 | DAT_005c8375
    MOV dword ptr [EAX + 0x8],0x0       ; 004f5ad9
    MOV EDI,0x1d88308                   ; 004f5ae0
    MOV ECX,dword ptr [EAX + 0x8]       ; 004f5ae5
    MOV dword ptr [EAX + 0x4],ECX       ; 004f5ae8
    MOV ECX,dword ptr [EAX + 0x4]       ; 004f5aeb
    MOV dword ptr [EAX],ECX             ; 004f5aee
    MOV byte ptr [EDX + 0x133c],0x0     ; 004f5af0
    XOR AH,AH                           ; 004f5af7
    MOV dword ptr [EDX + 0x1018],0x0    ; 004f5af9
    MOV byte ptr [0x01d882a0],AH        ; 004f5b03 | DAT_01d882a0
    PUSH EDI                            ; 004f5b09
    MOV AL,byte ptr [ESI]               ; 004f5b0a | DAT_005c8375 | DAT_005c8377
        ;   Label: LAB_004f5b0a
    MOV byte ptr [EDI],AL               ; 004f5b0c | DAT_01d88308 | DAT_01d8830a
    CMP AL,0x0                          ; 004f5b0e
    JZ 0x004f5b22                       ; 004f5b10
        ;   XREF to: 004f5b22 (CONDITIONAL_JUMP)  ; LAB_004f5b22
    MOV AL,byte ptr [ESI + 0x1]         ; 004f5b12 | DAT_005c8376 | DAT_005c8378
    ADD ESI,0x2                         ; 004f5b15
    MOV byte ptr [EDI + 0x1],AL         ; 004f5b18 | DAT_01d88309 | DAT_01d8830b
    ADD EDI,0x2                         ; 004f5b1b
    CMP AL,0x0                          ; 004f5b1e
    JNZ 0x004f5b0a                      ; 004f5b20
        ;   XREF to: 004f5b0a (CONDITIONAL_JUMP)  ; LAB_004f5b0a
    POP EDI                             ; 004f5b22
        ;   Label: LAB_004f5b22
    MOV dword ptr [EDX + 0x1454],0xffffffff ; 004f5b23
    MOV dword ptr [EDX + 0x1010],0x0    ; 004f5b2d
    MOV dword ptr [EDX + 0x1458],0x0    ; 004f5b37
    MOV dword ptr [EDX + 0x145c],0x0    ; 004f5b41
    MOV dword ptr [EDX + 0x100c],0xffffffff ; 004f5b4b
    MOV dword ptr [EDX + 0x1014],0x0    ; 004f5b55
    POP EDI                             ; 004f5b5f
    POP ESI                             ; 004f5b60
    RET                                 ; 004f5b61

