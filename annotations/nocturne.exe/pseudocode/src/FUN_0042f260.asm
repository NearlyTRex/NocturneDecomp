; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042f260(void)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; Called Functions:
;   FUN_0042f330
;   FUN_004f3fe0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0042f260
        ;   Label: FUN_0042f260
    PUSH EBP                            ; 0042f261
    SUB ESP,0xc                         ; 0042f262
    MOV EAX,dword ptr [ESP + 0x18]      ; 0042f265
    MOV EAX,dword ptr [EAX + 0x18]      ; 0042f269
    TEST EAX,EAX                        ; 0042f26c
    JZ 0x0042f321                       ; 0042f26e
        ;   XREF to: 0042f321 (CONDITIONAL_JUMP)  ; LAB_0042f321
    MOV EDX,dword ptr [ESP + 0x20]      ; 0042f274
    XOR ESI,ESI                         ; 0042f278
    TEST EDX,EDX                        ; 0042f27a
    JLE 0x0042f321                      ; 0042f27c
        ;   XREF to: 0042f321 (CONDITIONAL_JUMP)  ; LAB_0042f321
    PUSH EDI                            ; 0042f282
    PUSH EBX                            ; 0042f283
    MOV EBX,dword ptr [ESP + 0x24]      ; 0042f284
    MOV AX,word ptr [EBX]               ; 0042f288
        ;   Label: LAB_0042f288
    MOVSX EBP,AX                        ; 0042f28b
    MOV AX,word ptr [EBX + 0x2]         ; 0042f28e
    MOVSX EDI,AX                        ; 0042f292
    MOV AX,word ptr [EBX + 0x4]         ; 0042f295
    CWDE                                ; 0042f299
    MOV dword ptr [ESP + 0x8],EAX       ; 0042f29a
    MOV AX,word ptr [EBX + 0x6]         ; 0042f29e
    PUSH EDI                            ; 0042f2a2
    ADD EAX,EAX                         ; 0042f2a3
    PUSH EBP                            ; 0042f2a5
    SAR AX,0x1                          ; 0042f2a6
    MOV ECX,dword ptr [ESP + 0x28]      ; 0042f2a9
    CWDE                                ; 0042f2ad
    PUSH ECX                            ; 0042f2ae
    MOV dword ptr [ESP + 0x18],EAX      ; 0042f2af
    CALL FUN_004f3fe0                   ; 0042f2b3
        ;   XREF to: 004f3fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f3fe0()
    MOV dword ptr [ESP + 0x1c],EAX      ; 0042f2b8
    ADD ESP,0xc                         ; 0042f2bc
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042f2bf
    PUSH EAX                            ; 0042f2c3
    MOV EDX,dword ptr [ESP + 0xc]       ; 0042f2c4
    PUSH EDX                            ; 0042f2c8
    MOV ECX,dword ptr [ESP + 0x28]      ; 0042f2c9
    PUSH ECX                            ; 0042f2cd
    CALL FUN_004f3fe0                   ; 0042f2ce
        ;   XREF to: 004f3fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f3fe0()
    MOV DX,word ptr [EBX + 0x6]         ; 0042f2d3
    ADD ESP,0xc                         ; 0042f2d7
    SHR DX,0xf                          ; 0042f2da
    AND EDX,0xffff                      ; 0042f2de
    PUSH EDX                            ; 0042f2e4
    PUSH EAX                            ; 0042f2e5
    MOV EAX,dword ptr [ESP + 0x18]      ; 0042f2e6
    MOV EDX,dword ptr [ESP + 0x38]      ; 0042f2ea
    PUSH EAX                            ; 0042f2ee
    MOV EAX,dword ptr [ESP + 0x18]      ; 0042f2ef
    ADD EAX,EDX                         ; 0042f2f3
    MOV ECX,dword ptr [ESP + 0x38]      ; 0042f2f5
    PUSH EAX                            ; 0042f2f9
    MOV EAX,dword ptr [ESP + 0x18]      ; 0042f2fa
    ADD EAX,ECX                         ; 0042f2fe
    PUSH EAX                            ; 0042f300
    ADD EDI,EDX                         ; 0042f301
    PUSH EDI                            ; 0042f303
    ADD EBP,ECX                         ; 0042f304
    PUSH EBP                            ; 0042f306
    CALL FUN_0042f330                   ; 0042f307
        ;   XREF to: 0042f330 (UNCONDITIONAL_CALL)  ; undefined FUN_0042f330()
    ADD ESP,0x1c                        ; 0042f30c
    INC ESI                             ; 0042f30f
    MOV ECX,dword ptr [ESP + 0x28]      ; 0042f310
    ADD EBX,0x8                         ; 0042f314
    CMP ESI,ECX                         ; 0042f317
    JL 0x0042f288                       ; 0042f319
        ;   XREF to: 0042f288 (CONDITIONAL_JUMP)  ; LAB_0042f288
    POP EBX                             ; 0042f31f
    POP EDI                             ; 0042f320
    ADD ESP,0xc                         ; 0042f321
        ;   Label: LAB_0042f321
    POP EBP                             ; 0042f324
    POP ESI                             ; 0042f325
    RET                                 ; 0042f326

