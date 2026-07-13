; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00557e90(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005a4460
;
; Called Functions:
;   FUN_00409ea0
;   FUN_0040fe10
;   FUN_0040fe30
;   FUN_0040fe50
;   FUN_00438250
;   FUN_0051b6e0
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557e90
        ;   Label: FUN_00557e90
    MOV EBX,dword ptr [ESP + 0x8]       ; 00557e91
    TEST byte ptr [ESP + 0xc],0x4       ; 00557e95
    JNZ 0x00557f21                      ; 00557e9a
        ;   XREF to: 00557f21 (CONDITIONAL_JUMP)  ; LAB_00557f21
    PUSH 0x0                            ; 00557ea0
    ADD EBX,0x33c4                      ; 00557ea2
    PUSH EBX                            ; 00557ea8
    CALL FUN_0040fe50                   ; 00557ea9
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe50()
    ADD ESP,0x8                         ; 00557eae
    PUSH 0x0                            ; 00557eb1
    SUB EAX,0x4b0                       ; 00557eb3
    PUSH EAX                            ; 00557eb8
    CALL FUN_0040fe30                   ; 00557eb9
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe30()
    ADD ESP,0x8                         ; 00557ebe
    PUSH 0x0                            ; 00557ec1
    SUB EAX,0x20c                       ; 00557ec3
    PUSH EAX                            ; 00557ec8
    CALL FUN_0040fe10                   ; 00557ec9
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 00557ece
    PUSH 0x0                            ; 00557ed1
    SUB EAX,0xb4                        ; 00557ed3
    PUSH EAX                            ; 00557ed8
    CALL FUN_0040fe10                   ; 00557ed9
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 00557ede
    PUSH 0x0                            ; 00557ee1
    SUB EAX,0x1c8                       ; 00557ee3
    PUSH EAX                            ; 00557ee8
    CALL FUN_00438250                   ; 00557ee9
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; undefined FUN_00438250()
    ADD ESP,0x8                         ; 00557eee
    PUSH 0x0                            ; 00557ef1
    SUB EAX,0x293c                      ; 00557ef3
    PUSH EAX                            ; 00557ef8
    CALL FUN_0051b6e0                   ; 00557ef9
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b6e0()
    ADD ESP,0x8                         ; 00557efe
    PUSH 0x1                            ; 00557f01
    LEA EBX,[EAX + 0xfffffeb0]          ; 00557f03
    PUSH EBX                            ; 00557f09
    CALL FUN_00409ea0                   ; 00557f0a
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 00557f0f
    MOV DL,byte ptr [ESP + 0xc]         ; 00557f12
    MOV EBX,EAX                         ; 00557f16
    TEST DL,0x2                         ; 00557f18
    JNZ 0x00557f3c                      ; 00557f1b
        ;   XREF to: 00557f3c (CONDITIONAL_JUMP)  ; LAB_00557f3c
    MOV EAX,EBX                         ; 00557f1d
    POP EBX                             ; 00557f1f
    RET                                 ; 00557f20
    PUSH 0x5a4460                       ; 00557f21 | DAT_005a4460
        ;   Label: LAB_00557f21
    PUSH EBX                            ; 00557f26
    CALL FUN_0056445f                   ; 00557f27
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 00557f2c
    PUSH EAX                            ; 00557f2f
    CALL FUN_00564486                   ; 00557f30
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 00557f35
    MOV EAX,EBX                         ; 00557f38
    POP EBX                             ; 00557f3a
    RET                                 ; 00557f3b
    PUSH EAX                            ; 00557f3c
        ;   Label: LAB_00557f3c
    CALL FUN_00564494                   ; 00557f3d
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 00557f42
    MOV EAX,EBX                         ; 00557f45
    POP EBX                             ; 00557f47
    RET                                 ; 00557f48

