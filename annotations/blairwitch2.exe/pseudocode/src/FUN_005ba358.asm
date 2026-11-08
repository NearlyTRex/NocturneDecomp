; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ba358(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_00481620 at 00481709
;   FUN_005c00d0 at 005c0154
;
; Referenced Globals:
;   void* PTR_FUN_0061f2a4 = 005bcdfc
;
; Called Functions:
;   FUN_005ba300
;   FUN_005bcdfc
;
; *****************************************************************************

section .text

    CALL dword ptr [0x0061f2a4]         ; 005ba358 | PTR_FUN_0061f2a4
        ;   Label: FUN_005ba358
    ADD EAX,0x14                        ; 005ba35e
    PUSH EAX                            ; 005ba361
    MOV EDX,dword ptr [ESP + 0x8]       ; 005ba362
    PUSH EDX                            ; 005ba366
    CALL FUN_005ba300                   ; 005ba367
        ;   XREF to: 005ba300 (UNCONDITIONAL_CALL)  ; undefined FUN_005ba300()
    ADD ESP,0x8                         ; 005ba36c
    RET                                 ; 005ba36f

