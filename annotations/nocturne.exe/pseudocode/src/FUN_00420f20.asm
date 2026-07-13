; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00420f20(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0059ae70
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

    PUSH EBX                            ; 00420f20
        ;   Label: FUN_00420f20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00420f21
    TEST byte ptr [ESP + 0xc],0x4       ; 00420f25
    JNZ 0x00420fb1                      ; 00420f2a
        ;   XREF to: 00420fb1 (CONDITIONAL_JUMP)  ; LAB_00420fb1
    PUSH 0x0                            ; 00420f30
    ADD EBX,0x33c4                      ; 00420f32
    PUSH EBX                            ; 00420f38
    CALL FUN_0040fe50                   ; 00420f39
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe50()
    ADD ESP,0x8                         ; 00420f3e
    PUSH 0x0                            ; 00420f41
    SUB EAX,0x4b0                       ; 00420f43
    PUSH EAX                            ; 00420f48
    CALL FUN_0040fe30                   ; 00420f49
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe30()
    ADD ESP,0x8                         ; 00420f4e
    PUSH 0x0                            ; 00420f51
    SUB EAX,0x20c                       ; 00420f53
    PUSH EAX                            ; 00420f58
    CALL FUN_0040fe10                   ; 00420f59
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 00420f5e
    PUSH 0x0                            ; 00420f61
    SUB EAX,0xb4                        ; 00420f63
    PUSH EAX                            ; 00420f68
    CALL FUN_0040fe10                   ; 00420f69
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 00420f6e
    PUSH 0x0                            ; 00420f71
    SUB EAX,0x1c8                       ; 00420f73
    PUSH EAX                            ; 00420f78
    CALL FUN_00438250                   ; 00420f79
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; undefined FUN_00438250()
    ADD ESP,0x8                         ; 00420f7e
    PUSH 0x0                            ; 00420f81
    SUB EAX,0x293c                      ; 00420f83
    PUSH EAX                            ; 00420f88
    CALL FUN_0051b6e0                   ; 00420f89
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b6e0()
    ADD ESP,0x8                         ; 00420f8e
    PUSH 0x1                            ; 00420f91
    LEA EBX,[EAX + 0xfffffeb0]          ; 00420f93
    PUSH EBX                            ; 00420f99
    CALL FUN_00409ea0                   ; 00420f9a
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 00420f9f
    MOV DL,byte ptr [ESP + 0xc]         ; 00420fa2
    MOV EBX,EAX                         ; 00420fa6
    TEST DL,0x2                         ; 00420fa8
    JNZ 0x00420fcc                      ; 00420fab
        ;   XREF to: 00420fcc (CONDITIONAL_JUMP)  ; LAB_00420fcc
    MOV EAX,EBX                         ; 00420fad
    POP EBX                             ; 00420faf
    RET                                 ; 00420fb0
    PUSH 0x59ae70                       ; 00420fb1 | DAT_0059ae70
        ;   Label: LAB_00420fb1
    PUSH EBX                            ; 00420fb6
    CALL FUN_0056445f                   ; 00420fb7
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 00420fbc
    PUSH EAX                            ; 00420fbf
    CALL FUN_00564486                   ; 00420fc0
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 00420fc5
    MOV EAX,EBX                         ; 00420fc8
    POP EBX                             ; 00420fca
    RET                                 ; 00420fcb
    PUSH EAX                            ; 00420fcc
        ;   Label: LAB_00420fcc
    CALL FUN_00564494                   ; 00420fcd
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 00420fd2
    MOV EAX,EBX                         ; 00420fd5
    POP EBX                             ; 00420fd7
    RET                                 ; 00420fd8

