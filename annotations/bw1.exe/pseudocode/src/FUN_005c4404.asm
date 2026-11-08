; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c4404(float10 *param_1,uint param_2)
;
; Local Variables:
; undefined1[10]   Stack[-0x1c]:10  local_1c
;
; XREF[1]:
;   FUN_005c445c at 005c44ae
;
; Referenced Globals:
;   undefined4 DAT_006264f8
;   undefined4 DAT_006264fc
;   undefined2 DAT_00626500
;
; Called Functions:
;   FUN_005c4bee
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005c4404
        ;   Label: FUN_005c4404
    MOV EBP,ESP                         ; 005c4405
    PUSH EBX                            ; 005c4407
    PUSH ESI                            ; 005c4408
    PUSH EDI                            ; 005c4409
    SUB ESP,0xc                         ; 005c440a
    MOV EDI,dword ptr [EBP + 0xc]       ; 005c440d
    CMP EDI,0x2000                      ; 005c4410
    JL 0x005c441d                       ; 005c4416
        ;   XREF to: 005c441d (CONDITIONAL_JUMP)  ; LAB_005c441d
    MOV EDI,0x2000                      ; 005c4418
    MOV ESI,0x6264f8                    ; 005c441d | DAT_006264f8
        ;   Label: LAB_005c441d
    JMP 0x005c4453                      ; 005c4422
        ;   XREF to: 005c4453 (UNCONDITIONAL_JUMP)  ; LAB_005c4453
    TEST DI,0x1                         ; 005c4424
        ;   Label: LAB_005c4424
    JZ 0x005c444e                       ; 005c4429
        ;   XREF to: 005c444e (CONDITIONAL_JUMP)  ; LAB_005c444e
    MOV AX,word ptr [ESI + 0x8]         ; 005c442b | DAT_00626500
    MOV word ptr [EBP + -0x10],AX       ; 005c442f
    MOV EAX,dword ptr [ESI + 0x4]       ; 005c4433 | DAT_006264fc
    MOV dword ptr [EBP + -0x14],EAX     ; 005c4436
    MOV EBX,dword ptr [EBP + 0x8]       ; 005c4439
    MOV EAX,dword ptr [ESI]             ; 005c443c | DAT_006264f8
    LEA EDX,[EBP + -0x18]               ; 005c443e
    MOV dword ptr [EBP + -0x18],EAX     ; 005c4441
    MOV EAX,EBX                         ; 005c4444
    FLD extended double ptr [EAX]       ; 005c4446
    FLD extended double ptr [EDX]       ; 005c4448
    FMULP                               ; 005c444a
    FSTP extended double ptr [EBX]      ; 005c444c
    SAR EDI,0x1                         ; 005c444e
        ;   Label: LAB_005c444e
    ADD ESI,0xa                         ; 005c4450
    TEST EDI,EDI                        ; 005c4453
        ;   Label: LAB_005c4453
    JG 0x005c4424                       ; 005c4455
        ;   XREF to: 005c4424 (CONDITIONAL_JUMP)  ; LAB_005c4424
    JMP 0x005c4bee                      ; 005c4457
        ;   XREF to: 005c4bee (UNCONDITIONAL_CALL)

