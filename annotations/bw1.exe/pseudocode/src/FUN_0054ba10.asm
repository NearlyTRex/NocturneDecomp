; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0054ba10(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00604e4c
;   undefined4 DAT_00604e50
;
; Called Functions:
;   FUN_004a0410
;   FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054ba10
        ;   Label: FUN_0054ba10
    MOV EDX,dword ptr [ESP + 0x8]       ; 0054ba11
    PUSH EDX                            ; 0054ba15
    CALL FUN_004a0410                   ; 0054ba16
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0410()
    ADD ESP,0x4                         ; 0054ba1b
    PUSH 0x5f02c3                       ; 0054ba1e
    MOV EBX,EAX                         ; 0054ba23
    ADD EAX,0x158                       ; 0054ba25
    PUSH EAX                            ; 0054ba2a
    MOV dword ptr [EAX + -0x4],0x604e64 ; 0054ba2b
    CALL FUN_00569f50                   ; 0054ba32
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f50()
    FLD float ptr [0x00604e4c]          ; 0054ba37 | DAT_00604e4c
    MOV dword ptr [EBX + 0x2fec],0x3f19999a ; 0054ba3d
    FLD float ptr [0x00604e50]          ; 0054ba47 | DAT_00604e50
    MOV dword ptr [EBX + 0x2ff0],0x40000000 ; 0054ba4d
    ADD ESP,0x8                         ; 0054ba57
    MOV dword ptr [EBX + 0xc26c],0x0    ; 0054ba5a
    MOV EAX,EBX                         ; 0054ba64
    FXCH                                ; 0054ba66
    FSTP float ptr [EBX + 0x2ff4]       ; 0054ba68
    FSTP float ptr [EBX + 0x2ff8]       ; 0054ba6e
    POP EBX                             ; 0054ba74
    RET                                 ; 0054ba75

