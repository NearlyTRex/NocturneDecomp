; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a5544(undefined4 *param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_005a5584 at 005a5594
;
; Called Functions:
;   FUN_005a5512
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a5544
        ;   Label: FUN_005a5544
    TEST EAX,EAX                        ; 005a5548
    JNZ 0x005a554d                      ; 005a554a
        ;   XREF to: 005a554d (CONDITIONAL_JUMP)  ; LAB_005a554d
    RET                                 ; 005a554c
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a554d
        ;   Label: LAB_005a554d
    MOV dword ptr [EAX],EDX             ; 005a5551
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a5553
    PUSH EDX                            ; 005a5557
    MOV ECX,dword ptr [ESP + 0xc]       ; 005a5558
    PUSH ECX                            ; 005a555c
    ADD EAX,0x4                         ; 005a555d
    PUSH EAX                            ; 005a5560
    CALL FUN_005a5512                   ; 005a5561
        ;   XREF to: 005a5512 (UNCONDITIONAL_CALL)  ; undefined FUN_005a5512()
    ADD ESP,0xc                         ; 005a5566
    RET                                 ; 005a5569

