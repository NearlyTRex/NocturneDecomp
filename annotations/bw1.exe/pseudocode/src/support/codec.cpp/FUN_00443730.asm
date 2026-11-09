; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int support_codec_cpp_FUN_00443730(int *param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   core_game.cpp_FUN_004d6990 at 004d6cc1
;
; Called Functions:
;   support_codec.cpp_FUN_004431b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443730
        ;   Label: support_codec.cpp_FUN_00443730
    PUSH ESI                            ; 00443731
    PUSH EDI                            ; 00443732
    PUSH EBP                            ; 00443733
    MOV EBX,dword ptr [ESP + 0x14]      ; 00443734
    LEA EDI,[EBX + 0x18]                ; 00443738
    MOV EBP,dword ptr [ESP + 0x18]      ; 0044373b
    LEA ESI,[EBX + 0x4]                 ; 0044373f
    CMP dword ptr [EBX + 0x2c],0x0      ; 00443742
        ;   Label: LAB_00443742
    JL 0x00443760                       ; 00443746
        ;   XREF to: 00443760 (CONDITIONAL_JUMP)  ; LAB_00443760
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00443748
        ;   Label: LAB_00443748
    PUSH ECX                            ; 0044374c
    MOV EAX,dword ptr [EBX]             ; 0044374d
    PUSH EBX                            ; 0044374f
    CALL dword ptr [EAX + 0xc]          ; 00443750
    ADD ESP,0x8                         ; 00443753
    CMP EAX,0x1                         ; 00443756
    JZ 0x00443742                       ; 00443759
        ;   XREF to: 00443742 (CONDITIONAL_JUMP)  ; LAB_00443742
    POP EBP                             ; 0044375b
    POP EDI                             ; 0044375c
    POP ESI                             ; 0044375d
    POP EBX                             ; 0044375e
    RET                                 ; 0044375f
    PUSH EBP                            ; 00443760
        ;   Label: LAB_00443760
    PUSH EDI                            ; 00443761
    PUSH ESI                            ; 00443762
    CALL support_codec.cpp_FUN_004431b0 ; 00443763
        ;   XREF to: 004431b0 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_004431b0()
    ADD ESP,0xc                         ; 00443768
    TEST EAX,EAX                        ; 0044376b
    JL 0x00443774                       ; 0044376d
        ;   XREF to: 00443774 (CONDITIONAL_JUMP)  ; LAB_00443774
    MOV dword ptr [EBX + 0x2c],EAX      ; 0044376f
    JMP 0x00443748                      ; 00443772
        ;   XREF to: 00443748 (UNCONDITIONAL_JUMP)  ; LAB_00443748
    CMP EAX,-0x1                        ; 00443774
        ;   Label: LAB_00443774
    JNZ 0x00443783                      ; 00443777
        ;   XREF to: 00443783 (CONDITIONAL_JUMP)  ; LAB_00443783
    MOV EAX,0x1                         ; 00443779
    POP EBP                             ; 0044377e
    POP EDI                             ; 0044377f
    POP ESI                             ; 00443780
    POP EBX                             ; 00443781
    RET                                 ; 00443782
    XOR EAX,EAX                         ; 00443783
        ;   Label: LAB_00443783
    POP EBP                             ; 00443785
    POP EDI                             ; 00443786
    POP ESI                             ; 00443787
    POP EBX                             ; 00443788
    RET                                 ; 00443789

