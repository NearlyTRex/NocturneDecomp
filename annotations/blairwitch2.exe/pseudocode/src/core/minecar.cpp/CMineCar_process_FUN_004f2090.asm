; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_minecar_cpp_CMineCar_process_FUN_004f2090(CMineCar *this_ptr,float delta_time)
;
; Parameters:
; CMineCar *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_00614d30
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createSpark_FUN_0049d090
;   core_platfrm.cpp_CPlatform_process_FUN_005184c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2090
        ;   Label: core_minecar.cpp_CMineCar_process_FUN_004f2090
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f2091
    PUSH dword ptr [ESP + 0xc]          ; 004f2095
    PUSH EBX                            ; 004f2099
    CALL core_platfrm.cpp_CPlatform_process_FUN_005184c0 ; 004f209a
        ;   XREF to: 005184c0 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_process_FUN_005184c0(CPlatform * this_ptr, float delta_time)
    MOV EDX,dword ptr [EBX + 0x430]     ; 004f209f
    ADD ESP,0x8                         ; 004f20a5
    CMP EDX,0x3                         ; 004f20a8
    JZ 0x004f20b2                       ; 004f20ab
        ;   XREF to: 004f20b2 (CONDITIONAL_JUMP)  ; LAB_004f20b2
    CMP EDX,0x4                         ; 004f20ad
    JNZ 0x004f20cb                      ; 004f20b0
        ;   XREF to: 004f20cb (CONDITIONAL_JUMP)  ; LAB_004f20cb
    FLD float ptr [EBX + 0x884]         ; 004f20b2
        ;   Label: LAB_004f20b2
    FSUB float ptr [ESP + 0xc]          ; 004f20b8
    FST float ptr [EBX + 0x884]         ; 004f20bc
    FLDZ                                ; 004f20c2
    FCOMPP                              ; 004f20c4
    FNSTSW AX                           ; 004f20c6
    SAHF                                ; 004f20c8
    JA 0x004f20cd                       ; 004f20c9
        ;   XREF to: 004f20cd (CONDITIONAL_JUMP)  ; LAB_004f20cd
    POP EBX                             ; 004f20cb
        ;   Label: LAB_004f20cb
    RET                                 ; 004f20cc
    PUSH 0xffff                         ; 004f20cd
        ;   Label: LAB_004f20cd
    PUSH 0x0                            ; 004f20d2
    PUSH 0x10000                        ; 004f20d4
    PUSH 0x4000                         ; 004f20d9
    PUSH 0x0                            ; 004f20de
    ADD EBX,0x20                        ; 004f20e0
    PUSH EBX                            ; 004f20e3
    MOV dword ptr [EBX + 0x864],0x3dcccccd ; 004f20e4
    MOV EBX,dword ptr [0x00614d30]      ; 004f20ee | DAT_00614d30
    PUSH EBX                            ; 004f20f4
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0049d090 ; 004f20f5
        ;   XREF to: 0049d090 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_0049d090(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004f20fa
    POP EBX                             ; 004f20fd
    RET                                 ; 004f20fe

