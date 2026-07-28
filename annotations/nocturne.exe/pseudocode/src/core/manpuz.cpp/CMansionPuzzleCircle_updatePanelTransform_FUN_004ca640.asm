; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_manpuz_cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_004ca640(CDemonActor *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[3]:
;   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_004cb5a0 at 004cb6e6
;   core_manpuz.cpp_FUN_004c9580 at 004c97b0
;   core_manpuz.cpp_FUN_004c9cf0 at 004c9d6b
;
; Referenced Globals:
;   float FLOAT_005a003c = 0.5235988
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ca640
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_004ca640
    PUSH ESI                            ; 004ca641
    PUSH EDI                            ; 004ca642
    SUB ESP,0x28                        ; 004ca643
    MOV EDI,dword ptr [ESP + 0x38]      ; 004ca646
    MOV ESI,dword ptr [ESP + 0x3c]      ; 004ca64a
    LEA EAX,[ESI*0x4 + 0x0]             ; 004ca64e
    SUB EAX,ESI                         ; 004ca655
    SHL EAX,0x3                         ; 004ca657
    ADD EAX,ESI                         ; 004ca65a
    LEA EBX,[EDI + 0x5e8]               ; 004ca65c
    SHL EAX,0x2                         ; 004ca662
    MOV dword ptr [ESP + 0x24],ESI      ; 004ca665
    ADD EBX,EAX                         ; 004ca669
    FILD dword ptr [ESP + 0x24]         ; 004ca66b
    FADD float ptr [EBX + 0x4]          ; 004ca66f
    FMUL float ptr [0x005a003c]         ; 004ca672 | FLOAT_005a003c
    LEA EAX,[EBX + 0x18]                ; 004ca678
    MOV dword ptr [EBX + 0x18],0x0      ; 004ca67b
    PUSH EAX                            ; 004ca682
    LEA ESI,[EBX + 0x24]                ; 004ca683
    MOV dword ptr [EBX + 0x20],0x0      ; 004ca686
    PUSH ESI                            ; 004ca68d
    FSTP float ptr [EBX + 0x1c]         ; 004ca68e
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 004ca691
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004ca696
    MOV EAX,dword ptr [EDI + 0x1504]    ; 004ca699
    MOV dword ptr [ESP + 0x8],EAX       ; 004ca69f
    MOV EAX,ESP                         ; 004ca6a3
    PUSH EAX                            ; 004ca6a5
    LEA EAX,[ESP + 0x10]                ; 004ca6a6
    PUSH EAX                            ; 004ca6aa
    XOR EDX,EDX                         ; 004ca6ab
    PUSH ESI                            ; 004ca6ad
    MOV dword ptr [ESP + 0xc],EDX       ; 004ca6ae
    MOV dword ptr [ESP + 0x10],EDX      ; 004ca6b2
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 004ca6b6
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    LEA EDX,[EBX + 0xc]                 ; 004ca6bb
    ADD ESP,0xc                         ; 004ca6be
    CMP EDX,EAX                         ; 004ca6c1
    JZ 0x004ca6d5                       ; 004ca6c3
        ;   XREF to: 004ca6d5 (CONDITIONAL_JUMP)  ; LAB_004ca6d5
    MOV ECX,dword ptr [EAX]             ; 004ca6c5
    MOV dword ptr [EDX],ECX             ; 004ca6c7
    MOV ECX,dword ptr [EAX + 0x4]       ; 004ca6c9
    MOV dword ptr [EDX + 0x4],ECX       ; 004ca6cc
    MOV ECX,dword ptr [EAX + 0x8]       ; 004ca6cf
    MOV dword ptr [EDX + 0x8],ECX       ; 004ca6d2
    LEA EAX,[EBX + 0xc]                 ; 004ca6d5
        ;   Label: LAB_004ca6d5
    PUSH EAX                            ; 004ca6d8
    LEA EAX,[ESP + 0x1c]                ; 004ca6d9
    PUSH EAX                            ; 004ca6dd
    PUSH EDI                            ; 004ca6de
    ADD EBX,0x58                        ; 004ca6df
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004ca6e2
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004ca6e7
    CMP EBX,EAX                         ; 004ca6ea
    JNZ 0x004ca6f5                      ; 004ca6ec
        ;   XREF to: 004ca6f5 (CONDITIONAL_JUMP)  ; LAB_004ca6f5
    ADD ESP,0x28                        ; 004ca6ee
    POP EDI                             ; 004ca6f1
    POP ESI                             ; 004ca6f2
    POP EBX                             ; 004ca6f3
    RET                                 ; 004ca6f4
    MOV EDX,dword ptr [EAX]             ; 004ca6f5
        ;   Label: LAB_004ca6f5
    MOV dword ptr [EBX],EDX             ; 004ca6f7
    MOV EDX,dword ptr [EAX + 0x4]       ; 004ca6f9
    MOV dword ptr [EBX + 0x4],EDX       ; 004ca6fc
    MOV EDX,dword ptr [EAX + 0x8]       ; 004ca6ff
    MOV dword ptr [EBX + 0x8],EDX       ; 004ca702
    ADD ESP,0x28                        ; 004ca705
    POP EDI                             ; 004ca708
    POP ESI                             ; 004ca709
    POP EBX                             ; 004ca70a
    RET                                 ; 004ca70b

