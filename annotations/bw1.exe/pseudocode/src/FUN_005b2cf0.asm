; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b2cf0(void)
;
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
;
; XREF[3]:
;   FUN_004cf5e0 at 004cfdf8
;   FUN_005acff0 at 005ad0c9
;   FUN_005b4cd0 at 005b4fca
;
; Referenced Globals:
;   void* PTR_DispatchMessageA_005d04b4 = 001d0ac0
;   void* PTR_PeekMessageA_005d04e8 = 001d0b92
;   void* PTR_TranslateMessage_005d0510 = 001d0c36
;   void* PTR_Sleep_005d0658 = 001d1230
;   undefined4 DAT_006260e4
;   undefined4 DAT_006260e8
;   undefined4 DAT_02c9be70
;
; Called Functions:
;   DispatchMessageA
;   PeekMessageA
;   Sleep
;   TranslateMessage
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b2cf0
        ;   Label: FUN_005b2cf0
    PUSH ESI                            ; 005b2cf1
    PUSH EDI                            ; 005b2cf2
    SUB ESP,0x1c                        ; 005b2cf3
    XOR EDX,EDX                         ; 005b2cf6
    XOR EAX,EAX                         ; 005b2cf8
    XOR EBX,EBX                         ; 005b2cfa
    CMP dword ptr [EDX + 0x2c9be80],0x1 ; 005b2cfc
        ;   Label: LAB_005b2cfc
    JZ 0x005b2d43                       ; 005b2d03
        ;   XREF to: 005b2d43 (CONDITIONAL_JUMP)  ; LAB_005b2d43
    ADD EDX,0x4                         ; 005b2d05
        ;   Label: LAB_005b2d05
    INC EAX                             ; 005b2d08
    MOV dword ptr [EDX + 0x2c9be7c],EBX ; 005b2d09
    CMP EAX,0x258                       ; 005b2d0f
    JL 0x005b2cfc                       ; 005b2d14
        ;   XREF to: 005b2cfc (CONDITIONAL_JUMP)  ; LAB_005b2cfc
    XOR EBX,EBX                         ; 005b2d16
    PUSH 0x1                            ; 005b2d18
        ;   Label: LAB_005b2d18
    PUSH EBX                            ; 005b2d1a
    PUSH EBX                            ; 005b2d1b
    PUSH EBX                            ; 005b2d1c
    LEA EAX,[ESP + 0x10]                ; 005b2d1d
    PUSH EAX                            ; 005b2d21
    CALL dword ptr CS:[0x5d04e8]        ; 005b2d22 | PTR_PeekMessageA_005d04e8
    TEST EAX,EAX                        ; 005b2d29
    JZ 0x005b2d4b                       ; 005b2d2b
        ;   XREF to: 005b2d4b (CONDITIONAL_JUMP)  ; LAB_005b2d4b
    MOV EAX,ESP                         ; 005b2d2d
    PUSH EAX                            ; 005b2d2f
    CALL dword ptr CS:[0x5d0510]        ; 005b2d30 | PTR_TranslateMessage_005d0510
    MOV EAX,ESP                         ; 005b2d37
    PUSH EAX                            ; 005b2d39
    CALL dword ptr CS:[0x5d04b4]        ; 005b2d3a | PTR_DispatchMessageA_005d04b4
    JMP 0x005b2d18                      ; 005b2d41
        ;   XREF to: 005b2d18 (UNCONDITIONAL_JUMP)  ; LAB_005b2d18
    MOV byte ptr [EAX + 0x1c50950],BL   ; 005b2d43
        ;   Label: LAB_005b2d43
    JMP 0x005b2d05                      ; 005b2d49
        ;   XREF to: 005b2d05 (UNCONDITIONAL_JUMP)  ; LAB_005b2d05
    MOV ESI,dword ptr [0x006260e4]      ; 005b2d4b | DAT_006260e4
        ;   Label: LAB_005b2d4b
    CMP EBX,ESI                         ; 005b2d51
    JNZ 0x005b2d6f                      ; 005b2d53
        ;   XREF to: 005b2d6f (CONDITIONAL_JUMP)  ; LAB_005b2d6f
    MOV EDI,dword ptr [0x02c9be70]      ; 005b2d55 | DAT_02c9be70
    CMP ESI,EDI                         ; 005b2d5b
    JNZ 0x005b2d6f                      ; 005b2d5d
        ;   XREF to: 005b2d6f (CONDITIONAL_JUMP)  ; LAB_005b2d6f
    CMP EDI,dword ptr [0x006260e4]      ; 005b2d5f | DAT_006260e4
    JZ 0x005b2d76                       ; 005b2d65
        ;   XREF to: 005b2d76 (CONDITIONAL_JUMP)  ; LAB_005b2d76
    CMP EBX,dword ptr [0x006260e8]      ; 005b2d67 | DAT_006260e8
    JNZ 0x005b2d18                      ; 005b2d6d
        ;   XREF to: 005b2d18 (CONDITIONAL_JUMP)  ; LAB_005b2d18
    ADD ESP,0x1c                        ; 005b2d6f
        ;   Label: LAB_005b2d6f
    POP EDI                             ; 005b2d72
    POP ESI                             ; 005b2d73
    POP EBX                             ; 005b2d74
    RET                                 ; 005b2d75
    PUSH 0x14                           ; 005b2d76
        ;   Label: LAB_005b2d76
    CALL dword ptr CS:[0x5d0658]        ; 005b2d78 | PTR_Sleep_005d0658
    CMP EBX,dword ptr [0x006260e8]      ; 005b2d7f | DAT_006260e8
    JNZ 0x005b2d18                      ; 005b2d85
        ;   XREF to: 005b2d18 (CONDITIONAL_JUMP)  ; LAB_005b2d18
    ADD ESP,0x1c                        ; 005b2d87
    POP EDI                             ; 005b2d8a
    POP ESI                             ; 005b2d8b
    POP EBX                             ; 005b2d8c
    RET                                 ; 005b2d8d

