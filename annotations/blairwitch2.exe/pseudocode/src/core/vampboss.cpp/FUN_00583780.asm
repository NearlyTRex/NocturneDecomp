; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_vampboss_cpp_FUN_00583780(int param_1,int *param_2)
;
;
; Called Functions:
;   core_charactr.cpp_FUN_00427680
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00583780
        ;   Label: core_vampboss.cpp_FUN_00583780
    PUSH ESI                            ; 00583781
    MOV ESI,dword ptr [ESP + 0xc]       ; 00583782
    MOV EBX,dword ptr [ESP + 0x10]      ; 00583786
    CMP dword ptr [EBX],0x2             ; 0058378a
    JNZ 0x00583794                      ; 0058378d
        ;   XREF to: 00583794 (CONDITIONAL_JUMP)  ; LAB_00583794
    XOR EAX,EAX                         ; 0058378f
        ;   Label: LAB_0058378f
    POP ESI                             ; 00583791
    POP EBX                             ; 00583792
    RET                                 ; 00583793
    PUSH ESI                            ; 00583794
        ;   Label: LAB_00583794
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 00583795
    CALL dword ptr [EAX + 0x114]        ; 0058379b
    ADD ESP,0x4                         ; 005837a1
    CMP EAX,0x1                         ; 005837a4
    JG 0x0058378f                       ; 005837a7
        ;   XREF to: 0058378f (CONDITIONAL_JUMP)  ; LAB_0058378f
    MOV ECX,dword ptr [EBX]             ; 005837a9
    CMP ECX,0x1                         ; 005837ab
    JNZ 0x005837ca                      ; 005837ae
        ;   XREF to: 005837ca (CONDITIONAL_JUMP)  ; LAB_005837ca
    CMP dword ptr [ESI + 0xc2f3c],0x2   ; 005837b0
        ;   Label: LAB_005837b0
    JNZ 0x005837cf                      ; 005837b7
        ;   XREF to: 005837cf (CONDITIONAL_JUMP)  ; LAB_005837cf
    ADD ESI,0x10af8                     ; 005837b9
    MOV EAX,0x1                         ; 005837bf
    MOV dword ptr [EBX + 0x20],ESI      ; 005837c4
    POP ESI                             ; 005837c7
    POP EBX                             ; 005837c8
    RET                                 ; 005837c9
    CMP ECX,0x3                         ; 005837ca
        ;   Label: LAB_005837ca
    JZ 0x005837b0                       ; 005837cd
        ;   XREF to: 005837b0 (CONDITIONAL_JUMP)  ; LAB_005837b0
    PUSH EBX                            ; 005837cf
        ;   Label: LAB_005837cf
    PUSH ESI                            ; 005837d0
    CALL core_charactr.cpp_FUN_00427680 ; 005837d1
        ;   XREF to: 00427680 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00427680()
    ADD ESP,0x8                         ; 005837d6
    POP ESI                             ; 005837d9
    POP EBX                             ; 005837da
    RET                                 ; 005837db

