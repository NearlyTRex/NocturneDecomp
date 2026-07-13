; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void APIDLLReleaseDisplayContext(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_10014180
;   undefined4 DAT_100141f4
;   undefined4 DAT_10014230
;   undefined4 DAT_10226e88
;   undefined4 DAT_10226e8c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 10004da0
        ;   Label: APIDLLReleaseDisplayContext
    PUSH EDI                            ; 10004da4
    CMP dword ptr [0x10014180],0x0      ; 10004da5 | DAT_10014180
    JZ 0x10004e03                       ; 10004dac
        ;   XREF to: 10004e03 (CONDITIONAL_JUMP)  ; LAB_10004e03
    PUSH EAX                            ; 10004dae
    MOV EAX,[0x10014180]                ; 10004daf | DAT_10014180
    PUSH EAX                            ; 10004db4
    MOV EAX,dword ptr [EAX]             ; 10004db5
    CALL dword ptr [EAX + 0x68]         ; 10004db7
    CMP dword ptr [0x10014230],0x0      ; 10004dba | DAT_10014230
    JZ 0x10004e03                       ; 10004dc1
        ;   XREF to: 10004e03 (CONDITIONAL_JUMP)  ; LAB_10004e03
    MOV EDI,0x10226e88                  ; 10004dc3 | DAT_10226e88
    XOR EAX,EAX                         ; 10004dc8
    MOV ECX,0x1f                        ; 10004dca
    PUSH EAX                            ; 10004dcf
    STOSD.REP ES:EDI                    ; 10004dd0 | DAT_10226e88 | DAT_10226e8c
    MOV dword ptr [0x10226e88],0x7c     ; 10004dd2 | DAT_10226e88
    PUSH 0x1                            ; 10004ddc
    PUSH 0x10226e88                     ; 10004dde | DAT_10226e88
    PUSH EAX                            ; 10004de3
    MOV EAX,[0x10014180]                ; 10004de4 | DAT_10014180
    PUSH EAX                            ; 10004de9
    MOV EAX,dword ptr [EAX]             ; 10004dea
    CALL dword ptr [EAX + 0x64]         ; 10004dec
    MOV dword ptr [0x100141f4],0x1      ; 10004def | DAT_100141f4
    MOV dword ptr [0x10014230],0x0      ; 10004df9 | DAT_10014230
    POP EDI                             ; 10004e03
        ;   Label: LAB_10004e03
    RET                                 ; 10004e04

