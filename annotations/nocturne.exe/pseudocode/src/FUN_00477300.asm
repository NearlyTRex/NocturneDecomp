; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00477300(undefined4 param_1)
;
;
; XREF[3]:
;   FUN_004771f0 at 00477278
;   FUN_00477370 at 00477375
;   FUN_00477390 at 004773bf
;
; Referenced Globals:
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;
; Called Functions:
;   FUN_00477340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477300
        ;   Label: FUN_00477300
    MOV EDX,dword ptr [ESP + 0x8]       ; 00477301
    PUSH EDX                            ; 00477305
    CALL FUN_00477340                   ; 00477306
        ;   XREF to: 00477340 (UNCONDITIONAL_CALL)  ; undefined FUN_00477340()
    IMUL EAX,dword ptr [0x005b761c]     ; 0047730b | DAT_005b761c
    LEA EDX,[EAX*0x4 + 0x0]             ; 00477312
    SUB EDX,EAX                         ; 00477319
    MOV EAX,EDX                         ; 0047731b
    SAR EDX,0x1f                        ; 0047731d
    SHL EDX,0x2                         ; 00477320
    SBB EAX,EDX                         ; 00477323
    SAR EAX,0x2                         ; 00477325
    MOV EDX,EAX                         ; 00477328
    MOV EBX,dword ptr [0x005b7620]      ; 0047732a | DAT_005b7620
    SAR EDX,0x1f                        ; 00477330
    ADD ESP,0x4                         ; 00477333
    IDIV EBX                            ; 00477336
    POP EBX                             ; 00477338
    RET                                 ; 00477339

