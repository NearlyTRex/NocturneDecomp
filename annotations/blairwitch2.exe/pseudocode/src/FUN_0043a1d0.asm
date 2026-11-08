; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043a1d0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_005ce1d9
;   TerminatedCString s_lastPlatform_005ce1e3
;   undefined4 DAT_00609f5c
;
; Called Functions:
;   FUN_0040b9e0
;   FUN_0040ba60
;   FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043a1d0
        ;   Label: FUN_0043a1d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043a1d1
    PUSH EBX                            ; 0043a1d5
    CALL FUN_0040c330                   ; 0043a1d6
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c330()
    ADD ESP,0x4                         ; 0043a1db
    PUSH 0x5ce1d9                       ; 0043a1de | = "modelName"
    LEA EAX,[EBX + 0x2b4]               ; 0043a1e3
    PUSH EAX                            ; 0043a1e9
    CALL FUN_0040ba60                   ; 0043a1ea
        ;   XREF to: 0040ba60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ba60()
    MOV EDX,dword ptr [0x00609f5c]      ; 0043a1ef | DAT_00609f5c
    ADD ESP,0x8                         ; 0043a1f5
    CMP EDX,0x2                         ; 0043a1f8
    JGE 0x0043a1ff                      ; 0043a1fb
        ;   XREF to: 0043a1ff (CONDITIONAL_JUMP)  ; LAB_0043a1ff
    POP EBX                             ; 0043a1fd
    RET                                 ; 0043a1fe
    PUSH 0x5ce1e3                       ; 0043a1ff | = "lastPlatform"
        ;   Label: LAB_0043a1ff
    LEA EAX,[EBX + 0x438]               ; 0043a204
    PUSH EAX                            ; 0043a20a
    CALL FUN_0040b9e0                   ; 0043a20b
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 0043a210
    POP EBX                             ; 0043a213
    RET                                 ; 0043a214

