; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00574e00(int param_1)
;
;
; XREF[9]:
;   FUN_004050e0 at 0040514d
;   FUN_00426730 at 004267cf
;   FUN_0046ca00 at 0046ca07
;   FUN_004a70b0 at 004a726c
;   FUN_004da990 at 004dab4d
;   FUN_004f3380 at 004f338f
;   FUN_00574e80 at 00574e85
;   FUN_00575070 at 00575076
;   FUN_005b0fe0 at 005b1077
;
; Referenced Globals:
;   undefined4 DAT_0070ca74
;   undefined4 DAT_02652eac
;   undefined4 DAT_02652eb0
;
; Called Functions:
;   FUN_00573b80
;   FUN_00574490
;   FUN_00574520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574e00
        ;   Label: FUN_00574e00
    PUSH EDI                            ; 00574e01
    MOV EBX,dword ptr [ESP + 0xc]       ; 00574e02
    MOV EDX,dword ptr [0x0070ca74]      ; 00574e06 | DAT_0070ca74
    LEA EAX,[EBX + 0x18]                ; 00574e0c
    XOR EDI,EDI                         ; 00574e0f
    TEST EDX,EDX                        ; 00574e11
    JNZ 0x00574e1b                      ; 00574e13
        ;   XREF to: 00574e1b (CONDITIONAL_JUMP)  ; LAB_00574e1b
    CMP byte ptr [EBX + 0x8],0x0        ; 00574e15
    JNZ 0x00574e1e                      ; 00574e19
        ;   XREF to: 00574e1e (CONDITIONAL_JUMP)  ; LAB_00574e1e
    POP EDI                             ; 00574e1b
        ;   Label: LAB_00574e1b
    POP EBX                             ; 00574e1c
    RET                                 ; 00574e1d
    PUSH ESI                            ; 00574e1e
        ;   Label: LAB_00574e1e
    LEA ESI,[EBX + 0x8]                 ; 00574e1f
    MOV EAX,dword ptr [EBX + 0x4]       ; 00574e22
    PUSH ESI                            ; 00574e25
    AND EAX,0xffff                      ; 00574e26
    PUSH EAX                            ; 00574e2b
    MOV ECX,dword ptr [0x02652eb0]      ; 00574e2c | DAT_02652eb0
    PUSH ECX                            ; 00574e32
    CALL FUN_00574490                   ; 00574e33
        ;   XREF to: 00574490 (UNCONDITIONAL_CALL)  ; undefined FUN_00574490()
    MOV EDX,EAX                         ; 00574e38
    ADD ESP,0xc                         ; 00574e3a
    CMP EAX,-0x1                        ; 00574e3d
    JNZ 0x00574e57                      ; 00574e40
        ;   XREF to: 00574e57 (CONDITIONAL_JUMP)  ; LAB_00574e57
    PUSH ESI                            ; 00574e42
    MOV ESI,dword ptr [0x02652eb0]      ; 00574e43 | DAT_02652eb0
    PUSH ESI                            ; 00574e49
    MOV EDI,0x1                         ; 00574e4a
    CALL FUN_00573b80                   ; 00574e4f
        ;   XREF to: 00573b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00573b80()
    ADD ESP,0x8                         ; 00574e54
    MOV dword ptr [EBX + 0x4],EAX       ; 00574e57
        ;   Label: LAB_00574e57
    PUSH EDI                            ; 00574e5a
    PUSH EBX                            ; 00574e5b
    MOV EDI,dword ptr [0x02652eb0]      ; 00574e5c | DAT_02652eb0
    PUSH EDI                            ; 00574e62
    MOV [0x02652eac],EAX                ; 00574e63 | DAT_02652eac
    CALL FUN_00574520                   ; 00574e68
        ;   XREF to: 00574520 (UNCONDITIONAL_CALL)  ; undefined FUN_00574520()
    ADD ESP,0xc                         ; 00574e6d
    LEA EAX,[EBX + 0x18]                ; 00574e70
    POP ESI                             ; 00574e73
    POP EDI                             ; 00574e74
    POP EBX                             ; 00574e75
    RET                                 ; 00574e76

