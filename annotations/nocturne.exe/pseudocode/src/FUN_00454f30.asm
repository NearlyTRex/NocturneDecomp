; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00454f30(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0059c240
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

    PUSH EBX                            ; 00454f30
        ;   Label: FUN_00454f30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00454f31
    TEST byte ptr [ESP + 0xc],0x4       ; 00454f35
    JNZ 0x00454fc1                      ; 00454f3a
        ;   XREF to: 00454fc1 (CONDITIONAL_JUMP)  ; LAB_00454fc1
    PUSH 0x0                            ; 00454f40
    ADD EBX,0x33c4                      ; 00454f42
    PUSH EBX                            ; 00454f48
    CALL FUN_0040fe50                   ; 00454f49
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe50()
    ADD ESP,0x8                         ; 00454f4e
    PUSH 0x0                            ; 00454f51
    SUB EAX,0x4b0                       ; 00454f53
    PUSH EAX                            ; 00454f58
    CALL FUN_0040fe30                   ; 00454f59
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe30()
    ADD ESP,0x8                         ; 00454f5e
    PUSH 0x0                            ; 00454f61
    SUB EAX,0x20c                       ; 00454f63
    PUSH EAX                            ; 00454f68
    CALL FUN_0040fe10                   ; 00454f69
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 00454f6e
    PUSH 0x0                            ; 00454f71
    SUB EAX,0xb4                        ; 00454f73
    PUSH EAX                            ; 00454f78
    CALL FUN_0040fe10                   ; 00454f79
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 00454f7e
    PUSH 0x0                            ; 00454f81
    SUB EAX,0x1c8                       ; 00454f83
    PUSH EAX                            ; 00454f88
    CALL FUN_00438250                   ; 00454f89
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; undefined FUN_00438250()
    ADD ESP,0x8                         ; 00454f8e
    PUSH 0x0                            ; 00454f91
    SUB EAX,0x293c                      ; 00454f93
    PUSH EAX                            ; 00454f98
    CALL FUN_0051b6e0                   ; 00454f99
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b6e0()
    ADD ESP,0x8                         ; 00454f9e
    PUSH 0x1                            ; 00454fa1
    LEA EBX,[EAX + 0xfffffeb0]          ; 00454fa3
    PUSH EBX                            ; 00454fa9
    CALL FUN_00409ea0                   ; 00454faa
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 00454faf
    MOV DL,byte ptr [ESP + 0xc]         ; 00454fb2
    MOV EBX,EAX                         ; 00454fb6
    TEST DL,0x2                         ; 00454fb8
    JNZ 0x00454fdc                      ; 00454fbb
        ;   XREF to: 00454fdc (CONDITIONAL_JUMP)  ; LAB_00454fdc
    MOV EAX,EBX                         ; 00454fbd
    POP EBX                             ; 00454fbf
    RET                                 ; 00454fc0
    PUSH 0x59c240                       ; 00454fc1 | DAT_0059c240
        ;   Label: LAB_00454fc1
    PUSH EBX                            ; 00454fc6
    CALL FUN_0056445f                   ; 00454fc7
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 00454fcc
    PUSH EAX                            ; 00454fcf
    CALL FUN_00564486                   ; 00454fd0
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 00454fd5
    MOV EAX,EBX                         ; 00454fd8
    POP EBX                             ; 00454fda
    RET                                 ; 00454fdb
    PUSH EAX                            ; 00454fdc
        ;   Label: LAB_00454fdc
    CALL FUN_00564494                   ; 00454fdd
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 00454fe2
    MOV EAX,EBX                         ; 00454fe5
    POP EBX                             ; 00454fe7
    RET                                 ; 00454fe8

