; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a9a10(void)
;
;
; XREF[1]:
;   FUN_00554550 at 0055455c
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_00625c9c
;   undefined4 DAT_00625cb4
;   undefined4 DAT_00625e1c
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   FUN_00484f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9a10
        ;   Label: FUN_005a9a10
    PUSH ESI                            ; 005a9a11
    MOV EBX,0x625c9c                    ; 005a9a12 | DAT_00625c9c
    LEA ESI,[EBX + 0x180]               ; 005a9a17 | DAT_00625e1c
    PUSH EBX                            ; 005a9a1d | DAT_00625c9c | DAT_00625cb4
        ;   Label: LAB_005a9a1d
    MOV EDX,dword ptr [0x00612560]      ; 005a9a1e | DAT_00612560
    PUSH EDX                            ; 005a9a24 | DAT_01bc120c
    CALL FUN_00484f00                   ; 005a9a25
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00484f00()
    ADD EBX,0x18                        ; 005a9a2a
    ADD ESP,0x8                         ; 005a9a2d
    CMP EBX,ESI                         ; 005a9a30
    JNZ 0x005a9a1d                      ; 005a9a32
        ;   XREF to: 005a9a1d (CONDITIONAL_JUMP)  ; LAB_005a9a1d
    POP ESI                             ; 005a9a34
    POP EBX                             ; 005a9a35
    RET                                 ; 005a9a36

