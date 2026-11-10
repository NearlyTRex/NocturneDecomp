; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined2 crt_unknown_c_FUN_005b01c8(void)
;
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005a7f3c_006079a0 = 005a7f3c
;   undefined4 DAT_00607df0
;   undefined4 DAT_00607df4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b01c8
        ;   Label: crt_unknown.c_FUN_005b01c8
    PUSH ESI                            ; 005b01c9
    PUSH EDI                            ; 005b01ca
    PUSH ES                             ; 005b01cb
    MOV EBX,0x8                         ; 005b01cc
    CALL dword ptr [0x006079a0]         ; 005b01d1 | PTR_crt_unknown.c_FUN_005a7f3c_006079a0
        ;   Label: LAB_005b01d1
    LEA ESI,[EAX + EBX*0x1]             ; 005b01d7
    MOV AX,DS                           ; 005b01da
    MOV ES,AX                           ; 005b01dc
    LEA EDI,[ESI + 0x58]                ; 005b01de
    LEA ESI,[EBX + 0x607e88]            ; 005b01e1
    ADD EBX,0x8                         ; 005b01e7
    MOVSD ES:EDI,ESI                    ; 005b01ea
    MOVSD ES:EDI,ESI                    ; 005b01eb
    CMP EBX,0x68                        ; 005b01ec
    JNZ 0x005b01d1                      ; 005b01ef
        ;   XREF to: 005b01d1 (CONDITIONAL_JUMP)  ; LAB_005b01d1
    MOV EDX,0x5aff1c                    ; 005b01f1
    MOV EBX,0x5b0148                    ; 005b01f6
    MOV dword ptr [0x00607df0],EDX      ; 005b01fb | DAT_00607df0
    MOV dword ptr [0x00607df4],EBX      ; 005b0201 | DAT_00607df4
    POP ES                              ; 005b0207
    POP EDI                             ; 005b0208
    POP ESI                             ; 005b0209
    POP EBX                             ; 005b020a
    RET                                 ; 005b020b

