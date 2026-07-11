; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00571d9f(int param_1)
;
;
; XREF[2]:
;   FUN_005701cf at 00570208
;   FUN_00570449 at 00570487
;
; Referenced Globals:
;   undefined1* PTR_LAB_005a4ab0 = 0056ff82
;
; Called Functions:
;   FUN_00571ef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571d9f
        ;   Label: FUN_00571d9f
    MOV EBX,dword ptr [ESP + 0x8]       ; 00571da0
    MOV AH,byte ptr [EBX + 0x24]        ; 00571da4
    MOV dword ptr [EBX + 0x28],0x5a4ab0 ; 00571da7 | PTR_LAB_005a4ab0
    TEST AH,0x2                         ; 00571dae
    JNZ 0x00571db7                      ; 00571db1
        ;   XREF to: 00571db7 (CONDITIONAL_JUMP)  ; LAB_00571db7
    MOV EAX,EBX                         ; 00571db3
    POP EBX                             ; 00571db5
    RET                                 ; 00571db6
    MOV EDX,dword ptr [EBX + 0x4]       ; 00571db7
        ;   Label: LAB_00571db7
    PUSH EDX                            ; 00571dba
    CALL FUN_00571ef0                   ; 00571dbb
        ;   XREF to: 00571ef0 (UNCONDITIONAL_CALL)  ; undefined FUN_00571ef0()
    ADD ESP,0x4                         ; 00571dc0
    MOV EAX,EBX                         ; 00571dc3
    POP EBX                             ; 00571dc5
    RET                                 ; 00571dc6

