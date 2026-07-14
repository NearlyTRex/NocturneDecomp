; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_10008b80(uint param_1,HANDLE param_2)
;
;
; XREF[2]:
;   FUN_10008d20 at 10008da0
;   FUN_100093f0 at 100096c7
;
; Referenced Globals:
;   undefined4 DAT_10016c74
;   undefined4 DAT_10241870
;   undefined4 DAT_10241970
;   void* PTR_SetStdHandle_1024223c = 0024260a
;
; Called Functions:
;   FUN_10008a20
;   FUN_10008a30
;   SetStdHandle
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 10008b80
        ;   Label: FUN_10008b80
    PUSH EBX                            ; 10008b84
    PUSH ESI                            ; 10008b85
    CMP ECX,dword ptr [0x10241970]      ; 10008b86 | DAT_10241970
    PUSH EDI                            ; 10008b8c
    JNC 0x10008c05                      ; 10008b8d
        ;   XREF to: 10008c05 (CONDITIONAL_JUMP)  ; LAB_10008c05
    MOV EAX,ECX                         ; 10008b8f
    AND EAX,0xffffffe7                  ; 10008b91
    SAR EAX,0x3                         ; 10008b94
    LEA EDI,[EAX + 0x10241870]          ; 10008b97 | DAT_10241870
    MOV EAX,ECX                         ; 10008b9d
    AND EAX,0x1f                        ; 10008b9f
    MOV EDX,dword ptr [EDI]             ; 10008ba2 | DAT_10241870
    SHL EAX,0x2                         ; 10008ba4
    LEA ESI,[EAX + EAX*0x8]             ; 10008ba7
    CMP dword ptr [EDX + ESI*0x1],-0x1  ; 10008baa
    JNZ 0x10008c05                      ; 10008bae
        ;   XREF to: 10008c05 (CONDITIONAL_JUMP)  ; LAB_10008c05
    CMP dword ptr [0x10016c74],0x1      ; 10008bb0 | DAT_10016c74
    JNZ 0x10008bf6                      ; 10008bb7
        ;   XREF to: 10008bf6 (CONDITIONAL_JUMP)  ; LAB_10008bf6
    TEST ECX,ECX                        ; 10008bb9
    JZ 0x10008bc9                       ; 10008bbb
        ;   XREF to: 10008bc9 (CONDITIONAL_JUMP)  ; LAB_10008bc9
    CMP ECX,0x1                         ; 10008bbd
    JZ 0x10008bd8                       ; 10008bc0
        ;   XREF to: 10008bd8 (CONDITIONAL_JUMP)  ; LAB_10008bd8
    CMP ECX,0x2                         ; 10008bc2
    JZ 0x10008be7                       ; 10008bc5
        ;   XREF to: 10008be7 (CONDITIONAL_JUMP)  ; LAB_10008be7
    JMP 0x10008bf6                      ; 10008bc7
        ;   XREF to: 10008bf6 (UNCONDITIONAL_JUMP)  ; LAB_10008bf6
    MOV EBX,dword ptr [ESP + 0x14]      ; 10008bc9
        ;   Label: LAB_10008bc9
    PUSH EBX                            ; 10008bcd
    PUSH -0xa                           ; 10008bce
    CALL dword ptr [0x1024223c]         ; 10008bd0 | PTR_SetStdHandle_1024223c
    JMP 0x10008bfa                      ; 10008bd6
        ;   XREF to: 10008bfa (UNCONDITIONAL_JUMP)  ; LAB_10008bfa
    MOV EBX,dword ptr [ESP + 0x14]      ; 10008bd8
        ;   Label: LAB_10008bd8
    PUSH EBX                            ; 10008bdc
    PUSH -0xb                           ; 10008bdd
    CALL dword ptr [0x1024223c]         ; 10008bdf | PTR_SetStdHandle_1024223c
    JMP 0x10008bfa                      ; 10008be5
        ;   XREF to: 10008bfa (UNCONDITIONAL_JUMP)  ; LAB_10008bfa
    MOV EBX,dword ptr [ESP + 0x14]      ; 10008be7
        ;   Label: LAB_10008be7
    PUSH EBX                            ; 10008beb
    PUSH -0xc                           ; 10008bec
    CALL dword ptr [0x1024223c]         ; 10008bee | PTR_SetStdHandle_1024223c
    JMP 0x10008bfa                      ; 10008bf4
        ;   XREF to: 10008bfa (UNCONDITIONAL_JUMP)  ; LAB_10008bfa
    MOV EBX,dword ptr [ESP + 0x14]      ; 10008bf6
        ;   Label: LAB_10008bf6
    MOV EAX,dword ptr [EDI]             ; 10008bfa | DAT_10241870
        ;   Label: LAB_10008bfa
    POP EDI                             ; 10008bfc
    MOV dword ptr [EAX + ESI*0x1],EBX   ; 10008bfd
    XOR EAX,EAX                         ; 10008c00
    POP ESI                             ; 10008c02
    POP EBX                             ; 10008c03
    RET                                 ; 10008c04
    CALL FUN_10008a20                   ; 10008c05
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a20()
        ;   Label: LAB_10008c05
    MOV dword ptr [EAX],0x9             ; 10008c0a
    CALL FUN_10008a30                   ; 10008c10
        ;   XREF to: 10008a30 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a30()
    POP EDI                             ; 10008c15
    MOV dword ptr [EAX],0x0             ; 10008c16
    MOV EAX,0xffffffff                  ; 10008c1c
    POP ESI                             ; 10008c21
    POP EBX                             ; 10008c22
    RET                                 ; 10008c23

