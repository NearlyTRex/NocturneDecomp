; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005665e8(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_00474460 at 00474549
;   FUN_0056cb60 at 0056cbe4
;
; Referenced Globals:
;   void* PTR_FUN_005c1abc = 005671dc
;
; Called Functions:
;   FUN_00566590
;   FUN_005671dc
;
; *****************************************************************************

section .text

    CALL dword ptr [0x005c1abc]         ; 005665e8 | PTR_FUN_005c1abc
        ;   Label: FUN_005665e8
    ADD EAX,0x14                        ; 005665ee
    PUSH EAX                            ; 005665f1
    MOV EDX,dword ptr [ESP + 0x8]       ; 005665f2
    PUSH EDX                            ; 005665f6
    CALL FUN_00566590                   ; 005665f7
        ;   XREF to: 00566590 (UNCONDITIONAL_CALL)  ; undefined FUN_00566590()
    ADD ESP,0x8                         ; 005665fc
    RET                                 ; 005665ff

