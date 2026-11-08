; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b9e30(char *param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004be0f0 at 004be2bc
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061d310
;   undefined4 DAT_0152d240
;   undefined4 DAT_01c43530
;   undefined4 DAT_01c4353c
;   undefined4 DAT_01c43540
;   undefined4 DAT_01cc7f1c
;   undefined4 DAT_01cc7f20
;   undefined4 DAT_01cc7f24
;   undefined4 DAT_01cc7f28
;   undefined4 DAT_01cc7f2c
;   undefined4 DAT_01cc7f30
;   undefined4 DAT_01cc7f38
;   undefined4 DAT_01cc7f39
;   ... and 3 more
;
; Called Functions:
;   FUN_004c3ea0
;   FUN_004c3f50
;   FUN_005c0f80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b9e30
        ;   Label: FUN_004b9e30
    PUSH ESI                            ; 004b9e31
    PUSH EDI                            ; 004b9e32
    PUSH EBP                            ; 004b9e33
    SUB ESP,0x4                         ; 004b9e34
    MOV EBP,dword ptr [ESP + 0x18]      ; 004b9e37
    PUSH 0x1cc7f38                      ; 004b9e3b | DAT_01cc7f38
    MOV EDX,0x1                         ; 004b9e40
    PUSH EBP                            ; 004b9e45
    MOV dword ptr [0x01cc8000],EDX      ; 004b9e46 | DAT_01cc8000
    CALL FUN_005c0f80                   ; 004b9e4c
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0f80()
    ADD ESP,0x8                         ; 004b9e51
    TEST EAX,EAX                        ; 004b9e54
    JNZ 0x004b9e69                      ; 004b9e56
        ;   XREF to: 004b9e69 (CONDITIONAL_JUMP)  ; LAB_004b9e69
    CMP dword ptr [0x0061d310],0x0      ; 004b9e58 | DAT_0061d310
    JL 0x004b9e9c                       ; 004b9e5f
        ;   XREF to: 004b9e9c (CONDITIONAL_JUMP)  ; LAB_004b9e9c
    ADD ESP,0x4                         ; 004b9e61
        ;   Label: LAB_004b9e61
    POP EBP                             ; 004b9e64
    POP EDI                             ; 004b9e65
    POP ESI                             ; 004b9e66
    POP EBX                             ; 004b9e67
    RET                                 ; 004b9e68
    MOV EDI,0x1cc7f38                   ; 004b9e69
        ;   Label: LAB_004b9e69
    XOR EBX,EBX                         ; 004b9e6e
    MOV ESI,EBP                         ; 004b9e70
    MOV dword ptr [0x01cc7f1c],EBX      ; 004b9e72 | DAT_01cc7f1c
    PUSH EDI                            ; 004b9e78 | DAT_01cc7f38
    MOV AL,byte ptr [ESI]               ; 004b9e79
        ;   Label: LAB_004b9e79
    MOV byte ptr [EDI],AL               ; 004b9e7b | DAT_01cc7f38 | DAT_01cc7f3a
    CMP AL,0x0                          ; 004b9e7d
    JZ 0x004b9e91                       ; 004b9e7f
        ;   XREF to: 004b9e91 (CONDITIONAL_JUMP)  ; LAB_004b9e91
    MOV AL,byte ptr [ESI + 0x1]         ; 004b9e81
    ADD ESI,0x2                         ; 004b9e84
    MOV byte ptr [EDI + 0x1],AL         ; 004b9e87 | DAT_01cc7f39 | DAT_01cc7f3b
    ADD EDI,0x2                         ; 004b9e8a
    CMP AL,0x0                          ; 004b9e8d
    JNZ 0x004b9e79                      ; 004b9e8f
        ;   XREF to: 004b9e79 (CONDITIONAL_JUMP)  ; LAB_004b9e79
    POP EDI                             ; 004b9e91
        ;   Label: LAB_004b9e91
    MOV dword ptr [0x0061d310],0xffffffff ; 004b9e92 | DAT_0061d310
    MOV EDI,dword ptr [0x01cc7f1c]      ; 004b9e9c | DAT_01cc7f1c
        ;   Label: LAB_004b9e9c
    MOV EAX,[0x01c43530]                ; 004b9ea2 | DAT_01c43530
    ADD EDI,EAX                         ; 004b9ea7
    MOV dword ptr [0x01cc7f1c],EDI      ; 004b9ea9 | DAT_01cc7f1c
    CMP EDI,0x10000                     ; 004b9eaf
    JL 0x004b9e61                       ; 004b9eb5
        ;   XREF to: 004b9e61 (CONDITIONAL_JUMP)  ; LAB_004b9e61
    PUSH EBP                            ; 004b9eb7
    MOV EDX,dword ptr [0x0152d240]      ; 004b9eb8 | DAT_0152d240
    PUSH EDX                            ; 004b9ebe
    CALL FUN_004c3ea0                   ; 004b9ebf
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c3ea0()
    ADD ESP,0x8                         ; 004b9ec4
    PUSH EBP                            ; 004b9ec7
    MOV ECX,dword ptr [0x0152d240]      ; 004b9ec8 | DAT_0152d240
    MOV EBX,EAX                         ; 004b9ece
    PUSH ECX                            ; 004b9ed0
    MOV dword ptr [ESP + 0x8],EAX       ; 004b9ed1
    LEA ESI,[EBX + 0x8]                 ; 004b9ed5
    CALL FUN_004c3f50                   ; 004b9ed8
        ;   XREF to: 004c3f50 (UNCONDITIONAL_CALL)  ; undefined FUN_004c3f50()
    MOV EDX,dword ptr [0x01c4353c]      ; 004b9edd | DAT_01c4353c
    MOV EBX,dword ptr [0x01c43540]      ; 004b9ee3 | DAT_01c43540
    ADD ESP,0x8                         ; 004b9ee9
    MOV EDI,EAX                         ; 004b9eec
    LEA EBP,[EAX + 0x6]                 ; 004b9eee
    ADD EBX,0x40                        ; 004b9ef1
    LEA EAX,[EDX + ESI*0x1]             ; 004b9ef4
    LEA ECX,[EBX + EBP*0x1]             ; 004b9ef7
    CMP EAX,dword ptr [0x0061b498]      ; 004b9efa | DAT_0061b498
    JLE 0x004b9f0b                      ; 004b9f00
        ;   XREF to: 004b9f0b (CONDITIONAL_JUMP)  ; LAB_004b9f0b
    MOV EAX,[0x0061b498]                ; 004b9f02 | DAT_0061b498
    MOV EDX,EAX                         ; 004b9f07
    SUB EDX,ESI                         ; 004b9f09
    CMP ECX,dword ptr [0x0061b49c]      ; 004b9f0b | DAT_0061b49c
        ;   Label: LAB_004b9f0b
    JLE 0x004b9f20                      ; 004b9f11
        ;   XREF to: 004b9f20 (CONDITIONAL_JUMP)  ; LAB_004b9f20
    MOV ECX,dword ptr [0x01c43540]      ; 004b9f13 | DAT_01c43540
    SUB ECX,0x14                        ; 004b9f19
    MOV EBX,ECX                         ; 004b9f1c
    SUB EBX,EBP                         ; 004b9f1e
    MOV EBP,dword ptr [ESP]             ; 004b9f20
        ;   Label: LAB_004b9f20
    MOV dword ptr [0x0061d310],EDX      ; 004b9f23 | DAT_0061d310
    ADD EDX,EAX                         ; 004b9f29
    SUB EDX,EBP                         ; 004b9f2b
    MOV [0x01cc7f24],EAX                ; 004b9f2d | DAT_01cc7f24
    MOV EAX,EDX                         ; 004b9f32
    SAR EDX,0x1f                        ; 004b9f34
    SUB EAX,EDX                         ; 004b9f37
    SAR EAX,0x1                         ; 004b9f39
    MOV dword ptr [0x01cc7f20],EBX      ; 004b9f3b | DAT_01cc7f20
    LEA EDX,[EBX + ECX*0x1]             ; 004b9f41
    SUB EDX,EDI                         ; 004b9f44
    MOV [0x01cc7f2c],EAX                ; 004b9f46 | DAT_01cc7f2c
    MOV EAX,EDX                         ; 004b9f4b
    SAR EDX,0x1f                        ; 004b9f4d
    SUB EAX,EDX                         ; 004b9f50
    SAR EAX,0x1                         ; 004b9f52
    MOV dword ptr [0x01cc7f28],ECX      ; 004b9f54 | DAT_01cc7f28
    MOV [0x01cc7f30],EAX                ; 004b9f5a | DAT_01cc7f30
    ADD ESP,0x4                         ; 004b9f5f
    POP EBP                             ; 004b9f62
    POP EDI                             ; 004b9f63
    POP ESI                             ; 004b9f64
    POP EBX                             ; 004b9f65
    RET                                 ; 004b9f66

