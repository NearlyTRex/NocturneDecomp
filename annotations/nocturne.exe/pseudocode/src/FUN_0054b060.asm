; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0054b060(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005a38b0
;
; Called Functions:
;   FUN_00553ea0
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054b060
        ;   Label: FUN_0054b060
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054b061
    TEST byte ptr [ESP + 0xc],0x4       ; 0054b065
    JNZ 0x0054b086                      ; 0054b06a
        ;   XREF to: 0054b086 (CONDITIONAL_JUMP)  ; LAB_0054b086
    PUSH 0x1                            ; 0054b06c
    PUSH EBX                            ; 0054b06e
    CALL FUN_00553ea0                   ; 0054b06f
        ;   XREF to: 00553ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00553ea0()
    ADD ESP,0x8                         ; 0054b074
    MOV DL,byte ptr [ESP + 0xc]         ; 0054b077
    MOV EBX,EAX                         ; 0054b07b
    TEST DL,0x2                         ; 0054b07d
    JNZ 0x0054b0a1                      ; 0054b080
        ;   XREF to: 0054b0a1 (CONDITIONAL_JUMP)  ; LAB_0054b0a1
    MOV EAX,EBX                         ; 0054b082
    POP EBX                             ; 0054b084
    RET                                 ; 0054b085
    PUSH 0x5a38b0                       ; 0054b086 | DAT_005a38b0
        ;   Label: LAB_0054b086
    PUSH EBX                            ; 0054b08b
    CALL FUN_0056445f                   ; 0054b08c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 0054b091
    PUSH EAX                            ; 0054b094
    CALL FUN_00564486                   ; 0054b095
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 0054b09a
    MOV EAX,EBX                         ; 0054b09d
    POP EBX                             ; 0054b09f
    RET                                 ; 0054b0a0
    PUSH EAX                            ; 0054b0a1
        ;   Label: LAB_0054b0a1
    CALL FUN_00564494                   ; 0054b0a2
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 0054b0a7
    MOV EAX,EBX                         ; 0054b0aa
    POP EBX                             ; 0054b0ac
    RET                                 ; 0054b0ad

