; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBox_setupVelocities_FUN_0041d790(CBox *this_ptr,CVector3f *linear_velocity,CVector3f *angular_velocity)
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
;   core_bodypart.cpp_CBodyPart_onDropped_FUN_00415740 at 00415793
;   core_boxactor.cpp_CBoxActor_onDropped_FUN_00420100 at 00420149
;   core_fire.cpp_CStake_spawn_FUN_00497ac0 at 00497d7c
;   core_fire.cpp_FUN_0049cee0 at 0049cfe9
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045b870
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041d790
        ;   Label: core_box.cpp_CBox_setupVelocities_FUN_0041d790
    PUSH ESI                            ; 0041d791
    PUSH EDI                            ; 0041d792
    PUSH EBP                            ; 0041d793
    SUB ESP,0x18                        ; 0041d794
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0041d797
    MOV EDX,dword ptr [ESP + 0x30]      ; 0041d79b
    MOV EBP,dword ptr [ESP + 0x34]      ; 0041d79f
    TEST EDX,EDX                        ; 0041d7a3
    JZ 0x0041d7fc                       ; 0041d7a5
        ;   XREF to: 0041d7fc (CONDITIONAL_JUMP)  ; LAB_0041d7fc
    LEA EAX,[EBX + 0x40]                ; 0041d7a7
    CMP EAX,EDX                         ; 0041d7aa
    JZ 0x0041d7be                       ; 0041d7ac
        ;   XREF to: 0041d7be (CONDITIONAL_JUMP)  ; LAB_0041d7be
    MOV ECX,dword ptr [EDX]             ; 0041d7ae
    MOV dword ptr [EAX],ECX             ; 0041d7b0
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041d7b2
    MOV dword ptr [EAX + 0x4],ECX       ; 0041d7b5
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041d7b8
    MOV dword ptr [EAX + 0x8],ECX       ; 0041d7bb
    LEA EAX,[EBX + 0x40]                ; 0041d7be
        ;   Label: LAB_0041d7be
    PUSH EAX                            ; 0041d7c1
    LEA EAX,[EBX + 0x18]                ; 0041d7c2
    PUSH EAX                            ; 0041d7c5
    LEA ESI,[ESP + 0x8]                 ; 0041d7c6
    LEA EDI,[ESP + 0x14]                ; 0041d7ca
    CALL core_dirmat.cpp_FUN_0045b870   ; 0041d7ce
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b870()
    LEA ESI,[ESP + 0x8]                 ; 0041d7d3
    LEA EAX,[ESP + 0x14]                ; 0041d7d7
    ADD ESP,0x8                         ; 0041d7db
    LEA EDX,[EBX + 0x4c]                ; 0041d7de
    MOVSD ES:EDI,ESI                    ; 0041d7e1
    MOVSD ES:EDI,ESI                    ; 0041d7e2
    MOVSD ES:EDI,ESI                    ; 0041d7e3
    CMP EDX,EAX                         ; 0041d7e4
    JZ 0x0041d7fc                       ; 0041d7e6
        ;   XREF to: 0041d7fc (CONDITIONAL_JUMP)  ; LAB_0041d7fc
    MOV EAX,dword ptr [ESP + 0xc]       ; 0041d7e8
    MOV dword ptr [EDX],EAX             ; 0041d7ec
    MOV EAX,dword ptr [ESP + 0x10]      ; 0041d7ee
    MOV dword ptr [EDX + 0x4],EAX       ; 0041d7f2
    MOV EAX,dword ptr [ESP + 0x14]      ; 0041d7f5
    MOV dword ptr [EDX + 0x8],EAX       ; 0041d7f9
    TEST EBP,EBP                        ; 0041d7fc
        ;   Label: LAB_0041d7fc
    JZ 0x0041d807                       ; 0041d7fe
        ;   XREF to: 0041d807 (CONDITIONAL_JUMP)  ; LAB_0041d807
    LEA EAX,[EBX + 0x70]                ; 0041d800
    CMP EAX,EBP                         ; 0041d803
    JNZ 0x0041d80f                      ; 0041d805
        ;   XREF to: 0041d80f (CONDITIONAL_JUMP)  ; LAB_0041d80f
    ADD ESP,0x18                        ; 0041d807
        ;   Label: LAB_0041d807
    POP EBP                             ; 0041d80a
    POP EDI                             ; 0041d80b
    POP ESI                             ; 0041d80c
    POP EBX                             ; 0041d80d
    RET                                 ; 0041d80e
    MOV EDX,dword ptr [EBP]             ; 0041d80f
        ;   Label: LAB_0041d80f
    MOV dword ptr [EAX],EDX             ; 0041d812
    MOV EDX,dword ptr [EBP + 0x4]       ; 0041d814
    MOV dword ptr [EAX + 0x4],EDX       ; 0041d817
    MOV EDX,dword ptr [EBP + 0x8]       ; 0041d81a
    MOV dword ptr [EAX + 0x8],EDX       ; 0041d81d
    ADD ESP,0x18                        ; 0041d820
    POP EBP                             ; 0041d823
    POP EDI                             ; 0041d824
    POP ESI                             ; 0041d825
    POP EBX                             ; 0041d826
    RET                                 ; 0041d827

