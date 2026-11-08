; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aa1f0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Sleeping_005f0a77
;
; Called Functions:
;   FUN_00503620
;   FUN_0059d8e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aa1f0
        ;   Label: FUN_005aa1f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005aa1f1
    PUSH 0x1                            ; 005aa1f5
    PUSH 0x0                            ; 005aa1f7
    LEA EAX,[EBX + 0x2b4]               ; 005aa1f9
    PUSH EAX                            ; 005aa1ff
    CALL FUN_00503620                   ; 005aa200
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 005aa205
    ADD EBX,0x10af8                     ; 005aa208
    PUSH 0x5f0a77                       ; 005aa20e | = "Sleeping"
    FLD float ptr [EBX + 0xd68]         ; 005aa213
    PUSH EBX                            ; 005aa219
    FSTP float ptr [EBX + 0xd6c]        ; 005aa21a
    CALL FUN_0059d8e0                   ; 005aa220
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d8e0()
    ADD ESP,0x8                         ; 005aa225
    POP EBX                             ; 005aa228
    RET                                 ; 005aa229

