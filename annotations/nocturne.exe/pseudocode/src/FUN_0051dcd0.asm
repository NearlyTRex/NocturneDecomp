; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051dcd0(int param_1)
;
;
; XREF[30]:
;   FUN_00412160 at 00412177
;   FUN_004134a0 at 004134b7
;   FUN_004150b0 at 004150ba
;   FUN_00415430 at 00415447
;   FUN_00418800 at 0041880e
;   FUN_0041fc20 at 0041fc31
;   FUN_00424260 at 004242e4
;   FUN_0043bc50 at 0043bc5e
;   FUN_004546d0 at 004546dd
;   FUN_004629b0 at 004629bd
;   ... and 20 more
;
; Called Functions:
;   FUN_0051dd00
;   FUN_0051f570
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0051dcd0
        ;   Label: FUN_0051dcd0
    ADD EAX,0x2260                      ; 0051dcd4
    PUSH EAX                            ; 0051dcd9
    CALL FUN_0051f570                   ; 0051dcda
        ;   XREF to: 0051f570 (UNCONDITIONAL_CALL)  ; undefined FUN_0051f570()
    ADD ESP,0x4                         ; 0051dcdf
    PUSH EAX                            ; 0051dce2
    MOV EDX,dword ptr [ESP + 0x8]       ; 0051dce3
    PUSH EDX                            ; 0051dce7
    CALL FUN_0051dd00                   ; 0051dce8
        ;   XREF to: 0051dd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0051dd00()
    ADD ESP,0x8                         ; 0051dced
    RET                                 ; 0051dcf0

