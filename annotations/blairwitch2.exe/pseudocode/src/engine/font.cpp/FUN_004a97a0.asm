; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_font_cpp_FUN_004a97a0(int param_1)
;
;
; XREF[1]:
;   engine_font.cpp_FUN_004ab840 at 004ab945
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004f3380
;   engine_mini3d.cpp_FUN_004f3470
;   engine_mini3d.cpp_FUN_004f3550
;   engine_mini3d.cpp_FUN_004f3710
;   engine_mini3d.cpp_FUN_004f3720
;   engine_mini3d.cpp_FUN_004f3730
;   engine_mini3d.cpp_FUN_004f40a0
;   engine_mini3d.cpp_FUN_004f5d90
;   engine_palette.cpp_FUN_00510d50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a97a0
        ;   Label: engine_font.cpp_FUN_004a97a0
    PUSH EBP                            ; 004a97a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004a97a2
    CMP dword ptr [EBX + 0x4210],0x0    ; 004a97a6
    JNZ 0x004a97d8                      ; 004a97ad
        ;   XREF to: 004a97d8 (CONDITIONAL_JUMP)  ; LAB_004a97d8
    CMP dword ptr [EBX + 0x1dd8],0x0    ; 004a97af
    JLE 0x004a97c1                      ; 004a97b6
        ;   XREF to: 004a97c1 (CONDITIONAL_JUMP)  ; LAB_004a97c1
    CMP dword ptr [EBX + 0x1ddc],0x0    ; 004a97b8
    JG 0x004a97ea                       ; 004a97bf
        ;   XREF to: 004a97ea (CONDITIONAL_JUMP)  ; LAB_004a97ea
    MOV dword ptr [EBX + 0x1ddc],0x0    ; 004a97c1
        ;   Label: LAB_004a97c1
    MOV dword ptr [EBX + 0x1dd8],0x0    ; 004a97cb
    POP EBP                             ; 004a97d5
    POP EBX                             ; 004a97d6
    RET                                 ; 004a97d7
    MOV EDX,dword ptr [EBX + 0x4214]    ; 004a97d8
        ;   Label: LAB_004a97d8
    PUSH EDX                            ; 004a97de
    CALL engine_palette.cpp_FUN_00510d50 ; 004a97df
        ;   XREF to: 00510d50 (UNCONDITIONAL_CALL)  ; undefined engine_palette.cpp_FUN_00510d50()
    ADD ESP,0x4                         ; 004a97e4
    POP EBP                             ; 004a97e7
    POP EBX                             ; 004a97e8
    RET                                 ; 004a97e9
    PUSH EDI                            ; 004a97ea
        ;   Label: LAB_004a97ea
    LEA EAX,[EBX + 0x1db4]              ; 004a97eb
    PUSH EAX                            ; 004a97f1
    CALL engine_mini3d.cpp_FUN_004f3380 ; 004a97f2
        ;   XREF to: 004f3380 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3380()
    ADD ESP,0x4                         ; 004a97f7
    PUSH 0x0                            ; 004a97fa
    CALL engine_mini3d.cpp_FUN_004f3550 ; 004a97fc
        ;   XREF to: 004f3550 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3550()
    ADD ESP,0x4                         ; 004a9801
    PUSH 0x0                            ; 004a9804
    CALL engine_mini3d.cpp_FUN_004f3470 ; 004a9806
        ;   XREF to: 004f3470 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3470()
    ADD ESP,0x4                         ; 004a980b
    CALL engine_mini3d.cpp_FUN_004f5d90 ; 004a980e
        ;   XREF to: 004f5d90 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f5d90()
    CALL engine_mini3d.cpp_FUN_004f3710 ; 004a9813
        ;   XREF to: 004f3710 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3710()
    CALL engine_mini3d.cpp_FUN_004f3720 ; 004a9818
        ;   XREF to: 004f3720 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3720()
    MOV EAX,dword ptr [EBX + 0x1ddc]    ; 004a981d
    MOV EDX,EAX                         ; 004a9823
    MOV ECX,0x3                         ; 004a9825
    SAR EDX,0x1f                        ; 004a982a
    IDIV ECX                            ; 004a982d
    PUSH EAX                            ; 004a982f
    MOV EDI,dword ptr [EBX + 0x1dd4]    ; 004a9830
    PUSH EDI                            ; 004a9836
    MOV EBP,dword ptr [EBX + 0x1dd8]    ; 004a9837
    PUSH EBP                            ; 004a983d
    MOV EAX,dword ptr [EBX + 0x1dd0]    ; 004a983e
    PUSH EAX                            ; 004a9844
    CALL engine_mini3d.cpp_FUN_004f40a0 ; 004a9845
        ;   XREF to: 004f40a0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f40a0()
    ADD ESP,0x10                        ; 004a984a
    CALL engine_mini3d.cpp_FUN_004f3730 ; 004a984d
        ;   XREF to: 004f3730 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3730()
    PUSH 0x1                            ; 004a9852
    CALL engine_mini3d.cpp_FUN_004f3470 ; 004a9854
        ;   XREF to: 004f3470 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3470()
    ADD ESP,0x4                         ; 004a9859
    PUSH 0xc0                           ; 004a985c
    CALL engine_mini3d.cpp_FUN_004f3550 ; 004a9861
        ;   XREF to: 004f3550 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3550()
    ADD ESP,0x4                         ; 004a9866
    POP EDI                             ; 004a9869
    JMP 0x004a97c1                      ; 004a986a
        ;   XREF to: 004a97c1 (UNCONDITIONAL_JUMP)  ; LAB_004a97c1

