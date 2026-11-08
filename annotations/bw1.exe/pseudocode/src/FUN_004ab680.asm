; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ab680(int param_1)
;
;
; Called Functions:
;   FUN_0045d260
;   FUN_004688e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ab680
        ;   Label: FUN_004ab680
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ab681
    PUSH EBX                            ; 004ab685
    CALL FUN_0045d260                   ; 004ab686
        ;   XREF to: 0045d260 (UNCONDITIONAL_CALL)  ; undefined FUN_0045d260()
    ADD ESP,0x4                         ; 004ab68b
    LEA EAX,[EBX + 0x1f4]               ; 004ab68e
    PUSH EAX                            ; 004ab694
    CALL FUN_004688e0                   ; 004ab695
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    MOV dword ptr [EBX + 0xf8],0x1      ; 004ab69a
    MOV dword ptr [EBX + 0x3d8],0x0     ; 004ab6a4
    ADD ESP,0x4                         ; 004ab6ae
    MOV dword ptr [EBX + 0x3dc],0x0     ; 004ab6b1
    POP EBX                             ; 004ab6bb
    RET                                 ; 004ab6bc

