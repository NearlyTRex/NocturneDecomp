; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00414c60(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0059a2b0
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

    PUSH EBX                            ; 00414c60
        ;   Label: FUN_00414c60
    MOV EBX,dword ptr [ESP + 0x8]       ; 00414c61
    TEST byte ptr [ESP + 0xc],0x4       ; 00414c65
    JNZ 0x00414cf1                      ; 00414c6a
        ;   XREF to: 00414cf1 (CONDITIONAL_JUMP)  ; LAB_00414cf1
    PUSH 0x0                            ; 00414c70
    ADD EBX,0x33c4                      ; 00414c72
    PUSH EBX                            ; 00414c78
    CALL FUN_0040fe50                   ; 00414c79
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe50()
    ADD ESP,0x8                         ; 00414c7e
    PUSH 0x0                            ; 00414c81
    SUB EAX,0x4b0                       ; 00414c83
    PUSH EAX                            ; 00414c88
    CALL FUN_0040fe30                   ; 00414c89
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe30()
    ADD ESP,0x8                         ; 00414c8e
    PUSH 0x0                            ; 00414c91
    SUB EAX,0x20c                       ; 00414c93
    PUSH EAX                            ; 00414c98
    CALL FUN_0040fe10                   ; 00414c99
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 00414c9e
    PUSH 0x0                            ; 00414ca1
    SUB EAX,0xb4                        ; 00414ca3
    PUSH EAX                            ; 00414ca8
    CALL FUN_0040fe10                   ; 00414ca9
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 00414cae
    PUSH 0x0                            ; 00414cb1
    SUB EAX,0x1c8                       ; 00414cb3
    PUSH EAX                            ; 00414cb8
    CALL FUN_00438250                   ; 00414cb9
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; undefined FUN_00438250()
    ADD ESP,0x8                         ; 00414cbe
    PUSH 0x0                            ; 00414cc1
    SUB EAX,0x293c                      ; 00414cc3
    PUSH EAX                            ; 00414cc8
    CALL FUN_0051b6e0                   ; 00414cc9
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b6e0()
    ADD ESP,0x8                         ; 00414cce
    PUSH 0x1                            ; 00414cd1
    LEA EBX,[EAX + 0xfffffeb0]          ; 00414cd3
    PUSH EBX                            ; 00414cd9
    CALL FUN_00409ea0                   ; 00414cda
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 00414cdf
    MOV DL,byte ptr [ESP + 0xc]         ; 00414ce2
    MOV EBX,EAX                         ; 00414ce6
    TEST DL,0x2                         ; 00414ce8
    JNZ 0x00414d0c                      ; 00414ceb
        ;   XREF to: 00414d0c (CONDITIONAL_JUMP)  ; LAB_00414d0c
    MOV EAX,EBX                         ; 00414ced
    POP EBX                             ; 00414cef
    RET                                 ; 00414cf0
    PUSH 0x59a2b0                       ; 00414cf1 | DAT_0059a2b0
        ;   Label: LAB_00414cf1
    PUSH EBX                            ; 00414cf6
    CALL FUN_0056445f                   ; 00414cf7
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 00414cfc
    PUSH EAX                            ; 00414cff
    CALL FUN_00564486                   ; 00414d00
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 00414d05
    MOV EAX,EBX                         ; 00414d08
    POP EBX                             ; 00414d0a
    RET                                 ; 00414d0b
    PUSH EAX                            ; 00414d0c
        ;   Label: LAB_00414d0c
    CALL FUN_00564494                   ; 00414d0d
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 00414d12
    MOV EAX,EBX                         ; 00414d15
    POP EBX                             ; 00414d17
    RET                                 ; 00414d18

