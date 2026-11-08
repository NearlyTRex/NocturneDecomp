; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f6ca0(undefined4 param_1,int param_2,int param_3)
;
;
; XREF[5]:
;   FUN_004f6d70 at 004f6d8b
;   FUN_004f70a0 at 004f70d0
;   FUN_004f72a0 at 004f7362
;   FUN_004f7880 at 004f796b
;   FUN_004f7a20 at 004f7b5b
;
; Called Functions:
;   FUN_004085a0
;   FUN_004f69a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6ca0
        ;   Label: FUN_004f6ca0
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f6ca1
    TEST EBX,EBX                        ; 004f6ca5
    JNZ 0x004f6cab                      ; 004f6ca7
        ;   XREF to: 004f6cab (CONDITIONAL_JUMP)  ; LAB_004f6cab
    POP EBX                             ; 004f6ca9
        ;   Label: LAB_004f6ca9
    RET                                 ; 004f6caa
    PUSH EBX                            ; 004f6cab
        ;   Label: LAB_004f6cab
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f6cac
    PUSH EDX                            ; 004f6cb0
    CALL FUN_004f69a0                   ; 004f6cb1
        ;   XREF to: 004f69a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f69a0()
    ADD ESP,0x8                         ; 004f6cb6
    CMP dword ptr [ESP + 0x10],0x0      ; 004f6cb9
    JZ 0x004f6ca9                       ; 004f6cbe
        ;   XREF to: 004f6ca9 (CONDITIONAL_JUMP)  ; LAB_004f6ca9
    PUSH EBX                            ; 004f6cc0
    CALL FUN_004085a0                   ; 004f6cc1
        ;   XREF to: 004085a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004085a0()
    ADD ESP,0x4                         ; 004f6cc6
    POP EBX                             ; 004f6cc9
    RET                                 ; 004f6cca

