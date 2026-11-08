; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00524850(undefined4 *param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[5]:
;   FUN_00415340 at 0041549d
;   FUN_00432050 at 004320ad
;   FUN_004eadf0 at 004eaec6
;   FUN_004eaf20 at 004eaf95
;   FUN_005317c0 at 00531930
;
; Called Functions:
;   FUN_00524150
;   FUN_005247c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524850
        ;   Label: FUN_00524850
    PUSH ESI                            ; 00524851
    PUSH 0x1                            ; 00524852
    MOV EDX,dword ptr [ESP + 0x14]      ; 00524854
    MOV EAX,dword ptr [ESP + 0x10]      ; 00524858
    PUSH EDX                            ; 0052485c
    MOV ECX,dword ptr [EAX]             ; 0052485d
    PUSH ECX                            ; 0052485f
    CALL FUN_00524150                   ; 00524860
        ;   XREF to: 00524150 (UNCONDITIONAL_CALL)  ; undefined FUN_00524150()
    ADD ESP,0xc                         ; 00524865
    MOV EBX,dword ptr [ESP + 0x14]      ; 00524868
    PUSH EBX                            ; 0052486c
    PUSH EAX                            ; 0052486d
    MOV ESI,dword ptr [ESP + 0x14]      ; 0052486e
    PUSH ESI                            ; 00524872
    CALL FUN_005247c0                   ; 00524873
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 00524878
    POP ESI                             ; 0052487b
    POP EBX                             ; 0052487c
    RET                                 ; 0052487d

