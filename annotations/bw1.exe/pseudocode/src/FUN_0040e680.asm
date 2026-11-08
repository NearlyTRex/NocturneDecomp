; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040e680(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005d327f
;   undefined4 DAT_005d3287
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_01d06ab4
;
; Called Functions:
;   FUN_0042c010
;   FUN_004a6c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e680
        ;   Label: FUN_0040e680
    SUB ESP,0x44                        ; 0040e681
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0040e684
    LEA EAX,[EBX + 0x2d4]               ; 0040e688
    PUSH EAX                            ; 0040e68e
    MOV EDX,dword ptr [0x0061b4d0]      ; 0040e68f | DAT_0061b4d0
    PUSH EDX                            ; 0040e695
    CALL FUN_004a6c30                   ; 0040e696
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; undefined FUN_004a6c30()
    ADD ESP,0x8                         ; 0040e69b
    TEST EAX,EAX                        ; 0040e69e
    JNZ 0x0040e713                      ; 0040e6a0
        ;   XREF to: 0040e713 (CONDITIONAL_JUMP)  ; LAB_0040e713
    CMP dword ptr [EBX + 0x33c],0x0     ; 0040e6a2
        ;   Label: LAB_0040e6a2
    JZ 0x0040e70e                       ; 0040e6a9
        ;   XREF to: 0040e70e (CONDITIONAL_JUMP)  ; LAB_0040e70e
    FLD float ptr [ESP + 0x50]          ; 0040e6ab
    FMUL double ptr [0x005d327f]        ; 0040e6af | DAT_005d327f
    FSUBR float ptr [EBX + 0x340]       ; 0040e6b5
    FST float ptr [EBX + 0x340]         ; 0040e6bb
    FADD float ptr [EBX + 0x24]         ; 0040e6c1
    MOV EDX,dword ptr [0x01d06ab4]      ; 0040e6c4 | DAT_01d06ab4
    FSTP float ptr [EBX + 0x24]         ; 0040e6ca
    MOV EDX,dword ptr [EDX*0x4 + 0x1d06aa4] ; 0040e6cd
    FLD float ptr [EBX + 0x24]          ; 0040e6d4
    FCOMP float ptr [EDX + 0x24]        ; 0040e6d7
    FNSTSW AX                           ; 0040e6da
    SAHF                                ; 0040e6dc
    JNC 0x0040e6ef                      ; 0040e6dd
        ;   XREF to: 0040e6ef (CONDITIONAL_JUMP)  ; LAB_0040e6ef
    MOV EAX,dword ptr [EDX + 0x24]      ; 0040e6df
    MOV dword ptr [EBX + 0x24],EAX      ; 0040e6e2
    MOV dword ptr [EBX + 0x340],0x0     ; 0040e6e5
    MOV EAX,[0x01d06ab4]                ; 0040e6ef | DAT_01d06ab4
        ;   Label: LAB_0040e6ef
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 0040e6f4
    FLD float ptr [EAX + 0x24]          ; 0040e6fb
    FADD double ptr [0x005d3287]        ; 0040e6fe | DAT_005d3287
    FLD float ptr [EBX + 0x24]          ; 0040e704
    FCOMPP                              ; 0040e707
    FNSTSW AX                           ; 0040e709
    SAHF                                ; 0040e70b
    JC 0x0040e754                       ; 0040e70c
        ;   XREF to: 0040e754 (CONDITIONAL_JUMP)  ; LAB_0040e754
    ADD ESP,0x44                        ; 0040e70e
        ;   Label: LAB_0040e70e
    POP EBX                             ; 0040e711
    RET                                 ; 0040e712
    MOV EAX,[0x01d06ab4]                ; 0040e713 | DAT_01d06ab4
        ;   Label: LAB_0040e713
    MOV dword ptr [EBX + 0x33c],0x1     ; 0040e718
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 0040e722
    LEA EDX,[EBX + 0x20]                ; 0040e729
    MOV ECX,dword ptr [EAX + 0x20]      ; 0040e72c
    MOV dword ptr [EDX],ECX             ; 0040e72f
    MOV ECX,dword ptr [EAX + 0x24]      ; 0040e731
    MOV dword ptr [EDX + 0x4],ECX       ; 0040e734
    MOV ECX,dword ptr [EAX + 0x28]      ; 0040e737
    MOV dword ptr [EDX + 0x8],ECX       ; 0040e73a
    MOV EAX,dword ptr [EAX + 0x2c]      ; 0040e73d
    MOV dword ptr [EDX + 0xc],EAX       ; 0040e740
    FLD float ptr [EBX + 0x338]         ; 0040e743
    FADD float ptr [EBX + 0x24]         ; 0040e749
    FSTP float ptr [EBX + 0x24]         ; 0040e74c
    JMP 0x0040e6a2                      ; 0040e74f
        ;   XREF to: 0040e6a2 (UNCONDITIONAL_JUMP)  ; LAB_0040e6a2
    PUSH EDI                            ; 0040e754
        ;   Label: LAB_0040e754
    PUSH ESI                            ; 0040e755
    LEA EAX,[ESP + 0x8]                 ; 0040e756
    PUSH EAX                            ; 0040e75a
    MOV ESI,0x461c3f9a                  ; 0040e75b
    MOV EDI,0x8                         ; 0040e760
    CALL FUN_0042c010                   ; 0040e765
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c010()
    LEA EDX,[ESP + 0xc]                 ; 0040e76a
    ADD ESP,0x4                         ; 0040e76e
    MOV EAX,[0x01d06ab4]                ; 0040e771 | DAT_01d06ab4
    MOV dword ptr [ESP + 0xc],ESI       ; 0040e776
    MOV dword ptr [ESP + 0x38],EDI      ; 0040e77a
    MOV dword ptr [ESP + 0x3c],EBX      ; 0040e77e
    PUSH EDX                            ; 0040e782
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 0040e783
    MOV dword ptr [ESP + 0x44],EBX      ; 0040e78a
    PUSH EAX                            ; 0040e78e
    MOV EBX,dword ptr [EAX + 0x154]     ; 0040e78f
    CALL dword ptr [EBX + 0x108]        ; 0040e795
    ADD ESP,0x8                         ; 0040e79b
    POP ESI                             ; 0040e79e
    POP EDI                             ; 0040e79f
    ADD ESP,0x44                        ; 0040e7a0
    POP EBX                             ; 0040e7a3
    RET                                 ; 0040e7a4

