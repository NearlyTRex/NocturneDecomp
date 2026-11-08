; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00459960(int param_1)
;
;
; XREF[2]:
;   FUN_004598f0 at 004598f6
;   FUN_00459910 at 00459916
;
; Called Functions:
;   FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00459960
        ;   Label: FUN_00459960
    MOV EBX,dword ptr [ESP + 0x8]       ; 00459961
    MOV EDX,dword ptr [EBX + 0x48]      ; 00459965
    TEST EDX,EDX                        ; 00459968
    JNZ 0x0045996e                      ; 0045996a
        ;   XREF to: 0045996e (CONDITIONAL_JUMP)  ; LAB_0045996e
    POP EBX                             ; 0045996c
    RET                                 ; 0045996d
    PUSH EDX                            ; 0045996e
        ;   Label: LAB_0045996e
    CALL FUN_005a3770                   ; 0045996f
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 00459974
    MOV dword ptr [EBX + 0x48],0x0      ; 00459977
    POP EBX                             ; 0045997e
    RET                                 ; 0045997f

