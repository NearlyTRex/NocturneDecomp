; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bodypart_cpp_FUN_00419b10(int param_1,CVector3f *param_2)
;
;
; Called Functions:
;   core_bodypart.cpp_FUN_0041ad40
;   core_box.cpp_CBox_setupVelocities_FUN_00420450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419b10
        ;   Label: core_bodypart.cpp_FUN_00419b10
    SUB ESP,0xc                         ; 00419b11
    MOV EBX,dword ptr [ESP + 0x14]      ; 00419b14
    PUSH EBX                            ; 00419b18
    MOV dword ptr [EBX + 0xf2c],0x0     ; 00419b19
    CALL core_bodypart.cpp_FUN_0041ad40 ; 00419b23
        ;   XREF to: 0041ad40 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_0041ad40()
    ADD ESP,0x4                         ; 00419b28
    MOV EDX,dword ptr [ESP + 0x18]      ; 00419b2b
    TEST EDX,EDX                        ; 00419b2f
    JNZ 0x00419b42                      ; 00419b31
        ;   XREF to: 00419b42 (CONDITIONAL_JUMP)  ; LAB_00419b42
    MOV dword ptr [EBX + 0xcbc],0x41200000 ; 00419b33
    ADD ESP,0xc                         ; 00419b3d
    POP EBX                             ; 00419b40
    RET                                 ; 00419b41
    PUSH EDI                            ; 00419b42
        ;   Label: LAB_00419b42
    LEA EAX,[ESP + 0x4]                 ; 00419b43
    PUSH EAX                            ; 00419b47
    MOV EDI,0x4116cbe4                  ; 00419b48
    XOR ECX,ECX                         ; 00419b4d
    PUSH EDX                            ; 00419b4f
    LEA EAX,[EBX + 0xcd0]               ; 00419b50
    MOV dword ptr [ESP + 0x14],ECX      ; 00419b56
    PUSH EAX                            ; 00419b5a
    MOV dword ptr [ESP + 0x14],ECX      ; 00419b5b
    MOV dword ptr [ESP + 0x10],EDI      ; 00419b5f
    CALL core_box.cpp_CBox_setupVelocities_FUN_00420450 ; 00419b63
        ;   XREF to: 00420450 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupVelocities_FUN_00420450(CBox * this_ptr, CVector3f * linear_velocity, CVector3f * angular_velocity)
    ADD ESP,0xc                         ; 00419b68
    POP EDI                             ; 00419b6b
    MOV dword ptr [EBX + 0xcbc],0x41200000 ; 00419b6c
    ADD ESP,0xc                         ; 00419b76
    POP EBX                             ; 00419b79
    RET                                 ; 00419b7a

