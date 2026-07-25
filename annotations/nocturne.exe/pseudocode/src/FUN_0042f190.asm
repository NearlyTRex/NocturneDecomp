; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042f190(int param_1,short *param_2,int param_3,int param_4,int param_5,int param_6)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; Called Functions:
;   FUN_0042f330
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0042f190
        ;   Label: FUN_0042f190
    PUSH EBP                            ; 0042f191
    SUB ESP,0x10                        ; 0042f192
    CMP dword ptr [ESP + 0x1c],0x0      ; 0042f195
    JZ 0x0042f24f                       ; 0042f19a
        ;   XREF to: 0042f24f (CONDITIONAL_JUMP)  ; LAB_0042f24f
    MOV ECX,dword ptr [ESP + 0x24]      ; 0042f1a0
    XOR ESI,ESI                         ; 0042f1a4
    TEST ECX,ECX                        ; 0042f1a6
    JLE 0x0042f24f                      ; 0042f1a8
        ;   XREF to: 0042f24f (CONDITIONAL_JUMP)  ; LAB_0042f24f
    PUSH EDI                            ; 0042f1ae
    PUSH EBX                            ; 0042f1af
    MOV EBX,dword ptr [ESP + 0x28]      ; 0042f1b0
    MOV AX,word ptr [EBX]               ; 0042f1b4
        ;   Label: LAB_0042f1b4
    MOVSX ECX,AX                        ; 0042f1b7
    MOV AX,word ptr [EBX + 0x2]         ; 0042f1ba
    MOV EDI,dword ptr [ESP + 0x38]      ; 0042f1be
    CWDE                                ; 0042f1c2
    IMUL EDI,EAX                        ; 0042f1c3
    MOV DX,word ptr [EBX + 0x4]         ; 0042f1c6
    MOVSX EDX,DX                        ; 0042f1ca
    MOV dword ptr [ESP + 0x8],EDX       ; 0042f1cd
    MOV DX,word ptr [EBX + 0x6]         ; 0042f1d1
    MOV EBP,dword ptr [ESP + 0x24]      ; 0042f1d5
    ADD EDX,EDX                         ; 0042f1d9
    ADD EDI,EBP                         ; 0042f1db
    SAR DX,0x1                          ; 0042f1dd
    MOVZX EDI,byte ptr [ECX + EDI*0x1]  ; 0042f1e0
    MOVSX EDX,DX                        ; 0042f1e4
    MOV dword ptr [ESP + 0xc],EDI       ; 0042f1e7
    MOV EDI,dword ptr [ESP + 0x38]      ; 0042f1eb
    IMUL EDI,EDX                        ; 0042f1ef
    ADD EDI,EBP                         ; 0042f1f2
    ADD EDI,dword ptr [ESP + 0x8]       ; 0042f1f4
    MOVZX EDI,byte ptr [EDI]            ; 0042f1f8
    MOV dword ptr [ESP + 0x10],EDI      ; 0042f1fb
    MOV DI,word ptr [EBX + 0x6]         ; 0042f1ff
    SHR DI,0xf                          ; 0042f203
    MOV dword ptr [ESP + 0x14],EDI      ; 0042f207
    XOR EDI,EDI                         ; 0042f20b
    MOV DI,word ptr [ESP + 0x14]        ; 0042f20d
    PUSH EDI                            ; 0042f212
    MOV EDI,dword ptr [ESP + 0x14]      ; 0042f213
    PUSH EDI                            ; 0042f217
    MOV EBP,dword ptr [ESP + 0x14]      ; 0042f218
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0042f21c
    PUSH EBP                            ; 0042f220
    ADD EDX,EDI                         ; 0042f221
    MOV EBP,dword ptr [ESP + 0x3c]      ; 0042f223
    PUSH EDX                            ; 0042f227
    MOV EDX,dword ptr [ESP + 0x18]      ; 0042f228
    ADD EDX,EBP                         ; 0042f22c
    PUSH EDX                            ; 0042f22e
    ADD EAX,EDI                         ; 0042f22f
    PUSH EAX                            ; 0042f231
    ADD ECX,EBP                         ; 0042f232
    PUSH ECX                            ; 0042f234
    CALL FUN_0042f330                   ; 0042f235
        ;   XREF to: 0042f330 (UNCONDITIONAL_CALL)  ; undefined FUN_0042f330()
    ADD ESP,0x1c                        ; 0042f23a
    INC ESI                             ; 0042f23d
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0042f23e
    ADD EBX,0x8                         ; 0042f242
    CMP ESI,EBP                         ; 0042f245
    JL 0x0042f1b4                       ; 0042f247
        ;   XREF to: 0042f1b4 (CONDITIONAL_JUMP)  ; LAB_0042f1b4
    POP EBX                             ; 0042f24d
    POP EDI                             ; 0042f24e
    ADD ESP,0x10                        ; 0042f24f
        ;   Label: LAB_0042f24f
    POP EBP                             ; 0042f252
    POP ESI                             ; 0042f253
    RET                                 ; 0042f254

