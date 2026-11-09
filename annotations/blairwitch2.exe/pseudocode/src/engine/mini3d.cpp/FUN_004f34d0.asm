; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_mini3d_cpp_FUN_004f34d0(undefined2 *param_1,int param_2)
;
;
; XREF[3]:
;   engine_mini3d.cpp_FUN_004f3920 at 004f396c
;   engine_mini3d.cpp_FUN_004f3c40 at 004f3c90
;   engine_mini3d.cpp_FUN_004f3ef0 at 004f403d
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f34d0
        ;   Label: engine_mini3d.cpp_FUN_004f34d0
    PUSH ESI                            ; 004f34d1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f34d2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004f34d6
    CMP ESI,0xbb8                       ; 004f34da
    JG 0x004f3528                       ; 004f34e0
        ;   XREF to: 004f3528 (CONDITIONAL_JUMP)  ; LAB_004f3528
    TEST ESI,ESI                        ; 004f34e2
        ;   Label: LAB_004f34e2
    JLE 0x004f3520                      ; 004f34e4
        ;   XREF to: 004f3520 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 004f34e6
    MOV DX,word ptr [EBX + 0x4]         ; 004f34e8
        ;   Label: LAB_004f34e8
    MOV word ptr [EAX + 0x1d1215c],DX   ; 004f34ec
    MOV DX,word ptr [EBX + 0x2]         ; 004f34f3
    ADD EBX,0x6                         ; 004f34f7
    MOV word ptr [EAX + 0x1d1215e],DX   ; 004f34fa
    ADD EAX,0x6                         ; 004f3501
    MOV DX,word ptr [EBX + -0x6]        ; 004f3504
    DEC ESI                             ; 004f3508
    MOV word ptr [EAX + 0x1d1215a],DX   ; 004f3509
    TEST ESI,ESI                        ; 004f3510
    JG 0x004f34e8                       ; 004f3512
        ;   XREF to: 004f34e8 (CONDITIONAL_JUMP)  ; LAB_004f34e8
    LEA EAX,[EAX]                       ; 004f3514
    LEA EDX,[EDX]                       ; 004f351a
    MOV EDX,0x5ddbfc                    ; 004f3528
        ;   Label: LAB_004f3528
    MOV ECX,0x5ad                       ; 004f352d
    PUSH 0x5ddc11                       ; 004f3532
    MOV dword ptr [0x01d046a0],EDX      ; 004f3537 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004f353d | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004f3543
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004f3548
    JMP 0x004f34e2                      ; 004f354b
        ;   XREF to: 004f34e2 (UNCONDITIONAL_JUMP)  ; LAB_004f34e2

