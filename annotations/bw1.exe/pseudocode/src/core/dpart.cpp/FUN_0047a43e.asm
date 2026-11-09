; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * core_dpart_cpp_FUN_0047a43e(int param_1,int *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01bc0784
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 0047a43e
        ;   Label: core_dpart.cpp_FUN_0047a43e
    PUSH EBX                            ; 0047a440
    PUSH ESI                            ; 0047a441
    MOV EBX,dword ptr [0x01bc0784]      ; 0047a442 | DAT_01bc0784
    MOV ECX,dword ptr [ESP + 0xc]       ; 0047a448
    MOV ESI,dword ptr [ESP + 0x10]      ; 0047a44c
    MOV EAX,0x1bc0788                   ; 0047a450
    XOR EDX,EDX                         ; 0047a455
    TEST EBX,EBX                        ; 0047a457
    JLE 0x0047a46b                      ; 0047a459
        ;   XREF to: 0047a46b (CONDITIONAL_JUMP)  ; LAB_0047a46b
    CMP ECX,dword ptr [EAX]             ; 0047a45b
        ;   Label: LAB_0047a45b
    JNZ 0x0047a463                      ; 0047a45d
        ;   XREF to: 0047a463 (CONDITIONAL_JUMP)  ; LAB_0047a463
    CMP EAX,ESI                         ; 0047a45f
    JNZ 0x0047a46d                      ; 0047a461
        ;   XREF to: 0047a46d (CONDITIONAL_JUMP)  ; LAB_0047a46d
    INC EDX                             ; 0047a463
        ;   Label: LAB_0047a463
    ADD EAX,0x50                        ; 0047a464
    CMP EDX,EBX                         ; 0047a467
    JL 0x0047a45b                       ; 0047a469
        ;   XREF to: 0047a45b (CONDITIONAL_JUMP)  ; LAB_0047a45b
    XOR EAX,EAX                         ; 0047a46b
        ;   Label: LAB_0047a46b
    MOV dword ptr [0x01bc0784],EBX      ; 0047a46d | DAT_01bc0784
        ;   Label: LAB_0047a46d
    POP ESI                             ; 0047a473
    POP EBX                             ; 0047a474
    RET                                 ; 0047a475

