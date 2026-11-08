; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f5370(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_0053acf0 at 0053ad2d
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   FUN_0046b240
;   FUN_004f5130
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004f5370
        ;   Label: FUN_004f5370
    PUSH EDX                            ; 004f5374
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f5375
    PUSH ECX                            ; 004f5379
    CALL FUN_004f5130                   ; 004f537a
        ;   XREF to: 004f5130 (UNCONDITIONAL_CALL)  ; undefined FUN_004f5130()
    ADD ESP,0x8                         ; 004f537f
    TEST EAX,EAX                        ; 004f5382
    JNZ 0x004f5387                      ; 004f5384
        ;   XREF to: 004f5387 (CONDITIONAL_JUMP)  ; LAB_004f5387
    RET                                 ; 004f5386
    PUSH EBX                            ; 004f5387
        ;   Label: LAB_004f5387
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f5388
    ADD EAX,0xe8                        ; 004f538c
    PUSH EAX                            ; 004f5391
    MOV EBX,dword ptr [0x005f2afc]      ; 004f5392 | DAT_005f2afc
    PUSH EBX                            ; 004f5398 | DAT_01bdd7e4
    CALL FUN_0046b240                   ; 004f5399
        ;   XREF to: 0046b240 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b240()
    ADD ESP,0x8                         ; 004f539e
    POP EBX                             ; 004f53a1
    RET                                 ; 004f53a2

