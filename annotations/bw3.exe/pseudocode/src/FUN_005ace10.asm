; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ace10(void)
;
;
; Referenced Globals:
;   undefined1 DAT_00607684
;   undefined4 DAT_006076b9
;   undefined4 DAT_02d252a0
;   undefined4 DAT_02d252a4
;
; Called Functions:
;   FUN_005a3650
;   FUN_005a3660
;   FUN_005acde0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ace10
        ;   Label: FUN_005ace10
    PUSH ESI                            ; 005ace11
    MOV AH,byte ptr [0x006076b9]        ; 005ace12 | DAT_006076b9
    AND AH,0xf8                         ; 005ace18
    MOV DL,AH                           ; 005ace1b
    MOV byte ptr [0x006076b9],AH        ; 005ace1d | DAT_006076b9
    OR DL,0x4                           ; 005ace23
    MOV byte ptr [0x006076b9],DL        ; 005ace26 | DAT_006076b9
    MOV EDX,dword ptr [0x00607684]      ; 005ace2c | DAT_00607684
    MOV EBX,0x607678                    ; 005ace32
    TEST EDX,EDX                        ; 005ace37
    JZ 0x005acea1                       ; 005ace39
        ;   XREF to: 005acea1 (CONDITIONAL_JUMP)  ; LAB_005acea1
    PUSH 0x1d                           ; 005ace3b
        ;   Label: LAB_005ace3b
    CALL FUN_005a3660                   ; 005ace3d
        ;   XREF to: 005a3660 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3660()
    ADD ESP,0x4                         ; 005ace42
    TEST EAX,EAX                        ; 005ace45
    JNZ 0x005ace6a                      ; 005ace47
        ;   XREF to: 005ace6a (CONDITIONAL_JUMP)  ; LAB_005ace6a
    PUSH 0x1d                           ; 005ace49
    CALL FUN_005a3650                   ; 005ace4b
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3650()
    ADD ESP,0x4                         ; 005ace50
    MOV ESI,EAX                         ; 005ace53
    TEST EAX,EAX                        ; 005ace55
    JNZ 0x005ace6c                      ; 005ace57
        ;   XREF to: 005ace6c (CONDITIONAL_JUMP)  ; LAB_005ace6c
    PUSH 0x1                            ; 005ace59
    PUSH 0x5da8c0                       ; 005ace5b
    CALL FUN_005acde0                   ; 005ace60
        ;   XREF to: 005acde0 (UNCONDITIONAL_CALL)  ; undefined FUN_005acde0()
    ADD ESP,0x8                         ; 005ace65
    JMP 0x005ace6c                      ; 005ace68
        ;   XREF to: 005ace6c (UNCONDITIONAL_JUMP)  ; LAB_005ace6c
    MOV ESI,EAX                         ; 005ace6a
        ;   Label: LAB_005ace6a
    MOV EAX,[0x02d252a0]                ; 005ace6c | DAT_02d252a0
        ;   Label: LAB_005ace6c
    MOV dword ptr [ESI + 0x4],EBX       ; 005ace71
    MOV dword ptr [ESI],EAX             ; 005ace74
    MOV dword ptr [EBX + 0x8],ESI       ; 005ace76
    MOV dword ptr [ESI + 0x8],0x0       ; 005ace79
    MOV EAX,dword ptr [EBX + 0x8]       ; 005ace80
    MOV byte ptr [EAX + 0x14],0x0       ; 005ace83
    MOV EAX,dword ptr [EBX + 0x8]       ; 005ace87
    MOV dword ptr [EAX + 0xc],0x0       ; 005ace8a
    MOV dword ptr [0x02d252a0],ESI      ; 005ace91 | DAT_02d252a0
    MOV ECX,dword ptr [EBX + 0x26]      ; 005ace97
    ADD EBX,0x1a                        ; 005ace9a
    TEST ECX,ECX                        ; 005ace9d
    JNZ 0x005ace3b                      ; 005ace9f
        ;   XREF to: 005ace3b (CONDITIONAL_JUMP)  ; LAB_005ace3b
    XOR ESI,ESI                         ; 005acea1
        ;   Label: LAB_005acea1
    MOV dword ptr [0x02d252a4],ESI      ; 005acea3 | DAT_02d252a4
    POP ESI                             ; 005acea9
    POP EBX                             ; 005aceaa
    RET                                 ; 005aceab

