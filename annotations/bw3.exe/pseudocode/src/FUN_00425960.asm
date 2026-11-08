; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00425960(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005dcf50
;   undefined4 DAT_005dcf54
;   undefined4 DAT_005fba60
;
; Called Functions:
;   FUN_0040ce40
;   FUN_0040cea0
;   FUN_00488fd0
;   FUN_00491aa0
;   FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00425960
        ;   Label: FUN_00425960
    PUSH ESI                            ; 00425961
    SUB ESP,0x4                         ; 00425962
    MOV ESI,dword ptr [ESP + 0x10]      ; 00425965
    PUSH ESI                            ; 00425969
    CALL FUN_00488fd0                   ; 0042596a
        ;   XREF to: 00488fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00488fd0()
    ADD ESP,0x4                         ; 0042596f
    MOV EBX,EAX                         ; 00425972
    PUSH 0x5b79c7                       ; 00425974
    MOV ESI,EAX                         ; 00425979
    ADD EAX,0x158                       ; 0042597b
    PUSH EAX                            ; 00425980
    MOV dword ptr [EAX + -0x4],0x5dcf64 ; 00425981
    CALL FUN_0054eae0                   ; 00425988
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eae0()
    MOV dword ptr [EBX + 0x326c],0x3f000000 ; 0042598d
    FLD float ptr [0x005dcf50]          ; 00425997 | DAT_005dcf50
    MOV dword ptr [EBX + 0x3270],0x3f800000 ; 0042599d
    ADD ESP,0x8                         ; 004259a7
    MOV dword ptr [EBX + 0xd064],0x0    ; 004259aa
    FLD float ptr [0x005dcf54]          ; 004259b4 | DAT_005dcf54
    MOV dword ptr [EBX + 0xd060],0x0    ; 004259ba
    PUSH 0x3f800000                     ; 004259c4
    FXCH                                ; 004259c9
    FSTP float ptr [EBX + 0x3274]       ; 004259cb
    PUSH 0x3e99999a                     ; 004259d1
    FSTP float ptr [EBX + 0x3278]       ; 004259d6
    CALL FUN_0040ce40                   ; 004259dc
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0x8],EAX       ; 004259e1
    FLD float ptr [ESP + 0x8]           ; 004259e5
    ADD ESP,0x8                         ; 004259e9
    PUSH 0xff                           ; 004259ec
    PUSH 0x0                            ; 004259f1
    FSTP float ptr [EBX + 0xd054]       ; 004259f3
    CALL FUN_0040cea0                   ; 004259f9
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cea0()
    MOV dword ptr [EBX + 0xd05c],0x0    ; 004259fe
    MOV dword ptr [EBX + 0xd06c],0x0    ; 00425a08
    MOV dword ptr [EBX + 0xd0c0],0x0    ; 00425a12
    MOV dword ptr [EBX + 0xd070],0x0    ; 00425a1c
    MOV dword ptr [EBX + 0xd0d0],0x0    ; 00425a26
    MOV dword ptr [EBX + 0xd0d4],0x0    ; 00425a30
    ADD ESP,0x8                         ; 00425a3a
    MOV dword ptr [EBX + 0xd050],0x0    ; 00425a3d
    PUSH 0x5b79d6                       ; 00425a47
    MOV EDX,dword ptr [0x005fba60]      ; 00425a4c | DAT_005fba60
    MOV dword ptr [EBX + 0x252c],0x3fc90fdb ; 00425a52
    PUSH EDX                            ; 00425a5c
    MOV dword ptr [EBX + 0xd058],EAX    ; 00425a5d
    CALL FUN_00491aa0                   ; 00425a63
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00491aa0()
    ADD ESP,0x8                         ; 00425a68
    TEST EAX,EAX                        ; 00425a6b
    JZ 0x00425a9f                       ; 00425a6d
        ;   XREF to: 00425a9f (CONDITIONAL_JUMP)  ; LAB_00425a9f
    MOV dword ptr [EBX + 0xd0d8],0x3f800000 ; 00425a6f
    MOV dword ptr [ESI + 0xce5c],0x41200000 ; 00425a79
        ;   Label: LAB_00425a79
    MOV dword ptr [ESI + 0xce60],0x40a00000 ; 00425a83
    MOV EAX,ESI                         ; 00425a8d
    MOV dword ptr [ESI + 0x2538],0x41a00000 ; 00425a8f
    ADD ESP,0x4                         ; 00425a99
    POP ESI                             ; 00425a9c
    POP EBX                             ; 00425a9d
    RET                                 ; 00425a9e
    MOV dword ptr [EBX + 0xd0d8],0x3f400000 ; 00425a9f
        ;   Label: LAB_00425a9f
    JMP 0x00425a79                      ; 00425aa9
        ;   XREF to: 00425a79 (UNCONDITIONAL_JUMP)  ; LAB_00425a79

