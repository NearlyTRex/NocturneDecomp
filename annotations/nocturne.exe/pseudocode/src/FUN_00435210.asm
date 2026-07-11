; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00435210(int param_1)
;
;
; XREF[2]:
;   FUN_00435160 at 00435166
;   FUN_004351b0 at 004351b6
;
; Called Functions:
;   FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435210
        ;   Label: FUN_00435210
    MOV EBX,dword ptr [ESP + 0x8]       ; 00435211
    MOV EDX,dword ptr [EBX + 0x3aafc]   ; 00435215
    TEST EDX,EDX                        ; 0043521b
    JNZ 0x00435221                      ; 0043521d
        ;   XREF to: 00435221 (CONDITIONAL_JUMP)  ; LAB_00435221
    POP EBX                             ; 0043521f
    RET                                 ; 00435220
    PUSH EDX                            ; 00435221
        ;   Label: LAB_00435221
    CALL FUN_00564486                   ; 00435222
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 00435227
    MOV dword ptr [EBX + 0x3aafc],0x0   ; 0043522a
    POP EBX                             ; 00435234
    RET                                 ; 00435235

