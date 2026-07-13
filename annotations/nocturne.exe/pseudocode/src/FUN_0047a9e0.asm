; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0047a9e0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0047aa00
;   FUN_00480410
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047a9e0
        ;   Label: FUN_0047a9e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0047a9e1
    PUSH EBX                            ; 0047a9e5
    CALL FUN_0047aa00                   ; 0047a9e6
        ;   XREF to: 0047aa00 (UNCONDITIONAL_CALL)  ; undefined FUN_0047aa00()
    ADD ESP,0x4                         ; 0047a9eb
    PUSH EBX                            ; 0047a9ee
    CALL FUN_00480410                   ; 0047a9ef
        ;   XREF to: 00480410 (UNCONDITIONAL_CALL)  ; undefined FUN_00480410()
    ADD ESP,0x4                         ; 0047a9f4
    MOV EAX,EBX                         ; 0047a9f7
    POP EBX                             ; 0047a9f9
    RET                                 ; 0047a9fa

