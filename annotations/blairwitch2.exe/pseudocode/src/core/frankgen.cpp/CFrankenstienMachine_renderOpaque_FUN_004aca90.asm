; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_frankgen_cpp_CFrankenstienMachine_renderOpaque_FUN_004aca90(CFrankenstienMachine *this_ptr)
;
; Parameters:
; CFrankenstienMachine * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005d6ca5
;   undefined4 DAT_005d6ca9
;   undefined4 DAT_005d6cb1
;   undefined4 DAT_005d6cb9
;   undefined4 DAT_005d6cc1
;   undefined4 DAT_005d6cc5
;   undefined4 DAT_005d6cc9
;   undefined4 DAT_005d6ccd
;   undefined4 DAT_00618170
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_FUN_0041a840
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;   core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004accb0
;   core_frankgen.cpp_findLeader_FUN_004ace60
;   crt_math.c_floor_FUN_005b84d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aca90
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_renderOpaque_FUN_004aca90
    PUSH ESI                            ; 004aca91
    PUSH EDI                            ; 004aca92
    PUSH EBP                            ; 004aca93
    MOV EBP,ESP                         ; 004aca94
    SUB ESP,0x3c                        ; 004aca96
    AND ESP,0xfffffff8                  ; 004aca99
    MOV EBX,dword ptr [EBP + 0x14]      ; 004aca9c
    MOV EAX,[0x00618170]                ; 004aca9f | DAT_00618170
    CMP dword ptr [EAX + 0x1008],0x0    ; 004acaa4
    JZ 0x004acac7                       ; 004acaab
        ;   XREF to: 004acac7 (CONDITIONAL_JUMP)  ; LAB_004acac7
    CALL core_frankgen.cpp_findLeader_FUN_004ace60 ; 004acaad
        ;   XREF to: 004ace60 (UNCONDITIONAL_CALL)  ; CDemonActor * core_frankgen.cpp_findLeader_FUN_004ace60()
    FLD float ptr [EAX + 0x2b8]         ; 004acab2
    PUSH EBX                            ; 004acab8
    FSTP float ptr [EBX + 0x2b8]        ; 004acab9
    CALL core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004accb0 ; 004acabf
        ;   XREF to: 004accb0 (UNCONDITIONAL_CALL)  ; CVector3f * core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004accb0(CFrankenstienMachine * this_ptr)
    ADD ESP,0x4                         ; 004acac4
    PUSH EBX                            ; 004acac7
        ;   Label: LAB_004acac7
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 004acac8
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004acacd
    PUSH 0x0                            ; 004acad0
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004acad2
    PUSH EBX                            ; 004acad8
    LEA ESI,[ESP + 0xc]                 ; 004acad9
    LEA EDI,[ESP + 0x24]                ; 004acadd
    CALL dword ptr [EAX + 0x24]         ; 004acae1
    MOV ECX,0x6                         ; 004acae4
    ADD ESP,0x4                         ; 004acae9
    LEA EAX,[ESP + 0x20]                ; 004acaec
    LEA ESI,[ESP + 0x8]                 ; 004acaf0
    PUSH EAX                            ; 004acaf4
    MOVSD.REP ES:EDI,ESI                ; 004acaf5
    CALL core_box.cpp_FUN_0041a840      ; 004acaf7
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 004acafc
    MOV ESI,EAX                         ; 004acaff
    TEST EAX,EAX                        ; 004acb01
    JNZ 0x004acb17                      ; 004acb03
        ;   XREF to: 004acb17 (CONDITIONAL_JUMP)  ; LAB_004acb17
    PUSH EBX                            ; 004acb05
        ;   Label: LAB_004acb05
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 004acb06
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004acb0b
    MOV EAX,ESI                         ; 004acb0e
    MOV ESP,EBP                         ; 004acb10
    POP EBP                             ; 004acb12
    POP EDI                             ; 004acb13
    POP ESI                             ; 004acb14
    POP EBX                             ; 004acb15
    RET                                 ; 004acb16
    PUSH -0x1                           ; 004acb17
        ;   Label: LAB_004acb17
    LEA EAX,[EBX + 0x2e0]               ; 004acb19
    PUSH dword ptr [EBX + 0x2dc]        ; 004acb1f
    PUSH EAX                            ; 004acb25
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 004acb26
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    LEA EAX,[EBX + 0x4e0]               ; 004acb2b
    MOV DL,byte ptr [EAX]               ; 004acb31
    ADD ESP,0xc                         ; 004acb33
    TEST DL,DL                          ; 004acb36
    JZ 0x004acb05                       ; 004acb38
        ;   XREF to: 004acb05 (CONDITIONAL_JUMP)  ; LAB_004acb05
    MOV ECX,dword ptr [EBX + 0x2b8]     ; 004acb3a
    CMP ECX,0x4400c000                  ; 004acb40
    JL 0x004acb7c                       ; 004acb46
        ;   XREF to: 004acb7c (CONDITIONAL_JUMP)  ; LAB_004acb7c
    CMP ECX,0x44e10000                  ; 004acb48
    JGE 0x004acb85                      ; 004acb4e
        ;   XREF to: 004acb85 (CONDITIONAL_JUMP)  ; LAB_004acb85
    XOR EDI,EDI                         ; 004acb50
    MOV dword ptr [ESP],EDI             ; 004acb52
    PUSH -0x1                           ; 004acb55
        ;   Label: LAB_004acb55
    LEA EAX,[EBX + 0x468]               ; 004acb57
    PUSH dword ptr [ESP + 0x4]          ; 004acb5d
    PUSH EAX                            ; 004acb61
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 004acb62
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004acb67
    PUSH EBX                            ; 004acb6a
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 004acb6b
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004acb70
    MOV EAX,ESI                         ; 004acb73
    MOV ESP,EBP                         ; 004acb75
    POP EBP                             ; 004acb77
    POP EDI                             ; 004acb78
    POP ESI                             ; 004acb79
    POP EBX                             ; 004acb7a
    RET                                 ; 004acb7b
    MOV dword ptr [ESP],0x43490000      ; 004acb7c
        ;   Label: LAB_004acb7c
    JMP 0x004acb55                      ; 004acb83
        ;   XREF to: 004acb55 (UNCONDITIONAL_JUMP)  ; LAB_004acb55
    CMP ECX,0x44ed8000                  ; 004acb85
        ;   Label: LAB_004acb85
    JGE 0x004acb9e                      ; 004acb8b
        ;   XREF to: 004acb9e (CONDITIONAL_JUMP)  ; LAB_004acb9e
    FLD float ptr [EBX + 0x2b8]         ; 004acb8d
    FADD float ptr [0x005d6ccd]         ; 004acb93 | DAT_005d6ccd
    FSTP float ptr [ESP]                ; 004acb99
    JMP 0x004acb55                      ; 004acb9c
        ;   XREF to: 004acb55 (UNCONDITIONAL_JUMP)  ; LAB_004acb55
    CMP ECX,0x44fa0000                  ; 004acb9e
        ;   Label: LAB_004acb9e
    JGE 0x004acbaf                      ; 004acba4
        ;   XREF to: 004acbaf (CONDITIONAL_JUMP)  ; LAB_004acbaf
    MOV dword ptr [ESP],0x42c80000      ; 004acba6
    JMP 0x004acb55                      ; 004acbad
        ;   XREF to: 004acb55 (UNCONDITIONAL_JUMP)  ; LAB_004acb55
    FLD float ptr [EBX + 0x2b8]         ; 004acbaf
        ;   Label: LAB_004acbaf
    FADD float ptr [0x005d6ca5]         ; 004acbb5 | DAT_005d6ca5
    FLD ST0                             ; 004acbbb
    FMUL double ptr [0x005d6ca9]        ; 004acbbd | DAT_005d6ca9
    FSTP ST1                            ; 004acbc3
    FST float ptr [ESP]                 ; 004acbc5
    FMUL float ptr [0x005d6cb1]         ; 004acbc8 | DAT_005d6cb1
    SUB ESP,0x8                         ; 004acbce
    FSTP double ptr [ESP]               ; 004acbd1
    CALL crt_math.c_floor_FUN_005b84d0  ; 004acbd4
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x3c],EAX      ; 004acbd9
    MOV dword ptr [ESP + 0x40],EDX      ; 004acbdd
    FLD double ptr [ESP + 0x3c]         ; 004acbe1
    FMUL double ptr [0x005d6cb9]        ; 004acbe5 | DAT_005d6cb9
    ADD ESP,0x8                         ; 004acbeb
    FSUBR float ptr [ESP]               ; 004acbee
    FST float ptr [ESP]                 ; 004acbf1
    FCOMP float ptr [0x005d6cc1]        ; 004acbf4 | DAT_005d6cc1
    FNSTSW AX                           ; 004acbfa
    SAHF                                ; 004acbfc
    JBE 0x004acc0b                      ; 004acbfd
        ;   XREF to: 004acc0b (CONDITIONAL_JUMP)  ; LAB_004acc0b
    FLD float ptr [0x005d6cc5]          ; 004acbff | DAT_005d6cc5
    FSUB float ptr [ESP]                ; 004acc05
    FSTP float ptr [ESP]                ; 004acc08
    FLD float ptr [ESP]                 ; 004acc0b
        ;   Label: LAB_004acc0b
    FADD float ptr [0x005d6cc9]         ; 004acc0e | DAT_005d6cc9
    FSTP float ptr [ESP]                ; 004acc14
    JMP 0x004acb55                      ; 004acc17
        ;   XREF to: 004acb55 (UNCONDITIONAL_JUMP)  ; LAB_004acb55

