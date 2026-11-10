; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_frankgen_cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004accb0(CFrankenstienMachine *this_ptr)
;
; Parameters:
; CFrankenstienMachine * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_frankgen.cpp_CFrankenstienMachine_process_FUN_004ac4c0 at 004ac516
;   core_frankgen.cpp_CFrankenstienMachine_renderOpaque_FUN_004aca90 at 004acabf
;   core_frankgen.cpp_CFrankenstienMachine_setup_FUN_004ac230 at 004ac2d7
;
; Referenced Globals:
;   void* switchdataD_004acc80 = 004accd1
;   TerminatedCString s_core_frankgen_cpp_005d6cd1
;   undefined4 DAT_005d6ce6
;   undefined4 DAT_005f71d8
;   undefined4 DAT_005f71f0
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
;   core_actor.cpp_FUN_00408d70
;   core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_0044e6e0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;   core_frankgen.cpp_CFrankenstienMachine_setCourseFrame_FUN_004acf60
;   core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004aced0
;   core_main.c_FUN_004e4500
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004accb0
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004accb0
    PUSH ESI                            ; 004accb1
    PUSH EDI                            ; 004accb2
    PUSH EBP                            ; 004accb3
    SUB ESP,0x34                        ; 004accb4
    MOV EBP,dword ptr [ESP + 0x48]      ; 004accb7
    MOV EAX,dword ptr [EBP + 0x2b4]     ; 004accbb
    CMP EAX,0x8                         ; 004accc1
    JA 0x004ace1a                       ; 004accc4
        ;   XREF to: 004ace1a (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4acc80]  ; 004accca | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH dword ptr [0x005f71f0]         ; 004accd1 | DAT_005f71f0
        ;   Label: caseD_0
    PUSH 0x0                            ; 004accd7
    PUSH EBP                            ; 004accd9
        ;   Label: LAB_004accd9
    CALL core_frankgen.cpp_CFrankenstienMachine_setCourseFrame_FUN_004acf60 ; 004accda
        ;   XREF to: 004acf60 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_setCourseFrame_FUN_004acf60(CFrankenstienMachine * this_ptr, float start_frame, float end_frame)
    ADD ESP,0xc                         ; 004accdf
        ;   Label: LAB_004accdf
    PUSH EBP                            ; 004acce2
        ;   Label: LAB_004acce2
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0 ; 004acce3
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(CDemonActor * this_ptr)
    FLD float ptr [EBP + 0x2dc]         ; 004acce8
    ADD ESP,0x4                         ; 004accee
    CALL crt_math.c_round_FUN_005b7ff0  ; 004accf1
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x30]        ; 004accf6
    MOV EBX,dword ptr [ESP + 0x30]      ; 004accfa
    MOV EDX,dword ptr [EBP + 0x5e4]     ; 004accfe
    PUSH EBX                            ; 004acd04
    LEA EAX,[EBP + 0x2e0]               ; 004acd05
    LEA ESI,[EDX*0x4 + 0x0]             ; 004acd0b
    PUSH EAX                            ; 004acd12
    SUB ESI,EDX                         ; 004acd13
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 004acd15
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004acd1a
    LEA EDI,[ESP + 0x10]                ; 004acd1d
    PUSH EAX                            ; 004acd21
    SHL ESI,0x2                         ; 004acd22
    LEA EBX,[ESP + 0x20]                ; 004acd25
    CALL core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_0044e6e0 ; 004acd29
        ;   XREF to: 0044e6e0 (UNCONDITIONAL_CALL)  ; CVector3i * core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_0044e6e0(CKeyFramedModel * this_ptr, int frame_index)
    ADD ESI,EAX                         ; 004acd2e
    ADD ESP,0x8                         ; 004acd30
    LEA EAX,[ESP + 0xc]                 ; 004acd33
    MOVSD ES:EDI,ESI                    ; 004acd37
    MOVSD ES:EDI,ESI                    ; 004acd38
    MOVSD ES:EDI,ESI                    ; 004acd39
    FILD dword ptr [EAX]                ; 004acd3a
    FMUL float ptr [0x005f71d8]         ; 004acd3c | DAT_005f71d8
    FSTP float ptr [EBX]                ; 004acd42
    FILD dword ptr [EAX + 0x4]          ; 004acd44
    FMUL float ptr [0x005f71d8]         ; 004acd47 | DAT_005f71d8
    FSTP float ptr [EBX + 0x4]          ; 004acd4d
    FILD dword ptr [EAX + 0x8]          ; 004acd50
    FMUL float ptr [0x005f71d8]         ; 004acd53 | DAT_005f71d8
    FSTP float ptr [EBX + 0x8]          ; 004acd59
    LEA EAX,[ESP + 0x18]                ; 004acd5c
    PUSH EAX                            ; 004acd60
    PUSH EBP                            ; 004acd61
    LEA ESI,[ESP + 0x8]                 ; 004acd62
    LEA EDI,[ESP + 0x2c]                ; 004acd66
    CALL core_actor.cpp_FUN_00408d70    ; 004acd6a
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x8]                 ; 004acd6f
    LEA EAX,[ESP + 0x2c]                ; 004acd73
    ADD ESP,0x8                         ; 004acd77
    ADD EBP,0x5ec                       ; 004acd7a
    MOVSD ES:EDI,ESI                    ; 004acd80
    MOVSD ES:EDI,ESI                    ; 004acd81
    MOVSD ES:EDI,ESI                    ; 004acd82
    CMP EBP,EAX                         ; 004acd83
    JNZ 0x004ace42                      ; 004acd85
        ;   XREF to: 004ace42 (CONDITIONAL_JUMP)  ; LAB_004ace42
    ADD ESP,0x34                        ; 004acd8b
    POP EBP                             ; 004acd8e
        ;   Label: LAB_004acd8e
    POP EDI                             ; 004acd8f
    POP ESI                             ; 004acd90
    POP EBX                             ; 004acd91
    RET                                 ; 004acd92
    PUSH 0x4427c000                     ; 004acd93
        ;   Label: caseD_1
    PUSH 0x43030000                     ; 004acd98
    PUSH EBP                            ; 004acd9d
    CALL core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004aced0 ; 004acd9e
        ;   XREF to: 004aced0 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004aced0(CFrankenstienMachine * this_ptr, float start_frame, float end_frame)
    JMP 0x004accdf                      ; 004acda3
        ;   XREF to: 004accdf (UNCONDITIONAL_JUMP)  ; LAB_004accdf
    PUSH 0x445dc000                     ; 004acda8
        ;   Label: caseD_2
    PUSH 0x4403c000                     ; 004acdad
    PUSH EBP                            ; 004acdb2
    CALL core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004aced0 ; 004acdb3
        ;   XREF to: 004aced0 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004aced0(CFrankenstienMachine * this_ptr, float start_frame, float end_frame)
    JMP 0x004accdf                      ; 004acdb8
        ;   XREF to: 004accdf (UNCONDITIONAL_JUMP)  ; LAB_004accdf
    PUSH 0x44d9a000                     ; 004acdbd
        ;   Label: caseD_3
    PUSH 0x44882000                     ; 004acdc2
    PUSH EBP                            ; 004acdc7
    CALL core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004aced0 ; 004acdc8
        ;   XREF to: 004aced0 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004aced0(CFrankenstienMachine * this_ptr, float start_frame, float end_frame)
    JMP 0x004accdf                      ; 004acdcd
        ;   XREF to: 004accdf (UNCONDITIONAL_JUMP)  ; LAB_004accdf
    PUSH 0x43c80000                     ; 004acdd2
        ;   Label: caseD_4
    PUSH 0x43af0000                     ; 004acdd7
    PUSH EBP                            ; 004acddc
    CALL core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004aced0 ; 004acddd
        ;   XREF to: 004aced0 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004aced0(CFrankenstienMachine * this_ptr, float start_frame, float end_frame)
    JMP 0x004accdf                      ; 004acde2
        ;   XREF to: 004accdf (UNCONDITIONAL_JUMP)  ; LAB_004accdf
    PUSH 0x44828000                     ; 004acde7
        ;   Label: caseD_5
    PUSH 0x44580000                     ; 004acdec
    PUSH EBP                            ; 004acdf1
    CALL core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004aced0 ; 004acdf2
        ;   XREF to: 004aced0 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004aced0(CFrankenstienMachine * this_ptr, float start_frame, float end_frame)
    JMP 0x004accdf                      ; 004acdf7
        ;   XREF to: 004accdf (UNCONDITIONAL_JUMP)  ; LAB_004accdf
    PUSH 0x44f14000                     ; 004acdfc
        ;   Label: caseD_6
    PUSH 0x44d4a000                     ; 004ace01
    JMP 0x004accd9                      ; 004ace06
        ;   XREF to: 004accd9 (UNCONDITIONAL_JUMP)  ; LAB_004accd9
    PUSH 0x450fc000                     ; 004ace0b
        ;   Label: caseD_8
    PUSH 0x44f3a000                     ; 004ace10
    JMP 0x004accd9                      ; 004ace15
        ;   XREF to: 004accd9 (UNCONDITIONAL_JUMP)  ; LAB_004accd9
    MOV EDX,0x5d6cd1                    ; 004ace1a | = "..\\core\\frankgen.cpp"
        ;   Label: default
    MOV ECX,0x1bb                       ; 004ace1f
    PUSH 0x5d6ce6                       ; 004ace24 | DAT_005d6ce6
    MOV dword ptr [0x01d046a0],EDX      ; 004ace29 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004ace2f | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004ace35
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004ace3a
    JMP 0x004acce2                      ; 004ace3d
        ;   XREF to: 004acce2 (UNCONDITIONAL_JUMP)  ; LAB_004acce2
    MOV EAX,dword ptr [ESP + 0x24]      ; 004ace42
        ;   Label: LAB_004ace42
    MOV dword ptr [EBP],EAX             ; 004ace46
    MOV EAX,dword ptr [ESP + 0x28]      ; 004ace49
    MOV dword ptr [EBP + 0x4],EAX       ; 004ace4d
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004ace50
    MOV dword ptr [EBP + 0x8],EAX       ; 004ace54
    ADD ESP,0x34                        ; 004ace57
    POP EBP                             ; 004ace5a
    POP EDI                             ; 004ace5b
    POP ESI                             ; 004ace5c
    POP EBX                             ; 004ace5d
    RET                                 ; 004ace5e

