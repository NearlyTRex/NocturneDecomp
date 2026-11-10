; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined2 crt_unknown_c_FUN_005cd438(void)
;
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005c50cc_006265fc = 005c50cc
;   undefined4 DAT_00626a4c
;   undefined4 DAT_00626a50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cd438
        ;   Label: crt_unknown.c_FUN_005cd438
    PUSH ESI                            ; 005cd439
    PUSH EDI                            ; 005cd43a
    PUSH ES                             ; 005cd43b
    MOV EBX,0x8                         ; 005cd43c
    CALL dword ptr [0x006265fc]         ; 005cd441 | PTR_crt_unknown.c_FUN_005c50cc_006265fc
        ;   Label: LAB_005cd441
    LEA ESI,[EAX + EBX*0x1]             ; 005cd447
    MOV AX,DS                           ; 005cd44a
    MOV ES,AX                           ; 005cd44c
    LEA EDI,[ESI + 0x58]                ; 005cd44e
    LEA ESI,[EBX + 0x626ae4]            ; 005cd451
    ADD EBX,0x8                         ; 005cd457
    MOVSD ES:EDI,ESI                    ; 005cd45a
    MOVSD ES:EDI,ESI                    ; 005cd45b
    CMP EBX,0x68                        ; 005cd45c
    JNZ 0x005cd441                      ; 005cd45f
        ;   XREF to: 005cd441 (CONDITIONAL_JUMP)  ; LAB_005cd441
    MOV EDX,0x5cd18c                    ; 005cd461
    MOV EBX,0x5cd3b8                    ; 005cd466
    MOV dword ptr [0x00626a4c],EDX      ; 005cd46b | DAT_00626a4c
    MOV dword ptr [0x00626a50],EBX      ; 005cd471 | DAT_00626a50
    POP ES                              ; 005cd477
    POP EDI                             ; 005cd478
    POP ESI                             ; 005cd479
    POP EBX                             ; 005cd47a
    RET                                 ; 005cd47b

