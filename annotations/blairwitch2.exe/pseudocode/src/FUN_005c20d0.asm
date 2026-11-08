; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c20d0(int param_1,byte *param_2)
;
;
; XREF[1]:
;   FUN_005baf20 at 005baf32
;
; Referenced Globals:
;   undefined4 DAT_00601428
;
; Called Functions:
;   FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c20d0
        ;   Label: FUN_005c20d0
    PUSH ESI                            ; 005c20d1
    MOV ESI,dword ptr [ESP + 0xc]       ; 005c20d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005c20d6
    PUSH 0x20                           ; 005c20da
    PUSH 0x0                            ; 005c20dc
    PUSH ESI                            ; 005c20de
    CALL FUN_005b77c0                   ; 005c20df
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    ADD ESP,0xc                         ; 005c20e4
    MOV AL,byte ptr [EBX]               ; 005c20e7
    TEST AL,AL                          ; 005c20e9
    JNZ 0x005c20f0                      ; 005c20eb
        ;   XREF to: 005c20f0 (CONDITIONAL_JUMP)  ; LAB_005c20f0
    POP ESI                             ; 005c20ed
    POP EBX                             ; 005c20ee
    RET                                 ; 005c20ef
    XOR EDX,EDX                         ; 005c20f0
        ;   Label: LAB_005c20f0
    MOV DL,AL                           ; 005c20f2
    SAR EDX,0x3                         ; 005c20f4
    AND AL,0x7                          ; 005c20f7
    AND EAX,0xff                        ; 005c20f9
    MOV AL,byte ptr [EAX + 0x601428]    ; 005c20fe | DAT_00601428
    MOV AH,byte ptr [EDX + ESI*0x1]     ; 005c2104
    OR AH,AL                            ; 005c2107
    INC EBX                             ; 005c2109
    MOV byte ptr [EDX + ESI*0x1],AH     ; 005c210a
    MOV AL,byte ptr [EBX]               ; 005c210d
    TEST AL,AL                          ; 005c210f
    JNZ 0x005c20f0                      ; 005c2111
        ;   XREF to: 005c20f0 (CONDITIONAL_JUMP)  ; LAB_005c20f0
    POP ESI                             ; 005c2113
    POP EBX                             ; 005c2114
    RET                                 ; 005c2115

