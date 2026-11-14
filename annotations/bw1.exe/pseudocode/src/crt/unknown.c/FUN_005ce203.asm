; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint crt_unknown_c_FUN_005ce203(int *param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005cdbe5 at 005cdbeb
;
; Called Functions:
;   crt_unknown.c_FUN_005c8e45
;   crt_unknown.c_FUN_005c8f5f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ce203
        ;   Label: crt_unknown.c_FUN_005ce203
    PUSH ESI                            ; 005ce204
    MOV EBX,dword ptr [ESP + 0xc]       ; 005ce205
    PUSH 0x1                            ; 005ce209
    PUSH EBX                            ; 005ce20b
    CALL crt_unknown.c_FUN_005c8f5f     ; 005ce20c
        ;   XREF to: 005c8f5f (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c8f5f()
    ADD ESP,0x8                         ; 005ce211
    TEST EAX,EAX                        ; 005ce214
    JZ 0x005ce25f                       ; 005ce216
        ;   XREF to: 005ce25f (CONDITIONAL_JUMP)  ; LAB_005ce25f
    MOV EAX,dword ptr [EBX]             ; 005ce218
    MOV EAX,dword ptr [EAX + 0x4]       ; 005ce21a
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 005ce21d
    MOV ESI,dword ptr [EAX + 0x14]      ; 005ce221
    CMP ESI,dword ptr [EAX + 0x10]      ; 005ce224
    JNC 0x005ce23c                      ; 005ce227
        ;   XREF to: 005ce23c (CONDITIONAL_JUMP)  ; LAB_005ce23c
    MOV AL,byte ptr [ESI]               ; 005ce229
    AND EAX,0xff                        ; 005ce22b
    MOV ESI,EAX                         ; 005ce230
        ;   Label: LAB_005ce230
    CMP EAX,-0x1                        ; 005ce232
    JZ 0x005ce248                       ; 005ce235
        ;   XREF to: 005ce248 (CONDITIONAL_JUMP)  ; LAB_005ce248
    MOV EAX,ESI                         ; 005ce237
    POP ESI                             ; 005ce239
    POP EBX                             ; 005ce23a
    RET                                 ; 005ce23b
    PUSH EAX                            ; 005ce23c
        ;   Label: LAB_005ce23c
    MOV ESI,dword ptr [EAX + 0x28]      ; 005ce23d
    CALL dword ptr [ESI + 0x10]         ; 005ce240
    ADD ESP,0x4                         ; 005ce243
    JMP 0x005ce230                      ; 005ce246
        ;   XREF to: 005ce230 (UNCONDITIONAL_JUMP)  ; LAB_005ce230
    MOV EAX,dword ptr [EBX]             ; 005ce248
        ;   Label: LAB_005ce248
    MOV ECX,dword ptr [EAX + 0x4]       ; 005ce24a
    PUSH 0x4                            ; 005ce24d
    ADD EBX,ECX                         ; 005ce24f
    PUSH EBX                            ; 005ce251
    CALL crt_unknown.c_FUN_005c8e45     ; 005ce252
        ;   XREF to: 005c8e45 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c8e45()
    ADD ESP,0x8                         ; 005ce257
    MOV EAX,ESI                         ; 005ce25a
    POP ESI                             ; 005ce25c
    POP EBX                             ; 005ce25d
    RET                                 ; 005ce25e
    MOV ESI,0xffffffff                  ; 005ce25f
        ;   Label: LAB_005ce25f
    MOV EAX,ESI                         ; 005ce264
    POP ESI                             ; 005ce266
    POP EBX                             ; 005ce267
    RET                                 ; 005ce268

