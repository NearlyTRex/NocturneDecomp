; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00492ff0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_I_keyReel_005d531f+2
;   TerminatedCString s_keyEvent_005d5329
;   undefined4 DAT_00614c4c
;
; Called Functions:
;   FUN_0040b730
;   FUN_0040b9e0
;   FUN_00447450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00492ff0
        ;   Label: FUN_00492ff0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00492ff1
    PUSH EBX                            ; 00492ff5
    CALL FUN_00447450                   ; 00492ff6
        ;   XREF to: 00447450 (UNCONDITIONAL_CALL)  ; undefined FUN_00447450()
    MOV EDX,dword ptr [0x00614c4c]      ; 00492ffb | DAT_00614c4c
    ADD ESP,0x4                         ; 00493001
    CMP EDX,0x2                         ; 00493004
    JGE 0x0049300b                      ; 00493007
        ;   XREF to: 0049300b (CONDITIONAL_JUMP)  ; LAB_0049300b
    POP EBX                             ; 00493009
    RET                                 ; 0049300a
    PUSH 0x5d5321                       ; 0049300b | s_I_keyReel_005d531f+2
        ;   Label: LAB_0049300b
    LEA EAX,[EBX + 0x4cc]               ; 00493010
    PUSH EAX                            ; 00493016
    CALL FUN_0040b9e0                   ; 00493017
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 0049301c
    PUSH 0x5d5329                       ; 0049301f | = "keyEvent"
    LEA EAX,[EBX + 0x4d0]               ; 00493024
    PUSH EAX                            ; 0049302a
    CALL FUN_0040b730                   ; 0049302b
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 00493030
    POP EBX                             ; 00493033
    RET                                 ; 00493034

