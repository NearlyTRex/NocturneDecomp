; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004828b0(int *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_004e1db0 at 004e1f51
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01bc1240
;   undefined4 DAT_01bc1244
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   FUN_00403920
;   FUN_00481aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004828b0
        ;   Label: FUN_004828b0
    PUSH EBP                            ; 004828b1
    SUB ESP,0x4                         ; 004828b2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004828b5
    CMP dword ptr [EBX + 0xc],0x0       ; 004828b9
    JNZ 0x0048295a                      ; 004828bd
        ;   XREF to: 0048295a (CONDITIONAL_JUMP)  ; LAB_0048295a
    PUSH EDI                            ; 004828c3
        ;   Label: LAB_004828c3
    PUSH ESI                            ; 004828c4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004828c5
    MOV ESI,dword ptr [EAX + 0x4]       ; 004828c9
    XOR ECX,ECX                         ; 004828cc
    TEST ESI,ESI                        ; 004828ce
    JLE 0x00482919                      ; 004828d0
        ;   XREF to: 00482919 (CONDITIONAL_JUMP)  ; LAB_00482919
    XOR EDX,EDX                         ; 004828d2
    MOV EDI,dword ptr [EBX + 0x20]      ; 004828d4
        ;   Label: LAB_004828d4
    MOV ESI,dword ptr [EAX + 0x18]      ; 004828d7
    TEST EDI,EDI                        ; 004828da
    JNZ 0x00482901                      ; 004828dc
        ;   XREF to: 00482901 (CONDITIONAL_JUMP)  ; LAB_00482901
    IMUL EDI,ESI,0x30                   ; 004828de
    MOV dword ptr [ESP + 0x8],EDI       ; 004828e1
    MOV EBP,dword ptr [ESP + 0x8]       ; 004828e5
    MOV EDI,dword ptr [EBX]             ; 004828e9
    ADD EDI,EBP                         ; 004828eb
    MOV EBP,dword ptr [EAX + 0x1c]      ; 004828ed
    MOV dword ptr [EDI + 0x18],EBP      ; 004828f0
    MOV EBP,dword ptr [ESP + 0x8]       ; 004828f3
    MOV EDI,dword ptr [EBX]             ; 004828f7
    ADD EBP,EDI                         ; 004828f9
    MOV EDI,dword ptr [EAX + 0x20]      ; 004828fb
    MOV dword ptr [EBP + 0x1c],EDI      ; 004828fe
    MOV dword ptr [EDX + 0x1bc1240],ESI ; 00482901 | DAT_01bc1240 | DAT_01bc1244
        ;   Label: LAB_00482901
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00482907
    ADD EAX,0xc                         ; 0048290b
    INC ECX                             ; 0048290e
    MOV EDI,dword ptr [ESI + 0x4]       ; 0048290f
    ADD EDX,0x4                         ; 00482912
    CMP ECX,EDI                         ; 00482915
    JL 0x004828d4                       ; 00482917
        ;   XREF to: 004828d4 (CONDITIONAL_JUMP)  ; LAB_004828d4
    CMP dword ptr [EBX + 0x4],0x0       ; 00482919
        ;   Label: LAB_00482919
    JZ 0x00482973                       ; 0048291d
        ;   XREF to: 00482973 (CONDITIONAL_JUMP)  ; LAB_00482973
    MOV EAX,0x1                         ; 0048291f
    MOV EBP,0x486ed7                    ; 00482924 | LAB_00486ed7
    XOR EDX,EDX                         ; 00482929
    MOV [0x01c51d14],EAX                ; 0048292b | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EDX      ; 00482930 | DAT_01c51d18
    MOV dword ptr [0x01c4f02c],EBP      ; 00482936 | DAT_01c4f02c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048293c
        ;   Label: LAB_0048293c
    PUSH 0x1bc1240                      ; 00482940 | DAT_01bc1240
    MOV ECX,dword ptr [EAX + 0x4]       ; 00482945
    PUSH ECX                            ; 00482948
    PUSH EBX                            ; 00482949
    CALL FUN_00481aa0                   ; 0048294a
        ;   XREF to: 00481aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00481aa0()
    ADD ESP,0xc                         ; 0048294f
    POP ESI                             ; 00482952
    POP EDI                             ; 00482953
    ADD ESP,0x4                         ; 00482954
        ;   Label: LAB_00482954
    POP EBP                             ; 00482957
    POP EBX                             ; 00482958
    RET                                 ; 00482959
    MOV EAX,dword ptr [ESP + 0x14]      ; 0048295a
        ;   Label: LAB_0048295a
    ADD EAX,0x8                         ; 0048295e
    PUSH EAX                            ; 00482961
    CALL FUN_00403920                   ; 00482962
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined FUN_00403920()
    ADD ESP,0x4                         ; 00482967
    TEST EAX,EAX                        ; 0048296a
    JZ 0x00482954                       ; 0048296c
        ;   XREF to: 00482954 (CONDITIONAL_JUMP)  ; LAB_00482954
    JMP 0x004828c3                      ; 0048296e
        ;   XREF to: 004828c3 (UNCONDITIONAL_JUMP)  ; LAB_004828c3
    CMP dword ptr [0x0061b4a0],0x20     ; 00482973 | DAT_0061b4a0
        ;   Label: LAB_00482973
    JNZ 0x0048299e                      ; 0048297a
        ;   XREF to: 0048299e (CONDITIONAL_JUMP)  ; LAB_0048299e
    MOV dword ptr [0x01c4f02c],0x57de01 ; 0048297c | DAT_01c4f02c | LAB_0057de01
    MOV EDI,0x6                         ; 00482986
        ;   Label: LAB_00482986
    MOV ESI,0xc3                        ; 0048298b
    MOV dword ptr [0x01c51d18],EDI      ; 00482990 | DAT_01c51d18
    MOV dword ptr [0x01c51d14],ESI      ; 00482996 | DAT_01c51d14
    JMP 0x0048293c                      ; 0048299c
        ;   XREF to: 0048293c (UNCONDITIONAL_JUMP)  ; LAB_0048293c
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 0048299e | DAT_01c4f02c | LAB_0057e5e3
        ;   Label: LAB_0048299e
    JMP 0x00482986                      ; 004829a8
        ;   XREF to: 00482986 (UNCONDITIONAL_JUMP)  ; LAB_00482986

