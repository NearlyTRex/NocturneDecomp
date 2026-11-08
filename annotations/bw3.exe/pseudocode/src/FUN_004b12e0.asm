; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_004b12e0(void)
;
;
; XREF[2]:
;   FUN_00469b40 at 00469bd4
;   FUN_00509bc0 at 00509d1b
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01d1ad62
;   undefined4 DAT_01d1ad64
;
; *****************************************************************************

section .text

    CMP dword ptr [0x005fba20],0x10     ; 004b12e0 | DAT_005fba20
        ;   Label: FUN_004b12e0
    JNZ 0x004b12f2                      ; 004b12e7
        ;   XREF to: 004b12f2 (CONDITIONAL_JUMP)  ; LAB_004b12f2
    XOR EAX,EAX                         ; 004b12e9
    MOV AX,[0x01d1ad62]                 ; 004b12eb | DAT_01d1ad62
    RET                                 ; 004b12f1
    MOV EAX,[0x01d1ad64]                ; 004b12f2 | DAT_01d1ad64
        ;   Label: LAB_004b12f2
    RET                                 ; 004b12f7

