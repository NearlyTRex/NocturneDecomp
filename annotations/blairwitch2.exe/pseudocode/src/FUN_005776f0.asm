; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005776f0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00587d70 at 00587d75
;
; Called Functions:
;   FUN_00408790
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005776f0
        ;   Label: FUN_005776f0
    PUSH EDI                            ; 005776f1
    MOV EDX,dword ptr [ESP + 0xc]       ; 005776f2
    PUSH EDX                            ; 005776f6
    CALL FUN_00408790                   ; 005776f7
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; undefined FUN_00408790()
    MOV dword ptr [EAX + 0x2b0],0x5fd224 ; 005776fc
    MOV dword ptr [EAX + 0x2bc],0x40a00000 ; 00577706
    MOV dword ptr [EAX + 0x2c0],0x41100000 ; 00577710
    MOV dword ptr [EAX + 0x2c4],0x40a00000 ; 0057771a
    MOV dword ptr [EAX + 0x2cc],0x0     ; 00577724
    MOV dword ptr [EAX + 0x2b8],0x0     ; 0057772e
    MOV ESI,0x5ecd63                    ; 00577738
    MOV byte ptr [EAX + 0x380],0x0      ; 0057773d
    MOV EDX,EAX                         ; 00577744
    MOV byte ptr [EAX + 0x3e4],0x0      ; 00577746
    ADD ESP,0x4                         ; 0057774d
    MOV dword ptr [EAX + 0x2c8],0x0     ; 00577750
    LEA EDI,[EAX + 0x2d4]               ; 0057775a
    MOV dword ptr [EAX + 0x2d0],0x0     ; 00577760
    PUSH EDI                            ; 0057776a
    MOV AL,byte ptr [ESI]               ; 0057776b
        ;   Label: LAB_0057776b
    MOV byte ptr [EDI],AL               ; 0057776d
    CMP AL,0x0                          ; 0057776f
    JZ 0x00577783                       ; 00577771
        ;   XREF to: 00577783 (CONDITIONAL_JUMP)  ; LAB_00577783
    MOV AL,byte ptr [ESI + 0x1]         ; 00577773
    ADD ESI,0x2                         ; 00577776
    MOV byte ptr [EDI + 0x1],AL         ; 00577779
    ADD EDI,0x2                         ; 0057777c
    CMP AL,0x0                          ; 0057777f
    JNZ 0x0057776b                      ; 00577781
        ;   XREF to: 0057776b (CONDITIONAL_JUMP)  ; LAB_0057776b
    POP EDI                             ; 00577783
        ;   Label: LAB_00577783
    MOV ESI,0x5ecd6a                    ; 00577784
    LEA EDI,[EDX + 0x324]               ; 00577789
    PUSH EDI                            ; 0057778f
    MOV AL,byte ptr [ESI]               ; 00577790
        ;   Label: LAB_00577790
    MOV byte ptr [EDI],AL               ; 00577792
    CMP AL,0x0                          ; 00577794
    JZ 0x005777a8                       ; 00577796
        ;   XREF to: 005777a8 (CONDITIONAL_JUMP)  ; LAB_005777a8
    MOV AL,byte ptr [ESI + 0x1]         ; 00577798
    ADD ESI,0x2                         ; 0057779b
    MOV byte ptr [EDI + 0x1],AL         ; 0057779e
    ADD EDI,0x2                         ; 005777a1
    CMP AL,0x0                          ; 005777a4
    JNZ 0x00577790                      ; 005777a6
        ;   XREF to: 00577790 (CONDITIONAL_JUMP)  ; LAB_00577790
    POP EDI                             ; 005777a8
        ;   Label: LAB_005777a8
    MOV dword ptr [EDX + 0x374],0x0     ; 005777a9
    MOV dword ptr [EDX + 0x378],0x3e800000 ; 005777b3
    MOV dword ptr [EDX + 0x37c],0x3f800000 ; 005777bd
    MOV dword ptr [EDX + 0x448],0x0     ; 005777c7
    MOV dword ptr [EDX + 0x44c],0x0     ; 005777d1
    MOV dword ptr [EDX + 0x450],0x1     ; 005777db
    MOV dword ptr [EDX + 0x454],0x42c80000 ; 005777e5
    MOV dword ptr [EDX + 0x64],0x96     ; 005777ef
    MOV dword ptr [EDX + 0x4c8],0x0     ; 005777f6
    MOV dword ptr [EDX + 0x45c],0x0     ; 00577800
    MOV dword ptr [EDX + 0x2b4],0x47c34ff3 ; 0057780a
    MOV dword ptr [EDX + 0x460],0x1     ; 00577814
    MOV byte ptr [EDX + 0x464],0x0      ; 0057781e
    MOV dword ptr [EDX + 0x4cc],0x0     ; 00577825
    MOV EAX,EDX                         ; 0057782f
    MOV dword ptr [EDX + 0x458],EDX     ; 00577831
    POP EDI                             ; 00577837
    POP ESI                             ; 00577838
    RET                                 ; 00577839

