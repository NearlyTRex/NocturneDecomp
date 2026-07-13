; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005210d0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005a2100
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

    PUSH EBX                            ; 005210d0
        ;   Label: FUN_005210d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005210d1
    TEST byte ptr [ESP + 0xc],0x4       ; 005210d5
    JNZ 0x00521161                      ; 005210da
        ;   XREF to: 00521161 (CONDITIONAL_JUMP)  ; LAB_00521161
    PUSH 0x0                            ; 005210e0
    ADD EBX,0x33c4                      ; 005210e2
    PUSH EBX                            ; 005210e8
    CALL FUN_0040fe50                   ; 005210e9
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe50()
    ADD ESP,0x8                         ; 005210ee
    PUSH 0x0                            ; 005210f1
    SUB EAX,0x4b0                       ; 005210f3
    PUSH EAX                            ; 005210f8
    CALL FUN_0040fe30                   ; 005210f9
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe30()
    ADD ESP,0x8                         ; 005210fe
    PUSH 0x0                            ; 00521101
    SUB EAX,0x20c                       ; 00521103
    PUSH EAX                            ; 00521108
    CALL FUN_0040fe10                   ; 00521109
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 0052110e
    PUSH 0x0                            ; 00521111
    SUB EAX,0xb4                        ; 00521113
    PUSH EAX                            ; 00521118
    CALL FUN_0040fe10                   ; 00521119
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 0052111e
    PUSH 0x0                            ; 00521121
    SUB EAX,0x1c8                       ; 00521123
    PUSH EAX                            ; 00521128
    CALL FUN_00438250                   ; 00521129
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; undefined FUN_00438250()
    ADD ESP,0x8                         ; 0052112e
    PUSH 0x0                            ; 00521131
    SUB EAX,0x293c                      ; 00521133
    PUSH EAX                            ; 00521138
    CALL FUN_0051b6e0                   ; 00521139
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b6e0()
    ADD ESP,0x8                         ; 0052113e
    PUSH 0x1                            ; 00521141
    LEA EBX,[EAX + 0xfffffeb0]          ; 00521143
    PUSH EBX                            ; 00521149
    CALL FUN_00409ea0                   ; 0052114a
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 0052114f
    MOV DL,byte ptr [ESP + 0xc]         ; 00521152
    MOV EBX,EAX                         ; 00521156
    TEST DL,0x2                         ; 00521158
    JNZ 0x0052117c                      ; 0052115b
        ;   XREF to: 0052117c (CONDITIONAL_JUMP)  ; LAB_0052117c
    MOV EAX,EBX                         ; 0052115d
    POP EBX                             ; 0052115f
    RET                                 ; 00521160
    PUSH 0x5a2100                       ; 00521161 | DAT_005a2100
        ;   Label: LAB_00521161
    PUSH EBX                            ; 00521166
    CALL FUN_0056445f                   ; 00521167
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 0052116c
    PUSH EAX                            ; 0052116f
    CALL FUN_00564486                   ; 00521170
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 00521175
    MOV EAX,EBX                         ; 00521178
    POP EBX                             ; 0052117a
    RET                                 ; 0052117b
    PUSH EAX                            ; 0052117c
        ;   Label: LAB_0052117c
    CALL FUN_00564494                   ; 0052117d
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 00521182
    MOV EAX,EBX                         ; 00521185
    POP EBX                             ; 00521187
    RET                                 ; 00521188

