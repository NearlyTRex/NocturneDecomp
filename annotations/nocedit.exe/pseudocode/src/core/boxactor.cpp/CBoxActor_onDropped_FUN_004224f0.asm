; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CBoxActor_onDropped_FUN_004224f0(CBoxActor *this_ptr,CVector3f *drop_position)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   drop_position
; Local Variables:
; CVector3f        Stack[-0x10]:12  local_10
;
; Called Functions:
;   core_box.cpp_CBox_setupVelocities_FUN_00420180
;   core_boxactor.cpp_CBoxActor_setupPhysicsBox_FUN_004218d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004224f0
        ;   Label: core_boxactor.cpp_CBoxActor_onDropped_FUN_004224f0
    SUB ESP,0xc                         ; 004224f1
    MOV EBX,dword ptr [ESP + 0x14]      ; 004224f4
    PUSH EBX                            ; 004224f8
    MOV dword ptr [EBX + 0x318],0x0     ; 004224f9
    CALL core_boxactor.cpp_CBoxActor_setupPhysicsBox_FUN_004218d0 ; 00422503
        ;   XREF to: 004218d0 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CBoxActor_setupPhysicsBox_FUN_004218d0(CBoxActor * this_ptr)
    ADD ESP,0x4                         ; 00422508
    MOV EDX,dword ptr [ESP + 0x18]      ; 0042250b
    TEST EDX,EDX                        ; 0042250f
    JNZ 0x00422518                      ; 00422511
        ;   XREF to: 00422518 (CONDITIONAL_JUMP)  ; LAB_00422518
    ADD ESP,0xc                         ; 00422513
    POP EBX                             ; 00422516
    RET                                 ; 00422517
    PUSH EDI                            ; 00422518
        ;   Label: LAB_00422518
    LEA EAX,[ESP + 0x4]                 ; 00422519
    PUSH EAX                            ; 0042251d
    MOV EDI,0x4116cbe4                  ; 0042251e
    XOR ECX,ECX                         ; 00422523
    PUSH EDX                            ; 00422525
    LEA EAX,[EBX + 0x394]               ; 00422526
    MOV dword ptr [ESP + 0x14],ECX      ; 0042252c
    PUSH EAX                            ; 00422530
    MOV dword ptr [ESP + 0x14],ECX      ; 00422531
    MOV dword ptr [ESP + 0x10],EDI      ; 00422535
    CALL core_box.cpp_CBox_setupVelocities_FUN_00420180 ; 00422539
        ;   XREF to: 00420180 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupVelocities_FUN_00420180(CBox * this_ptr, CVector3f * linear_velocity, CVector3f * angular_velocity)
    ADD ESP,0xc                         ; 0042253e
    POP EDI                             ; 00422541
    ADD ESP,0xc                         ; 00422542
    POP EBX                             ; 00422545
    RET                                 ; 00422546

