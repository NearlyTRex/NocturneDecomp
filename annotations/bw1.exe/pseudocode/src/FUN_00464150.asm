; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00464150(void)
;
;
; XREF[1]:
;   FUN_00554550 at 00554550
;
; Referenced Globals:
;   undefined4 DAT_006122c0
;   undefined4 DAT_006122d8
;   undefined4 DAT_00612308
;   undefined4 DAT_00612488
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   FUN_00484f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00464150
        ;   Label: FUN_00464150
    PUSH ESI                            ; 00464151
    PUSH 0x6122c0                       ; 00464152 | DAT_006122c0
    MOV EDX,dword ptr [0x00612560]      ; 00464157 | DAT_00612560
    PUSH EDX                            ; 0046415d | DAT_01bc120c
    MOV EBX,0x6122d8                    ; 0046415e | DAT_006122d8
    CALL FUN_00484f00                   ; 00464163
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00484f00()
    LEA ESI,[EBX + 0x1b0]               ; 00464168 | DAT_00612488
    ADD ESP,0x8                         ; 0046416e
    PUSH EBX                            ; 00464171 | DAT_006122d8 | DAT_00612308
        ;   Label: LAB_00464171
    MOV ECX,dword ptr [0x00612560]      ; 00464172 | DAT_00612560
    PUSH ECX                            ; 00464178 | DAT_01bc120c
    CALL FUN_00484f00                   ; 00464179
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00484f00()
    ADD EBX,0x30                        ; 0046417e
    ADD ESP,0x8                         ; 00464181
    CMP EBX,ESI                         ; 00464184
    JNZ 0x00464171                      ; 00464186
        ;   XREF to: 00464171 (CONDITIONAL_JUMP)  ; LAB_00464171
    POP ESI                             ; 00464188
    POP EBX                             ; 00464189
    RET                                 ; 0046418a

