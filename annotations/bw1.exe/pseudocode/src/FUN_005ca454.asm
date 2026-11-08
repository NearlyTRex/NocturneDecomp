; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ca454(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_005c32d4 at 005c32f3
;   FUN_005ca370 at 005ca413
;
; Referenced Globals:
;   void* PTR_FUN_006269d4 = 005ca450
;   undefined4 DAT_02c9f060
;
; Called Functions:
;   FUN_005ca450
;   FUN_005ca480
;   FUN_005cb688
;
; *****************************************************************************

section .text

    CALL dword ptr [0x006269d4]         ; 005ca454 | PTR_FUN_006269d4
        ;   Label: FUN_005ca454
    CMP byte ptr [0x02c9f060],0x0       ; 005ca45a | DAT_02c9f060
    JNZ 0x005ca472                      ; 005ca461
        ;   XREF to: 005ca472 (CONDITIONAL_JUMP)  ; LAB_005ca472
    MOV EDX,0xff                        ; 005ca463
    MOV EAX,0x10                        ; 005ca468
    CALL FUN_005cb688                   ; 005ca46d
        ;   XREF to: 005cb688 (UNCONDITIONAL_CALL)  ; undefined FUN_005cb688()
    MOV EDX,dword ptr [ESP + 0x4]       ; 005ca472
        ;   Label: LAB_005ca472
    PUSH EDX                            ; 005ca476
    CALL FUN_005ca480                   ; 005ca477
        ;   XREF to: 005ca480 (UNCONDITIONAL_CALL)  ; undefined FUN_005ca480()
    ADD ESP,0x4                         ; 005ca47c
    RET                                 ; 005ca47f

