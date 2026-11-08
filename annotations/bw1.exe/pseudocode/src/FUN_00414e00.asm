; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00414e00(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fc5c0
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01d39d34
;
; Called Functions:
;   FUN_004087b0
;   FUN_004087f0
;   FUN_004207b0
;   FUN_0042e960
;   FUN_00468900
;   FUN_00483e60
;   FUN_00523290
;   FUN_005232d0
;   FUN_005237e0
;   FUN_005254b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414e00
        ;   Label: FUN_00414e00
    PUSH EBP                            ; 00414e01
    SUB ESP,0x30                        ; 00414e02
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00414e05
    CMP dword ptr [EBX + 0x24fc],0x0    ; 00414e09
    JZ 0x00414e1a                       ; 00414e10
        ;   XREF to: 00414e1a (CONDITIONAL_JUMP)  ; LAB_00414e1a
    XOR EAX,EAX                         ; 00414e12
    ADD ESP,0x30                        ; 00414e14
    POP EBP                             ; 00414e17
    POP EBX                             ; 00414e18
    RET                                 ; 00414e19
    PUSH EDI                            ; 00414e1a
        ;   Label: LAB_00414e1a
    PUSH ESI                            ; 00414e1b
    PUSH EBX                            ; 00414e1c
    CALL FUN_004087b0                   ; 00414e1d
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087b0()
    ADD ESP,0x4                         ; 00414e22
    PUSH 0x0                            ; 00414e25
    MOV EAX,dword ptr [EBX + 0x154]     ; 00414e27
    PUSH EBX                            ; 00414e2d
    LEA ESI,[ESP + 0x10]                ; 00414e2e
    LEA EDI,[ESP + 0x28]                ; 00414e32
    CALL dword ptr [EAX + 0x1c]         ; 00414e36
    MOV ECX,0x6                         ; 00414e39
    ADD ESP,0x4                         ; 00414e3e
    LEA EAX,[ESP + 0x24]                ; 00414e41
    LEA ESI,[ESP + 0xc]                 ; 00414e45
    PUSH EAX                            ; 00414e49
    MOVSD.REP ES:EDI,ESI                ; 00414e4a
    CALL FUN_004207b0                   ; 00414e4c
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004207b0()
    ADD ESP,0x8                         ; 00414e51
    MOV EDI,EAX                         ; 00414e54
    TEST EAX,EAX                        ; 00414e56
    JZ 0x00414f03                       ; 00414e58
        ;   XREF to: 00414f03 (CONDITIONAL_JUMP)  ; LAB_00414f03
    MOV ECX,dword ptr [EBX + 0xc3e4]    ; 00414e5e
    MOV dword ptr [EBX + 0x27bc],0x1    ; 00414e64
    TEST ECX,ECX                        ; 00414e6e
    JZ 0x00414f16                       ; 00414e70
        ;   XREF to: 00414f16 (CONDITIONAL_JUMP)  ; LAB_00414f16
    PUSH 0x0                            ; 00414e76
    LEA EAX,[EBX + 0x158]               ; 00414e78
    PUSH EAX                            ; 00414e7e
    PUSH 0x0                            ; 00414e7f
    LEA ESI,[EBX + 0xc3ec]              ; 00414e81
    PUSH ESI                            ; 00414e87
    CALL FUN_00523290                   ; 00414e88
        ;   XREF to: 00523290 (UNCONDITIONAL_CALL)  ; undefined FUN_00523290()
    ADD ESP,0x10                        ; 00414e8d
    PUSH 0x0                            ; 00414e90
    PUSH 0x0                            ; 00414e92
    LEA EAX,[EBX + 0xc268]              ; 00414e94
    PUSH EAX                            ; 00414e9a
    CALL FUN_00468900                   ; 00414e9b
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    ADD ESP,0x4                         ; 00414ea0
    PUSH EAX                            ; 00414ea3
    PUSH 0x1                            ; 00414ea4
    PUSH ESI                            ; 00414ea6
    CALL FUN_005232d0                   ; 00414ea7
        ;   XREF to: 005232d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005232d0()
    FLD float ptr [EBX + 0xc3e8]        ; 00414eac
    FDIV float ptr [0x005fc5c0]         ; 00414eb2 | DAT_005fc5c0
    ADD ESP,0x14                        ; 00414eb8
    SUB ESP,0x4                         ; 00414ebb
    FSTP float ptr [ESP]                ; 00414ebe
    PUSH ESI                            ; 00414ec1
    CALL FUN_005237e0                   ; 00414ec2
        ;   XREF to: 005237e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005237e0()
    ADD ESP,0x8                         ; 00414ec7
    CMP dword ptr [0x01d39d34],0x0      ; 00414eca | DAT_01d39d34
        ;   Label: LAB_00414eca
    JZ 0x00414f03                       ; 00414ed1
        ;   XREF to: 00414f03 (CONDITIONAL_JUMP)  ; LAB_00414f03
    MOV EBP,dword ptr [0x00612560]      ; 00414ed3 | DAT_00612560
    PUSH EBP                            ; 00414ed9 | DAT_01bc120c
    CALL FUN_00483e60                   ; 00414eda
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e60()
    ADD ESP,0x4                         ; 00414edf
    TEST EAX,EAX                        ; 00414ee2
    JNZ 0x00414f03                      ; 00414ee4
        ;   XREF to: 00414f03 (CONDITIONAL_JUMP)  ; LAB_00414f03
    PUSH EBX                            ; 00414ee6
    LEA EAX,[EBX + 0x158]               ; 00414ee7
    PUSH EAX                            ; 00414eed
    CALL FUN_005254b0                   ; 00414eee
        ;   XREF to: 005254b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005254b0()
    ADD ESP,0x8                         ; 00414ef3
    MOV EAX,dword ptr [EBX + 0x154]     ; 00414ef6
    PUSH EBX                            ; 00414efc
    CALL dword ptr [EAX + 0x58]         ; 00414efd
    ADD ESP,0x4                         ; 00414f00
    PUSH EBX                            ; 00414f03
        ;   Label: LAB_00414f03
    CALL FUN_004087f0                   ; 00414f04
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 00414f09
    MOV EAX,EDI                         ; 00414f0c
    POP ESI                             ; 00414f0e
    POP EDI                             ; 00414f0f
    ADD ESP,0x30                        ; 00414f10
    POP EBP                             ; 00414f13
    POP EBX                             ; 00414f14
    RET                                 ; 00414f15
    PUSH EBX                            ; 00414f16
        ;   Label: LAB_00414f16
    CALL FUN_0042e960                   ; 00414f17
        ;   XREF to: 0042e960 (UNCONDITIONAL_CALL)  ; undefined FUN_0042e960()
    ADD ESP,0x4                         ; 00414f1c
    JMP 0x00414eca                      ; 00414f1f
        ;   XREF to: 00414eca (UNCONDITIONAL_JUMP)  ; LAB_00414eca

