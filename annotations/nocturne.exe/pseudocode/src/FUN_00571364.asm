; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00571364(void)
;
;
; XREF[1]:
;   thunk_FUN_00571364 at 005713d0
;
; Referenced Globals:
;   undefined4 DAT_02de5d70
;
; Called Functions:
;   FUN_005638d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571364
        ;   Label: FUN_00571364
    PUSH ESI                            ; 00571365
    MOV EBX,dword ptr [0x02de5d70]      ; 00571366 | DAT_02de5d70
    TEST EBX,EBX                        ; 0057136c
    JZ 0x00571394                       ; 0057136e
        ;   XREF to: 00571394 (CONDITIONAL_JUMP)  ; LAB_00571394
    MOV EDX,dword ptr [EBX + 0xc]       ; 00571370
        ;   Label: LAB_00571370
    MOV ESI,dword ptr [EBX]             ; 00571373
    TEST EDX,EDX                        ; 00571375
    JZ 0x00571385                       ; 00571377
        ;   XREF to: 00571385 (CONDITIONAL_JUMP)  ; LAB_00571385
    MOV ECX,dword ptr [EBX + 0x8]       ; 00571379
    PUSH ECX                            ; 0057137c
    CALL FUN_005638d0                   ; 0057137d
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638d0()
    ADD ESP,0x4                         ; 00571382
    PUSH EBX                            ; 00571385
        ;   Label: LAB_00571385
    CALL FUN_005638d0                   ; 00571386
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638d0()
    ADD ESP,0x4                         ; 0057138b
    MOV EBX,ESI                         ; 0057138e
    TEST ESI,ESI                        ; 00571390
    JNZ 0x00571370                      ; 00571392
        ;   XREF to: 00571370 (CONDITIONAL_JUMP)  ; LAB_00571370
    POP ESI                             ; 00571394
        ;   Label: LAB_00571394
    POP EBX                             ; 00571395
    RET                                 ; 00571396

