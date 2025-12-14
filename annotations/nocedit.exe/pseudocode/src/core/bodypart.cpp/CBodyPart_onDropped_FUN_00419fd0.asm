; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_bodypart.cpp_CBodyPart_onDropped_FUN_00419fd0(CBodyPart * this_ptr, CVector3f * drop_position)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   drop_position
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Called Functions:
;   core_bodypart.cpp_CBodyPart_FUN_0041b070
;   core_box.cpp_CBox_setupVelocities_FUN_00420180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419fd0
        ;   Label: core_bodypart.cpp_CBodyPart_onDropped_FUN_00419fd0
    SUB ESP,0xc                         ; 00419fd1
    MOV EBX,dword ptr [ESP + 0x14]      ; 00419fd4
    PUSH EBX                            ; 00419fd8
    MOV dword ptr [EBX + 0xf28],0x0     ; 00419fd9
    CALL core_bodypart.cpp_CBodyPart_FUN_0041b070 ; 00419fe3
        ;   XREF to: 0041b070 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_FUN_0041b070(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 00419fe8
    MOV EDX,dword ptr [ESP + 0x18]      ; 00419feb
    TEST EDX,EDX                        ; 00419fef
    JNZ 0x0041a002                      ; 00419ff1
        ;   XREF to: 0041a002 (CONDITIONAL_JUMP)  ; LAB_0041a002
    MOV dword ptr [EBX + 0xcbc],0x41200000 ; 00419ff3
    ADD ESP,0xc                         ; 00419ffd
    POP EBX                             ; 0041a000
    RET                                 ; 0041a001
    PUSH EDI                            ; 0041a002
        ;   Label: LAB_0041a002
    LEA EAX,[ESP + 0x4]                 ; 0041a003
    PUSH EAX                            ; 0041a007
    MOV EDI,0x4116cbe4                  ; 0041a008
    XOR ECX,ECX                         ; 0041a00d
    PUSH EDX                            ; 0041a00f
    LEA EAX,[EBX + 0xccc]               ; 0041a010
    MOV dword ptr [ESP + 0x14],ECX      ; 0041a016
    PUSH EAX                            ; 0041a01a
    MOV dword ptr [ESP + 0x14],ECX      ; 0041a01b
    MOV dword ptr [ESP + 0x10],EDI      ; 0041a01f
    CALL core_box.cpp_CBox_setupVelocities_FUN_00420180 ; 0041a023
        ;   XREF to: 00420180 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupVelocities_FUN_00420180(CBox * this_ptr, CVector3f * linear_velocity, CVector3f * angular_velocity)
    ADD ESP,0xc                         ; 0041a028
    POP EDI                             ; 0041a02b
    MOV dword ptr [EBX + 0xcbc],0x41200000 ; 0041a02c
    ADD ESP,0xc                         ; 0041a036
    POP EBX                             ; 0041a039
    RET                                 ; 0041a03a

