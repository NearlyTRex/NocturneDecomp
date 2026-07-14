; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_100088b0(void)
;
;
; Referenced Globals:
;   void* PTR_DAT_10017088 = 10240860
;   undefined4 DAT_10017098
;   undefined4 DAT_100170a8
;   undefined4 DAT_100170b8
;   undefined4 DAT_100170f8
;   undefined4 DAT_1024085c
;   undefined4 DAT_10241860
;   undefined4 DAT_10241870
;
; Called Functions:
;   __amsg_exit
;   FUN_1000a750
;
; *****************************************************************************

section .text

    CMP dword ptr [0x10241860],0x0      ; 100088b0 | DAT_10241860
        ;   Label: FUN_100088b0
    PUSH ESI                            ; 100088b7
    JNZ 0x100088c6                      ; 100088b8
        ;   XREF to: 100088c6 (CONDITIONAL_JUMP)  ; LAB_100088c6
    MOV dword ptr [0x10241860],0x200    ; 100088ba | DAT_10241860
    JMP 0x100088d9                      ; 100088c4
        ;   XREF to: 100088d9 (UNCONDITIONAL_JUMP)  ; LAB_100088d9
    CMP dword ptr [0x10241860],0x14     ; 100088c6 | DAT_10241860
        ;   Label: LAB_100088c6
    JGE 0x100088d9                      ; 100088cd
        ;   XREF to: 100088d9 (CONDITIONAL_JUMP)  ; LAB_100088d9
    MOV dword ptr [0x10241860],0x14     ; 100088cf | DAT_10241860
    PUSH 0x4                            ; 100088d9
        ;   Label: LAB_100088d9
    MOV EAX,[0x10241860]                ; 100088db | DAT_10241860
    PUSH EAX                            ; 100088e0
    CALL FUN_1000a750                   ; 100088e1
        ;   XREF to: 1000a750 (UNCONDITIONAL_CALL)  ; undefined FUN_1000a750()
    ADD ESP,0x8                         ; 100088e6
    MOV [0x1024085c],EAX                ; 100088e9 | DAT_1024085c
    TEST EAX,EAX                        ; 100088ee
    JNZ 0x1000891b                      ; 100088f0
        ;   XREF to: 1000891b (CONDITIONAL_JUMP)  ; LAB_1000891b
    MOV dword ptr [0x10241860],0x14     ; 100088f2 | DAT_10241860
    PUSH 0x4                            ; 100088fc
    PUSH 0x14                           ; 100088fe
    CALL FUN_1000a750                   ; 10008900
        ;   XREF to: 1000a750 (UNCONDITIONAL_CALL)  ; undefined FUN_1000a750()
    ADD ESP,0x8                         ; 10008905
    MOV [0x1024085c],EAX                ; 10008908 | DAT_1024085c
    TEST EAX,EAX                        ; 1000890d
    JNZ 0x1000891b                      ; 1000890f
        ;   XREF to: 1000891b (CONDITIONAL_JUMP)  ; LAB_1000891b
    PUSH 0x1a                           ; 10008911
    CALL __amsg_exit                    ; 10008913
        ;   XREF to: 100058c0 (UNCONDITIONAL_CALL)  ; void __amsg_exit(int param_1)
    ADD ESP,0x4                         ; 10008918
    MOV ECX,0x10017088                  ; 1000891b | PTR_DAT_10017088
        ;   Label: LAB_1000891b
    XOR EAX,EAX                         ; 10008920
    MOV EDX,dword ptr [0x1024085c]      ; 10008922 | DAT_1024085c
        ;   Label: LAB_10008922
    ADD EAX,0x4                         ; 10008928
    MOV dword ptr [EDX + EAX*0x1 + -0x4],ECX ; 1000892b | PTR_DAT_10017088 | DAT_100170a8
    ADD ECX,0x20                        ; 1000892f
    CMP EAX,0x50                        ; 10008932
    JL 0x10008922                       ; 10008935
        ;   XREF to: 10008922 (CONDITIONAL_JUMP)  ; LAB_10008922
    XOR ESI,ESI                         ; 10008937
    MOV EDX,0x10017098                  ; 10008939 | DAT_10017098
    MOV EAX,ESI                         ; 1000893e
        ;   Label: LAB_1000893e
    MOV ECX,ESI                         ; 10008940
    AND EAX,0xffffffe7                  ; 10008942
    AND ECX,0x1f                        ; 10008945
    SAR EAX,0x3                         ; 10008948
    SHL ECX,0x2                         ; 1000894b
    MOV EAX,dword ptr [EAX + 0x10241870] ; 1000894e | DAT_10241870
    LEA ECX,[ECX + ECX*0x8]             ; 10008954
    MOV EAX,dword ptr [EAX + ECX*0x1]   ; 10008957
    CMP EAX,-0x1                        ; 1000895a
    JZ 0x10008963                       ; 1000895d
        ;   XREF to: 10008963 (CONDITIONAL_JUMP)  ; LAB_10008963
    TEST EAX,EAX                        ; 1000895f
    JNZ 0x10008969                      ; 10008961
        ;   XREF to: 10008969 (CONDITIONAL_JUMP)  ; LAB_10008969
    MOV dword ptr [EDX],0xffffffff      ; 10008963 | DAT_10017098 | DAT_100170b8
        ;   Label: LAB_10008963
    ADD EDX,0x20                        ; 10008969
        ;   Label: LAB_10008969
    INC ESI                             ; 1000896c
    CMP EDX,0x100170f8                  ; 1000896d | DAT_100170f8
    JC 0x1000893e                       ; 10008973
        ;   XREF to: 1000893e (CONDITIONAL_JUMP)  ; LAB_1000893e
    POP ESI                             ; 10008975
    RET                                 ; 10008976

