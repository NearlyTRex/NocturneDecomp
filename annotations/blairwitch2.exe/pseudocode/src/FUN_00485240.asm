; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00485240(int *param_1)
;
;
; XREF[4]:
;   FUN_0047b1f0 at 0047b5fa
;   FUN_0047b800 at 0047b9be
;   FUN_0047c0f0 at 0047c685
;   FUN_00482770 at 00482869
;
; Referenced Globals:
;   undefined4 DAT_01c26410
;   undefined4 DAT_01c2a37c
;   undefined4 DAT_01c2a380
;   undefined4 DAT_01c2a384
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00485240
        ;   Label: FUN_00485240
    MOV ECX,dword ptr [0x01c26410]      ; 00485241 | DAT_01c26410
    MOV EAX,dword ptr [ESP + 0x8]       ; 00485247
    CMP dword ptr [EAX],0x0             ; 0048524b
    JZ 0x0048527e                       ; 0048524e
        ;   XREF to: 0048527e (CONDITIONAL_JUMP)  ; LAB_0048527e
    XOR EDX,EDX                         ; 00485250
        ;   Label: LAB_00485250
    CMP ECX,EAX                         ; 00485252
        ;   Label: LAB_00485252
    JNZ 0x004852b5                      ; 00485254
        ;   XREF to: 004852b5 (CONDITIONAL_JUMP)  ; LAB_004852b5
    MOV BH,byte ptr [0x01c2a384]        ; 00485256 | DAT_01c2a384
    MOV dword ptr [EAX + 0x18],EDX      ; 0048525c
    TEST BH,0x1                         ; 0048525f
    JNZ 0x004852b1                      ; 00485262
        ;   XREF to: 004852b1 (CONDITIONAL_JUMP)  ; LAB_004852b1
    XOR ECX,EAX                         ; 00485264
    TEST EDX,EDX                        ; 00485266
    JZ 0x004852b1                       ; 00485268
        ;   XREF to: 004852b1 (CONDITIONAL_JUMP)  ; LAB_004852b1
    MOV dword ptr [EAX + 0x18],0x0      ; 0048526a
    MOV EAX,0x1                         ; 00485271
    MOV dword ptr [0x01c26410],ECX      ; 00485276 | DAT_01c26410
        ;   Label: LAB_00485276
    POP EBX                             ; 0048527c
    RET                                 ; 0048527d
    MOV EDX,dword ptr [0x01c2a37c]      ; 0048527e | DAT_01c2a37c
        ;   Label: LAB_0048527e
    CMP EDX,dword ptr [EAX + 0x8]       ; 00485284
    JL 0x00485250                       ; 00485287
        ;   XREF to: 00485250 (CONDITIONAL_JUMP)  ; LAB_00485250
    MOV EDX,dword ptr [0x01c2a380]      ; 00485289 | DAT_01c2a380
    CMP EDX,dword ptr [EAX + 0xc]       ; 0048528f
    JL 0x00485250                       ; 00485292
        ;   XREF to: 00485250 (CONDITIONAL_JUMP)  ; LAB_00485250
    MOV EDX,dword ptr [0x01c2a37c]      ; 00485294 | DAT_01c2a37c
    CMP EDX,dword ptr [EAX + 0x10]      ; 0048529a
    JGE 0x00485250                      ; 0048529d
        ;   XREF to: 00485250 (CONDITIONAL_JUMP)  ; LAB_00485250
    MOV EDX,dword ptr [0x01c2a380]      ; 0048529f | DAT_01c2a380
    CMP EDX,dword ptr [EAX + 0x14]      ; 004852a5
    JGE 0x00485250                      ; 004852a8
        ;   XREF to: 00485250 (CONDITIONAL_JUMP)  ; LAB_00485250
    MOV EDX,0x1                         ; 004852aa
    JMP 0x00485252                      ; 004852af
        ;   XREF to: 00485252 (UNCONDITIONAL_JUMP)  ; LAB_00485252
    XOR EAX,EAX                         ; 004852b1
        ;   Label: LAB_004852b1
    JMP 0x00485276                      ; 004852b3
        ;   XREF to: 00485276 (UNCONDITIONAL_JUMP)  ; LAB_00485276
    TEST ECX,ECX                        ; 004852b5
        ;   Label: LAB_004852b5
    JNZ 0x004852c6                      ; 004852b7
        ;   XREF to: 004852c6 (CONDITIONAL_JUMP)  ; LAB_004852c6
    TEST byte ptr [0x01c2a384],0x1      ; 004852b9 | DAT_01c2a384
    JZ 0x004852c6                       ; 004852c0
        ;   XREF to: 004852c6 (CONDITIONAL_JUMP)  ; LAB_004852c6
    TEST EDX,EDX                        ; 004852c2
    JNZ 0x004852d0                      ; 004852c4
        ;   XREF to: 004852d0 (CONDITIONAL_JUMP)  ; LAB_004852d0
    XOR EAX,EAX                         ; 004852c6
        ;   Label: LAB_004852c6
    MOV dword ptr [0x01c26410],ECX      ; 004852c8 | DAT_01c26410
    POP EBX                             ; 004852ce
    RET                                 ; 004852cf
    MOV ECX,EAX                         ; 004852d0
        ;   Label: LAB_004852d0
    MOV dword ptr [EAX + 0x18],0x1      ; 004852d2
    XOR EAX,EAX                         ; 004852d9
    MOV dword ptr [0x01c26410],ECX      ; 004852db | DAT_01c26410
    POP EBX                             ; 004852e1
    RET                                 ; 004852e2

