; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CBoxActor_onDropped_FUN_00422c70(CBoxActor *this_ptr,CVector3f *drop_position)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   drop_position
;
; Called Functions:
;   core_box.cpp_CBox_setupVelocities_FUN_00420450
;   core_boxactor.cpp_FUN_00421e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422c70
        ;   Label: core_boxactor.cpp_CBoxActor_onDropped_FUN_00422c70
    SUB ESP,0xc                         ; 00422c71
    MOV EBX,dword ptr [ESP + 0x14]      ; 00422c74
    PUSH EBX                            ; 00422c78
    MOV dword ptr [EBX + 0x318],0x0     ; 00422c79
    CALL core_boxactor.cpp_FUN_00421e80 ; 00422c83
        ;   XREF to: 00421e80 (UNCONDITIONAL_CALL)  ; undefined core_boxactor.cpp_FUN_00421e80()
    ADD ESP,0x4                         ; 00422c88
    MOV EDX,dword ptr [ESP + 0x18]      ; 00422c8b
    TEST EDX,EDX                        ; 00422c8f
    JNZ 0x00422c98                      ; 00422c91
        ;   XREF to: 00422c98 (CONDITIONAL_JUMP)  ; LAB_00422c98
    ADD ESP,0xc                         ; 00422c93
    POP EBX                             ; 00422c96
    RET                                 ; 00422c97
    PUSH EDI                            ; 00422c98
        ;   Label: LAB_00422c98
    LEA EAX,[ESP + 0x4]                 ; 00422c99
    PUSH EAX                            ; 00422c9d
    MOV EDI,0x4116cbe4                  ; 00422c9e
    XOR ECX,ECX                         ; 00422ca3
    PUSH EDX                            ; 00422ca5
    LEA EAX,[EBX + 0x394]               ; 00422ca6
    MOV dword ptr [ESP + 0x14],ECX      ; 00422cac
    PUSH EAX                            ; 00422cb0
    MOV dword ptr [ESP + 0x14],ECX      ; 00422cb1
    MOV dword ptr [ESP + 0x10],EDI      ; 00422cb5
    CALL core_box.cpp_CBox_setupVelocities_FUN_00420450 ; 00422cb9
        ;   XREF to: 00420450 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupVelocities_FUN_00420450(CBox * this_ptr, CVector3f * linear_velocity, CVector3f * angular_velocity)
    ADD ESP,0xc                         ; 00422cbe
    POP EDI                             ; 00422cc1
    ADD ESP,0xc                         ; 00422cc2
    POP EBX                             ; 00422cc5
    RET                                 ; 00422cc6

