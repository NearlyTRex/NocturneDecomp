; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005551f0(int param_1,int param_2,int param_3,undefined4 param_4)
;
; Local Variables:
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   FUN_00441800 at 00441971
;   FUN_0044bf20 at 0044c155
;   FUN_004673a0 at 00467589
;   FUN_005ab030 at 005ab215
;
; Referenced Globals:
;   undefined4 DAT_004511e0
;   undefined4 DAT_00612560
;   undefined4 DAT_0061d95c
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01ccf390
;   undefined4 DAT_01ccf59c
;   undefined4 DAT_01ccf5a0
;
; Called Functions:
;   FUN_00483c50
;   FUN_00483e60
;   FUN_00484210
;   FUN_00554a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005551f0
        ;   Label: FUN_005551f0
    PUSH ESI                            ; 005551f1
    PUSH EDI                            ; 005551f2
    PUSH EBP                            ; 005551f3
    SUB ESP,0x28                        ; 005551f4
    MOV EBX,dword ptr [ESP + 0x3c]      ; 005551f7
    MOV EBP,dword ptr [ESP + 0x40]      ; 005551fb
    MOV EDI,dword ptr [ESP + 0x44]      ; 005551ff
    MOV EAX,[0x0061d95c]                ; 00555203 | DAT_0061d95c | DAT_01ccf390
    CMP dword ptr [EAX + 0x20c],0x0     ; 00555208 | DAT_01ccf59c
    JNZ 0x005552b6                      ; 0055520f
        ;   XREF to: 005552b6 (CONDITIONAL_JUMP)  ; LAB_005552b6
    CMP dword ptr [EAX + 0x210],0x0     ; 00555215 | DAT_01ccf5a0
    JNZ 0x005552be                      ; 0055521c
        ;   XREF to: 005552be (CONDITIONAL_JUMP)  ; LAB_005552be
    CMP dword ptr [EBX + 0x15ac88],0x0  ; 00555222
        ;   Label: LAB_00555222
    JZ 0x005552a0                       ; 00555229
        ;   XREF to: 005552a0 (CONDITIONAL_JUMP)  ; LAB_005552a0
    MOV EBX,EBP                         ; 0055522f
    XOR ESI,ESI                         ; 00555231
    TEST EDI,EDI                        ; 00555233
    JLE 0x005552a0                      ; 00555235
        ;   XREF to: 005552a0 (CONDITIONAL_JUMP)  ; LAB_005552a0
    MOV EAX,dword ptr [EBX + 0x4]       ; 00555237
        ;   Label: LAB_00555237
    MOV dword ptr [ESP + 0x4],EAX       ; 0055523a
    MOV EAX,dword ptr [EBX + 0x8]       ; 0055523e
    MOV dword ptr [ESP + 0x8],EAX       ; 00555241
    MOV EAX,dword ptr [EBX + 0xc]       ; 00555245
    MOV dword ptr [ESP + 0xc],EAX       ; 00555248
    MOV EAX,dword ptr [EBX + 0x10]      ; 0055524c
    MOV dword ptr [ESP + 0x10],EAX      ; 0055524f
    MOV EAX,dword ptr [EBX + 0x14]      ; 00555253
    MOV dword ptr [ESP + 0x14],EAX      ; 00555256
    MOV EAX,dword ptr [EBX + 0x18]      ; 0055525a
    MOV dword ptr [ESP + 0x18],EAX      ; 0055525d
    MOV EAX,dword ptr [EBX + 0x24]      ; 00555261
    MOV dword ptr [ESP + 0x1c],EAX      ; 00555264
    MOV EAX,dword ptr [EBX + 0x30]      ; 00555268
    MOV dword ptr [ESP + 0x20],EAX      ; 0055526b
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0055526f
    PUSH 0x4511e0                       ; 00555272 | DAT_004511e0
    MOV dword ptr [ESP + 0x28],EAX      ; 00555277
    LEA EAX,[ESP + 0x4]                 ; 0055527b
    PUSH EAX                            ; 0055527f
    MOV EDX,dword ptr [0x00612560]      ; 00555280 | DAT_00612560
    PUSH EDX                            ; 00555286 | DAT_01bc120c
    ADD EBX,0x48                        ; 00555287
    INC ESI                             ; 0055528a
    CALL FUN_00483c50                   ; 0055528b
        ;   XREF to: 00483c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00483c50()
    ADD ESP,0xc                         ; 00555290
    CMP ESI,EDI                         ; 00555293
    JL 0x00555237                       ; 00555295
        ;   XREF to: 00555237 (CONDITIONAL_JUMP)  ; LAB_00555237
    LEA EAX,[EAX]                       ; 00555297
    LEA EDX,[EDX]                       ; 0055529d
    MOV ECX,dword ptr [ESP + 0x48]      ; 005552a0
        ;   Label: LAB_005552a0
    PUSH ECX                            ; 005552a4
    PUSH EDI                            ; 005552a5
    PUSH EBP                            ; 005552a6
    MOV EBX,dword ptr [0x00612560]      ; 005552a7 | DAT_00612560
    PUSH EBX                            ; 005552ad | DAT_01bc120c
    CALL FUN_00484210                   ; 005552ae
        ;   XREF to: 00484210 (UNCONDITIONAL_CALL)  ; undefined FUN_00484210()
    ADD ESP,0x10                        ; 005552b3
    ADD ESP,0x28                        ; 005552b6
        ;   Label: LAB_005552b6
    POP EBP                             ; 005552b9
    POP EDI                             ; 005552ba
    POP ESI                             ; 005552bb
    POP EBX                             ; 005552bc
    RET                                 ; 005552bd
    MOV ESI,dword ptr [0x00612560]      ; 005552be | DAT_00612560
        ;   Label: LAB_005552be
    PUSH ESI                            ; 005552c4 | DAT_01bc120c
    CALL FUN_00483e60                   ; 005552c5
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e60()
    ADD ESP,0x4                         ; 005552ca
    TEST EAX,EAX                        ; 005552cd
    JNZ 0x00555222                      ; 005552cf
        ;   XREF to: 00555222 (CONDITIONAL_JUMP)  ; LAB_00555222
    PUSH 0xffff                         ; 005552d5
    PUSH EDI                            ; 005552da
    PUSH EBP                            ; 005552db
    PUSH EBX                            ; 005552dc
    CALL FUN_00554a90                   ; 005552dd
        ;   XREF to: 00554a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00554a90()
    ADD ESP,0x10                        ; 005552e2
    ADD ESP,0x28                        ; 005552e5
    POP EBP                             ; 005552e8
    POP EDI                             ; 005552e9
    POP ESI                             ; 005552ea
    POP EBX                             ; 005552eb
    RET                                 ; 005552ec

