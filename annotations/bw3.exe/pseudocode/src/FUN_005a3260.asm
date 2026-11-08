; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a3260(byte *param_1,byte *param_2)
;
;
; XREF[98]:
;   FUN_0040b110 at 0040b15a
;   FUN_00416890 at 004168b0
;   FUN_00428520 at 0042853a
;   FUN_0042b0e0 at 0042b1df
;   FUN_00431000 at 00431081
;   FUN_004580a0 at 004580ba
;   FUN_00458950 at 00458a2b
;   FUN_00462420 at 0046243c
;   FUN_0047db70 at 0047dc35
;   FUN_00482500 at 0048251f
;   ... and 88 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3260
        ;   Label: FUN_005a3260
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a3261
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a3265
    MOV AL,byte ptr [EBX]               ; 005a3269
        ;   Label: LAB_005a3269
    MOV AH,byte ptr [EDX]               ; 005a326b
    CMP AL,0x41                         ; 005a326d
    JC 0x005a3277                       ; 005a326f
        ;   XREF to: 005a3277 (CONDITIONAL_JUMP)  ; LAB_005a3277
    CMP AL,0x5a                         ; 005a3271
    JA 0x005a3277                       ; 005a3273
        ;   XREF to: 005a3277 (CONDITIONAL_JUMP)  ; LAB_005a3277
    ADD AL,0x20                         ; 005a3275
    CMP AH,0x41                         ; 005a3277
        ;   Label: LAB_005a3277
    JC 0x005a3284                       ; 005a327a
        ;   XREF to: 005a3284 (CONDITIONAL_JUMP)  ; LAB_005a3284
    CMP AH,0x5a                         ; 005a327c
    JA 0x005a3284                       ; 005a327f
        ;   XREF to: 005a3284 (CONDITIONAL_JUMP)  ; LAB_005a3284
    ADD AH,0x20                         ; 005a3281
    CMP AL,AH                           ; 005a3284
        ;   Label: LAB_005a3284
    JNZ 0x005a3290                      ; 005a3286
        ;   XREF to: 005a3290 (CONDITIONAL_JUMP)  ; LAB_005a3290
    TEST AH,AH                          ; 005a3288
    JZ 0x005a3290                       ; 005a328a
        ;   XREF to: 005a3290 (CONDITIONAL_JUMP)  ; LAB_005a3290
    INC EBX                             ; 005a328c
    INC EDX                             ; 005a328d
    JMP 0x005a3269                      ; 005a328e
        ;   XREF to: 005a3269 (UNCONDITIONAL_JUMP)  ; LAB_005a3269
    XOR EDX,EDX                         ; 005a3290
        ;   Label: LAB_005a3290
    MOV DL,AL                           ; 005a3292
    MOV AL,AH                           ; 005a3294
    AND EAX,0xff                        ; 005a3296
    SUB EDX,EAX                         ; 005a329b
    MOV EAX,EDX                         ; 005a329d
    POP EBX                             ; 005a329f
    RET                                 ; 005a32a0

