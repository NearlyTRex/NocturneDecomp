; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00522650(undefined4 param_1,undefined4 param_2,int param_3)
;
;
; XREF[1]:
;   FUN_00523290 at 005232b7
;
; Called Functions:
;   FUN_00522540
;   FUN_00567580
;   FUN_00569890
;   FUN_00569eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00522650
        ;   Label: FUN_00522650
    PUSH ESI                            ; 00522651
    MOV EBX,dword ptr [ESP + 0x14]      ; 00522652
    PUSH EBX                            ; 00522656
    CALL FUN_00567580                   ; 00522657
        ;   XREF to: 00567580 (UNCONDITIONAL_CALL)  ; undefined FUN_00567580()
    ADD ESP,0x4                         ; 0052265c
    PUSH 0x0                            ; 0052265f
    PUSH EBX                            ; 00522661
    CALL FUN_00569890                   ; 00522662
        ;   XREF to: 00569890 (UNCONDITIONAL_CALL)  ; undefined FUN_00569890()
    ADD ESP,0x8                         ; 00522667
    PUSH EBX                            ; 0052266a
    MOV ESI,dword ptr [EBX + 0x2320]    ; 0052266b
    CALL FUN_00569eb0                   ; 00522671
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00569eb0()
    ADD ESP,0x4                         ; 00522676
    MOV EDX,dword ptr [EAX + ESI*0x4 + 0x2c] ; 00522679
    PUSH EDX                            ; 0052267d
    PUSH 0x0                            ; 0052267e
    MOV ECX,dword ptr [EBX + 0x2324]    ; 00522680
    PUSH ECX                            ; 00522686
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00522687
    PUSH EBX                            ; 0052268b
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0052268c
    PUSH ESI                            ; 00522690
    CALL FUN_00522540                   ; 00522691
        ;   XREF to: 00522540 (UNCONDITIONAL_CALL)  ; undefined FUN_00522540()
    ADD ESP,0x14                        ; 00522696
    POP ESI                             ; 00522699
    POP EBX                             ; 0052269a
    RET                                 ; 0052269b

