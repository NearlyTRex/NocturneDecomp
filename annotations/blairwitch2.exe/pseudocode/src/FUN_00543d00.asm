; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00543d00(int *param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   FUN_00426730 at 00426815
;   FUN_00547170 at 005471c8
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   FUN_0041ae50
;   FUN_0046b960
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543d00
        ;   Label: FUN_00543d00
    PUSH EBP                            ; 00543d01
    SUB ESP,0x8                         ; 00543d02
    MOV EBX,dword ptr [ESP + 0x14]      ; 00543d05
    MOV EDX,dword ptr [0x0060b280]      ; 00543d09 | DAT_0060b280
    PUSH EDX                            ; 00543d0f | DAT_01ba5c50
    CALL FUN_0046b960                   ; 00543d10
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b960()
    ADD ESP,0x4                         ; 00543d15
    TEST EAX,EAX                        ; 00543d18
    JNZ 0x00543d27                      ; 00543d1a
        ;   XREF to: 00543d27 (CONDITIONAL_JUMP)  ; LAB_00543d27
    CMP dword ptr [EBX],0x1             ; 00543d1c
    JG 0x00543d2c                       ; 00543d1f
        ;   XREF to: 00543d2c (CONDITIONAL_JUMP)  ; LAB_00543d2c
    ADD ESP,0x8                         ; 00543d21
        ;   Label: LAB_00543d21
    POP EBP                             ; 00543d24
    POP EBX                             ; 00543d25
    RET                                 ; 00543d26
    MOV EAX,dword ptr [EBX]             ; 00543d27
        ;   Label: LAB_00543d27
    DEC EAX                             ; 00543d29
    JMP 0x00543d21                      ; 00543d2a
        ;   XREF to: 00543d21 (UNCONDITIONAL_JUMP)  ; LAB_00543d21
    PUSH ESI                            ; 00543d2c
        ;   Label: LAB_00543d2c
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00543d2d
    PUSH ESI                            ; 00543d31
    CALL FUN_0041ae50                   ; 00543d32
        ;   XREF to: 0041ae50 (UNCONDITIONAL_CALL)  ; undefined FUN_0041ae50()
    MOV dword ptr [ESP + 0xc],EAX       ; 00543d37
    MOV ECX,dword ptr [EBX]             ; 00543d3b
    FLD float ptr [ESP + 0xc]           ; 00543d3d
    CALL FUN_005b7ff0                   ; 00543d41
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    ADD ESP,0x4                         ; 00543d46
    DEC ECX                             ; 00543d49
    FISTP dword ptr [ESP + 0x4]         ; 00543d4a
    TEST ECX,ECX                        ; 00543d4e
    JLE 0x00543d6d                      ; 00543d50
        ;   XREF to: 00543d6d (CONDITIONAL_JUMP)  ; LAB_00543d6d
    LEA EDX,[ECX*0x8 + 0x0]             ; 00543d52
    MOV EBP,dword ptr [ESP + 0x4]       ; 00543d59
    ADD EDX,EBX                         ; 00543d5d
    CMP dword ptr [EDX + 0x8],0x0       ; 00543d5f
        ;   Label: LAB_00543d5f
    JZ 0x00543d76                       ; 00543d63
        ;   XREF to: 00543d76 (CONDITIONAL_JUMP)  ; LAB_00543d76
    DEC ECX                             ; 00543d65
        ;   Label: LAB_00543d65
    SUB EDX,0x8                         ; 00543d66
    TEST ECX,ECX                        ; 00543d69
    JG 0x00543d5f                       ; 00543d6b
        ;   XREF to: 00543d5f (CONDITIONAL_JUMP)  ; LAB_00543d5f
    MOV EAX,ECX                         ; 00543d6d
        ;   Label: LAB_00543d6d
    POP ESI                             ; 00543d6f
    ADD ESP,0x8                         ; 00543d70
    POP EBP                             ; 00543d73
    POP EBX                             ; 00543d74
    RET                                 ; 00543d75
    CMP EBP,dword ptr [EDX + 0x4]       ; 00543d76
        ;   Label: LAB_00543d76
    JL 0x00543d6d                       ; 00543d79
        ;   XREF to: 00543d6d (CONDITIONAL_JUMP)  ; LAB_00543d6d
    JMP 0x00543d65                      ; 00543d7b
        ;   XREF to: 00543d65 (UNCONDITIONAL_JUMP)  ; LAB_00543d65

