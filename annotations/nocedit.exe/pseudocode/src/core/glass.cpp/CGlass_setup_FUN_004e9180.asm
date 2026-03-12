; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_glass_cpp_CGlass_setup_FUN_004e9180(CGlass *this_ptr)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
; Local Variables:
; float            Stack[-0xd8]:4  local_d8
; float            Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; CVector3f        Stack[-0xcc]:12  local_cc
; CVector3f        Stack[-0xc0]:12  local_c0
; CVector3f        Stack[-0xb4]:12  local_b4
; CVector3f        Stack[-0xa8]:12  local_a8
; CVector3f        Stack[-0x9c]:12  local_9c
; CVector3f        Stack[-0x90]:12  local_90
; CVector3f        Stack[-0x84]:12  local_84
; CVector3f        Stack[-0x78]:12  local_78
; CVector3f        Stack[-0x6c]:12  local_6c
; CVector3f        Stack[-0x60]:12  local_60
; CVector3f        Stack[-0x54]:12  local_54
; CVector3f        Stack[-0x48]:12  local_48
; CVector3f        Stack[-0x3c]:12  local_3c
; float            Stack[-0x30]:4  local_30
; SMRGLPrimitiveQuad * Stack[-0x2c]:4  local_2c
; CVector3f *      Stack[-0x28]:4  local_28
; float            Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e9180
        ;   Label: core_glass.cpp_CGlass_setup_FUN_004e9180
    PUSH ESI                            ; 004e9181
    PUSH EDI                            ; 004e9182
    PUSH EBP                            ; 004e9183
    MOV EBP,ESP                         ; 004e9184
    SUB ESP,0xc8                        ; 004e9186
    AND ESP,0xfffffff8                  ; 004e918c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e918f
    PUSH EBX                            ; 004e9192
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 004e9193
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)

