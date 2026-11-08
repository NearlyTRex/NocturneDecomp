; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00541140(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00541160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541140
        ;   Label: FUN_00541140
    MOV EBX,dword ptr [ESP + 0x8]       ; 00541141
    PUSH EBX                            ; 00541145
    CALL FUN_00541160                   ; 00541146
        ;   XREF to: 00541160 (UNCONDITIONAL_CALL)  ; undefined FUN_00541160()
    ADD ESP,0x4                         ; 0054114b
    MOV EAX,EBX                         ; 0054114e
    POP EBX                             ; 00541150
    RET                                 ; 00541151

