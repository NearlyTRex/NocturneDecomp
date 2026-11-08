; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00597a20(int param_1)
;
;
; XREF[9]:
;   FUN_00404f10 at 00404f7d
;   FUN_00430060 at 004300ff
;   FUN_00441800 at 00441897
;   FUN_00484f00 at 00484f07
;   FUN_004c0080 at 004c023c
;   FUN_004f70e0 at 004f7413
;   FUN_005121b0 at 005121bf
;   FUN_00597aa0 at 00597aa5
;   FUN_00597c90 at 00597c96
;
; Referenced Globals:
;   undefined4 DAT_00713a74
;   undefined4 DAT_02c8a67c
;   undefined4 DAT_02c8a680
;
; Called Functions:
;   FUN_005967a0
;   FUN_005970b0
;   FUN_00597140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00597a20
        ;   Label: FUN_00597a20
    PUSH EDI                            ; 00597a21
    MOV EBX,dword ptr [ESP + 0xc]       ; 00597a22
    MOV EDX,dword ptr [0x00713a74]      ; 00597a26 | DAT_00713a74
    LEA EAX,[EBX + 0x18]                ; 00597a2c
    XOR EDI,EDI                         ; 00597a2f
    TEST EDX,EDX                        ; 00597a31
    JNZ 0x00597a3b                      ; 00597a33
        ;   XREF to: 00597a3b (CONDITIONAL_JUMP)  ; LAB_00597a3b
    CMP byte ptr [EBX + 0x8],0x0        ; 00597a35
    JNZ 0x00597a3e                      ; 00597a39
        ;   XREF to: 00597a3e (CONDITIONAL_JUMP)  ; LAB_00597a3e
    POP EDI                             ; 00597a3b
        ;   Label: LAB_00597a3b
    POP EBX                             ; 00597a3c
    RET                                 ; 00597a3d
    PUSH ESI                            ; 00597a3e
        ;   Label: LAB_00597a3e
    LEA ESI,[EBX + 0x8]                 ; 00597a3f
    MOV EAX,dword ptr [EBX + 0x4]       ; 00597a42
    PUSH ESI                            ; 00597a45
    AND EAX,0xffff                      ; 00597a46
    PUSH EAX                            ; 00597a4b
    MOV ECX,dword ptr [0x02c8a680]      ; 00597a4c | DAT_02c8a680
    PUSH ECX                            ; 00597a52
    CALL FUN_005970b0                   ; 00597a53
        ;   XREF to: 005970b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005970b0()
    MOV EDX,EAX                         ; 00597a58
    ADD ESP,0xc                         ; 00597a5a
    CMP EAX,-0x1                        ; 00597a5d
    JNZ 0x00597a77                      ; 00597a60
        ;   XREF to: 00597a77 (CONDITIONAL_JUMP)  ; LAB_00597a77
    PUSH ESI                            ; 00597a62
    MOV ESI,dword ptr [0x02c8a680]      ; 00597a63 | DAT_02c8a680
    PUSH ESI                            ; 00597a69
    MOV EDI,0x1                         ; 00597a6a
    CALL FUN_005967a0                   ; 00597a6f
        ;   XREF to: 005967a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005967a0()
    ADD ESP,0x8                         ; 00597a74
    MOV dword ptr [EBX + 0x4],EAX       ; 00597a77
        ;   Label: LAB_00597a77
    PUSH EDI                            ; 00597a7a
    PUSH EBX                            ; 00597a7b
    MOV EDI,dword ptr [0x02c8a680]      ; 00597a7c | DAT_02c8a680
    PUSH EDI                            ; 00597a82
    MOV [0x02c8a67c],EAX                ; 00597a83 | DAT_02c8a67c
    CALL FUN_00597140                   ; 00597a88
        ;   XREF to: 00597140 (UNCONDITIONAL_CALL)  ; undefined FUN_00597140()
    ADD ESP,0xc                         ; 00597a8d
    LEA EAX,[EBX + 0x18]                ; 00597a90
    POP ESI                             ; 00597a93
    POP EDI                             ; 00597a94
    POP EBX                             ; 00597a95
    RET                                 ; 00597a96

