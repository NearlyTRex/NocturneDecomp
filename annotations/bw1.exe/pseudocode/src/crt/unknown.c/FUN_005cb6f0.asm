; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint crt_unknown_c_FUN_005cb6f0(WCHAR *param_1,byte *param_2,uint param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   crt_unknown.c_FUN_005c5854 at 005c5913
;   crt_unknown.c_FUN_005c594c at 005c5a3a
;   crt_unknown.c_FUN_005cec10 at 005cec33
;
; Referenced Globals:
;   void* PTR_MultiByteToWideChar_005d0604 = 001d1084
;   undefined4 DAT_00626ad8
;   undefined4 DAT_02c9f6e0
;
; Called Functions:
;   crt_unknown.c_FUN_005c9110
;   MultiByteToWideChar
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cb6f0
        ;   Label: crt_unknown.c_FUN_005cb6f0
    PUSH ESI                            ; 005cb6f1
    PUSH EDI                            ; 005cb6f2
    PUSH EBP                            ; 005cb6f3
    MOV EBP,ESP                         ; 005cb6f4
    SUB ESP,0x4                         ; 005cb6f6
    MOV ESI,dword ptr [EBP + 0x14]      ; 005cb6f9
    MOV EBX,dword ptr [EBP + 0x18]      ; 005cb6fc
    TEST EBX,EBX                        ; 005cb6ff
    JNZ 0x005cb70a                      ; 005cb701
        ;   XREF to: 005cb70a (CONDITIONAL_JUMP)  ; LAB_005cb70a
    XOR EAX,EAX                         ; 005cb703
    JMP 0x005cb795                      ; 005cb705
        ;   XREF to: 005cb795 (UNCONDITIONAL_JUMP)  ; LAB_005cb795
    CMP dword ptr [EBP + 0x1c],0x0      ; 005cb70a
        ;   Label: LAB_005cb70a
    JBE 0x005cb790                      ; 005cb70e
        ;   XREF to: 005cb790 (CONDITIONAL_JUMP)  ; LAB_005cb790
    CMP byte ptr [EBX],0x0              ; 005cb714
    JNZ 0x005cb72b                      ; 005cb717
        ;   XREF to: 005cb72b (CONDITIONAL_JUMP)  ; LAB_005cb72b
    TEST ESI,ESI                        ; 005cb719
    JZ 0x005cb722                       ; 005cb71b
        ;   XREF to: 005cb722 (CONDITIONAL_JUMP)  ; LAB_005cb722
    MOV word ptr [ESI],0x0              ; 005cb71d
    XOR EAX,EAX                         ; 005cb722
        ;   Label: LAB_005cb722
    MOV ESP,EBP                         ; 005cb724
    POP EBP                             ; 005cb726
    POP EDI                             ; 005cb727
    POP ESI                             ; 005cb728
    POP EBX                             ; 005cb729
    RET                                 ; 005cb72a
    CMP dword ptr [0x02c9f6e0],0x0      ; 005cb72b | DAT_02c9f6e0
        ;   Label: LAB_005cb72b
    JZ 0x005cb74d                       ; 005cb732
        ;   XREF to: 005cb74d (CONDITIONAL_JUMP)  ; LAB_005cb74d
    XOR EAX,EAX                         ; 005cb734
    MOV AL,byte ptr [EBX]               ; 005cb736
    MOV AL,byte ptr [EAX + 0x2c9f6f1]   ; 005cb738
    AND AL,0x1                          ; 005cb73e
    AND EAX,0xff                        ; 005cb740
    JZ 0x005cb74d                       ; 005cb745
        ;   XREF to: 005cb74d (CONDITIONAL_JUMP)  ; LAB_005cb74d
    CMP byte ptr [EBX + 0x1],0x0        ; 005cb747
    JZ 0x005cb790                       ; 005cb74b
        ;   XREF to: 005cb790 (CONDITIONAL_JUMP)  ; LAB_005cb790
    PUSH EBX                            ; 005cb74d
        ;   Label: LAB_005cb74d
    CALL crt_unknown.c_FUN_005c9110     ; 005cb74e
        ;   XREF to: 005c9110 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9110()
    ADD ESP,0x4                         ; 005cb753
    PUSH 0x1                            ; 005cb756
    LEA EDX,[EBP + -0x4]                ; 005cb758
    PUSH EDX                            ; 005cb75b
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005cb75c
    MOV EDI,EAX                         ; 005cb75f
    CMP EAX,EDX                         ; 005cb761
    JBE 0x005cb767                      ; 005cb763
        ;   XREF to: 005cb767 (CONDITIONAL_JUMP)  ; LAB_005cb767
    MOV EAX,EDX                         ; 005cb765
    PUSH EAX                            ; 005cb767
        ;   Label: LAB_005cb767
    PUSH EBX                            ; 005cb768
    PUSH 0x8                            ; 005cb769
    MOV EBX,dword ptr [0x00626ad8]      ; 005cb76b | DAT_00626ad8
    PUSH EBX                            ; 005cb771
    CALL dword ptr CS:[0x5d0604]        ; 005cb772 | PTR_MultiByteToWideChar_005d0604
    TEST EAX,EAX                        ; 005cb779
    JZ 0x005cb790                       ; 005cb77b
        ;   XREF to: 005cb790 (CONDITIONAL_JUMP)  ; LAB_005cb790
    TEST ESI,ESI                        ; 005cb77d
    JZ 0x005cb787                       ; 005cb77f
        ;   XREF to: 005cb787 (CONDITIONAL_JUMP)  ; LAB_005cb787
    MOV EAX,dword ptr [EBP + -0x4]      ; 005cb781
    MOV word ptr [ESI],AX               ; 005cb784
    MOV EAX,EDI                         ; 005cb787
        ;   Label: LAB_005cb787
    MOV ESP,EBP                         ; 005cb789
    POP EBP                             ; 005cb78b
    POP EDI                             ; 005cb78c
    POP ESI                             ; 005cb78d
    POP EBX                             ; 005cb78e
    RET                                 ; 005cb78f
    MOV EAX,0xffffffff                  ; 005cb790
        ;   Label: LAB_005cb790
    MOV ESP,EBP                         ; 005cb795
        ;   Label: LAB_005cb795
    POP EBP                             ; 005cb797
    POP EDI                             ; 005cb798
    POP ESI                             ; 005cb799
    POP EBX                             ; 005cb79a
    RET                                 ; 005cb79b

