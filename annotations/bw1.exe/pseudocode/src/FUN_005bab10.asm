; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005bab10(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006083ac
;   undefined4 DAT_006083b0
;   undefined4 DAT_00622c18
;
; Called Functions:
;   FUN_0040cc00
;   FUN_0040cc60
;   FUN_004a0410
;   FUN_00569f50
;   FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bab10
        ;   Label: FUN_005bab10
    PUSH ESI                            ; 005bab11
    PUSH EDI                            ; 005bab12
    PUSH EBP                            ; 005bab13
    SUB ESP,0x4                         ; 005bab14
    MOV EBP,dword ptr [ESP + 0x18]      ; 005bab17
    PUSH EBP                            ; 005bab1b
    CALL FUN_004a0410                   ; 005bab1c
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0410()
    ADD ESP,0x4                         ; 005bab21
    PUSH 0x5fa414                       ; 005bab24
    MOV EBX,EAX                         ; 005bab29
    ADD EAX,0x158                       ; 005bab2b
    PUSH EAX                            ; 005bab30
    MOV ESI,0x5fa420                    ; 005bab31
    MOV dword ptr [EAX + -0x4],0x6083c4 ; 005bab36
    CALL FUN_00569f50                   ; 005bab3d
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f50()
    MOV dword ptr [EBX + 0x2fec],0x3f000000 ; 005bab42
    LEA EDI,[EBX + 0xc288]              ; 005bab4c
    MOV dword ptr [EBX + 0x2ff0],0x3f800000 ; 005bab52
    FLD float ptr [0x006083ac]          ; 005bab5c | DAT_006083ac
    MOV dword ptr [EBX + 0xc278],0x0    ; 005bab62
    FLD float ptr [0x006083b0]          ; 005bab6c | DAT_006083b0
    MOV dword ptr [EBX + 0xc274],0x0    ; 005bab72
    ADD ESP,0x8                         ; 005bab7c
    FXCH                                ; 005bab7f
    FSTP float ptr [EBX + 0x2ff4]       ; 005bab81
    FSTP float ptr [EBX + 0x2ff8]       ; 005bab87
    PUSH EDI                            ; 005bab8d
    MOV AL,byte ptr [ESI]               ; 005bab8e
        ;   Label: LAB_005bab8e
    MOV byte ptr [EDI],AL               ; 005bab90
    CMP AL,0x0                          ; 005bab92
    JZ 0x005baba6                       ; 005bab94
        ;   XREF to: 005baba6 (CONDITIONAL_JUMP)  ; LAB_005baba6
    MOV AL,byte ptr [ESI + 0x1]         ; 005bab96
    ADD ESI,0x2                         ; 005bab99
    MOV byte ptr [EDI + 0x1],AL         ; 005bab9c
    ADD EDI,0x2                         ; 005bab9f
    CMP AL,0x0                          ; 005baba2
    JNZ 0x005bab8e                      ; 005baba4
        ;   XREF to: 005bab8e (CONDITIONAL_JUMP)  ; LAB_005bab8e
    POP EDI                             ; 005baba6
        ;   Label: LAB_005baba6
    PUSH 0x3f800000                     ; 005baba7
    PUSH 0x3e99999a                     ; 005babac
    CALL FUN_0040cc00                   ; 005babb1
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x8],EAX       ; 005babb6
    FLD float ptr [ESP + 0x8]           ; 005babba
    ADD ESP,0x8                         ; 005babbe
    PUSH 0xff                           ; 005babc1
    MOV dword ptr [EBX + 0xc280],0x0    ; 005babc6
    PUSH 0x0                            ; 005babd0
    FSTP float ptr [EBX + 0xc268]       ; 005babd2
    CALL FUN_0040cc60                   ; 005babd8
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc60()
    MOV dword ptr [EBX + 0xc270],0x0    ; 005babdd
    MOV dword ptr [EBX + 0xc284],0x0    ; 005babe7
    ADD ESP,0x8                         ; 005babf1
    MOV dword ptr [EBX + 0xc26c],EAX    ; 005babf4
    MOV EAX,[0x00622c18]                ; 005babfa | DAT_00622c18
    PUSH 0x5fa425                       ; 005babff
    ADD EAX,0x14d0f0                    ; 005bac04
    MOV dword ptr [EBX + 0xc2ec],0x0    ; 005bac09
    PUSH EAX                            ; 005bac13
    MOV dword ptr [EBX + 0xc340],0x0    ; 005bac14
    CALL FUN_005c04e0                   ; 005bac1e
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 005bac23
    TEST EAX,EAX                        ; 005bac26
    SETZ AL                             ; 005bac28
    MOV dword ptr [EBX + 0xc2f0],0x0    ; 005bac2b
    MOV dword ptr [EBX + 0xc350],0x0    ; 005bac35
    MOV dword ptr [EBX + 0xc354],0x0    ; 005bac3f
    MOV dword ptr [EBX + 0xc264],0x0    ; 005bac49
    AND EAX,0xff                        ; 005bac53
    MOV dword ptr [EBX + 0x252c],0x3fc90fdb ; 005bac58
    MOV dword ptr [EBX + 0xc2ec],EAX    ; 005bac62
    MOV EAX,EBX                         ; 005bac68
    ADD ESP,0x4                         ; 005bac6a
    POP EBP                             ; 005bac6d
    POP EDI                             ; 005bac6e
    POP ESI                             ; 005bac6f
    POP EBX                             ; 005bac70
    RET                                 ; 005bac71

