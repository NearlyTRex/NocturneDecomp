; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00567250(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00409170 at 00409635
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567250
        ;   Label: FUN_00567250
    PUSH ESI                            ; 00567251
    PUSH EDI                            ; 00567252
    PUSH EBP                            ; 00567253
    SUB ESP,0x194                       ; 00567254
    XOR EAX,EAX                         ; 0056725a
    ADD EAX,0x4                         ; 0056725c
        ;   Label: LAB_0056725c
    XOR EDX,EDX                         ; 0056725f
    MOV dword ptr [ESP + EAX*0x1 + -0x4],EDX ; 00567261
    CMP EAX,0x190                       ; 00567265
    JNZ 0x0056725c                      ; 0056726a
        ;   XREF to: 0056725c (CONDITIONAL_JUMP)  ; LAB_0056725c
    MOV EBP,dword ptr [ESP + 0x1ac]     ; 0056726c
    MOV ECX,dword ptr [ESP + 0x1a8]     ; 00567273
    MOV EDX,dword ptr [ESP + 0x1b0]     ; 0056727a
    SHL EBP,0x2                         ; 00567281
    LEA EAX,[EDX*0x8 + 0x0]             ; 00567284
    ADD EBP,ECX                         ; 0056728b
    ADD EDX,EAX                         ; 0056728d
    MOV EAX,dword ptr [EBP + 0x7c]      ; 0056728f
    ADD EDX,EDX                         ; 00567292
    ADD EAX,EDX                         ; 00567294
    MOV EDI,EAX                         ; 00567296
    ADD EAX,0x6                         ; 00567298
    MOV dword ptr [ESP + 0x190],EAX     ; 0056729b
    XOR EAX,EAX                         ; 005672a2
        ;   Label: LAB_005672a2
    MOV AX,word ptr [EDI]               ; 005672a4
    IMUL EAX,EAX,0x34                   ; 005672a7
    MOV ESI,dword ptr [EBP + 0x40]      ; 005672aa
    ADD ESI,EAX                         ; 005672ad
    XOR ECX,ECX                         ; 005672af
    MOV EDX,ESI                         ; 005672b1
    MOV EAX,ESI                         ; 005672b3
    XOR EBX,EBX                         ; 005672b5
        ;   Label: LAB_005672b5
    MOV BL,byte ptr [ESI]               ; 005672b7
    CMP ECX,EBX                         ; 005672b9
    JL 0x005672fa                       ; 005672bb
        ;   XREF to: 005672fa (CONDITIONAL_JUMP)  ; LAB_005672fa
    MOV EBX,dword ptr [ESP + 0x190]     ; 005672bd
    ADD EDI,0x2                         ; 005672c4
    CMP EDI,EBX                         ; 005672c7
    JNZ 0x005672a2                      ; 005672c9
        ;   XREF to: 005672a2 (CONDITIONAL_JUMP)  ; LAB_005672a2
    MOV EBX,0x1                         ; 005672cb
    MOV EDX,0x4                         ; 005672d0
    XOR ECX,ECX                         ; 005672d5
    FLD float ptr [ESP + EDX*0x1]       ; 005672d7
        ;   Label: LAB_005672d7
    FCOMP float ptr [ESP + ECX*0x4]     ; 005672da
    FNSTSW AX                           ; 005672dd
    SAHF                                ; 005672df
    JBE 0x005672e4                      ; 005672e0
        ;   XREF to: 005672e4 (CONDITIONAL_JUMP)  ; LAB_005672e4
    MOV ECX,EBX                         ; 005672e2
    INC EBX                             ; 005672e4
        ;   Label: LAB_005672e4
    ADD EDX,0x4                         ; 005672e5
    CMP EBX,0x64                        ; 005672e8
    JL 0x005672d7                       ; 005672eb
        ;   XREF to: 005672d7 (CONDITIONAL_JUMP)  ; LAB_005672d7
    MOV EAX,ECX                         ; 005672ed
    ADD ESP,0x194                       ; 005672ef
    POP EBP                             ; 005672f5
    POP EDI                             ; 005672f6
    POP ESI                             ; 005672f7
    POP EBX                             ; 005672f8
    RET                                 ; 005672f9
    XOR EBX,EBX                         ; 005672fa
        ;   Label: LAB_005672fa
    FLD float ptr [EDX + 0x4]           ; 005672fc
    MOV BL,byte ptr [EAX + 0x1]         ; 005672ff
    ADD EDX,0x4                         ; 00567302
    INC EAX                             ; 00567305
    FADD float ptr [ESP + EBX*0x4]      ; 00567306
    INC ECX                             ; 00567309
    FSTP float ptr [ESP + EBX*0x4]      ; 0056730a
    JMP 0x005672b5                      ; 0056730d
        ;   XREF to: 005672b5 (UNCONDITIONAL_JUMP)  ; LAB_005672b5

