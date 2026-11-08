; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0052ae80(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00570020 at 005700cb
;
; Called Functions:
;   FUN_0052b100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052ae80
        ;   Label: FUN_0052ae80
    MOV EBX,dword ptr [ESP + 0x8]       ; 0052ae81
    PUSH EBX                            ; 0052ae85
    CALL FUN_0052b100                   ; 0052ae86
        ;   XREF to: 0052b100 (UNCONDITIONAL_CALL)  ; undefined FUN_0052b100()
    ADD ESP,0x4                         ; 0052ae8b
    MOV EAX,EBX                         ; 0052ae8e
    POP EBX                             ; 0052ae90
    RET                                 ; 0052ae91

