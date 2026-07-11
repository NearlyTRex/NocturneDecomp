; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056a234(float10 *param_1,uint param_2)
;
; Local Variables:
; undefined1[10]   Stack[-0x1c]:10  local_1c
;
; XREF[1]:
;   FUN_0056a28c at 0056a2de
;
; Referenced Globals:
;   undefined4 DAT_005c1c28
;   undefined4 DAT_005c1c2c
;   undefined2 DAT_005c1c30
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0056a234
        ;   Label: FUN_0056a234
    MOV EBP,ESP                         ; 0056a235
    PUSH EBX                            ; 0056a237
    PUSH ESI                            ; 0056a238
    PUSH EDI                            ; 0056a239
    SUB ESP,0xc                         ; 0056a23a
    MOV EDI,dword ptr [EBP + 0xc]       ; 0056a23d
    CMP EDI,0x2000                      ; 0056a240
    JL 0x0056a24d                       ; 0056a246
        ;   XREF to: 0056a24d (CONDITIONAL_JUMP)  ; LAB_0056a24d
    MOV EDI,0x2000                      ; 0056a248
    MOV ESI,0x5c1c28                    ; 0056a24d | DAT_005c1c28
        ;   Label: LAB_0056a24d
    JMP 0x0056a283                      ; 0056a252
        ;   XREF to: 0056a283 (UNCONDITIONAL_JUMP)  ; LAB_0056a283
    TEST DI,0x1                         ; 0056a254
        ;   Label: LAB_0056a254
    JZ 0x0056a27e                       ; 0056a259
        ;   XREF to: 0056a27e (CONDITIONAL_JUMP)  ; LAB_0056a27e
    MOV AX,word ptr [ESI + 0x8]         ; 0056a25b | DAT_005c1c30
    MOV word ptr [EBP + -0x10],AX       ; 0056a25f
    MOV EAX,dword ptr [ESI + 0x4]       ; 0056a263 | DAT_005c1c2c
    MOV dword ptr [EBP + -0x14],EAX     ; 0056a266
    MOV EBX,dword ptr [EBP + 0x8]       ; 0056a269
    MOV EAX,dword ptr [ESI]             ; 0056a26c | DAT_005c1c28
    LEA EDX,[EBP + -0x18]               ; 0056a26e
    MOV dword ptr [EBP + -0x18],EAX     ; 0056a271
    MOV EAX,EBX                         ; 0056a274
    FLD extended double ptr [EAX]       ; 0056a276
    FLD extended double ptr [EDX]       ; 0056a278
    FMULP                               ; 0056a27a
    FSTP extended double ptr [EBX]      ; 0056a27c
    SAR EDI,0x1                         ; 0056a27e
        ;   Label: LAB_0056a27e
    ADD ESI,0xa                         ; 0056a280
    TEST EDI,EDI                        ; 0056a283
        ;   Label: LAB_0056a283
    JG 0x0056a254                       ; 0056a285
        ;   XREF to: 0056a254 (CONDITIONAL_JUMP)  ; LAB_0056a254
    JMP 0x0056aa1e                      ; 0056a287
        ;   XREF to: 0056aa1e (UNCONDITIONAL_JUMP)  ; LAB_0056aa1e

