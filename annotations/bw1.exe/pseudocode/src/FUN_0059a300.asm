; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059a300(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_005f8034
;   TerminatedCString s_homePos_005f803e
;
; Called Functions:
;   FUN_0040b1c0
;   FUN_0040b770
;   FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059a300
        ;   Label: FUN_0059a300
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059a301
    PUSH EBX                            ; 0059a305
    CALL FUN_0040c040                   ; 0059a306
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c040()
    ADD ESP,0x4                         ; 0059a30b
    PUSH 0x5f8034                       ; 0059a30e | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 0059a313
    PUSH EAX                            ; 0059a319
    CALL FUN_0040b770                   ; 0059a31a
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b770()
    ADD ESP,0x8                         ; 0059a31f
    PUSH 0x5f803e                       ; 0059a322 | = "homePos"
    LEA EAX,[EBX + 0x2d4]               ; 0059a327
    PUSH EAX                            ; 0059a32d
    CALL FUN_0040b1c0                   ; 0059a32e
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b1c0()
    ADD ESP,0x8                         ; 0059a333
    POP EBX                             ; 0059a336
    RET                                 ; 0059a337

