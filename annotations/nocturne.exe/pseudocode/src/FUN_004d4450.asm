; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d4450(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined1 DAT_0058923e
;   undefined1 DAT_0058923f
;   undefined1 DAT_00589240
;   undefined1 DAT_00589241
;   undefined4 DAT_005a05dc
;   undefined4 DAT_005a05e0
;   undefined1* PTR_FUN_005a05f4 = 004d4650
;
; Called Functions:
;   FUN_00435100
;   FUN_00479560
;   FUN_004e0050
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004d4450
        ;   Label: FUN_004d4450
    PUSH EDI                            ; 004d4451
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d4452
    PUSH EDX                            ; 004d4456
    CALL FUN_00479560                   ; 004d4457
        ;   XREF to: 00479560 (UNCONDITIONAL_CALL)  ; undefined FUN_00479560()
    ADD ESP,0x4                         ; 004d445c
    ADD EAX,0xbdec                      ; 004d445f
    PUSH EAX                            ; 004d4464
    CALL FUN_00435100                   ; 004d4465
        ;   XREF to: 00435100 (UNCONDITIONAL_CALL)  ; undefined FUN_00435100()
    ADD ESP,0x4                         ; 004d446a
    ADD EAX,0x3ab60                     ; 004d446d
    PUSH EAX                            ; 004d4472
    CALL FUN_004e0050                   ; 004d4473
        ;   XREF to: 004e0050 (UNCONDITIONAL_CALL)  ; undefined FUN_004e0050()
    LEA EDX,[EAX + 0xfffb96b4]          ; 004d4478
    MOV dword ptr [EDX + 0x14c],0x5a05f4 ; 004d447e | PTR_FUN_005a05f4
    MOV dword ptr [EDX + 0x2dd4],0x3f000000 ; 004d4488
    MOV ESI,0x58923e                    ; 004d4492 | DAT_0058923e
    MOV dword ptr [EDX + 0x2dd8],0x3f800000 ; 004d4497
    FLD float ptr [0x005a05dc]          ; 004d44a1 | DAT_005a05dc
    MOV byte ptr [EDX + 0xbd24],0x0     ; 004d44a7
    FLD float ptr [0x005a05e0]          ; 004d44ae | DAT_005a05e0
    MOV byte ptr [EDX + 0xbd88],0x0     ; 004d44b4
    ADD ESP,0x4                         ; 004d44bb
    FXCH                                ; 004d44be
    FSTP float ptr [EDX + 0x2ddc]       ; 004d44c0
    FSTP float ptr [EDX + 0x2de0]       ; 004d44c6
    MOV dword ptr [EDX + 0x4691c],0x0   ; 004d44cc
    LEA EDI,[EDX + 0x46924]             ; 004d44d6
    MOV dword ptr [EDX + 0x46920],0x0   ; 004d44dc
    PUSH EDI                            ; 004d44e6
    MOV AL,byte ptr [ESI]               ; 004d44e7 | DAT_0058923e | DAT_00589240
        ;   Label: LAB_004d44e7
    MOV byte ptr [EDI],AL               ; 004d44e9
    CMP AL,0x0                          ; 004d44eb
    JZ 0x004d44ff                       ; 004d44ed
        ;   XREF to: 004d44ff (CONDITIONAL_JUMP)  ; LAB_004d44ff
    MOV AL,byte ptr [ESI + 0x1]         ; 004d44ef | DAT_0058923f | DAT_00589241
    ADD ESI,0x2                         ; 004d44f2
    MOV byte ptr [EDI + 0x1],AL         ; 004d44f5
    ADD EDI,0x2                         ; 004d44f8
    CMP AL,0x0                          ; 004d44fb
    JNZ 0x004d44e7                      ; 004d44fd
        ;   XREF to: 004d44e7 (CONDITIONAL_JUMP)  ; LAB_004d44e7
    POP EDI                             ; 004d44ff
        ;   Label: LAB_004d44ff
    MOV dword ptr [EDX + 0x4757c],0x0   ; 004d4500
    MOV dword ptr [EDX + 0x47578],0xbf800000 ; 004d450a
    MOV dword ptr [EDX + 0x108],0x10000 ; 004d4514
    MOV dword ptr [EDX + 0x10c],0x10000 ; 004d451e
    MOV EAX,EDX                         ; 004d4528
    MOV dword ptr [EDX + 0x110],0x10000 ; 004d452a
    POP EDI                             ; 004d4534
    POP ESI                             ; 004d4535
    RET                                 ; 004d4536

