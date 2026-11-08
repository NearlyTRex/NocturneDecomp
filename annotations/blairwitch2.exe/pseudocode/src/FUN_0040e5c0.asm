; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040e5c0(int param_1)
;
;
; Called Functions:
;   FUN_00408a80
;   FUN_0044fd00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e5c0
        ;   Label: FUN_0040e5c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e5c1
    LEA EAX,[EBX + 0x2b4]               ; 0040e5c5
    PUSH EAX                            ; 0040e5cb
    CALL FUN_0044fd00                   ; 0040e5cc
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    ADD ESP,0x4                         ; 0040e5d1
    PUSH EBX                            ; 0040e5d4
    CALL FUN_00408a80                   ; 0040e5d5
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a80()
    ADD ESP,0x4                         ; 0040e5da
    MOV dword ptr [EBX + 0x4a4],0x0     ; 0040e5dd
    POP EBX                             ; 0040e5e7
    LEA EAX,[EAX]                       ; 0040e5e8
    MOV EDX,EDX                         ; 0040e5ee
    RET                                 ; 0040e5f0

