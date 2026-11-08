; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a0d50(int param_1)
;
;
; XREF[3]:
;   FUN_0053b250 at 0053bb5b
;   FUN_00572d20 at 0057335a
;   FUN_00574410 at 0057451a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a0d50
        ;   Label: FUN_005a0d50
    CMP dword ptr [EAX + 0x4],0x0       ; 005a0d54
    JNZ 0x005a0d60                      ; 005a0d58
        ;   XREF to: 005a0d60 (CONDITIONAL_JUMP)  ; LAB_005a0d60
    MOV EAX,0xffffffff                  ; 005a0d5a
    RET                                 ; 005a0d5f
    MOV EAX,dword ptr [EAX + 0x10]      ; 005a0d60
        ;   Label: LAB_005a0d60
    RET                                 ; 005a0d63

