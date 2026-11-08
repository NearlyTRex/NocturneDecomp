; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e6240(int param_1,int param_2)
;
;
; XREF[3]:
;   FUN_004e5080 at 004e5263
;   FUN_004e57f0 at 004e586b
;   FUN_004e7220 at 004e7366
;
; Referenced Globals:
;   undefined4 DAT_005f98bc
;
; Called Functions:
;   FUN_00408d70
;   FUN_00449280
;   FUN_00449530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e6240
        ;   Label: FUN_004e6240
    PUSH ESI                            ; 004e6241
    PUSH EDI                            ; 004e6242
    PUSH EBP                            ; 004e6243
    SUB ESP,0x40                        ; 004e6244
    MOV EBP,dword ptr [ESP + 0x54]      ; 004e6247
    MOV ESI,dword ptr [ESP + 0x58]      ; 004e624b
    LEA EAX,[ESI*0x4 + 0x0]             ; 004e624f
    SUB EAX,ESI                         ; 004e6256
    SHL EAX,0x3                         ; 004e6258
    ADD EAX,ESI                         ; 004e625b
    LEA EBX,[EBP + 0x74c]               ; 004e625d
    SHL EAX,0x2                         ; 004e6263
    MOV dword ptr [ESP + 0x3c],ESI      ; 004e6266
    ADD EBX,EAX                         ; 004e626a
    FILD dword ptr [ESP + 0x3c]         ; 004e626c
    FADD float ptr [EBX + 0x4]          ; 004e6270
    FMUL float ptr [0x005f98bc]         ; 004e6273 | DAT_005f98bc
    LEA EAX,[EBX + 0x18]                ; 004e6279
    MOV dword ptr [EBX + 0x18],0x0      ; 004e627c
    PUSH EAX                            ; 004e6283
    LEA ESI,[EBX + 0x24]                ; 004e6284
    MOV dword ptr [EBX + 0x20],0x0      ; 004e6287
    PUSH ESI                            ; 004e628e
    FSTP float ptr [EBX + 0x1c]         ; 004e628f
    CALL FUN_00449280                   ; 004e6292
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; undefined FUN_00449280()
    ADD ESP,0x8                         ; 004e6297
    MOV EAX,dword ptr [EBP + 0x1668]    ; 004e629a
    MOV dword ptr [ESP + 0x2c],EAX      ; 004e62a0
    LEA EAX,[ESP + 0x24]                ; 004e62a4
    XOR EDX,EDX                         ; 004e62a8
    PUSH EAX                            ; 004e62aa
    LEA EDI,[ESP + 0x10]                ; 004e62ab
    MOV dword ptr [ESP + 0x28],EDX      ; 004e62af
    PUSH ESI                            ; 004e62b3
    LEA ESI,[ESP + 0x38]                ; 004e62b4
    MOV dword ptr [ESP + 0x30],EDX      ; 004e62b8
    CALL FUN_00449530                   ; 004e62bc
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined FUN_00449530()
    LEA ESI,[ESP + 0x38]                ; 004e62c1
    LEA EAX,[ESP + 0x14]                ; 004e62c5
    ADD ESP,0x8                         ; 004e62c9
    LEA EDX,[EBX + 0xc]                 ; 004e62cc
    MOVSD ES:EDI,ESI                    ; 004e62cf
    MOVSD ES:EDI,ESI                    ; 004e62d0
    MOVSD ES:EDI,ESI                    ; 004e62d1
    CMP EDX,EAX                         ; 004e62d2
    JZ 0x004e62ea                       ; 004e62d4
        ;   XREF to: 004e62ea (CONDITIONAL_JUMP)  ; LAB_004e62ea
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e62d6
    MOV dword ptr [EDX],EAX             ; 004e62da
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e62dc
    MOV dword ptr [EDX + 0x4],EAX       ; 004e62e0
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e62e3
    MOV dword ptr [EDX + 0x8],EAX       ; 004e62e7
    LEA EAX,[EBX + 0xc]                 ; 004e62ea
        ;   Label: LAB_004e62ea
    PUSH EAX                            ; 004e62ed
    LEA ESI,[ESP + 0x4]                 ; 004e62ee
    PUSH EBP                            ; 004e62f2
    LEA EDI,[ESP + 0x20]                ; 004e62f3
    ADD EBX,0x58                        ; 004e62f7
    CALL FUN_00408d70                   ; 004e62fa
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA ESI,[ESP + 0x8]                 ; 004e62ff
    ADD ESP,0x8                         ; 004e6303
    LEA EAX,[ESP + 0x18]                ; 004e6306
    MOVSD ES:EDI,ESI                    ; 004e630a
    MOVSD ES:EDI,ESI                    ; 004e630b
    MOVSD ES:EDI,ESI                    ; 004e630c
    CMP EBX,EAX                         ; 004e630d
    JNZ 0x004e6319                      ; 004e630f
        ;   XREF to: 004e6319 (CONDITIONAL_JUMP)  ; LAB_004e6319
    ADD ESP,0x40                        ; 004e6311
    POP EBP                             ; 004e6314
    POP EDI                             ; 004e6315
    POP ESI                             ; 004e6316
    POP EBX                             ; 004e6317
    RET                                 ; 004e6318
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e6319
        ;   Label: LAB_004e6319
    MOV dword ptr [EBX],EAX             ; 004e631d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004e631f
    MOV dword ptr [EBX + 0x4],EAX       ; 004e6323
    MOV EAX,dword ptr [ESP + 0x20]      ; 004e6326
    MOV dword ptr [EBX + 0x8],EAX       ; 004e632a
    ADD ESP,0x40                        ; 004e632d
    POP EBP                             ; 004e6330
    POP EDI                             ; 004e6331
    POP ESI                             ; 004e6332
    POP EBX                             ; 004e6333
    RET                                 ; 004e6334

