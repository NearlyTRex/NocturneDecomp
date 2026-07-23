; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_dmodel_cpp_CKeyFramedModel_getFloorHeight_FUN_00453f00(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,float *param_6)
;
;
; XREF[1]:
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80 at 0050f77a
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_0057cd81
;   TerminatedCString s_Tried_to_call_CKeyFramed_0057cd94
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00454100
;   core_dtri.cpp_rayTriangleFloorTest_FUN_0046d110
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453f00
        ;   Label: core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_00453f00
    PUSH ESI                            ; 00453f01
    PUSH EDI                            ; 00453f02
    PUSH EBP                            ; 00453f03
    MOV EDI,dword ptr [ESP + 0x14]      ; 00453f04
    MOV ESI,dword ptr [ESP + 0x18]      ; 00453f08
    MOV EBP,dword ptr [ESP + 0x28]      ; 00453f0c
    MOV EDX,dword ptr [EDI + 0x100]     ; 00453f10
    CMP ESI,EDX                         ; 00453f16
    JL 0x00453f1d                       ; 00453f18
        ;   XREF to: 00453f1d (CONDITIONAL_JUMP)  ; LAB_00453f1d
    LEA ESI,[EDX + -0x1]                ; 00453f1a
    TEST ESI,ESI                        ; 00453f1d
        ;   Label: LAB_00453f1d
    JL 0x00453fc9                       ; 00453f1f
        ;   XREF to: 00453fc9 (CONDITIONAL_JUMP)  ; LAB_00453fc9
    CMP dword ptr [EDI + 0x358],0x0     ; 00453f25
        ;   Label: LAB_00453f25
    JNZ 0x00453f51                      ; 00453f2c
        ;   XREF to: 00453f51 (CONDITIONAL_JUMP)  ; LAB_00453f51
    PUSH EDI                            ; 00453f2e
    MOV EBX,0x57cd81                    ; 00453f2f | = "..\\core\\dmodel.cpp"
    MOV EAX,0x43e                       ; 00453f34
    PUSH 0x57cd94                       ; 00453f39 | = "Tried to call CKeyFramedModel::getFlo..."
    MOV dword ptr [0x01cc4800],EBX      ; 00453f3e | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 00453f44 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00453f49
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 00453f4e
    LEA EBX,[EDI + 0x364]               ; 00453f51
        ;   Label: LAB_00453f51
    FLD float ptr [EBX]                 ; 00453f57
    FCOMP float ptr [EBP]               ; 00453f59
    FNSTSW AX                           ; 00453f5c
    SAHF                                ; 00453f5e
    JZ 0x00453fd0                       ; 00453f5f
        ;   XREF to: 00453fd0 (CONDITIONAL_JUMP)  ; LAB_00453fd0
    PUSH EBP                            ; 00453f61
        ;   Label: LAB_00453f61
    PUSH EDI                            ; 00453f62
    CALL core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00454100 ; 00453f63
        ;   XREF to: 00454100 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00454100()
    ADD ESP,0x8                         ; 00453f68
    MOV EAX,dword ptr [EDI + 0x354]     ; 00453f6b
        ;   Label: LAB_00453f6b
    IMUL EAX,ESI                        ; 00453f71
    SHL EAX,0x3                         ; 00453f74
    MOV EDX,dword ptr [EDI + 0x354]     ; 00453f77
    MOV EBX,EAX                         ; 00453f7d
    SHL EAX,0x3                         ; 00453f7f
    MOV ESI,dword ptr [EDI + 0x358]     ; 00453f82
    SUB EAX,EBX                         ; 00453f88
    XOR EBP,EBP                         ; 00453f8a
    ADD ESI,EAX                         ; 00453f8c
    XOR EBX,EBX                         ; 00453f8e
    TEST EDX,EDX                        ; 00453f90
    JLE 0x00453fc2                      ; 00453f92
        ;   XREF to: 00453fc2 (CONDITIONAL_JUMP)  ; LAB_00453fc2
    MOV EAX,dword ptr [ESP + 0x24]      ; 00453f94
        ;   Label: LAB_00453f94
    PUSH EAX                            ; 00453f98
    MOV EDX,dword ptr [ESP + 0x20]      ; 00453f99
    PUSH dword ptr [ESP + 0x24]         ; 00453f9d
    PUSH EDX                            ; 00453fa1
    PUSH ESI                            ; 00453fa2
    CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0046d110 ; 00453fa3
        ;   XREF to: 0046d110 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_rayTriangleFloorTest_FUN_0046d110()
    ADD ESP,0x10                        ; 00453fa8
    TEST EAX,EAX                        ; 00453fab
    JZ 0x00453fb4                       ; 00453fad
        ;   XREF to: 00453fb4 (CONDITIONAL_JUMP)  ; LAB_00453fb4
    MOV EBP,0x1                         ; 00453faf
    INC EBX                             ; 00453fb4
        ;   Label: LAB_00453fb4
    MOV ECX,dword ptr [EDI + 0x354]     ; 00453fb5
    ADD ESI,0x38                        ; 00453fbb
    CMP EBX,ECX                         ; 00453fbe
    JL 0x00453f94                       ; 00453fc0
        ;   XREF to: 00453f94 (CONDITIONAL_JUMP)  ; LAB_00453f94
    MOV EAX,EBP                         ; 00453fc2
        ;   Label: LAB_00453fc2
    POP EBP                             ; 00453fc4
    POP EDI                             ; 00453fc5
    POP ESI                             ; 00453fc6
    POP EBX                             ; 00453fc7
    RET                                 ; 00453fc8
    XOR ESI,ESI                         ; 00453fc9
        ;   Label: LAB_00453fc9
    JMP 0x00453f25                      ; 00453fcb
        ;   XREF to: 00453f25 (UNCONDITIONAL_JUMP)  ; LAB_00453f25
    FLD float ptr [EBX + 0x4]           ; 00453fd0
        ;   Label: LAB_00453fd0
    FCOMP float ptr [EBP + 0x4]         ; 00453fd3
    FNSTSW AX                           ; 00453fd6
    SAHF                                ; 00453fd8
    JNZ 0x00453f61                      ; 00453fd9
        ;   XREF to: 00453f61 (CONDITIONAL_JUMP)  ; LAB_00453f61
    FLD float ptr [EBX + 0x8]           ; 00453fdb
    FCOMP float ptr [EBP + 0x8]         ; 00453fde
    FNSTSW AX                           ; 00453fe1
    SAHF                                ; 00453fe3
    JZ 0x00453f6b                       ; 00453fe4
        ;   XREF to: 00453f6b (CONDITIONAL_JUMP)  ; LAB_00453f6b
    JMP 0x00453f61                      ; 00453fe6
        ;   XREF to: 00453f61 (UNCONDITIONAL_JUMP)  ; LAB_00453f61

