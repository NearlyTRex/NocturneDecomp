; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlies * core_gore_cpp_FUN_004e63e0(undefined4 param_1,float *param_2,int param_3,float param_4,float *param_5)
;
;
; XREF[1]:
;   core_gore.cpp_CGore_spawnFliesOnActor_FUN_004e64d0 at 004e64ed
;
; Referenced Globals:
;   TerminatedCString s_core_gore_cpp_005e412d
;   TerminatedCString s_Can_t_create_flies_005e413e
;   undefined4 DAT_005e4155
;   undefined4 DAT_0061f650
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d2c900
;
; Called Functions:
;   core_flies.cpp_CFlies_ctor_FUN_004bfa60
;   core_main.c_FUN_005030e0
;   core_mission.cpp_CDemonMission_addActorToList_FUN_0051b160
;   core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e63e0
        ;   Label: core_gore.cpp_FUN_004e63e0
    PUSH ESI                            ; 004e63e1
    PUSH EDI                            ; 004e63e2
    MOV EDI,dword ptr [ESP + 0x14]      ; 004e63e3
    MOV ESI,dword ptr [ESP + 0x20]      ; 004e63e7
    PUSH 0x2a20                         ; 004e63eb
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 004e63f0
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 004e63f5
    TEST EAX,EAX                        ; 004e63f8
    JNZ 0x004e64ba                      ; 004e63fa
        ;   XREF to: 004e64ba (CONDITIONAL_JUMP)  ; LAB_004e64ba
    MOV EBX,EAX                         ; 004e6400
        ;   Label: LAB_004e6400
    TEST EAX,EAX                        ; 004e6402
    JNZ 0x004e6429                      ; 004e6404
        ;   XREF to: 004e6429 (CONDITIONAL_JUMP)  ; LAB_004e6429
    MOV EDX,0x5e412d                    ; 004e6406 | = "..\\core\\gore.cpp"
    MOV ECX,0x67d                       ; 004e640b
    PUSH 0x5e413e                       ; 004e6410 | = "Can't create flies!"
    MOV dword ptr [0x01d1d400],EDX      ; 004e6415 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004e641b | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004e6421
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004e6426
    FLD float ptr [ESP + 0x1c]          ; 004e6429
        ;   Label: LAB_004e6429
    FDIVR double ptr [0x005e4155]       ; 004e642d | DAT_005e4155
    LEA EAX,[EBX + 0x20]                ; 004e6433
    MOV EDX,dword ptr [EDI]             ; 004e6436
    MOV dword ptr [EAX],EDX             ; 004e6438
    MOV EDX,dword ptr [EDI + 0x4]       ; 004e643a
    MOV dword ptr [EAX + 0x4],EDX       ; 004e643d
    MOV EDX,dword ptr [EDI + 0x8]       ; 004e6440
    MOV dword ptr [EAX + 0x8],EDX       ; 004e6443
    MOV EAX,[0x0061f650]                ; 004e6446 | DAT_0061f650
    MOV EAX,dword ptr [EAX]             ; 004e644b | DAT_01d2c900
    MOV dword ptr [EBX + 0x164],0x0     ; 004e644d
    MOV dword ptr [EBX + 0x2c],EAX      ; 004e6457
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e645a
    MOV dword ptr [EBX + 0x2a0c],EAX    ; 004e645e
    FSTP float ptr [EBX + 0x2a14]       ; 004e6464
    TEST ESI,ESI                        ; 004e646a
    JZ 0x004e6488                       ; 004e646c
        ;   XREF to: 004e6488 (CONDITIONAL_JUMP)  ; LAB_004e6488
    LEA EAX,[EBX + 0x158]               ; 004e646e
    CMP EAX,ESI                         ; 004e6474
    JZ 0x004e6488                       ; 004e6476
        ;   XREF to: 004e6488 (CONDITIONAL_JUMP)  ; LAB_004e6488
    MOV EDX,dword ptr [ESI]             ; 004e6478
    MOV dword ptr [EAX],EDX             ; 004e647a
    MOV EDX,dword ptr [ESI + 0x4]       ; 004e647c
    MOV dword ptr [EAX + 0x4],EDX       ; 004e647f
    MOV EDX,dword ptr [ESI + 0x8]       ; 004e6482
    MOV dword ptr [EAX + 0x8],EDX       ; 004e6485
    PUSH EBX                            ; 004e6488
        ;   Label: LAB_004e6488
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e6489
    CALL dword ptr [EAX]                ; 004e648f
    ADD ESP,0x4                         ; 004e6491
    PUSH EBX                            ; 004e6494
    MOV ESI,dword ptr [0x0061f650]      ; 004e6495 | DAT_0061f650
    PUSH ESI                            ; 004e649b | DAT_01d2c900
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60 ; 004e649c
        ;   XREF to: 0051bd60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004e64a1
    PUSH EBX                            ; 004e64a4
    MOV EDI,dword ptr [0x0061f650]      ; 004e64a5 | DAT_0061f650
    PUSH EDI                            ; 004e64ab | DAT_01d2c900
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_0051b160 ; 004e64ac
        ;   XREF to: 0051b160 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_0051b160(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004e64b1
    MOV EAX,EBX                         ; 004e64b4
    POP EDI                             ; 004e64b6
    POP ESI                             ; 004e64b7
    POP EBX                             ; 004e64b8
    RET                                 ; 004e64b9
    PUSH EAX                            ; 004e64ba
        ;   Label: LAB_004e64ba
    CALL core_flies.cpp_CFlies_ctor_FUN_004bfa60 ; 004e64bb
        ;   XREF to: 004bfa60 (UNCONDITIONAL_CALL)  ; CFlies * core_flies.cpp_CFlies_ctor_FUN_004bfa60(CFlies * this_ptr)
    ADD ESP,0x4                         ; 004e64c0
    JMP 0x004e6400                      ; 004e64c3
        ;   XREF to: 004e6400 (UNCONDITIONAL_JUMP)  ; LAB_004e6400

