; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c49cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5,int param_6,undefined4 param_7)
;
;
; XREF[2]:
;   FUN_005c2568 at 005c258a
;   FUN_005c25a4 at 005c25c6
;
; Called Functions:
;   FUN_005bc288
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005c49cc
        ;   Label: FUN_005c49cc
    MOV EBP,ESP                         ; 005c49cd
    PUSH EBX                            ; 005c49cf
    PUSH ESI                            ; 005c49d0
    PUSH EDI                            ; 005c49d1
    SUB ESP,0x40                        ; 005c49d2
    MOV EAX,dword ptr [EBP + 0x8]       ; 005c49d5
    MOV dword ptr [EBP + -0x14],EAX     ; 005c49d8
    MOV EAX,dword ptr [EBP + 0xc]       ; 005c49db
    LEA EDX,[EBP + -0x20]               ; 005c49de
    MOV dword ptr [EBP + -0x10],EAX     ; 005c49e1
    LEA EAX,[EBP + -0x14]               ; 005c49e4
    FLD double ptr [EAX]                ; 005c49e7
    FSTP extended double ptr [EDX]      ; 005c49e9
    CMP dword ptr [EBP + 0x1c],0x46     ; 005c49eb
    JNZ 0x005c4a00                      ; 005c49ef
        ;   XREF to: 005c4a00 (CONDITIONAL_JUMP)  ; LAB_005c4a00
    MOV ESI,0xa                         ; 005c49f1
    XOR EDI,EDI                         ; 005c49f6
    MOV dword ptr [EBP + -0x44],ESI     ; 005c49f8
    MOV dword ptr [EBP + -0x48],EDI     ; 005c49fb
    JMP 0x005c4a10                      ; 005c49fe
        ;   XREF to: 005c4a10 (UNCONDITIONAL_JUMP)  ; LAB_005c4a10
    MOV EBX,0xc                         ; 005c4a00
        ;   Label: LAB_005c4a00
    MOV ECX,0x1                         ; 005c4a05
    MOV dword ptr [EBP + -0x44],EBX     ; 005c4a0a
    MOV dword ptr [EBP + -0x48],ECX     ; 005c4a0d
    MOV EAX,dword ptr [EBP + 0x10]      ; 005c4a10
        ;   Label: LAB_005c4a10
    MOV dword ptr [EBP + -0x4c],EAX     ; 005c4a13
    XOR EAX,EAX                         ; 005c4a16
    MOV EDX,dword ptr [EBP + 0x20]      ; 005c4a18
    MOV dword ptr [EBP + -0x3c],EAX     ; 005c4a1b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005c4a1e
    PUSH EDX                            ; 005c4a21
    MOV dword ptr [EBP + -0x40],EAX     ; 005c4a22
    LEA EAX,[EBP + -0x4c]               ; 005c4a25
    PUSH EAX                            ; 005c4a28
    LEA EAX,[EBP + -0x20]               ; 005c4a29
    PUSH EAX                            ; 005c4a2c
    CALL FUN_005bc288                   ; 005c4a2d
        ;   XREF to: 005bc288 (UNCONDITIONAL_CALL)  ; undefined FUN_005bc288()
    MOV EDX,dword ptr [EBP + 0x14]      ; 005c4a32
    MOV EAX,dword ptr [EBP + -0x34]     ; 005c4a35
    MOV dword ptr [EDX],EAX             ; 005c4a38
    MOV EDX,dword ptr [EBP + 0x18]      ; 005c4a3a
    MOV EAX,dword ptr [EBP + -0x38]     ; 005c4a3d
    ADD ESP,0xc                         ; 005c4a40
    MOV dword ptr [EDX],EAX             ; 005c4a43
    MOV EAX,dword ptr [EBP + 0x20]      ; 005c4a45
    LEA ESP,[EBP + -0xc]                ; 005c4a48
    POP EDI                             ; 005c4a4b
    POP ESI                             ; 005c4a4c
    POP EBX                             ; 005c4a4d
    POP EBP                             ; 005c4a4e
    RET                                 ; 005c4a4f

