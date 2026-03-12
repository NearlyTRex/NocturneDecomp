; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_setup_FUN_00508a70(CMansionPuzzleCircle *this_ptr)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; Local Variables:
; CMatrix3x4f      Stack[-0x1dc]:48  local_1dc
; CMatrix3x4f      Stack[-0x1ac]:48  local_1ac
; CMatrix3x4f      Stack[-0x17c]:48  local_17c
; CVector3f        Stack[-0x14c]:12  local_14c
; CVector3f        Stack[-0x140]:12  local_140
; CVector3f        Stack[-0x134]:12  local_134
; CVector3f        Stack[-0x128]:12  local_128
; CMatrix3x4f      Stack[-0x11c]:48  local_11c
; CMatrix3x3f      Stack[-0xec]:36  local_ec
; float            Stack[-0xc4]:4  local_c4
; float            Stack[-0xc0]:4  local_c0
; float            Stack[-0xbc]:4  local_bc
; float            Stack[-0xb8]:4  local_b8
; float            Stack[-0xb4]:4  local_b4
; float            Stack[-0xb0]:4  local_b0
; float            Stack[-0xac]:4  local_ac
; float            Stack[-0xa8]:4  local_a8
; float            Stack[-0xa4]:4  local_a4
; float            Stack[-0xa0]:4  local_a0
; float            Stack[-0x9c]:4  local_9c
; float            Stack[-0x98]:4  local_98
; CVector3f        Stack[-0x94]:12  local_94
; CVector3f        Stack[-0x88]:12  local_88
; CVector3f        Stack[-0x7c]:12  local_7c
; CVector3f        Stack[-0x70]:12  local_70
; CVector3f        Stack[-0x64]:12  local_64
; CVector3f        Stack[-0x58]:12  local_58
; CVector3f        Stack[-0x4c]:12  local_4c
; int              Stack[-0x38]:4  local_38
; SGem *           Stack[-0x34]:4  local_34
; float *          Stack[-0x30]:4  local_30
; float *          Stack[-0x2c]:4  local_2c
; CVector3f *      Stack[-0x28]:4  local_28
; SGem *           Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00508a70
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_setup_FUN_00508a70
    PUSH ESI                            ; 00508a71
    PUSH EDI                            ; 00508a72
    PUSH EBP                            ; 00508a73
    MOV EBP,ESP                         ; 00508a74
    SUB ESP,0x1cc                       ; 00508a76
    SUB EBP,0x7e                        ; 00508a7c
    MOV EDX,dword ptr [EBP + 0x92]      ; 00508a7f
    PUSH EDX                            ; 00508a85
    MOV EBX,dword ptr [EBP + 0x92]      ; 00508a86
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 00508a8c
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)

