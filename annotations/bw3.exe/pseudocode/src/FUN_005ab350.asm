; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005ab350(LPCSTR param_1)
;
; Local Variables:
; undefined4       Stack[-0x148]:4  local_148
;
; XREF[1]:
;   FUN_005a4bd0 at 005a4bd6
;
; Referenced Globals:
;   void* PTR_FindFirstFileA_005b3558 = 001b3d70
;
; Called Functions:
;   FindFirstFileA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ab350
        ;   Label: FUN_005ab350
    PUSH ESI                            ; 005ab351
    SUB ESP,0x140                       ; 005ab352
    MOV EBX,dword ptr [ESP + 0x14c]     ; 005ab358
    MOV DL,0x2a                         ; 005ab35f
    MOV ESI,EBX                         ; 005ab361
    MOV AL,byte ptr [ESI]               ; 005ab363
        ;   Label: LAB_005ab363
    CMP AL,DL                           ; 005ab365
    JZ 0x005ab37b                       ; 005ab367
        ;   XREF to: 005ab37b (CONDITIONAL_JUMP)  ; LAB_005ab37b
    CMP AL,0x0                          ; 005ab369
    JZ 0x005ab379                       ; 005ab36b
        ;   XREF to: 005ab379 (CONDITIONAL_JUMP)  ; LAB_005ab379
    INC ESI                             ; 005ab36d
    MOV AL,byte ptr [ESI]               ; 005ab36e
    CMP AL,DL                           ; 005ab370
    JZ 0x005ab37b                       ; 005ab372
        ;   XREF to: 005ab37b (CONDITIONAL_JUMP)  ; LAB_005ab37b
    INC ESI                             ; 005ab374
    CMP AL,0x0                          ; 005ab375
    JNZ 0x005ab363                      ; 005ab377
        ;   XREF to: 005ab363 (CONDITIONAL_JUMP)  ; LAB_005ab363
    SUB ESI,ESI                         ; 005ab379
        ;   Label: LAB_005ab379
    TEST ESI,ESI                        ; 005ab37b
        ;   Label: LAB_005ab37b
    JNZ 0x005ab39f                      ; 005ab37d
        ;   XREF to: 005ab39f (CONDITIONAL_JUMP)  ; LAB_005ab39f
    MOV DL,0x3f                         ; 005ab37f
    MOV ESI,EBX                         ; 005ab381
    MOV AL,byte ptr [ESI]               ; 005ab383
        ;   Label: LAB_005ab383
    CMP AL,DL                           ; 005ab385
    JZ 0x005ab39b                       ; 005ab387
        ;   XREF to: 005ab39b (CONDITIONAL_JUMP)  ; LAB_005ab39b
    CMP AL,0x0                          ; 005ab389
    JZ 0x005ab399                       ; 005ab38b
        ;   XREF to: 005ab399 (CONDITIONAL_JUMP)  ; LAB_005ab399
    INC ESI                             ; 005ab38d
    MOV AL,byte ptr [ESI]               ; 005ab38e
    CMP AL,DL                           ; 005ab390
    JZ 0x005ab39b                       ; 005ab392
        ;   XREF to: 005ab39b (CONDITIONAL_JUMP)  ; LAB_005ab39b
    INC ESI                             ; 005ab394
    CMP AL,0x0                          ; 005ab395
    JNZ 0x005ab383                      ; 005ab397
        ;   XREF to: 005ab383 (CONDITIONAL_JUMP)  ; LAB_005ab383
    SUB ESI,ESI                         ; 005ab399
        ;   Label: LAB_005ab399
    TEST ESI,ESI                        ; 005ab39b
        ;   Label: LAB_005ab39b
    JZ 0x005ab3a6                       ; 005ab39d
        ;   XREF to: 005ab3a6 (CONDITIONAL_JUMP)  ; LAB_005ab3a6
    MOV EAX,0xffffffff                  ; 005ab39f
        ;   Label: LAB_005ab39f
    JMP 0x005ab3b9                      ; 005ab3a4
        ;   XREF to: 005ab3b9 (UNCONDITIONAL_JUMP)  ; LAB_005ab3b9
    MOV EAX,ESP                         ; 005ab3a6
        ;   Label: LAB_005ab3a6
    PUSH EAX                            ; 005ab3a8
    PUSH EBX                            ; 005ab3a9
    CALL dword ptr CS:[0x5b3558]        ; 005ab3aa | PTR_FindFirstFileA_005b3558
    CMP EAX,-0x1                        ; 005ab3b1
    JZ 0x005ab3b9                       ; 005ab3b4
        ;   XREF to: 005ab3b9 (CONDITIONAL_JUMP)  ; LAB_005ab3b9
    MOV EAX,dword ptr [ESP]             ; 005ab3b6
    ADD ESP,0x140                       ; 005ab3b9
        ;   Label: LAB_005ab3b9
    POP ESI                             ; 005ab3bf
    POP EBX                             ; 005ab3c0
    RET                                 ; 005ab3c1

