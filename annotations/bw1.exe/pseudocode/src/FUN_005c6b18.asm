; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c6b18(void)
;
;
; XREF[1]:
;   FUN_005ca040 at 005ca04a
;
; Referenced Globals:
;   undefined4 DAT_02c9f054
;
; Called Functions:
;   FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c6b18
        ;   Label: FUN_005c6b18
    CMP dword ptr [0x02c9f054],0x0      ; 005c6b19 | DAT_02c9f054
    JZ 0x005c6b3c                       ; 005c6b20
        ;   XREF to: 005c6b3c (CONDITIONAL_JUMP)  ; LAB_005c6b3c
    MOV EAX,[0x02c9f054]                ; 005c6b22 | DAT_02c9f054
        ;   Label: LAB_005c6b22
    PUSH EAX                            ; 005c6b27
    MOV EBX,dword ptr [EAX]             ; 005c6b28
    CALL FUN_005c09f0                   ; 005c6b2a
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    ADD ESP,0x4                         ; 005c6b2f
    MOV dword ptr [0x02c9f054],EBX      ; 005c6b32 | DAT_02c9f054
    TEST EBX,EBX                        ; 005c6b38
    JNZ 0x005c6b22                      ; 005c6b3a
        ;   XREF to: 005c6b22 (CONDITIONAL_JUMP)  ; LAB_005c6b22
    POP EBX                             ; 005c6b3c
        ;   Label: LAB_005c6b3c
    RET                                 ; 005c6b3d

