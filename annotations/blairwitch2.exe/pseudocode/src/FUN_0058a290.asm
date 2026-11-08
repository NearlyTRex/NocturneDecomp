; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0058a290(int param_1)
;
;
; XREF[7]:
;   FUN_0043a7a0 at 0043a801
;   FUN_0047a0a0 at 0047a0a6
;   FUN_00485b40 at 00485ba4
;   FUN_004cbdc0 at 004cbe21
;   FUN_004e2e70 at 004e38b9
;   FUN_0053f170 at 0053f1d4
;   FUN_00575800 at 00575898
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0058a290
        ;   Label: FUN_0058a290
    MOV ECX,dword ptr [EDX + 0x6c4]     ; 0058a294
    TEST ECX,ECX                        ; 0058a29a
    JLE 0x00589e40                      ; 0058a29c
        ;   XREF to: 00589e40 (CONDITIONAL_JUMP)  ; LAB_00589e40
    PUSH EBX                            ; 0058a2a2
    MOV EAX,0x1                         ; 0058a2a3
    MOV EBX,ECX                         ; 0058a2a8
    SUB EBX,EAX                         ; 0058a2aa
    MOV dword ptr [EDX + 0x6c4],EBX     ; 0058a2ac
    POP EBX                             ; 0058a2b2
    RET                                 ; 0058a2b3

