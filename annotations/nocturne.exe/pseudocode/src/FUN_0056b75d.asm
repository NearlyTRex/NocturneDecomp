; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * FUN_0056b75d(undefined4 *param_1,byte param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[2]:
;   crt_fstream.cpp_ifstream_ctor_FUN_00565072 at 00565092
;   crt_fstream.cpp_ofstream_ctor_FUN_0056511e at 0056513e
;
; Referenced Globals:
;   undefined4 DAT_005a4a18
;   void* PTR_FUN_005a4a24 = 0056b810
;   void* PTR_FUN_005a4a2c = 0056b7f8
;
; Called Functions:
;   FUN_0056b327
;   FUN_0056b503
;   FUN_0056cd9b
;   FUN_0056ff2a
;   FUN_0057042d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b75d
        ;   Label: FUN_0056b75d
    PUSH ESI                            ; 0056b75e
    PUSH EDI                            ; 0056b75f
    MOV EBX,dword ptr [ESP + 0x10]      ; 0056b760
    TEST byte ptr [ESP + 0x14],0x1      ; 0056b764
    JNZ 0x0056b780                      ; 0056b769
        ;   XREF to: 0056b780 (CONDITIONAL_JUMP)  ; LAB_0056b780
    MOV dword ptr [EBX],0x5a4a18        ; 0056b76b | DAT_005a4a18
    ADD EBX,0x48                        ; 0056b771
    PUSH EBX                            ; 0056b774
    CALL FUN_0056b503                   ; 0056b775
        ;   XREF to: 0056b503 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b503()
    ADD ESP,0x4                         ; 0056b77a
    LEA EBX,[EAX + -0x48]               ; 0056b77d
    ADD EBX,0x4                         ; 0056b780
        ;   Label: LAB_0056b780
    PUSH EBX                            ; 0056b783
    CALL FUN_0057042d                   ; 0056b784
        ;   XREF to: 0057042d (UNCONDITIONAL_CALL)  ; undefined FUN_0057042d()
    LEA EBX,[EAX + -0x4]                ; 0056b789
    MOV EAX,dword ptr [EBX]             ; 0056b78c
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b78e
    LEA ESI,[EBX + EAX*0x1]             ; 0056b791
    MOV dword ptr [ESI + -0x4],EAX      ; 0056b794
    MOV EAX,dword ptr [EBX]             ; 0056b797
    MOV dword ptr [EBX + 0x40],0x5a4a24 ; 0056b799 | PTR_FUN_005a4a24
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b7a0
    MOV dword ptr [EBX + EAX*0x1 + 0x28],0x5a4a2c ; 0056b7a3 | PTR_FUN_005a4a2c
    MOV EAX,dword ptr [EBX]             ; 0056b7ab
    ADD ESP,0x4                         ; 0056b7ad
    LEA ESI,[EBX + 0x4]                 ; 0056b7b0
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b7b3
    PUSH ESI                            ; 0056b7b6
    ADD EAX,EBX                         ; 0056b7b7
    PUSH EAX                            ; 0056b7b9
    CALL FUN_0056ff2a                   ; 0056b7ba
        ;   XREF to: 0056ff2a (UNCONDITIONAL_CALL)  ; undefined FUN_0056ff2a()
    ADD ESP,0x8                         ; 0056b7bf
    MOV EDX,dword ptr [ESP + 0x20]      ; 0056b7c2
    PUSH EDX                            ; 0056b7c6
    MOV ECX,dword ptr [ESP + 0x20]      ; 0056b7c7
    PUSH ECX                            ; 0056b7cb
    MOV EDI,dword ptr [ESP + 0x20]      ; 0056b7cc
    PUSH EDI                            ; 0056b7d0
    PUSH ESI                            ; 0056b7d1
    CALL FUN_0056cd9b                   ; 0056b7d2
        ;   XREF to: 0056cd9b (UNCONDITIONAL_CALL)  ; undefined FUN_0056cd9b()
    ADD ESP,0x10                        ; 0056b7d7
    TEST EAX,EAX                        ; 0056b7da
    JZ 0x0056b7e4                       ; 0056b7dc
        ;   XREF to: 0056b7e4 (CONDITIONAL_JUMP)  ; LAB_0056b7e4
    MOV EAX,EBX                         ; 0056b7de
        ;   Label: LAB_0056b7de
    POP EDI                             ; 0056b7e0
    POP ESI                             ; 0056b7e1
    POP EBX                             ; 0056b7e2
    RET                                 ; 0056b7e3
    MOV EAX,dword ptr [EBX]             ; 0056b7e4
        ;   Label: LAB_0056b7e4
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b7e6
    PUSH 0x3                            ; 0056b7e9
    ADD EAX,EBX                         ; 0056b7eb
    PUSH EAX                            ; 0056b7ed
    CALL FUN_0056b327                   ; 0056b7ee
        ;   XREF to: 0056b327 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b327()
    ADD ESP,0x8                         ; 0056b7f3
    JMP 0x0056b7de                      ; 0056b7f6
        ;   XREF to: 0056b7de (UNCONDITIONAL_JUMP)  ; LAB_0056b7de

