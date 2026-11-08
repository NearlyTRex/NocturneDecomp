; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004203f0(int param_1)
;
;
; Called Functions:
;   FUN_0041f130
;   FUN_004208d0
;   FUN_0045c2a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004203f0
        ;   Label: FUN_004203f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004203f1
    PUSH EBX                            ; 004203f5
    CALL FUN_004208d0                   ; 004203f6
        ;   XREF to: 004208d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004208d0()
    ADD ESP,0x4                         ; 004203fb
    PUSH EBX                            ; 004203fe
    CALL FUN_0041f130                   ; 004203ff
        ;   XREF to: 0041f130 (UNCONDITIONAL_CALL)  ; undefined FUN_0041f130()
    ADD ESP,0x4                         ; 00420404
    LEA EAX,[EBX + 0x6ec]               ; 00420407
    PUSH EAX                            ; 0042040d
    CALL FUN_0045c2a0                   ; 0042040e
        ;   XREF to: 0045c2a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045c2a0()
    ADD ESP,0x4                         ; 00420413
    POP EBX                             ; 00420416
    RET                                 ; 00420417

