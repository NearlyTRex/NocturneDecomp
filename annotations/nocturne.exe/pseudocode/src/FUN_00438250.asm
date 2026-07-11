; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00438250(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004b4800 at 004b488e
;
; Called Functions:
;   FUN_00438320
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438250
        ;   Label: FUN_00438250
    MOV EBX,dword ptr [ESP + 0x8]       ; 00438251
    PUSH EBX                            ; 00438255
    CALL FUN_00438320                   ; 00438256
        ;   XREF to: 00438320 (UNCONDITIONAL_CALL)  ; undefined FUN_00438320()
    ADD ESP,0x4                         ; 0043825b
    MOV EAX,EBX                         ; 0043825e
    POP EBX                             ; 00438260
    RET                                 ; 00438261

