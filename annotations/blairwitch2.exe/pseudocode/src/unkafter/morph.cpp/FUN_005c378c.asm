; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_morph_cpp_FUN_005c378c(LPVOID param_1)
;
;
; XREF[1]:
;   unkafter_morph.cpp_FUN_005c37ec at 005c37f9
;
; Referenced Globals:
;   void* PTR_VirtualFree_005c8664 = 001c9272
;   undefined4 DAT_0061eea0
;   undefined4 DAT_0061eea4
;   undefined4 DAT_0061eea8
;   undefined4 DAT_02680150
;
; Called Functions:
;   VirtualFree
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c378c
        ;   Label: unkafter_morph.cpp_FUN_005c378c
    PUSH ESI                            ; 005c378d
    MOV ESI,dword ptr [ESP + 0xc]       ; 005c378e
    PUSH 0x8000                         ; 005c3792
    PUSH 0x0                            ; 005c3797
    PUSH ESI                            ; 005c3799
    MOV EBX,dword ptr [ESI + 0x8]       ; 005c379a
    CALL dword ptr CS:[0x5c8664]        ; 005c379d | PTR_VirtualFree_005c8664
    TEST EAX,EAX                        ; 005c37a4
    JNZ 0x005c37b0                      ; 005c37a6
        ;   XREF to: 005c37b0 (CONDITIONAL_JUMP)  ; LAB_005c37b0
    MOV EAX,0xffffffff                  ; 005c37a8
    POP ESI                             ; 005c37ad
    POP EBX                             ; 005c37ae
    RET                                 ; 005c37af
    CMP ESI,dword ptr [0x0061eea4]      ; 005c37b0 | DAT_0061eea4
        ;   Label: LAB_005c37b0
    JNZ 0x005c37d4                      ; 005c37b6
        ;   XREF to: 005c37d4 (CONDITIONAL_JUMP)  ; LAB_005c37d4
    TEST EBX,EBX                        ; 005c37b8
    JZ 0x005c37c4                       ; 005c37ba
        ;   XREF to: 005c37c4 (CONDITIONAL_JUMP)  ; LAB_005c37c4
    MOV dword ptr [0x0061eea4],EBX      ; 005c37bc | DAT_0061eea4
    JMP 0x005c37d4                      ; 005c37c2
        ;   XREF to: 005c37d4 (UNCONDITIONAL_JUMP)  ; LAB_005c37d4
    MOV EAX,[0x0061eea0]                ; 005c37c4 | DAT_0061eea0
        ;   Label: LAB_005c37c4
    MOV dword ptr [0x0061eea8],EBX      ; 005c37c9 | DAT_0061eea8
    MOV [0x0061eea4],EAX                ; 005c37cf | DAT_0061eea4
    MOV ECX,dword ptr [0x02680150]      ; 005c37d4 | DAT_02680150
        ;   Label: LAB_005c37d4
    CMP ESI,ECX                         ; 005c37da
    JNZ 0x005c37e6                      ; 005c37dc
        ;   XREF to: 005c37e6 (CONDITIONAL_JUMP)  ; LAB_005c37e6
    XOR ESI,ECX                         ; 005c37de
    MOV dword ptr [0x02680150],ESI      ; 005c37e0 | DAT_02680150
    XOR EAX,EAX                         ; 005c37e6
        ;   Label: LAB_005c37e6
    POP ESI                             ; 005c37e8
    POP EBX                             ; 005c37e9
    RET                                 ; 005c37ea

