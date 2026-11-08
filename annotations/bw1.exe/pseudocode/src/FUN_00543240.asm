; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00543240(char *param_1)
;
;
; XREF[3]:
;   FUN_005432d0 at 00543355
;   FUN_00544460 at 00545c6f
;   FUN_0054af20 at 0054b06a
;
; Referenced Globals:
;   undefined4 DAT_00626114
;
; Called Functions:
;   FUN_005c25d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543240
        ;   Label: FUN_00543240
    PUSH ESI                            ; 00543241
    PUSH EDI                            ; 00543242
    MOV ESI,dword ptr [ESP + 0x10]      ; 00543243
    MOV EDI,ESI                         ; 00543247
    SUB ECX,ECX                         ; 00543249
    DEC ECX                             ; 0054324b
    XOR EAX,EAX                         ; 0054324c
    SCASB.REPNE ES:EDI                  ; 0054324e
    NOT ECX                             ; 00543250
    DEC ECX                             ; 00543252
    MOV EBX,ECX                         ; 00543253
    TEST ECX,ECX                        ; 00543255
    JLE 0x00543270                      ; 00543257
        ;   XREF to: 00543270 (CONDITIONAL_JUMP)  ; LAB_00543270
    LEA EAX,[ECX + ESI*0x1]             ; 00543259
    MOV DL,byte ptr [EAX + -0x1]        ; 0054325c
        ;   Label: LAB_0054325c
    INC DL                              ; 0054325f
    AND EDX,0xff                        ; 00543261
    TEST byte ptr [EDX + 0x626114],0x2  ; 00543267 | DAT_00626114
    JNZ 0x0054328f                      ; 0054326e
        ;   XREF to: 0054328f (CONDITIONAL_JUMP)  ; LAB_0054328f
    LEA EAX,[ESI + EBX*0x1]             ; 00543270
        ;   Label: LAB_00543270
    LEA EDI,[ESI + 0x1]                 ; 00543273
    MOV byte ptr [EAX],0x0              ; 00543276
    MOV AL,byte ptr [ESI]               ; 00543279
        ;   Label: LAB_00543279
    INC AL                              ; 0054327b
    AND EAX,0xff                        ; 0054327d
    TEST byte ptr [EAX + 0x626114],0x2  ; 00543282 | DAT_00626114
    JNZ 0x00543297                      ; 00543289
        ;   XREF to: 00543297 (CONDITIONAL_JUMP)  ; LAB_00543297
    POP EDI                             ; 0054328b
    POP ESI                             ; 0054328c
    POP EBX                             ; 0054328d
    RET                                 ; 0054328e
        ;   Label: LAB_0054328e
    DEC EBX                             ; 0054328f
        ;   Label: LAB_0054328f
    DEC EAX                             ; 00543290
    TEST EBX,EBX                        ; 00543291
    JG 0x0054325c                       ; 00543293
        ;   XREF to: 0054325c (CONDITIONAL_JUMP)  ; LAB_0054325c
    JMP 0x00543270                      ; 00543295
        ;   XREF to: 00543270 (UNCONDITIONAL_JUMP)  ; LAB_00543270
    PUSH EBX                            ; 00543297
        ;   Label: LAB_00543297
    PUSH EDI                            ; 00543298
    PUSH ESI                            ; 00543299
    DEC EBX                             ; 0054329a
    CALL FUN_005c25d0                   ; 0054329b
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c25d0()
    ADD ESP,0xc                         ; 005432a0
    JMP 0x00543279                      ; 005432a3
        ;   XREF to: 00543279 (UNCONDITIONAL_JUMP)  ; LAB_00543279

