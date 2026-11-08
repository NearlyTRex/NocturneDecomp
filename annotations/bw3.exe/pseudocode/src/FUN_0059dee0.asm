; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059dee0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_005d9f28+1
;   TerminatedCString s_modelName_005d9f2f
;   TerminatedCString s_guardDistance_005d9f39
;   TerminatedCString s_motion_state_005d9f47
;   TerminatedCString s_morphTime_005d9f54
;   undefined4 DAT_00607478
;
; Called Functions:
;   FUN_0040b830
;   FUN_0040ba30
;   FUN_0040bab0
;   FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059dee0
        ;   Label: FUN_0059dee0
    PUSH ESI                            ; 0059dee1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0059dee2
    PUSH EBX                            ; 0059dee6
    CALL FUN_00489120                   ; 0059dee7
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; undefined FUN_00489120()
    ADD ESP,0x4                         ; 0059deec
    PUSH 0x5d9f29                       ; 0059deef | s_speed_005d9f28+1
    LEA ESI,[EBX + 0xcdcc]              ; 0059def4
    PUSH ESI                            ; 0059defa
    CALL FUN_0040b830                   ; 0059defb
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 0059df00
    PUSH 0x5d9f2f                       ; 0059df03 | = "modelName"
    LEA ESI,[EBX + 0x158]               ; 0059df08
    PUSH ESI                            ; 0059df0e
    CALL FUN_0040ba30                   ; 0059df0f
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ba30()
    ADD ESP,0x8                         ; 0059df14
    PUSH 0x5d9f39                       ; 0059df17 | = "guardDistance"
    LEA EAX,[EBX + 0xcddc]              ; 0059df1c
    PUSH EAX                            ; 0059df22
    CALL FUN_0040b830                   ; 0059df23
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 0059df28
    PUSH 0x5d9f47                       ; 0059df2b | = "motion state"
    PUSH ESI                            ; 0059df30
    CALL FUN_0040bab0                   ; 0059df31
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bab0()
    MOV EDX,dword ptr [0x00607478]      ; 0059df36 | DAT_00607478
    ADD ESP,0x8                         ; 0059df3c
    CMP EDX,0x1                         ; 0059df3f
    JG 0x0059df47                       ; 0059df42
        ;   XREF to: 0059df47 (CONDITIONAL_JUMP)  ; LAB_0059df47
    POP ESI                             ; 0059df44
    POP EBX                             ; 0059df45
    RET                                 ; 0059df46
    PUSH 0x5d9f54                       ; 0059df47 | = "morphTime"
        ;   Label: LAB_0059df47
    ADD EBX,0x487c4                     ; 0059df4c
    PUSH EBX                            ; 0059df52
    CALL FUN_0040b830                   ; 0059df53
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 0059df58
    POP ESI                             ; 0059df5b
    POP EBX                             ; 0059df5c
    RET                                 ; 0059df5d

