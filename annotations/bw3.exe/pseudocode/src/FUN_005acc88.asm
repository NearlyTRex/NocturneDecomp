; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * FUN_005acc88(int param_1,undefined1 *param_2,int param_3)
;
;
; XREF[4]:
;   FUN_005a5674 at 005a58d4
;   FUN_005a6838 at 005a6848
;   FUN_005a689c at 005a68d9
;   FUN_005b1840 at 005b18b2
;
; Called Functions:
;   FUN_005acc30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005acc88
        ;   Label: FUN_005acc88
    MOV EAX,dword ptr [ESP + 0x8]       ; 005acc89
    MOV EBX,dword ptr [ESP + 0xc]       ; 005acc8d
    MOV ECX,dword ptr [ESP + 0x10]      ; 005acc91
    MOV EDX,EBX                         ; 005acc95
    CMP ECX,0xa                         ; 005acc97
    JNZ 0x005acca8                      ; 005acc9a
        ;   XREF to: 005acca8 (CONDITIONAL_JUMP)  ; LAB_005acca8
    TEST EAX,EAX                        ; 005acc9c
    JGE 0x005acca8                      ; 005acc9e
        ;   XREF to: 005acca8 (CONDITIONAL_JUMP)  ; LAB_005acca8
    NEG EAX                             ; 005acca0
    LEA EDX,[EBX + 0x1]                 ; 005acca2
    MOV byte ptr [EBX],0x2d             ; 005acca5
    PUSH ECX                            ; 005acca8
        ;   Label: LAB_005acca8
    PUSH EDX                            ; 005acca9
    PUSH EAX                            ; 005accaa
    CALL FUN_005acc30                   ; 005accab
        ;   XREF to: 005acc30 (UNCONDITIONAL_CALL)  ; undefined FUN_005acc30()
    ADD ESP,0xc                         ; 005accb0
    MOV EAX,EBX                         ; 005accb3
    POP EBX                             ; 005accb5
    RET                                 ; 005accb6

