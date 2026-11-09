; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_projectTransformedPoint_FUN_004e5590(int *param_1)
;
;
; XREF[3]:
;   core_flame.cpp_FUN_004a6090 at 004a68ae
;   core_setdir.cpp_FUN_0053f940 at 005404af
;   engine_matrix.c_projectCachedPoint_FUN_004e5570 at 004e5586
;
; Referenced Globals:
;   undefined4 DAT_01c6b598
;   undefined4 DAT_01c6b59c
;   undefined4 DAT_01c6b5a0
;   undefined4 DAT_01c6b5a4
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004e5590
        ;   Label: engine_matrix.c_projectTransformedPoint_FUN_004e5590
    PUSH EDI                            ; 004e5591
    PUSH EBP                            ; 004e5592
    MOV ESI,dword ptr [ESP + 0x10]      ; 004e5593
    MOV EBP,dword ptr [ESI + 0x4]       ; 004e5597
    MOV ECX,dword ptr [ESI + 0x8]       ; 004e559a
    MOV EDI,dword ptr [ESI]             ; 004e559d
    TEST ECX,ECX                        ; 004e559f
    JLE 0x004e5623                      ; 004e55a1
        ;   XREF to: 004e5623 (CONDITIONAL_JUMP)  ; LAB_004e5623
    XOR EAX,EAX                         ; 004e55a7
    CMP EDI,ECX                         ; 004e55a9
    JLE 0x004e55b2                      ; 004e55ab
        ;   XREF to: 004e55b2 (CONDITIONAL_JUMP)  ; LAB_004e55b2
    MOV EAX,0x1                         ; 004e55ad
    MOV EDX,ECX                         ; 004e55b2
        ;   Label: LAB_004e55b2
    NEG EDX                             ; 004e55b4
    CMP EDI,EDX                         ; 004e55b6
    JGE 0x004e55bc                      ; 004e55b8
        ;   XREF to: 004e55bc (CONDITIONAL_JUMP)  ; LAB_004e55bc
    OR AL,0x2                           ; 004e55ba
    CMP EBP,ECX                         ; 004e55bc
        ;   Label: LAB_004e55bc
    JLE 0x004e55c2                      ; 004e55be
        ;   XREF to: 004e55c2 (CONDITIONAL_JUMP)  ; LAB_004e55c2
    OR AL,0x4                           ; 004e55c0
    MOV EDX,ECX                         ; 004e55c2
        ;   Label: LAB_004e55c2
    NEG EDX                             ; 004e55c4
    CMP EBP,EDX                         ; 004e55c6
    JGE 0x004e55cc                      ; 004e55c8
        ;   XREF to: 004e55cc (CONDITIONAL_JUMP)  ; LAB_004e55cc
    OR AL,0x8                           ; 004e55ca
    TEST EAX,EAX                        ; 004e55cc
        ;   Label: LAB_004e55cc
    JZ 0x004e55dc                       ; 004e55ce
        ;   XREF to: 004e55dc (CONDITIONAL_JUMP)  ; LAB_004e55dc
    OR EAX,0x80000000                   ; 004e55d0
    MOV dword ptr [ESI + 0x10],EAX      ; 004e55d5
    POP EBP                             ; 004e55d8
    POP EDI                             ; 004e55d9
    POP ESI                             ; 004e55da
    RET                                 ; 004e55db
    PUSH EBX                            ; 004e55dc
        ;   Label: LAB_004e55dc
    MOV EAX,0x7fffffff                  ; 004e55dd
    MOV EDX,EAX                         ; 004e55e2
    SAR EDX,0x1f                        ; 004e55e4
    IDIV ECX                            ; 004e55e7
    MOV EBX,ECX                         ; 004e55e9
    MOV EDX,dword ptr [0x01c6b598]      ; 004e55eb | DAT_01c6b598
    MOV dword ptr [ESI + 0xc],EAX       ; 004e55f1
    MOV EAX,EDI                         ; 004e55f4
    IMUL EDX                            ; 004e55f6
    IDIV EBX                            ; 004e55f8
    MOV EDX,dword ptr [0x01c6b5a0]      ; 004e55fa | DAT_01c6b5a0
    MOV EBX,ECX                         ; 004e5600
    ADD EAX,EDX                         ; 004e5602
    MOV EDX,dword ptr [0x01c6b59c]      ; 004e5604 | DAT_01c6b59c
    MOV dword ptr [ESI + 0x10],EAX      ; 004e560a
    MOV EAX,EBP                         ; 004e560d
    IMUL EDX                            ; 004e560f
    IDIV EBX                            ; 004e5611
    MOV EDX,dword ptr [0x01c6b5a4]      ; 004e5613 | DAT_01c6b5a4
    ADD EAX,EDX                         ; 004e5619
    MOV dword ptr [ESI + 0x14],EAX      ; 004e561b
    POP EBX                             ; 004e561e
    POP EBP                             ; 004e561f
    POP EDI                             ; 004e5620
    POP ESI                             ; 004e5621
    RET                                 ; 004e5622
    MOV dword ptr [ESI + 0x10],0x80000010 ; 004e5623
        ;   Label: LAB_004e5623
    POP EBP                             ; 004e562a
    POP EDI                             ; 004e562b
    POP ESI                             ; 004e562c
    RET                                 ; 004e562d

