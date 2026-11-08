; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_005a1ec0(undefined4 param_1,undefined4 *param_2,uint param_3)
;
;
; Called Functions:
;   FUN_005b3a90
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005a1ec0
        ;   Label: FUN_005a1ec0
    PUSH EBP                            ; 005a1ec1
    SUB ESP,0x104                       ; 005a1ec2
    MOV EDX,dword ptr [ESP + 0x118]     ; 005a1ec8
    CMP EDX,0x1                         ; 005a1ecf
    JL 0x005a1f73                       ; 005a1ed2
        ;   XREF to: 005a1f73 (CONDITIONAL_JUMP)  ; LAB_005a1f73
    PUSH ESI                            ; 005a1ed8
    PUSH EBX                            ; 005a1ed9
    MOV EBX,dword ptr [ESP + 0x11c]     ; 005a1eda
    MOV EBP,EDX                         ; 005a1ee1
    CMP EDX,0x100                       ; 005a1ee3
    JLE 0x005a1f30                      ; 005a1ee9
        ;   XREF to: 005a1f30 (CONDITIONAL_JUMP)  ; LAB_005a1f30
    MOV ECX,0x100                       ; 005a1eeb
        ;   Label: LAB_005a1eeb
    LEA EDI,[ESP + 0x8]                 ; 005a1ef0
    MOV ESI,EBX                         ; 005a1ef4
    PUSH EDI                            ; 005a1ef6
    MOV EAX,ECX                         ; 005a1ef7
    SHR ECX,0x2                         ; 005a1ef9
    MOVSD.REP ES:EDI,ESI                ; 005a1efc
    MOV CL,AL                           ; 005a1efe
    AND CL,0x3                          ; 005a1f00
    MOVSB.REP ES:EDI,ESI                ; 005a1f03
    POP EDI                             ; 005a1f05
    SUB EBP,0x100                       ; 005a1f06
    LEA EDI,[ESP + 0x8]                 ; 005a1f0c
    XOR AH,AH                           ; 005a1f10
    PUSH EDI                            ; 005a1f12
    ADD EBX,0x100                       ; 005a1f13
    MOV byte ptr [ESP + 0x10c],AH       ; 005a1f19
    CALL FUN_005b3a90                   ; 005a1f20
        ;   XREF to: 005b3a90 (UNCONDITIONAL_CALL)  ; undefined FUN_005b3a90()
    ADD ESP,0x4                         ; 005a1f25
    CMP EBP,0x100                       ; 005a1f28
    JG 0x005a1eeb                       ; 005a1f2e
        ;   XREF to: 005a1eeb (CONDITIONAL_JUMP)  ; LAB_005a1eeb
    TEST EBP,EBP                        ; 005a1f30
        ;   Label: LAB_005a1f30
    JLE 0x005a1f5f                      ; 005a1f32
        ;   XREF to: 005a1f5f (CONDITIONAL_JUMP)  ; LAB_005a1f5f
    LEA EDI,[ESP + 0x8]                 ; 005a1f34
    MOV ECX,EBP                         ; 005a1f38
    MOV ESI,EBX                         ; 005a1f3a
    PUSH EDI                            ; 005a1f3c
    MOV EAX,ECX                         ; 005a1f3d
    SHR ECX,0x2                         ; 005a1f3f
    MOVSD.REP ES:EDI,ESI                ; 005a1f42
    MOV CL,AL                           ; 005a1f44
    AND CL,0x3                          ; 005a1f46
    MOVSB.REP ES:EDI,ESI                ; 005a1f49
    POP EDI                             ; 005a1f4b
    LEA EBX,[ESP + 0x8]                 ; 005a1f4c
    XOR DL,DL                           ; 005a1f50
    PUSH EBX                            ; 005a1f52
    MOV byte ptr [ESP + EBP*0x1 + 0xc],DL ; 005a1f53
    CALL FUN_005b3a90                   ; 005a1f57
        ;   XREF to: 005b3a90 (UNCONDITIONAL_CALL)  ; undefined FUN_005b3a90()
    ADD ESP,0x4                         ; 005a1f5c
    MOV EDI,dword ptr [ESP + 0x120]     ; 005a1f5f
        ;   Label: LAB_005a1f5f
    POP EBX                             ; 005a1f66
    POP ESI                             ; 005a1f67
    MOV EAX,EDI                         ; 005a1f68
    ADD ESP,0x104                       ; 005a1f6a
    POP EBP                             ; 005a1f70
    POP EDI                             ; 005a1f71
    RET                                 ; 005a1f72
    MOV EDI,EDX                         ; 005a1f73
        ;   Label: LAB_005a1f73
    MOV EAX,EDI                         ; 005a1f75
    ADD ESP,0x104                       ; 005a1f77
    POP EBP                             ; 005a1f7d
    POP EDI                             ; 005a1f7e
    RET                                 ; 005a1f7f

