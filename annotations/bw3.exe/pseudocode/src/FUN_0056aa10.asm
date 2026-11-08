; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0056aa10(int param_1)
;
;
; XREF[8]:
;   FUN_00404f10 at 00404f7d
;   FUN_0042f310 at 0042f49a
;   FUN_0043f460 at 0043f4f7
;   FUN_0046e5e0 at 0046e5e7
;   FUN_004addd0 at 004adf8c
;   FUN_004ed980 at 004ed98f
;   FUN_0056aa90 at 0056aa95
;   FUN_0056ac80 at 0056ac86
;
; Referenced Globals:
;   undefined4 DAT_007303f4
;   undefined4 DAT_02cfd0cc
;   undefined4 DAT_02cfd0d0
;
; Called Functions:
;   FUN_00569790
;   FUN_0056a0a0
;   FUN_0056a130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056aa10
        ;   Label: FUN_0056aa10
    PUSH EDI                            ; 0056aa11
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056aa12
    MOV EDX,dword ptr [0x007303f4]      ; 0056aa16 | DAT_007303f4
    LEA EAX,[EBX + 0x18]                ; 0056aa1c
    XOR EDI,EDI                         ; 0056aa1f
    TEST EDX,EDX                        ; 0056aa21
    JNZ 0x0056aa2b                      ; 0056aa23
        ;   XREF to: 0056aa2b (CONDITIONAL_JUMP)  ; LAB_0056aa2b
    CMP byte ptr [EBX + 0x8],0x0        ; 0056aa25
    JNZ 0x0056aa2e                      ; 0056aa29
        ;   XREF to: 0056aa2e (CONDITIONAL_JUMP)  ; LAB_0056aa2e
    POP EDI                             ; 0056aa2b
        ;   Label: LAB_0056aa2b
    POP EBX                             ; 0056aa2c
    RET                                 ; 0056aa2d
    PUSH ESI                            ; 0056aa2e
        ;   Label: LAB_0056aa2e
    LEA ESI,[EBX + 0x8]                 ; 0056aa2f
    MOV EAX,dword ptr [EBX + 0x4]       ; 0056aa32
    PUSH ESI                            ; 0056aa35
    AND EAX,0xffff                      ; 0056aa36
    PUSH EAX                            ; 0056aa3b
    MOV ECX,dword ptr [0x02cfd0d0]      ; 0056aa3c | DAT_02cfd0d0
    PUSH ECX                            ; 0056aa42
    CALL FUN_0056a0a0                   ; 0056aa43
        ;   XREF to: 0056a0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056a0a0()
    MOV EDX,EAX                         ; 0056aa48
    ADD ESP,0xc                         ; 0056aa4a
    CMP EAX,-0x1                        ; 0056aa4d
    JNZ 0x0056aa67                      ; 0056aa50
        ;   XREF to: 0056aa67 (CONDITIONAL_JUMP)  ; LAB_0056aa67
    PUSH ESI                            ; 0056aa52
    MOV ESI,dword ptr [0x02cfd0d0]      ; 0056aa53 | DAT_02cfd0d0
    PUSH ESI                            ; 0056aa59
    MOV EDI,0x1                         ; 0056aa5a
    CALL FUN_00569790                   ; 0056aa5f
        ;   XREF to: 00569790 (UNCONDITIONAL_CALL)  ; undefined FUN_00569790()
    ADD ESP,0x8                         ; 0056aa64
    MOV dword ptr [EBX + 0x4],EAX       ; 0056aa67
        ;   Label: LAB_0056aa67
    PUSH EDI                            ; 0056aa6a
    PUSH EBX                            ; 0056aa6b
    MOV EDI,dword ptr [0x02cfd0d0]      ; 0056aa6c | DAT_02cfd0d0
    PUSH EDI                            ; 0056aa72
    MOV [0x02cfd0cc],EAX                ; 0056aa73 | DAT_02cfd0cc
    CALL FUN_0056a130                   ; 0056aa78
        ;   XREF to: 0056a130 (UNCONDITIONAL_CALL)  ; undefined FUN_0056a130()
    ADD ESP,0xc                         ; 0056aa7d
    LEA EAX,[EBX + 0x18]                ; 0056aa80
    POP ESI                             ; 0056aa83
    POP EDI                             ; 0056aa84
    POP EBX                             ; 0056aa85
    RET                                 ; 0056aa86

