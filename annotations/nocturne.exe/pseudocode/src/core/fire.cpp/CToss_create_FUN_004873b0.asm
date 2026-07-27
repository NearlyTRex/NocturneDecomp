; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_CToss_create_FUN_004873b0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,int param_6)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_allocateToss_FUN_0048c310 at 0048c33e
;
; Referenced Globals:
;   TerminatedCString s_dynamitestick_kfm_00581244
;   TerminatedCString s_core_fire_cpp_00581256
;   TerminatedCString s_CToss_create_invalid_tos_00581267
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_box.cpp_CBox_setupCorners_FUN_0041a6e0
;   core_box.cpp_CBox_setupVelocities_FUN_0041cb40
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004873b0
        ;   Label: core_fire.cpp_CToss_create_FUN_004873b0
    PUSH ESI                            ; 004873b1
    PUSH EDI                            ; 004873b2
    PUSH EBP                            ; 004873b3
    SUB ESP,0x1c                        ; 004873b4
    MOV EBX,dword ptr [ESP + 0x30]      ; 004873b7
    MOV EAX,dword ptr [ESP + 0x34]      ; 004873bb
    MOV dword ptr [EBX],EAX             ; 004873bf
    MOV EAX,dword ptr [ESP + 0x44]      ; 004873c1
    MOV dword ptr [EBX + 0x3dc],EAX     ; 004873c5
    MOV EAX,dword ptr [EBX]             ; 004873cb
    MOV dword ptr [EBX + 0x3e0],0x0     ; 004873cd
    TEST EAX,EAX                        ; 004873d7
    JZ 0x004874b1                       ; 004873d9
        ;   XREF to: 004874b1 (CONDITIONAL_JUMP)  ; LAB_004874b1
    MOV EDX,0x581256                    ; 004873df | = "..\\core\\fire.cpp"
    MOV ECX,0xb96                       ; 004873e4
    PUSH 0x581267                       ; 004873e9 | = "CToss::create - invalid toss type."
    MOV dword ptr [0x01cc4800],EDX      ; 004873ee | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004873f4 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004873fa
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004873ff
    FLD float ptr [EBX + 0x3dc]         ; 00487402
        ;   Label: LAB_00487402
    FLDZ                                ; 00487408
    FCOMPP                              ; 0048740a
    FNSTSW AX                           ; 0048740c
    SAHF                                ; 0048740e
    JC 0x0048741b                       ; 0048740f
        ;   XREF to: 0048741b (CONDITIONAL_JUMP)  ; LAB_0048741b
    MOV dword ptr [EBX + 0x3dc],0x40a00000 ; 00487411
    LEA ESI,[EBX + 0x4]                 ; 0048741b
        ;   Label: LAB_0048741b
    PUSH ESI                            ; 0048741e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 0048741f
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510()
    ADD ESP,0x4                         ; 00487424
    PUSH ESI                            ; 00487427
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 00487428
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530()
    MOV EDX,EAX                         ; 0048742d
    FLD float ptr [EDX + 0x344]         ; 0048742f
    FSUB float ptr [EAX + 0x338]        ; 00487435
    ADD ESP,0x4                         ; 0048743b
    FSTP float ptr [ESP]                ; 0048743e
    FLD float ptr [EDX + 0x348]         ; 00487441
    FSUB float ptr [EAX + 0x33c]        ; 00487447
    ADD EAX,0x338                       ; 0048744d
    FSTP float ptr [ESP + 0x4]          ; 00487452
    FLD float ptr [EDX + 0x34c]         ; 00487456
    FSUB float ptr [EAX + 0x8]          ; 0048745c
    MOV EAX,ESP                         ; 0048745f
    PUSH dword ptr [ESP + 0x18]         ; 00487461
    PUSH EAX                            ; 00487465
    MOV EDI,dword ptr [ESP + 0x44]      ; 00487466
    PUSH EDI                            ; 0048746a
    MOV EBP,dword ptr [ESP + 0x44]      ; 0048746b
    PUSH EBP                            ; 0048746f
    ADD EBX,0x180                       ; 00487470
    PUSH EBX                            ; 00487476
    FSTP float ptr [ESP + 0x1c]         ; 00487477
    CALL core_box.cpp_CBox_setupCorners_FUN_0041a6e0 ; 0048747b
        ;   XREF to: 0041a6e0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBox_setupCorners_FUN_0041a6e0()
    ADD ESP,0x14                        ; 00487480
    XOR EAX,EAX                         ; 00487483
    MOV dword ptr [ESP + 0x14],EAX      ; 00487485
    MOV dword ptr [ESP + 0x10],EAX      ; 00487489
    LEA EAX,[ESP + 0xc]                 ; 0048748d
    PUSH EAX                            ; 00487491
    MOV ESI,dword ptr [ESP + 0x44]      ; 00487492
    PUSH ESI                            ; 00487496
    MOV ECX,0x4116cbe4                  ; 00487497
    PUSH EBX                            ; 0048749c
    MOV dword ptr [ESP + 0x18],ECX      ; 0048749d
    CALL core_box.cpp_CBox_setupVelocities_FUN_0041cb40 ; 004874a1
        ;   XREF to: 0041cb40 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBox_setupVelocities_FUN_0041cb40()
    ADD ESP,0xc                         ; 004874a6
    ADD ESP,0x1c                        ; 004874a9
    POP EBP                             ; 004874ac
    POP EDI                             ; 004874ad
    POP ESI                             ; 004874ae
    POP EBX                             ; 004874af
    RET                                 ; 004874b0
    PUSH 0x581244                       ; 004874b1 | = "dynamitestick.kfm"
        ;   Label: LAB_004874b1
    LEA EAX,[EBX + 0x4]                 ; 004874b6
    PUSH EAX                            ; 004874b9
    MOV ESI,0x3f800000                  ; 004874ba
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 004874bf
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580()
    ADD ESP,0x8                         ; 004874c4
    MOV dword ptr [ESP + 0x18],ESI      ; 004874c7
    JMP 0x00487402                      ; 004874cb
        ;   XREF to: 00487402 (UNCONDITIONAL_JUMP)  ; LAB_00487402

