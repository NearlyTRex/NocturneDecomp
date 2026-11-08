; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00438490(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005180b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00438490
        ;   Label: FUN_00438490
    PUSH EDI                            ; 00438491
    MOV EDX,dword ptr [ESP + 0xc]       ; 00438492
    PUSH EDX                            ; 00438496
    CALL FUN_005180b0                   ; 00438497
        ;   XREF to: 005180b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005180b0()
    MOV dword ptr [EAX + 0x2b0],0x5f4854 ; 0043849c
    MOV ESI,0x5cdf8c                    ; 004384a6
    MOV dword ptr [EAX + 0x884],0x3f800000 ; 004384ab
    MOV EDX,EAX                         ; 004384b5
    MOV dword ptr [EAX + 0x88c],0x3f800000 ; 004384b7
    ADD ESP,0x4                         ; 004384c1
    MOV dword ptr [EAX + 0x888],0x3dcccccd ; 004384c4
    LEA EDI,[EAX + 0x89c]               ; 004384ce
    MOV dword ptr [EAX + 0x964],0x0     ; 004384d4
    PUSH EDI                            ; 004384de
    MOV AL,byte ptr [ESI]               ; 004384df
        ;   Label: LAB_004384df
    MOV byte ptr [EDI],AL               ; 004384e1
    CMP AL,0x0                          ; 004384e3
    JZ 0x004384f7                       ; 004384e5
        ;   XREF to: 004384f7 (CONDITIONAL_JUMP)  ; LAB_004384f7
    MOV AL,byte ptr [ESI + 0x1]         ; 004384e7
    ADD ESI,0x2                         ; 004384ea
    MOV byte ptr [EDI + 0x1],AL         ; 004384ed
    ADD EDI,0x2                         ; 004384f0
    CMP AL,0x0                          ; 004384f3
    JNZ 0x004384df                      ; 004384f5
        ;   XREF to: 004384df (CONDITIONAL_JUMP)  ; LAB_004384df
    POP EDI                             ; 004384f7
        ;   Label: LAB_004384f7
    MOV ESI,0x5cdf91                    ; 004384f8
    LEA EDI,[EDX + 0x900]               ; 004384fd
    PUSH EDI                            ; 00438503
    MOV AL,byte ptr [ESI]               ; 00438504
        ;   Label: LAB_00438504
    MOV byte ptr [EDI],AL               ; 00438506
    CMP AL,0x0                          ; 00438508
    JZ 0x0043851c                       ; 0043850a
        ;   XREF to: 0043851c (CONDITIONAL_JUMP)  ; LAB_0043851c
    MOV AL,byte ptr [ESI + 0x1]         ; 0043850c
    ADD ESI,0x2                         ; 0043850f
    MOV byte ptr [EDI + 0x1],AL         ; 00438512
    ADD EDI,0x2                         ; 00438515
    CMP AL,0x0                          ; 00438518
    JNZ 0x00438504                      ; 0043851a
        ;   XREF to: 00438504 (CONDITIONAL_JUMP)  ; LAB_00438504
    POP EDI                             ; 0043851c
        ;   Label: LAB_0043851c
    MOV dword ptr [EDX + 0x890],0x0     ; 0043851d
    MOV dword ptr [EDX + 0x894],0x0     ; 00438527
    MOV dword ptr [EDX + 0x898],0x3f800000 ; 00438531
    MOV EAX,EDX                         ; 0043853b
    MOV byte ptr [EDX + 0x968],0x0      ; 0043853d
    POP EDI                             ; 00438544
    POP ESI                             ; 00438545
    RET                                 ; 00438546

