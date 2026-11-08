; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005b9240(int param_1,int *param_2)
;
;
; XREF[1]:
;   FUN_005b929c at 005b9372
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b9240
        ;   Label: FUN_005b9240
    PUSH ESI                            ; 005b9241
    PUSH EDI                            ; 005b9242
    MOV EBX,dword ptr [ESP + 0x10]      ; 005b9243
    MOV EAX,dword ptr [ESP + 0x14]      ; 005b9247
    CMP EBX,dword ptr [EAX + 0x4]       ; 005b924b
    JG 0x005b927b                       ; 005b924e
        ;   XREF to: 005b927b (CONDITIONAL_JUMP)  ; LAB_005b927b
    MOV EDX,dword ptr [EAX + 0x8]       ; 005b9250
    MOV ECX,dword ptr [EAX]             ; 005b9253
    MOV EDX,dword ptr [EDX + 0x8]       ; 005b9255
    SUB EDX,ECX                         ; 005b9258
    CMP EBX,EDX                         ; 005b925a
    JL 0x005b927b                       ; 005b925c
        ;   XREF to: 005b927b (CONDITIONAL_JUMP)  ; LAB_005b927b
    MOV DL,byte ptr [EAX + 0xc]         ; 005b925e
    MOV ESI,dword ptr [EAX]             ; 005b9261
    MOV EDI,dword ptr [EAX + 0x4]       ; 005b9263
    AND DL,0xef                         ; 005b9266
    ADD ESI,EBX                         ; 005b9269
    MOV byte ptr [EAX + 0xc],DL         ; 005b926b
    SUB EDI,EBX                         ; 005b926e
    MOV dword ptr [EAX],ESI             ; 005b9270
    MOV dword ptr [EAX + 0x4],EDI       ; 005b9272
    XOR EAX,EAX                         ; 005b9275
    POP EDI                             ; 005b9277
    POP ESI                             ; 005b9278
    POP EBX                             ; 005b9279
    RET                                 ; 005b927a
    MOV EAX,0x1                         ; 005b927b
        ;   Label: LAB_005b927b
    POP EDI                             ; 005b9280
    POP ESI                             ; 005b9281
    POP EBX                             ; 005b9282
    RET                                 ; 005b9283

