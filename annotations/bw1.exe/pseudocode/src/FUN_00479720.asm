; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00479720(char *param_1,char *param_2)
;
;
; XREF[2]:
;   FUN_00478ef0 at 00478f17
;   FUN_0049a480 at 0049a600
;
; Called Functions:
;   FUN_005c2500
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00479720
        ;   Label: FUN_00479720
    PUSH EDI                            ; 00479721
    MOV EDI,dword ptr [ESP + 0xc]       ; 00479722
    MOV ESI,dword ptr [ESP + 0x10]      ; 00479726
    PUSH 0x100                          ; 0047972a
    PUSH ESI                            ; 0047972f
    PUSH EDI                            ; 00479730
    CALL FUN_005c2500                   ; 00479731
        ;   XREF to: 005c2500 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2500()
    ADD ESP,0xc                         ; 00479736
    CMP EAX,EDI                         ; 00479739
    JNZ 0x00479745                      ; 0047973b
        ;   XREF to: 00479745 (CONDITIONAL_JUMP)  ; LAB_00479745
    MOV EAX,0x1                         ; 0047973d
    POP EDI                             ; 00479742
    POP ESI                             ; 00479743
    RET                                 ; 00479744
    PUSH EDI                            ; 00479745
        ;   Label: LAB_00479745
    MOV AL,byte ptr [ESI]               ; 00479746
        ;   Label: LAB_00479746
    MOV byte ptr [EDI],AL               ; 00479748
    CMP AL,0x0                          ; 0047974a
    JZ 0x0047975e                       ; 0047974c
        ;   XREF to: 0047975e (CONDITIONAL_JUMP)  ; LAB_0047975e
    MOV AL,byte ptr [ESI + 0x1]         ; 0047974e
    ADD ESI,0x2                         ; 00479751
    MOV byte ptr [EDI + 0x1],AL         ; 00479754
    ADD EDI,0x2                         ; 00479757
    CMP AL,0x0                          ; 0047975a
    JNZ 0x00479746                      ; 0047975c
        ;   XREF to: 00479746 (CONDITIONAL_JUMP)  ; LAB_00479746
    POP EDI                             ; 0047975e
        ;   Label: LAB_0047975e
    XOR EAX,EAX                         ; 0047975f
    POP EDI                             ; 00479761
    POP ESI                             ; 00479762
    RET                                 ; 00479763

