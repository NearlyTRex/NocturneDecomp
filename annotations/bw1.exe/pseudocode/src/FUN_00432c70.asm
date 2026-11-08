; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00432c70(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00544460 at 005474c4
;
; Called Functions:
;   FUN_005240c0
;   FUN_00524a00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432c70
        ;   Label: FUN_00432c70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00432c71
    PUSH 0x0                            ; 00432c75
    MOV EDX,dword ptr [ESP + 0x10]      ; 00432c77
    PUSH EDX                            ; 00432c7b
    LEA EAX,[EBX + 0x158]               ; 00432c7c
    PUSH EAX                            ; 00432c82
    MOV dword ptr [EBX + 0x2758],0x0    ; 00432c83
    CALL FUN_00524a00                   ; 00432c8d
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; undefined FUN_00524a00()
    ADD ESP,0x4                         ; 00432c92
    PUSH EAX                            ; 00432c95
    CALL FUN_005240c0                   ; 00432c96
        ;   XREF to: 005240c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005240c0()
    ADD ESP,0xc                         ; 00432c9b
    MOV dword ptr [EBX + 0x2754],EAX    ; 00432c9e
    TEST EAX,EAX                        ; 00432ca4
    SETGE AL                            ; 00432ca6
    AND EAX,0xff                        ; 00432ca9
    POP EBX                             ; 00432cae
    RET                                 ; 00432caf

