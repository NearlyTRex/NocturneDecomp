; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0056f630(undefined1 *param_1,int param_2,int param_3,int param_4,int param_5)
;
;
; XREF[3]:
;   FUN_0056f510 at 0056f52d
;   FUN_0056f5c0 at 0056f612
;   FUN_00571fc0 at 00572142
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f630
        ;   Label: FUN_0056f630
    PUSH ESI                            ; 0056f631
    MOV EAX,dword ptr [ESP + 0xc]       ; 0056f632
    MOV EBX,dword ptr [ESP + 0x14]      ; 0056f636
    MOV ECX,dword ptr [ESP + 0x18]      ; 0056f63a
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0056f63e
    MOV ESI,dword ptr [ESP + 0x10]      ; 0056f642
    TEST ESI,ESI                        ; 0056f646
    JL 0x0056f676                       ; 0056f648
        ;   XREF to: 0056f676 (CONDITIONAL_JUMP)  ; LAB_0056f676
    CMP ESI,0xff                        ; 0056f64a
    JG 0x0056f676                       ; 0056f650
        ;   XREF to: 0056f676 (CONDITIONAL_JUMP)  ; LAB_0056f676
    TEST EBX,EBX                        ; 0056f652
    JL 0x0056f676                       ; 0056f654
        ;   XREF to: 0056f676 (CONDITIONAL_JUMP)  ; LAB_0056f676
    CMP EBX,0xff                        ; 0056f656
    JG 0x0056f676                       ; 0056f65c
        ;   XREF to: 0056f676 (CONDITIONAL_JUMP)  ; LAB_0056f676
    TEST ECX,ECX                        ; 0056f65e
    JL 0x0056f676                       ; 0056f660
        ;   XREF to: 0056f676 (CONDITIONAL_JUMP)  ; LAB_0056f676
    CMP ECX,0xff                        ; 0056f662
    JG 0x0056f676                       ; 0056f668
        ;   XREF to: 0056f676 (CONDITIONAL_JUMP)  ; LAB_0056f676
    TEST EDX,EDX                        ; 0056f66a
    JL 0x0056f676                       ; 0056f66c
        ;   XREF to: 0056f676 (CONDITIONAL_JUMP)  ; LAB_0056f676
    CMP EDX,0xff                        ; 0056f66e
    JLE 0x0056f67b                      ; 0056f674
        ;   XREF to: 0056f67b (CONDITIONAL_JUMP)  ; LAB_0056f67b
    XOR EAX,EAX                         ; 0056f676
        ;   Label: LAB_0056f676
    POP ESI                             ; 0056f678
    POP EBX                             ; 0056f679
    RET                                 ; 0056f67a
    MOV byte ptr [EAX + 0x1],BL         ; 0056f67b
        ;   Label: LAB_0056f67b
    MOV DH,byte ptr [ESP + 0x10]        ; 0056f67e
    MOV byte ptr [EAX + 0x2],CL         ; 0056f682
    MOV byte ptr [EAX + 0x3],DL         ; 0056f685
    MOV byte ptr [EAX],DH               ; 0056f688
    MOV EAX,0x1                         ; 0056f68a
    POP ESI                             ; 0056f68f
    POP EBX                             ; 0056f690
    RET                                 ; 0056f691

