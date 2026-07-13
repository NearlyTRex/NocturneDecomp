; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00571bdc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5,int param_6,undefined4 param_7)
;
;
; XREF[2]:
;   FUN_0056f9c4 at 0056f9e6
;   FUN_0056fa00 at 0056fa22
;
; Called Functions:
;   FUN_0056a388
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00571bdc
        ;   Label: FUN_00571bdc
    MOV EBP,ESP                         ; 00571bdd
    PUSH EBX                            ; 00571bdf
    PUSH ESI                            ; 00571be0
    PUSH EDI                            ; 00571be1
    SUB ESP,0x40                        ; 00571be2
    MOV EAX,dword ptr [EBP + 0x8]       ; 00571be5
    MOV dword ptr [EBP + -0x14],EAX     ; 00571be8
    MOV EAX,dword ptr [EBP + 0xc]       ; 00571beb
    LEA EDX,[EBP + -0x20]               ; 00571bee
    MOV dword ptr [EBP + -0x10],EAX     ; 00571bf1
    LEA EAX,[EBP + -0x14]               ; 00571bf4
    FLD double ptr [EAX]                ; 00571bf7
    FSTP extended double ptr [EDX]      ; 00571bf9
    CMP dword ptr [EBP + 0x1c],0x46     ; 00571bfb
    JNZ 0x00571c10                      ; 00571bff
        ;   XREF to: 00571c10 (CONDITIONAL_JUMP)  ; LAB_00571c10
    MOV ESI,0xa                         ; 00571c01
    XOR EDI,EDI                         ; 00571c06
    MOV dword ptr [EBP + -0x44],ESI     ; 00571c08
    MOV dword ptr [EBP + -0x48],EDI     ; 00571c0b
    JMP 0x00571c20                      ; 00571c0e
        ;   XREF to: 00571c20 (UNCONDITIONAL_JUMP)  ; LAB_00571c20
    MOV EBX,0xc                         ; 00571c10
        ;   Label: LAB_00571c10
    MOV ECX,0x1                         ; 00571c15
    MOV dword ptr [EBP + -0x44],EBX     ; 00571c1a
    MOV dword ptr [EBP + -0x48],ECX     ; 00571c1d
    MOV EAX,dword ptr [EBP + 0x10]      ; 00571c20
        ;   Label: LAB_00571c20
    MOV dword ptr [EBP + -0x4c],EAX     ; 00571c23
    XOR EAX,EAX                         ; 00571c26
    MOV EDX,dword ptr [EBP + 0x20]      ; 00571c28
    MOV dword ptr [EBP + -0x3c],EAX     ; 00571c2b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00571c2e
    PUSH EDX                            ; 00571c31
    MOV dword ptr [EBP + -0x40],EAX     ; 00571c32
    LEA EAX,[EBP + -0x4c]               ; 00571c35
    PUSH EAX                            ; 00571c38
    LEA EAX,[EBP + -0x20]               ; 00571c39
    PUSH EAX                            ; 00571c3c
    CALL FUN_0056a388                   ; 00571c3d
        ;   XREF to: 0056a388 (UNCONDITIONAL_CALL)  ; undefined FUN_0056a388()
    MOV EDX,dword ptr [EBP + 0x14]      ; 00571c42
    MOV EAX,dword ptr [EBP + -0x34]     ; 00571c45
    MOV dword ptr [EDX],EAX             ; 00571c48
    MOV EDX,dword ptr [EBP + 0x18]      ; 00571c4a
    MOV EAX,dword ptr [EBP + -0x38]     ; 00571c4d
    ADD ESP,0xc                         ; 00571c50
    MOV dword ptr [EDX],EAX             ; 00571c53
    MOV EAX,dword ptr [EBP + 0x20]      ; 00571c55
    LEA ESP,[EBP + -0xc]                ; 00571c58
    POP EDI                             ; 00571c5b
    POP ESI                             ; 00571c5c
    POP EBX                             ; 00571c5d
    POP EBP                             ; 00571c5e
    RET                                 ; 00571c5f

