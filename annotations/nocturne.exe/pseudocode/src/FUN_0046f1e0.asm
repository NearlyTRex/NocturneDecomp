; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046f1e0(int param_1,int param_2,int param_3)
;
;
; XREF[3]:
;   FUN_0046f250 at 0046f26c
;   FUN_0046f2a0 at 0046f2c6
;   FUN_0046f390 at 0046f5b3
;
; Called Functions:
;   FUN_00566170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046f1e0
        ;   Label: FUN_0046f1e0
    PUSH ESI                            ; 0046f1e1
    PUSH EDI                            ; 0046f1e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0046f1e3
    MOV EDI,dword ptr [ESP + 0x14]      ; 0046f1e7
    MOV ESI,dword ptr [ESP + 0x18]      ; 0046f1eb
    TEST EDI,EDI                        ; 0046f1ef
    JL 0x0046f249                       ; 0046f1f1
        ;   XREF to: 0046f249 (CONDITIONAL_JUMP)  ; LAB_0046f249
    MOV EDX,dword ptr [EBX + 0x130]     ; 0046f1f3
        ;   Label: LAB_0046f1f3
    CMP ESI,EDX                         ; 0046f1f9
    JLE 0x0046f1ff                      ; 0046f1fb
        ;   XREF to: 0046f1ff (CONDITIONAL_JUMP)  ; LAB_0046f1ff
    MOV ESI,EDX                         ; 0046f1fd
    CMP EDI,ESI                         ; 0046f1ff
        ;   Label: LAB_0046f1ff
    JGE 0x0046f245                      ; 0046f201
        ;   XREF to: 0046f245 (CONDITIONAL_JUMP)  ; LAB_0046f245
    MOV EAX,dword ptr [EBX + 0x130]     ; 0046f203
    SUB EAX,ESI                         ; 0046f209
    PUSH EAX                            ; 0046f20b
    LEA EAX,[EBX + ESI*0x1]             ; 0046f20c
    PUSH EAX                            ; 0046f20f
    LEA EAX,[EBX + EDI*0x1]             ; 0046f210
    PUSH EAX                            ; 0046f213
    SUB ESI,EDI                         ; 0046f214
    CALL FUN_00566170                   ; 0046f216
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined FUN_00566170()
    MOV ECX,dword ptr [EBX + 0x130]     ; 0046f21b
    ADD ESP,0xc                         ; 0046f221
    SUB ECX,ESI                         ; 0046f224
    MOV ESI,dword ptr [EBX + 0x134]     ; 0046f226
    MOV dword ptr [EBX + 0x130],ECX     ; 0046f22c
    CMP ESI,ECX                         ; 0046f232
    JLE 0x0046f23c                      ; 0046f234
        ;   XREF to: 0046f23c (CONDITIONAL_JUMP)  ; LAB_0046f23c
    MOV dword ptr [EBX + 0x134],ECX     ; 0046f236
    ADD EBX,dword ptr [EBX + 0x130]     ; 0046f23c
        ;   Label: LAB_0046f23c
    MOV byte ptr [EBX],0x0              ; 0046f242
    POP EDI                             ; 0046f245
        ;   Label: LAB_0046f245
    POP ESI                             ; 0046f246
    POP EBX                             ; 0046f247
    RET                                 ; 0046f248
    XOR EDI,EDI                         ; 0046f249
        ;   Label: LAB_0046f249
    JMP 0x0046f1f3                      ; 0046f24b
        ;   XREF to: 0046f1f3 (UNCONDITIONAL_JUMP)  ; LAB_0046f1f3

