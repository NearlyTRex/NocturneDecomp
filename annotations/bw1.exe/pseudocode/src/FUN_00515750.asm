; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00515750(void)
;
;
; XREF[2]:
;   FUN_005155f0 at 00515684
;   FUN_00515ae0 at 00515bc0
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01d227e0
;   undefined4 DAT_01d25f48
;   undefined4 DAT_01d25f4c
;   undefined4 DAT_01d25f50
;   undefined4 DAT_02c83470
;
; Called Functions:
;   FUN_00516060
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00515750
        ;   Label: FUN_00515750
    PUSH EBP                            ; 00515751
    MOV EDI,dword ptr [0x01d25f48]      ; 00515752 | DAT_01d25f48
    MOV EDX,dword ptr [0x01d25f50]      ; 00515758 | DAT_01d25f50
    CMP EDX,0x3                         ; 0051575e
    JL 0x005157d0                       ; 00515761
        ;   XREF to: 005157d0 (CONDITIONAL_JUMP)  ; LAB_005157d0
    MOV ECX,dword ptr [0x01d25f4c]      ; 00515767 | DAT_01d25f4c
    CMP ECX,0x3                         ; 0051576d
    JL 0x005157d0                       ; 00515770
        ;   XREF to: 005157d0 (CONDITIONAL_JUMP)  ; LAB_005157d0
    PUSH ESI                            ; 00515772
    PUSH EBX                            ; 00515773
    CMP dword ptr [0x02c83470],0x0      ; 00515774 | DAT_02c83470
    JZ 0x005157d9                       ; 0051577b
        ;   XREF to: 005157d9 (CONDITIONAL_JUMP)  ; LAB_005157d9
    CMP dword ptr [0x01c50948],0x0      ; 0051577d | DAT_01c50948
    JZ 0x005157d9                       ; 00515784
        ;   XREF to: 005157d9 (CONDITIONAL_JUMP)  ; LAB_005157d9
    MOV EAX,[0x01c51d14]                ; 00515786 | DAT_01c51d14
    MOV EBX,0x3                         ; 0051578b
    PUSH EAX                            ; 00515790
    MOV EAX,EDX                         ; 00515791
    SAR EDX,0x1f                        ; 00515793
    IDIV EBX                            ; 00515796
    PUSH EAX                            ; 00515798
    MOV EDX,EDI                         ; 00515799
    PUSH 0x1d25f54                      ; 0051579b
    MOV EAX,[0x01d227e0]                ; 005157a0 | DAT_01d227e0
    SHL EDX,0x6                         ; 005157a5
    PUSH ECX                            ; 005157a8
    ADD EAX,EDX                         ; 005157a9
    PUSH EAX                            ; 005157ab
    CALL dword ptr [0x02c83470]         ; 005157ac | DAT_02c83470
    MOV EDI,dword ptr [0x01d25f48]      ; 005157b2 | DAT_01d25f48
    ADD ESP,0x14                        ; 005157b8
    LEA EAX,[EAX]                       ; 005157bb
    MOV ECX,ECX                         ; 005157be
    XOR EBX,EBX                         ; 005157c0
        ;   Label: LAB_005157c0
    MOV dword ptr [0x01d25f50],EBX      ; 005157c2 | DAT_01d25f50
    MOV dword ptr [0x01d25f4c],EBX      ; 005157c8 | DAT_01d25f4c
    POP EBX                             ; 005157ce
    POP ESI                             ; 005157cf
    MOV dword ptr [0x01d25f48],EDI      ; 005157d0 | DAT_01d25f48
        ;   Label: LAB_005157d0
    POP EBP                             ; 005157d6
    POP EDI                             ; 005157d7
    RET                                 ; 005157d8
    MOV EBP,dword ptr [0x01d25f50]      ; 005157d9 | DAT_01d25f50
        ;   Label: LAB_005157d9
    XOR ESI,ESI                         ; 005157df
    TEST EBP,EBP                        ; 005157e1
    JLE 0x005157c0                      ; 005157e3
        ;   XREF to: 005157c0 (CONDITIONAL_JUMP)  ; LAB_005157c0
    XOR EBX,EBX                         ; 005157e5
    XOR EAX,EAX                         ; 005157e7
        ;   Label: LAB_005157e7
    MOV AX,word ptr [EBX + 0x1d25f58]   ; 005157e9
    LEA EDX,[EAX + EDI*0x1]             ; 005157f0
    MOV EAX,[0x01d227e0]                ; 005157f3 | DAT_01d227e0
    SHL EDX,0x6                         ; 005157f8
    ADD EDX,EAX                         ; 005157fb
    PUSH EDX                            ; 005157fd
    XOR EDX,EDX                         ; 005157fe
    MOV DX,word ptr [EBX + 0x1d25f56]   ; 00515800
    ADD EDX,EDI                         ; 00515807
    SHL EDX,0x6                         ; 00515809
    ADD EDX,EAX                         ; 0051580c
    PUSH EDX                            ; 0051580e
    XOR EDX,EDX                         ; 0051580f
    MOV DX,word ptr [EBX + 0x1d25f54]   ; 00515811
    ADD EDX,EDI                         ; 00515818
    SHL EDX,0x6                         ; 0051581a
    ADD EAX,EDX                         ; 0051581d
    MOV dword ptr [0x01d25f48],EDI      ; 0051581f | DAT_01d25f48
    PUSH EAX                            ; 00515825
    ADD EBX,0x6                         ; 00515826
    ADD ESI,0x3                         ; 00515829
    CALL FUN_00516060                   ; 0051582c
        ;   XREF to: 00516060 (UNCONDITIONAL_CALL)  ; undefined FUN_00516060()
    MOV EDI,dword ptr [0x01d25f48]      ; 00515831 | DAT_01d25f48
    MOV ECX,dword ptr [0x01d25f50]      ; 00515837 | DAT_01d25f50
    ADD ESP,0xc                         ; 0051583d
    CMP ESI,ECX                         ; 00515840
    JL 0x005157e7                       ; 00515842
        ;   XREF to: 005157e7 (CONDITIONAL_JUMP)  ; LAB_005157e7
    JMP 0x005157c0                      ; 00515844
        ;   XREF to: 005157c0 (UNCONDITIONAL_JUMP)  ; LAB_005157c0

