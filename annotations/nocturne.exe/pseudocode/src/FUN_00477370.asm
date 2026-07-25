; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00477370(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_004771f0 at 00477286
;   FUN_00477390 at 0047740b
;
; Called Functions:
;   FUN_00477300
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00477370
        ;   Label: FUN_00477370
    PUSH EDX                            ; 00477374
    CALL FUN_00477300                   ; 00477375
        ;   XREF to: 00477300 (UNCONDITIONAL_CALL)  ; undefined FUN_00477300()
    MOV EDX,EAX                         ; 0047737a
    SAR EDX,0x1f                        ; 0047737c
    ADD ESP,0x4                         ; 0047737f
    SUB EAX,EDX                         ; 00477382
    SAR EAX,0x1                         ; 00477384
    RET                                 ; 00477386

