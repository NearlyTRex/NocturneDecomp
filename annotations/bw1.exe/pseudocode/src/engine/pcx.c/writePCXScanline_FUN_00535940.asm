; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_pcx_c_writePCXScanline_FUN_00535940(int param_1,int *param_2)
;
;
; XREF[1]:
;   engine_pcx.c_saveScreenshotGeneral_FUN_00535d80 at 00535ea8
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_01c4354c
;
; Called Functions:
;   crt_stdio.c_fputc_FUN_005c2f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00535940
        ;   Label: engine_pcx.c_writePCXScanline_FUN_00535940
    PUSH ESI                            ; 00535941
    PUSH EDI                            ; 00535942
    PUSH EBP                            ; 00535943
    MOV EBX,dword ptr [ESP + 0x18]      ; 00535944
    MOV ESI,dword ptr [ESP + 0x14]      ; 00535948
    MOV EDX,dword ptr [0x0061b498]      ; 0053594c | DAT_0061b498
    XOR EDI,EDI                         ; 00535952
    MOV ESI,dword ptr [ESI*0x4 + 0x1c4354c] ; 00535954 | DAT_01c4354c
    TEST EDX,EDX                        ; 0053595b
    JLE 0x0053599e                      ; 0053595d
        ;   XREF to: 0053599e (CONDITIONAL_JUMP)  ; LAB_0053599e
    XOR EAX,EAX                         ; 0053595f
        ;   Label: LAB_0053595f
    MOV AL,byte ptr [ESI]               ; 00535961
    CMP EAX,0xc0                        ; 00535963
    JL 0x0053597e                       ; 00535968
        ;   XREF to: 0053597e (CONDITIONAL_JUMP)  ; LAB_0053597e
    TEST byte ptr [EBX + 0xd],0x4       ; 0053596a
    JZ 0x005359a3                       ; 0053596e
        ;   XREF to: 005359a3 (CONDITIONAL_JUMP)  ; LAB_005359a3
    PUSH EBX                            ; 00535970
        ;   Label: LAB_00535970
    PUSH 0xc1                           ; 00535971
    CALL crt_stdio.c_fputc_FUN_005c2f00 ; 00535976
        ;   XREF to: 005c2f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005c2f00()
        ;   Label: LAB_00535976
    ADD ESP,0x8                         ; 0053597b
    TEST byte ptr [EBX + 0xd],0x4       ; 0053597e
        ;   Label: LAB_0053597e
    JZ 0x005359d8                       ; 00535982
        ;   XREF to: 005359d8 (CONDITIONAL_JUMP)  ; LAB_005359d8
    XOR EAX,EAX                         ; 00535984
        ;   Label: LAB_00535984
    PUSH EBX                            ; 00535986
    MOV AL,byte ptr [ESI]               ; 00535987
    PUSH EAX                            ; 00535989
    CALL crt_stdio.c_fputc_FUN_005c2f00 ; 0053598a
        ;   XREF to: 005c2f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005c2f00()
        ;   Label: LAB_0053598a
    ADD ESP,0x8                         ; 0053598f
    MOV ECX,dword ptr [0x0061b498]      ; 00535992 | DAT_0061b498
        ;   Label: LAB_00535992
    INC EDI                             ; 00535998
    INC ESI                             ; 00535999
    CMP EDI,ECX                         ; 0053599a
    JL 0x0053595f                       ; 0053599c
        ;   XREF to: 0053595f (CONDITIONAL_JUMP)  ; LAB_0053595f
    POP EBP                             ; 0053599e
        ;   Label: LAB_0053599e
    POP EDI                             ; 0053599f
    POP ESI                             ; 005359a0
    POP EBX                             ; 005359a1
    RET                                 ; 005359a2
    MOV EBP,dword ptr [EBX + 0x4]       ; 005359a3
        ;   Label: LAB_005359a3
    MOV EAX,dword ptr [EBX + 0x14]      ; 005359a6
    SUB EAX,EBP                         ; 005359a9
    CMP EAX,0x1                         ; 005359ab
    JBE 0x00535970                      ; 005359ae
        ;   XREF to: 00535970 (CONDITIONAL_JUMP)  ; LAB_00535970
    MOV EAX,dword ptr [EBX]             ; 005359b0
    MOV byte ptr [EAX],0xc1             ; 005359b2
    MOV EAX,dword ptr [EBX]             ; 005359b5
    CMP byte ptr [EAX],0xa              ; 005359b7
    JZ 0x005359d3                       ; 005359ba
        ;   XREF to: 005359d3 (CONDITIONAL_JUMP)  ; LAB_005359d3
    MOV DH,byte ptr [EBX + 0xd]         ; 005359bc
    OR DH,0x10                          ; 005359bf
    MOV EAX,dword ptr [EBX + 0x4]       ; 005359c2
    MOV byte ptr [EBX + 0xd],DH         ; 005359c5
    INC EAX                             ; 005359c8
    MOV EDX,dword ptr [EBX]             ; 005359c9
    MOV dword ptr [EBX + 0x4],EAX       ; 005359cb
    INC EDX                             ; 005359ce
    MOV dword ptr [EBX],EDX             ; 005359cf
    JMP 0x0053597e                      ; 005359d1
        ;   XREF to: 0053597e (UNCONDITIONAL_JUMP)  ; LAB_0053597e
    PUSH EBX                            ; 005359d3
        ;   Label: LAB_005359d3
    PUSH 0xa                            ; 005359d4
    JMP 0x00535976                      ; 005359d6
        ;   XREF to: 00535976 (UNCONDITIONAL_JUMP)  ; LAB_00535976
    MOV ECX,dword ptr [EBX + 0x4]       ; 005359d8
        ;   Label: LAB_005359d8
    MOV EAX,dword ptr [EBX + 0x14]      ; 005359db
    SUB EAX,ECX                         ; 005359de
    CMP EAX,0x1                         ; 005359e0
    JBE 0x00535984                      ; 005359e3
        ;   XREF to: 00535984 (CONDITIONAL_JUMP)  ; LAB_00535984
    MOV EAX,dword ptr [EBX]             ; 005359e5
    MOV DL,byte ptr [ESI]               ; 005359e7
    MOV byte ptr [EAX],DL               ; 005359e9
    MOV EAX,dword ptr [EBX]             ; 005359eb
    CMP byte ptr [EAX],0xa              ; 005359ed
    JZ 0x00535a08                       ; 005359f0
        ;   XREF to: 00535a08 (CONDITIONAL_JUMP)  ; LAB_00535a08
    MOV AL,byte ptr [EBX + 0xd]         ; 005359f2
    OR AL,0x10                          ; 005359f5
    MOV EBP,dword ptr [EBX + 0x4]       ; 005359f7
    MOV byte ptr [EBX + 0xd],AL         ; 005359fa
    INC EBP                             ; 005359fd
    MOV EAX,dword ptr [EBX]             ; 005359fe
    MOV dword ptr [EBX + 0x4],EBP       ; 00535a00
    INC EAX                             ; 00535a03
    MOV dword ptr [EBX],EAX             ; 00535a04
    JMP 0x00535992                      ; 00535a06
        ;   XREF to: 00535992 (UNCONDITIONAL_JUMP)  ; LAB_00535992
    PUSH EBX                            ; 00535a08
        ;   Label: LAB_00535a08
    PUSH 0xa                            ; 00535a09
    JMP 0x0053598a                      ; 00535a0b
        ;   XREF to: 0053598a (UNCONDITIONAL_JUMP)  ; LAB_0053598a

