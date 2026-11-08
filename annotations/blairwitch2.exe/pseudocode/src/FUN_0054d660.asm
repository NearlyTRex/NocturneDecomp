; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double FUN_0054d660(int param_1,int *param_2,float *param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8)
;
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined8       Stack[-0x34]:8  local_34
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0054edb0 at 0054f532
;
; Referenced Globals:
;   undefined4 DAT_005e80a6
;
; Called Functions:
;   FUN_005b7ff0
;   FUN_005b84d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054d660
        ;   Label: FUN_0054d660
    PUSH ESI                            ; 0054d661
    PUSH EDI                            ; 0054d662
    PUSH EBP                            ; 0054d663
    MOV EBP,ESP                         ; 0054d664
    SUB ESP,0x2c                        ; 0054d666
    CMP dword ptr [EBP + 0x30],0x1      ; 0054d669
    JGE 0x0054d688                      ; 0054d66d
        ;   XREF to: 0054d688 (CONDITIONAL_JUMP)  ; LAB_0054d688
    MOV EAX,dword ptr [EBP + 0x20]      ; 0054d66f
        ;   Label: LAB_0054d66f
    MOV dword ptr [EBP + -0x2c],EAX     ; 0054d672
    MOV EAX,dword ptr [EBP + 0x24]      ; 0054d675
    MOV dword ptr [EBP + -0x28],EAX     ; 0054d678
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0054d67b
    MOV EDX,dword ptr [EBP + -0x28]     ; 0054d67e
    MOV ESP,EBP                         ; 0054d681
    POP EBP                             ; 0054d683
    POP EDI                             ; 0054d684
    POP ESI                             ; 0054d685
    POP EBX                             ; 0054d686
    RET                                 ; 0054d687
    MOV ECX,dword ptr [EBP + 0x24]      ; 0054d688
        ;   Label: LAB_0054d688
    PUSH ECX                            ; 0054d68b
    MOV EBX,dword ptr [EBP + 0x20]      ; 0054d68c
    PUSH EBX                            ; 0054d68f
    CALL FUN_005b84d0                   ; 0054d690
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b84d0()
    MOV dword ptr [EBP + -0x24],EAX     ; 0054d695
    MOV dword ptr [EBP + -0x20],EDX     ; 0054d698
    ADD ESP,0x8                         ; 0054d69b
    FLD double ptr [EBP + -0x24]        ; 0054d69e
    CALL FUN_005b7ff0                   ; 0054d6a1
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP qword ptr [EBP + -0x24]       ; 0054d6a6
    MOV EAX,dword ptr [EBP + -0x24]     ; 0054d6a9
    MOV dword ptr [EBP + -0x18],EAX     ; 0054d6ac
    XOR ESI,ESI                         ; 0054d6af
    MOV dword ptr [EBP + -0x20],ESI     ; 0054d6b1
    MOV EAX,dword ptr [EBP + -0x18]     ; 0054d6b4
    MOV dword ptr [EBP + -0x24],EAX     ; 0054d6b7
    FILD qword ptr [EBP + -0x24]        ; 0054d6ba
    FSUBR double ptr [EBP + 0x20]       ; 0054d6bd
    FMUL double ptr [0x005e80a6]        ; 0054d6c0 | DAT_005e80a6
    CALL FUN_005b7ff0                   ; 0054d6c6
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP qword ptr [EBP + -0x24]       ; 0054d6cb
    MOV EAX,dword ptr [EBP + -0x24]     ; 0054d6ce
    MOV dword ptr [EBP + -0x14],EAX     ; 0054d6d1
    MOV EDI,dword ptr [EBP + 0x2c]      ; 0054d6d4
    PUSH EDI                            ; 0054d6d7
    MOV EAX,dword ptr [EBP + 0x28]      ; 0054d6d8
    PUSH EAX                            ; 0054d6db
    CALL FUN_005b84d0                   ; 0054d6dc
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b84d0()
    MOV dword ptr [EBP + -0x24],EAX     ; 0054d6e1
    MOV dword ptr [EBP + -0x20],EDX     ; 0054d6e4
    ADD ESP,0x8                         ; 0054d6e7
    FLD double ptr [EBP + -0x24]        ; 0054d6ea
    CALL FUN_005b7ff0                   ; 0054d6ed
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP qword ptr [EBP + -0x24]       ; 0054d6f2
    MOV EAX,dword ptr [EBP + -0x24]     ; 0054d6f5
    MOV dword ptr [EBP + -0x10],EAX     ; 0054d6f8
    MOV dword ptr [EBP + -0x20],ESI     ; 0054d6fb
    MOV EAX,dword ptr [EBP + -0x10]     ; 0054d6fe
    MOV dword ptr [EBP + -0x24],EAX     ; 0054d701
    FILD qword ptr [EBP + -0x24]        ; 0054d704
    FSUBR double ptr [EBP + 0x28]       ; 0054d707
    FMUL double ptr [0x005e80a6]        ; 0054d70a | DAT_005e80a6
    CALL FUN_005b7ff0                   ; 0054d710
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP qword ptr [EBP + -0x24]       ; 0054d715
    MOV EAX,dword ptr [EBP + -0x24]     ; 0054d718
    MOV dword ptr [EBP + -0x1c],EAX     ; 0054d71b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0054d71e
    MOV EAX,dword ptr [EAX]             ; 0054d721
    MOV dword ptr [EBP + -0x4],EAX      ; 0054d723
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0054d726
    MOV EAX,dword ptr [EAX + 0x4]       ; 0054d729
    MOV dword ptr [EBP + -0xc],EAX      ; 0054d72c
    PUSHAD                              ; 0054d72f
    MOV EDI,dword ptr [EBP + 0x18]      ; 0054d730
    MOV EDX,dword ptr [EDI + 0x4]       ; 0054d736
    MOV EDI,dword ptr [EDI]             ; 0054d739
    MOV ESI,dword ptr [EBP + 0xffffffe8] ; 0054d73b
    MOV EAX,dword ptr [EBP + 0xffffffec] ; 0054d741
    MOV EBX,dword ptr [EBP + 0x14]      ; 0054d747
    XOR ECX,ECX                         ; 0054d74d
    FILD word ptr [EBX + ESI*0x4]       ; 0054d74f
        ;   Label: LAB_0054d74f
    FILD word ptr [EBX + ESI*0x4 + 0x2] ; 0054d752
    ADD EAX,dword ptr [EBP + 0xffffffe4] ; 0054d756
    ADC ESI,dword ptr [EBP + 0xfffffff0] ; 0054d75c
    FMUL float ptr [EBP + 0xfffffffc]   ; 0054d762
    FADD float ptr [EDI + ECX*0x4]      ; 0054d768
    FSTP float ptr [EDI + ECX*0x4]      ; 0054d76b
    FMUL float ptr [EBP + 0xfffffff4]   ; 0054d76e
    FADD float ptr [EDX + ECX*0x4]      ; 0054d774
    FSTP float ptr [EDX + ECX*0x4]      ; 0054d777
    INC ECX                             ; 0054d77a
    CMP ECX,dword ptr [EBP + 0x30]      ; 0054d77b
    JL 0x0054d74f                       ; 0054d781
        ;   XREF to: 0054d74f (CONDITIONAL_JUMP)  ; LAB_0054d74f
    POPAD                               ; 0054d783
    MOV EAX,dword ptr [EBP + 0x30]      ; 0054d784
    MOV dword ptr [EBP + -0x8],EAX      ; 0054d787
    FILD dword ptr [EBP + -0x8]         ; 0054d78a
    FMUL double ptr [EBP + 0x28]        ; 0054d78d
    FADD double ptr [EBP + 0x20]        ; 0054d790
    FSTP double ptr [EBP + 0x20]        ; 0054d793
    JMP 0x0054d66f                      ; 0054d796
        ;   XREF to: 0054d66f (UNCONDITIONAL_JUMP)  ; LAB_0054d66f

