; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBox_setupVelocities_FUN_00420450(CBox *this_ptr,CVector3f *linear_velocity,CVector3f *angular_velocity)
;
; Parameters:
; CBox *           Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   linear_velocity
; CVector3f *      Stack[0xc]:4   angular_velocity
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_bodypart.cpp_CBodyPart_onDropped_FUN_00419b10 at 00419b63
;   core_boxactor.cpp_CBoxActor_onDropped_FUN_00422c70 at 00422cb9
;   core_fire.cpp_CStake_spawn_FUN_004acb60 at 004ace1c
;   core_fire.cpp_FUN_004b1c50 at 004b1d52
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045f700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00420450
        ;   Label: core_box.cpp_CBox_setupVelocities_FUN_00420450
    PUSH ESI                            ; 00420451
    PUSH EDI                            ; 00420452
    PUSH EBP                            ; 00420453
    SUB ESP,0x18                        ; 00420454
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00420457
    MOV EDX,dword ptr [ESP + 0x30]      ; 0042045b
    MOV EBP,dword ptr [ESP + 0x34]      ; 0042045f
    TEST EDX,EDX                        ; 00420463
    JZ 0x004204bc                       ; 00420465
        ;   XREF to: 004204bc (CONDITIONAL_JUMP)  ; LAB_004204bc
    LEA EAX,[EBX + 0x40]                ; 00420467
    CMP EAX,EDX                         ; 0042046a
    JZ 0x0042047e                       ; 0042046c
        ;   XREF to: 0042047e (CONDITIONAL_JUMP)  ; LAB_0042047e
    MOV ECX,dword ptr [EDX]             ; 0042046e
    MOV dword ptr [EAX],ECX             ; 00420470
    MOV ECX,dword ptr [EDX + 0x4]       ; 00420472
    MOV dword ptr [EAX + 0x4],ECX       ; 00420475
    MOV ECX,dword ptr [EDX + 0x8]       ; 00420478
    MOV dword ptr [EAX + 0x8],ECX       ; 0042047b
    LEA EAX,[EBX + 0x40]                ; 0042047e
        ;   Label: LAB_0042047e
    PUSH EAX                            ; 00420481
    LEA EAX,[EBX + 0x18]                ; 00420482
    PUSH EAX                            ; 00420485
    LEA ESI,[ESP + 0x8]                 ; 00420486
    LEA EDI,[ESP + 0x14]                ; 0042048a
    CALL core_dirmat.cpp_FUN_0045f700   ; 0042048e
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f700()
    LEA ESI,[ESP + 0x8]                 ; 00420493
    LEA EAX,[ESP + 0x14]                ; 00420497
    ADD ESP,0x8                         ; 0042049b
    LEA EDX,[EBX + 0x4c]                ; 0042049e
    MOVSD ES:EDI,ESI                    ; 004204a1
    MOVSD ES:EDI,ESI                    ; 004204a2
    MOVSD ES:EDI,ESI                    ; 004204a3
    CMP EDX,EAX                         ; 004204a4
    JZ 0x004204bc                       ; 004204a6
        ;   XREF to: 004204bc (CONDITIONAL_JUMP)  ; LAB_004204bc
    MOV EAX,dword ptr [ESP + 0xc]       ; 004204a8
    MOV dword ptr [EDX],EAX             ; 004204ac
    MOV EAX,dword ptr [ESP + 0x10]      ; 004204ae
    MOV dword ptr [EDX + 0x4],EAX       ; 004204b2
    MOV EAX,dword ptr [ESP + 0x14]      ; 004204b5
    MOV dword ptr [EDX + 0x8],EAX       ; 004204b9
    TEST EBP,EBP                        ; 004204bc
        ;   Label: LAB_004204bc
    JZ 0x004204c7                       ; 004204be
        ;   XREF to: 004204c7 (CONDITIONAL_JUMP)  ; LAB_004204c7
    LEA EAX,[EBX + 0x70]                ; 004204c0
    CMP EAX,EBP                         ; 004204c3
    JNZ 0x004204cf                      ; 004204c5
        ;   XREF to: 004204cf (CONDITIONAL_JUMP)  ; LAB_004204cf
    ADD ESP,0x18                        ; 004204c7
        ;   Label: LAB_004204c7
    POP EBP                             ; 004204ca
    POP EDI                             ; 004204cb
    POP ESI                             ; 004204cc
    POP EBX                             ; 004204cd
    RET                                 ; 004204ce
    MOV EDX,dword ptr [EBP]             ; 004204cf
        ;   Label: LAB_004204cf
    MOV dword ptr [EAX],EDX             ; 004204d2
    MOV EDX,dword ptr [EBP + 0x4]       ; 004204d4
    MOV dword ptr [EAX + 0x4],EDX       ; 004204d7
    MOV EDX,dword ptr [EBP + 0x8]       ; 004204da
    MOV dword ptr [EAX + 0x8],EDX       ; 004204dd
    ADD ESP,0x18                        ; 004204e0
    POP EBP                             ; 004204e3
    POP EDI                             ; 004204e4
    POP ESI                             ; 004204e5
    POP EBX                             ; 004204e6
    RET                                 ; 004204e7

