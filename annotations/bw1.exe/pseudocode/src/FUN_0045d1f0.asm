; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0045d1f0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004ab5c0 at 004ab5c8
;
; Called Functions:
;   FUN_004085c0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0045d1f0
        ;   Label: FUN_0045d1f0
    PUSH EDI                            ; 0045d1f1
    MOV EDX,dword ptr [ESP + 0xc]       ; 0045d1f2
    PUSH EDX                            ; 0045d1f6
    MOV ESI,0x5d834d                    ; 0045d1f7
    CALL FUN_004085c0                   ; 0045d1fc
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004085c0()
    MOV EDX,EAX                         ; 0045d201
    ADD ESP,0x4                         ; 0045d203
    LEA EDI,[EAX + 0x188]               ; 0045d206
    MOV dword ptr [EAX + 0x154],0x5fe854 ; 0045d20c
    PUSH EDI                            ; 0045d216
    MOV AL,byte ptr [ESI]               ; 0045d217
        ;   Label: LAB_0045d217
    MOV byte ptr [EDI],AL               ; 0045d219
    CMP AL,0x0                          ; 0045d21b
    JZ 0x0045d22f                       ; 0045d21d
        ;   XREF to: 0045d22f (CONDITIONAL_JUMP)  ; LAB_0045d22f
    MOV AL,byte ptr [ESI + 0x1]         ; 0045d21f
    ADD ESI,0x2                         ; 0045d222
    MOV byte ptr [EDI + 0x1],AL         ; 0045d225
    ADD EDI,0x2                         ; 0045d228
    CMP AL,0x0                          ; 0045d22b
    JNZ 0x0045d217                      ; 0045d22d
        ;   XREF to: 0045d217 (CONDITIONAL_JUMP)  ; LAB_0045d217
    POP EDI                             ; 0045d22f
        ;   Label: LAB_0045d22f
    MOV dword ptr [EDX + 0x158],0x0     ; 0045d230
    MOV byte ptr [EDX + 0x15c],0x0      ; 0045d23a
    MOV dword ptr [EDX + 0x1f0],0x1     ; 0045d241
    MOV EAX,EDX                         ; 0045d24b
    MOV dword ptr [EDX + 0x1ec],0x1     ; 0045d24d
    POP EDI                             ; 0045d257
    POP ESI                             ; 0045d258
    RET                                 ; 0045d259

