; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043ae00(int param_1)
;
;
; XREF[1]:
;   FUN_0049da10 at 0049da2b
;
; Referenced Globals:
;   string s_console.txt_005ad358
;
; Called Functions:
;   FUN_00563cc0
;   FUN_005657c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043ae00
        ;   Label: FUN_0043ae00
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043ae01
    PUSH 0xfa0                          ; 0043ae05
    PUSH 0x0                            ; 0043ae0a
    LEA EAX,[EBX + 0x4]                 ; 0043ae0c
    PUSH EAX                            ; 0043ae0f
    CALL FUN_00563cc0                   ; 0043ae10
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00563cc0()
    ADD ESP,0xc                         ; 0043ae15
    MOV dword ptr [EBX + 0xfa4],0x0     ; 0043ae18
    PUSH 0x5ad358                       ; 0043ae22 | = "console.txt"
    MOV dword ptr [EBX + 0xfa8],0x0     ; 0043ae27
    CALL FUN_005657c0                   ; 0043ae31
        ;   XREF to: 005657c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005657c0()
    ADD ESP,0x4                         ; 0043ae36
    POP EBX                             ; 0043ae39
    RET                                 ; 0043ae3a

