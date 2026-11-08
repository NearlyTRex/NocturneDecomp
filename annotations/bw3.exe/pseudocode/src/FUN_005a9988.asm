; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a9988(void)
;
;
; XREF[1]:
;   FUN_005aceb0 at 005aceba
;
; Referenced Globals:
;   undefined4 DAT_02d252a4
;
; Called Functions:
;   FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9988
        ;   Label: FUN_005a9988
    CMP dword ptr [0x02d252a4],0x0      ; 005a9989 | DAT_02d252a4
    JZ 0x005a99ac                       ; 005a9990
        ;   XREF to: 005a99ac (CONDITIONAL_JUMP)  ; LAB_005a99ac
    MOV EAX,[0x02d252a4]                ; 005a9992 | DAT_02d252a4
        ;   Label: LAB_005a9992
    PUSH EAX                            ; 005a9997
    MOV EBX,dword ptr [EAX]             ; 005a9998
    CALL FUN_005a3770                   ; 005a999a
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 005a999f
    MOV dword ptr [0x02d252a4],EBX      ; 005a99a2 | DAT_02d252a4
    TEST EBX,EBX                        ; 005a99a8
    JNZ 0x005a9992                      ; 005a99aa
        ;   XREF to: 005a9992 (CONDITIONAL_JUMP)  ; LAB_005a9992
    POP EBX                             ; 005a99ac
        ;   Label: LAB_005a99ac
    RET                                 ; 005a99ad

