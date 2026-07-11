; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00402320(byte *param_1,int param_2,int param_3,undefined4 param_4,int param_5)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00402600 at 00402648
;
; Referenced Globals:
;   undefined4 DAT_005a4b80
;
; Called Functions:
;   FUN_00401c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402320
        ;   Label: FUN_00402320
    PUSH ESI                            ; 00402321
    PUSH EDI                            ; 00402322
    PUSH EBP                            ; 00402323
    SUB ESP,0x4                         ; 00402324
    MOV ESI,dword ptr [ESP + 0x18]      ; 00402327
    MOV EDI,ESI                         ; 0040232b
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0040232d
    SUB ECX,ECX                         ; 00402331
    DEC ECX                             ; 00402333
    XOR EAX,EAX                         ; 00402334
    SCASB.REPNE ES:EDI                  ; 00402336
    NOT ECX                             ; 00402338
    DEC ECX                             ; 0040233a
    MOV dword ptr [ESP],ECX             ; 0040233b
    XOR EDI,EDI                         ; 0040233e
    TEST ECX,ECX                        ; 00402340
    JLE 0x0040238a                      ; 00402342
        ;   XREF to: 0040238a (CONDITIONAL_JUMP)  ; LAB_0040238a
    CMP byte ptr [ESI],0xa              ; 00402344
        ;   Label: LAB_00402344
    JZ 0x00402392                       ; 00402347
        ;   XREF to: 00402392 (CONDITIONAL_JUMP)  ; LAB_00402392
    XOR EBX,EBX                         ; 00402349
        ;   Label: LAB_00402349
    MOV BL,byte ptr [ESI]               ; 0040234b
    CMP EBX,0x20                        ; 0040234d
    JL 0x00402381                       ; 00402350
        ;   XREF to: 00402381 (CONDITIONAL_JUMP)  ; LAB_00402381
    CMP EBX,0x100                       ; 00402352
    JGE 0x00402381                      ; 00402358
        ;   XREF to: 00402381 (CONDITIONAL_JUMP)  ; LAB_00402381
    MOV EAX,dword ptr [ESP + 0x20]      ; 0040235a
    PUSH EAX                            ; 0040235e
    PUSH EBP                            ; 0040235f
    PUSH EBX                            ; 00402360
    SUB EBX,0x20                        ; 00402361
    IMUL EBX,EBX,0x91                   ; 00402364
    CALL FUN_00401c40                   ; 0040236a
        ;   XREF to: 00401c40 (UNCONDITIONAL_CALL)  ; undefined FUN_00401c40()
    ADD ESP,0xc                         ; 0040236f
    MOV BL,byte ptr [EBX + 0x5a4b80]    ; 00402372 | DAT_005a4b80
    AND EBX,0xff                        ; 00402378
    INC EBX                             ; 0040237e
    ADD EBP,EBX                         ; 0040237f
    MOV EDX,dword ptr [ESP]             ; 00402381
        ;   Label: LAB_00402381
    INC EDI                             ; 00402384
    INC ESI                             ; 00402385
    CMP EDI,EDX                         ; 00402386
    JL 0x00402344                       ; 00402388
        ;   XREF to: 00402344 (CONDITIONAL_JUMP)  ; LAB_00402344
    ADD ESP,0x4                         ; 0040238a
        ;   Label: LAB_0040238a
    POP EBP                             ; 0040238d
    POP EDI                             ; 0040238e
    POP ESI                             ; 0040238f
    POP EBX                             ; 00402390
    RET                                 ; 00402391
    MOV ECX,dword ptr [ESP + 0x20]      ; 00402392
        ;   Label: LAB_00402392
    MOV EBX,dword ptr [ESP + 0x28]      ; 00402396
    ADD ECX,0xb                         ; 0040239a
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0040239d
    MOV dword ptr [ESP + 0x20],ECX      ; 004023a1
    CMP ECX,EBX                         ; 004023a5
    JG 0x0040238a                       ; 004023a7
        ;   XREF to: 0040238a (CONDITIONAL_JUMP)  ; LAB_0040238a
    JMP 0x00402349                      ; 004023a9
        ;   XREF to: 00402349 (UNCONDITIONAL_JUMP)  ; LAB_00402349

