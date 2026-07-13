; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e0070(undefined4 param_1)
;
;
; XREF[6]:
;   FUN_00415a30 at 00415a49
;   FUN_004d4540 at 004d4589
;   FUN_004dd9f0 at 004dda0f
;   FUN_004ef5c0 at 004ef603
;   FUN_00541860 at 00541879
;   FUN_0054e370 at 0054e389
;
; Called Functions:
;   FUN_004e0090
;   FUN_004e08c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e0070
        ;   Label: FUN_004e0070
    PUSH EDX                            ; 004e0074
    CALL FUN_004e0090                   ; 004e0075
        ;   XREF to: 004e0090 (UNCONDITIONAL_CALL)  ; undefined FUN_004e0090()
    ADD ESP,0x4                         ; 004e007a
    PUSH 0x0                            ; 004e007d
    MOV ECX,dword ptr [ESP + 0x8]       ; 004e007f
    PUSH ECX                            ; 004e0083
    CALL FUN_004e08c0                   ; 004e0084
        ;   XREF to: 004e08c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e08c0()
    ADD ESP,0x8                         ; 004e0089
    RET                                 ; 004e008c

