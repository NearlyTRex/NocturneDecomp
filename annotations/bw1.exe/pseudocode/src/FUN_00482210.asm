; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00482210(int *param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[8]:
;   FUN_00418e50 at 00418f95
;   FUN_00484280 at 004842a7
;   FUN_00486900 at 00486c2b
;   FUN_004c0080 at 004c045b
;   FUN_004e1fb0 at 004e2103
;   FUN_004fae10 at 004fbdcb
;   FUN_00522dd0 at 00522e99
;   FUN_005ab030 at 005ab25f
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01bc1240
;   undefined4 DAT_01bc1244
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   FUN_00403920
;   FUN_00481aa0
;   FUN_00484b20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482210
        ;   Label: FUN_00482210
    PUSH EDI                            ; 00482211
    PUSH EBP                            ; 00482212
    SUB ESP,0x4                         ; 00482213
    MOV EBX,dword ptr [ESP + 0x14]      ; 00482216
    CMP dword ptr [ESP + 0x1c],-0x1     ; 0048221a
    JZ 0x004822af                       ; 0048221f
        ;   XREF to: 004822af (CONDITIONAL_JUMP)  ; LAB_004822af
    CMP dword ptr [EBX + 0x1c],0x0      ; 00482225
        ;   Label: LAB_00482225
    JNZ 0x004822bc                      ; 00482229
        ;   XREF to: 004822bc (CONDITIONAL_JUMP)  ; LAB_004822bc
    CMP dword ptr [EBX + 0xc],0x0       ; 0048222f
    JNZ 0x004822d6                      ; 00482233
        ;   XREF to: 004822d6 (CONDITIONAL_JUMP)  ; LAB_004822d6
    PUSH ESI                            ; 00482239
        ;   Label: LAB_00482239
    CMP dword ptr [EBX + 0x4],0x0       ; 0048223a
    JZ 0x004822ef                       ; 0048223e
        ;   XREF to: 004822ef (CONDITIONAL_JUMP)  ; LAB_004822ef
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00482244
    MOV ESI,dword ptr [EAX + 0x4]       ; 00482248
    XOR ECX,ECX                         ; 0048224b
    TEST ESI,ESI                        ; 0048224d
    JLE 0x00482270                      ; 0048224f
        ;   XREF to: 00482270 (CONDITIONAL_JUMP)  ; LAB_00482270
    XOR EDX,EDX                         ; 00482251
    MOV ESI,dword ptr [EAX + 0x18]      ; 00482253
        ;   Label: LAB_00482253
    MOV dword ptr [EDX + 0x1bc1240],ESI ; 00482256 | DAT_01bc1240 | DAT_01bc1244
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0048225c
    ADD EDX,0x4                         ; 00482260
    INC ECX                             ; 00482263
    MOV EBP,dword ptr [ESI + 0x4]       ; 00482264
    ADD EAX,0xc                         ; 00482267
    CMP ECX,EBP                         ; 0048226a
    JL 0x00482253                       ; 0048226c
        ;   XREF to: 00482253 (CONDITIONAL_JUMP)  ; LAB_00482253
    MOV EAX,EAX                         ; 0048226e
    CMP dword ptr [EBX + 0x4],0x0       ; 00482270
        ;   Label: LAB_00482270
    JZ 0x0048234a                       ; 00482274
        ;   XREF to: 0048234a (CONDITIONAL_JUMP)  ; LAB_0048234a
    XOR EAX,EAX                         ; 0048227a
    MOV EBP,0x486e26                    ; 0048227c | LAB_00486e26
    MOV [0x01c51d14],EAX                ; 00482281 | DAT_01c51d14
    MOV [0x01c51d18],EAX                ; 00482286 | DAT_01c51d18
    MOV dword ptr [0x01c4f02c],EBP      ; 0048228b | DAT_01c4f02c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00482291
        ;   Label: LAB_00482291
    PUSH 0x1bc1240                      ; 00482295 | DAT_01bc1240
    MOV ECX,dword ptr [EAX + 0x4]       ; 0048229a
    PUSH ECX                            ; 0048229d
    PUSH EBX                            ; 0048229e
    CALL FUN_00481aa0                   ; 0048229f
        ;   XREF to: 00481aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00481aa0()
    ADD ESP,0xc                         ; 004822a4
    POP ESI                             ; 004822a7
    ADD ESP,0x4                         ; 004822a8
        ;   Label: LAB_004822a8
    POP EBP                             ; 004822ab
    POP EDI                             ; 004822ac
    POP EBX                             ; 004822ad
    RET                                 ; 004822ae
    MOV dword ptr [ESP + 0x1c],0x2cd    ; 004822af
        ;   Label: LAB_004822af
    JMP 0x00482225                      ; 004822b7
        ;   XREF to: 00482225 (UNCONDITIONAL_JUMP)  ; LAB_00482225
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004822bc
        ;   Label: LAB_004822bc
    PUSH EDI                            ; 004822c0
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004822c1
    PUSH EBP                            ; 004822c5
    PUSH EBX                            ; 004822c6
    CALL FUN_00484b20                   ; 004822c7
        ;   XREF to: 00484b20 (UNCONDITIONAL_CALL)  ; undefined FUN_00484b20()
    ADD ESP,0xc                         ; 004822cc
    ADD ESP,0x4                         ; 004822cf
    POP EBP                             ; 004822d2
    POP EDI                             ; 004822d3
    POP EBX                             ; 004822d4
    RET                                 ; 004822d5
    MOV EAX,dword ptr [ESP + 0x18]      ; 004822d6
        ;   Label: LAB_004822d6
    ADD EAX,0x8                         ; 004822da
    PUSH EAX                            ; 004822dd
    CALL FUN_00403920                   ; 004822de
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined FUN_00403920()
    ADD ESP,0x4                         ; 004822e3
    TEST EAX,EAX                        ; 004822e6
    JZ 0x004822a8                       ; 004822e8
        ;   XREF to: 004822a8 (CONDITIONAL_JUMP)  ; LAB_004822a8
    JMP 0x00482239                      ; 004822ea
        ;   XREF to: 00482239 (UNCONDITIONAL_JUMP)  ; LAB_00482239
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004822ef
        ;   Label: LAB_004822ef
    MOV EDX,dword ptr [EAX + 0x4]       ; 004822f3
    XOR ECX,ECX                         ; 004822f6
    TEST EDX,EDX                        ; 004822f8
    JLE 0x00482270                      ; 004822fa
        ;   XREF to: 00482270 (CONDITIONAL_JUMP)  ; LAB_00482270
    XOR EDX,EDX                         ; 00482300
    MOV ESI,dword ptr [EAX + 0x18]      ; 00482302
        ;   Label: LAB_00482302
    MOV EBP,dword ptr [EBX + 0x20]      ; 00482305
    MOV dword ptr [ESP + 0x4],ESI       ; 00482308
    TEST EBP,EBP                        ; 0048230c
    JZ 0x00482332                       ; 0048230e
        ;   XREF to: 00482332 (CONDITIONAL_JUMP)  ; LAB_00482332
    MOV ESI,dword ptr [ESP + 0x4]       ; 00482310
        ;   Label: LAB_00482310
    MOV dword ptr [EDX + 0x1bc1240],ESI ; 00482314 | DAT_01bc1240 | DAT_01bc1244
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0048231a
    ADD EAX,0xc                         ; 0048231e
    INC ECX                             ; 00482321
    MOV EDI,dword ptr [ESI + 0x4]       ; 00482322
    ADD EDX,0x4                         ; 00482325
    CMP ECX,EDI                         ; 00482328
    JGE 0x00482270                      ; 0048232a
        ;   XREF to: 00482270 (CONDITIONAL_JUMP)  ; LAB_00482270
    JMP 0x00482302                      ; 00482330
        ;   XREF to: 00482302 (UNCONDITIONAL_JUMP)  ; LAB_00482302
    IMUL ESI,ESI,0x30                   ; 00482332
        ;   Label: LAB_00482332
    MOV EDI,dword ptr [EBX]             ; 00482335
    MOV EBP,dword ptr [EAX + 0x1c]      ; 00482337
    MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP ; 0048233a
    MOV EDI,dword ptr [EBX]             ; 0048233e
    ADD EDI,ESI                         ; 00482340
    MOV ESI,dword ptr [EAX + 0x20]      ; 00482342
    MOV dword ptr [EDI + 0x1c],ESI      ; 00482345
    JMP 0x00482310                      ; 00482348
        ;   XREF to: 00482310 (UNCONDITIONAL_JUMP)  ; LAB_00482310
    CMP dword ptr [0x0061b4a0],0x20     ; 0048234a | DAT_0061b4a0
        ;   Label: LAB_0048234a
    JNZ 0x00482376                      ; 00482351
        ;   XREF to: 00482376 (CONDITIONAL_JUMP)  ; LAB_00482376
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00482353 | DAT_01c4f02c | LAB_0057de01
    MOV EDI,0x6                         ; 0048235d
        ;   Label: LAB_0048235d
    MOV EAX,dword ptr [ESP + 0x20]      ; 00482362
    MOV dword ptr [0x01c51d18],EDI      ; 00482366 | DAT_01c51d18
    MOV [0x01c51d14],EAX                ; 0048236c | DAT_01c51d14
    JMP 0x00482291                      ; 00482371
        ;   XREF to: 00482291 (UNCONDITIONAL_JUMP)  ; LAB_00482291
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00482376 | DAT_01c4f02c | LAB_0057e5e3
        ;   Label: LAB_00482376
    JMP 0x0048235d                      ; 00482380
        ;   XREF to: 0048235d (UNCONDITIONAL_JUMP)  ; LAB_0048235d

