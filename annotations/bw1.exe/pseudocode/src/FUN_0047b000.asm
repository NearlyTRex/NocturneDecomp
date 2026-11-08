; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047b000(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01bc0cd4
;   undefined4 DAT_01bc0cd8
;   undefined4 DAT_01bc0cdc
;   undefined4 DAT_01bc0ce0
;   undefined4 DAT_01bc0ce4
;   undefined4 DAT_01bc0ce8
;   undefined4 DAT_01bc0cec
;   undefined4 DAT_01bc0cf0
;   undefined4 DAT_01bc0cf4
;
; Called Functions:
;   FUN_0040c160
;   FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0047b000
        ;   Label: FUN_0047b000
    MOV ECX,0x3f000000                  ; 0047b001
    PUSH 0x1c3f668                      ; 0047b006
    MOV ESI,0xbf19999a                  ; 0047b00b
    XOR EDX,EDX                         ; 0047b010
    PUSH 0x9                            ; 0047b012
    MOV EAX,0x3f19999a                  ; 0047b014
    MOV dword ptr [0x01bc0cd4],EDX      ; 0047b019 | DAT_01bc0cd4
    PUSH 0x612524                       ; 0047b01f
    MOV dword ptr [0x01bc0cd8],ECX      ; 0047b024 | DAT_01bc0cd8
    MOV dword ptr [0x01bc0cdc],EDX      ; 0047b02a | DAT_01bc0cdc
    PUSH 0x47b080                       ; 0047b030
    MOV dword ptr [0x01bc0ce0],ESI      ; 0047b035 | DAT_01bc0ce0
    MOV dword ptr [0x01bc0ce4],EDX      ; 0047b03b | DAT_01bc0ce4
    PUSH 0x5dac0d                       ; 0047b041
    MOV dword ptr [0x01bc0ce8],EDX      ; 0047b046 | DAT_01bc0ce8
    MOV [0x01bc0cec],EAX                ; 0047b04c | DAT_01bc0cec
    PUSH 0x1bc0cf8                      ; 0047b051
    MOV dword ptr [0x01bc0cf0],EDX      ; 0047b056 | DAT_01bc0cf0
    MOV dword ptr [0x01bc0cf4],EDX      ; 0047b05c | DAT_01bc0cf4
    CALL FUN_0040c160                   ; 0047b062
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 0047b067
    PUSH 0x5ff300                       ; 0047b06a
    PUSH 0x6                            ; 0047b06f
    PUSH 0x1bc0d54                      ; 0047b071
    CALL FUN_005c0357                   ; 0047b076
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 0047b07b
    POP ESI                             ; 0047b07e
    RET                                 ; 0047b07f

