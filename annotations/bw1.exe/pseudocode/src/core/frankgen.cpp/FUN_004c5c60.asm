; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_frankgen_cpp_FUN_004c5c60(CFrankenstienMachine *this_ptr)
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
;   core_frankgen.cpp_FUN_004c51e0 at 004c5287
;   core_frankgen.cpp_FUN_004c5470 at 004c54c6
;   core_frankgen.cpp_FUN_004c5a40 at 004c5a6f
;
; Referenced Globals:
;   void* switchdataD_004c5c30 = 004c5c81
;   TerminatedCString s_core_frankgen_cpp_005e0d4a
;   undefined4 DAT_005e0d5f
;   undefined4 DAT_00600c08
;   undefined4 DAT_00600c20
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
;   core_actor.cpp_FUN_00408b40
;   core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_004672b0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   core_frankgen.cpp_CFrankenstienMachine_setCourseFrame_FUN_004c5f10
;   core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004c5e80
;   core_main.c_FUN_005030e0
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c5c60
        ;   Label: core_frankgen.cpp_FUN_004c5c60
    PUSH ESI                            ; 004c5c61
    PUSH EDI                            ; 004c5c62
    PUSH EBP                            ; 004c5c63
    SUB ESP,0x34                        ; 004c5c64
    MOV EBP,dword ptr [ESP + 0x48]      ; 004c5c67
    MOV EAX,dword ptr [EBP + 0x158]     ; 004c5c6b
    CMP EAX,0x8                         ; 004c5c71
    JA 0x004c5dca                       ; 004c5c74
        ;   XREF to: 004c5dca (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4c5c30]  ; 004c5c7a | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH dword ptr [0x00600c20]         ; 004c5c81 | DAT_00600c20
        ;   Label: caseD_0
    PUSH 0x0                            ; 004c5c87
    PUSH EBP                            ; 004c5c89
        ;   Label: LAB_004c5c89
    CALL core_frankgen.cpp_CFrankenstienMachine_setCourseFrame_FUN_004c5f10 ; 004c5c8a
        ;   XREF to: 004c5f10 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_setCourseFrame_FUN_004c5f10(CFrankenstienMachine * this_ptr, float start_frame, float end_frame)
    ADD ESP,0xc                         ; 004c5c8f
        ;   Label: LAB_004c5c8f
    PUSH EBP                            ; 004c5c92
        ;   Label: LAB_004c5c92
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 ; 004c5c93
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor * this_ptr)
    FLD float ptr [EBP + 0x180]         ; 004c5c98
    ADD ESP,0x4                         ; 004c5c9e
    CALL crt_math.c_round_FUN_005c03a0  ; 004c5ca1
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x30]        ; 004c5ca6
    MOV EBX,dword ptr [ESP + 0x30]      ; 004c5caa
    MOV EDX,dword ptr [EBP + 0x488]     ; 004c5cae
    PUSH EBX                            ; 004c5cb4
    LEA EAX,[EBP + 0x184]               ; 004c5cb5
    LEA ESI,[EDX*0x4 + 0x0]             ; 004c5cbb
    PUSH EAX                            ; 004c5cc2
    SUB ESI,EDX                         ; 004c5cc3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 004c5cc5
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c5cca
    LEA EDI,[ESP + 0x10]                ; 004c5ccd
    PUSH EAX                            ; 004c5cd1
    SHL ESI,0x2                         ; 004c5cd2
    LEA EBX,[ESP + 0x20]                ; 004c5cd5
    CALL core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_004672b0 ; 004c5cd9
        ;   XREF to: 004672b0 (UNCONDITIONAL_CALL)  ; CVector3i * core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_004672b0(CKeyFramedModel * this_ptr, int frame_index)
    ADD ESI,EAX                         ; 004c5cde
    ADD ESP,0x8                         ; 004c5ce0
    LEA EAX,[ESP + 0xc]                 ; 004c5ce3
    MOVSD ES:EDI,ESI                    ; 004c5ce7
    MOVSD ES:EDI,ESI                    ; 004c5ce8
    MOVSD ES:EDI,ESI                    ; 004c5ce9
    FILD dword ptr [EAX]                ; 004c5cea
    FMUL float ptr [0x00600c08]         ; 004c5cec | DAT_00600c08
    FSTP float ptr [EBX]                ; 004c5cf2
    FILD dword ptr [EAX + 0x4]          ; 004c5cf4
    FMUL float ptr [0x00600c08]         ; 004c5cf7 | DAT_00600c08
    FSTP float ptr [EBX + 0x4]          ; 004c5cfd
    FILD dword ptr [EAX + 0x8]          ; 004c5d00
    FMUL float ptr [0x00600c08]         ; 004c5d03 | DAT_00600c08
    FSTP float ptr [EBX + 0x8]          ; 004c5d09
    LEA EAX,[ESP + 0x18]                ; 004c5d0c
    PUSH EAX                            ; 004c5d10
    PUSH EBP                            ; 004c5d11
    LEA ESI,[ESP + 0x8]                 ; 004c5d12
    LEA EDI,[ESP + 0x2c]                ; 004c5d16
    CALL core_actor.cpp_FUN_00408b40    ; 004c5d1a
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x8]                 ; 004c5d1f
    LEA EAX,[ESP + 0x2c]                ; 004c5d23
    ADD ESP,0x8                         ; 004c5d27
    ADD EBP,0x490                       ; 004c5d2a
    MOVSD ES:EDI,ESI                    ; 004c5d30
    MOVSD ES:EDI,ESI                    ; 004c5d31
    MOVSD ES:EDI,ESI                    ; 004c5d32
    CMP EBP,EAX                         ; 004c5d33
    JNZ 0x004c5df2                      ; 004c5d35
        ;   XREF to: 004c5df2 (CONDITIONAL_JUMP)  ; LAB_004c5df2
    ADD ESP,0x34                        ; 004c5d3b
    POP EBP                             ; 004c5d3e
        ;   Label: LAB_004c5d3e
    POP EDI                             ; 004c5d3f
    POP ESI                             ; 004c5d40
    POP EBX                             ; 004c5d41
    RET                                 ; 004c5d42
    PUSH 0x4427c000                     ; 004c5d43
        ;   Label: caseD_1
    PUSH 0x43030000                     ; 004c5d48
    PUSH EBP                            ; 004c5d4d
    CALL core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004c5e80 ; 004c5d4e
        ;   XREF to: 004c5e80 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004c5e80(CFrankenstienMachine * this_ptr, float start_frame, float end_frame)
    JMP 0x004c5c8f                      ; 004c5d53
        ;   XREF to: 004c5c8f (UNCONDITIONAL_JUMP)  ; LAB_004c5c8f
    PUSH 0x445dc000                     ; 004c5d58
        ;   Label: caseD_2
    PUSH 0x4403c000                     ; 004c5d5d
    PUSH EBP                            ; 004c5d62
    CALL core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004c5e80 ; 004c5d63
        ;   XREF to: 004c5e80 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004c5e80(CFrankenstienMachine * this_ptr, float start_frame, float end_frame)
    JMP 0x004c5c8f                      ; 004c5d68
        ;   XREF to: 004c5c8f (UNCONDITIONAL_JUMP)  ; LAB_004c5c8f
    PUSH 0x44d9a000                     ; 004c5d6d
        ;   Label: caseD_3
    PUSH 0x44882000                     ; 004c5d72
    PUSH EBP                            ; 004c5d77
    CALL core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004c5e80 ; 004c5d78
        ;   XREF to: 004c5e80 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004c5e80(CFrankenstienMachine * this_ptr, float start_frame, float end_frame)
    JMP 0x004c5c8f                      ; 004c5d7d
        ;   XREF to: 004c5c8f (UNCONDITIONAL_JUMP)  ; LAB_004c5c8f
    PUSH 0x43c80000                     ; 004c5d82
        ;   Label: caseD_4
    PUSH 0x43af0000                     ; 004c5d87
    PUSH EBP                            ; 004c5d8c
    CALL core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004c5e80 ; 004c5d8d
        ;   XREF to: 004c5e80 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004c5e80(CFrankenstienMachine * this_ptr, float start_frame, float end_frame)
    JMP 0x004c5c8f                      ; 004c5d92
        ;   XREF to: 004c5c8f (UNCONDITIONAL_JUMP)  ; LAB_004c5c8f
    PUSH 0x44828000                     ; 004c5d97
        ;   Label: caseD_5
    PUSH 0x44580000                     ; 004c5d9c
    PUSH EBP                            ; 004c5da1
    CALL core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004c5e80 ; 004c5da2
        ;   XREF to: 004c5e80 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004c5e80(CFrankenstienMachine * this_ptr, float start_frame, float end_frame)
    JMP 0x004c5c8f                      ; 004c5da7
        ;   XREF to: 004c5c8f (UNCONDITIONAL_JUMP)  ; LAB_004c5c8f
    PUSH 0x44f14000                     ; 004c5dac
        ;   Label: caseD_6
    PUSH 0x44d4a000                     ; 004c5db1
    JMP 0x004c5c89                      ; 004c5db6
        ;   XREF to: 004c5c89 (UNCONDITIONAL_JUMP)  ; LAB_004c5c89
    PUSH 0x450fc000                     ; 004c5dbb
        ;   Label: caseD_8
    PUSH 0x44f3a000                     ; 004c5dc0
    JMP 0x004c5c89                      ; 004c5dc5
        ;   XREF to: 004c5c89 (UNCONDITIONAL_JUMP)  ; LAB_004c5c89
    MOV EDX,0x5e0d4a                    ; 004c5dca | = "..\\core\\frankgen.cpp"
        ;   Label: default
    MOV ECX,0x1bb                       ; 004c5dcf
    PUSH 0x5e0d5f                       ; 004c5dd4 | DAT_005e0d5f
    MOV dword ptr [0x01d1d400],EDX      ; 004c5dd9 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004c5ddf | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004c5de5
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004c5dea
    JMP 0x004c5c92                      ; 004c5ded
        ;   XREF to: 004c5c92 (UNCONDITIONAL_JUMP)  ; LAB_004c5c92
    MOV EAX,dword ptr [ESP + 0x24]      ; 004c5df2
        ;   Label: LAB_004c5df2
    MOV dword ptr [EBP],EAX             ; 004c5df6
    MOV EAX,dword ptr [ESP + 0x28]      ; 004c5df9
    MOV dword ptr [EBP + 0x4],EAX       ; 004c5dfd
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004c5e00
    MOV dword ptr [EBP + 0x8],EAX       ; 004c5e04
    ADD ESP,0x34                        ; 004c5e07
    POP EBP                             ; 004c5e0a
    POP EDI                             ; 004c5e0b
    POP ESI                             ; 004c5e0c
    POP EBX                             ; 004c5e0d
    RET                                 ; 004c5e0e

