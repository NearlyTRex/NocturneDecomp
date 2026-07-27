; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_00534fc0(undefined4 param_1)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[3]:
;   core_stranger.cpp_CStranger_computeWeaponAttachXForm_FUN_0053a760 at 0053b3c6
;   core_stranger.cpp_FUN_005384d0 at 005391c8
;   core_stranger.cpp_FUN_0053c800 at 0053cab9
;
; Referenced Globals:
;   double DOUBLE_005951e7 = 0.00390625
;   undefined4 g_CBoxActorActorType_00764800.name_hash
;   undefined4 g_CCryptVesselActorType_02dd11cc.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534fc0
        ;   Label: core_stranger.cpp_getCarriedObjectVerticalOffset_FUN_00534fc0
    PUSH ESI                            ; 00534fc1
    PUSH EBP                            ; 00534fc2
    SUB ESP,0xc                         ; 00534fc3
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00534fc6
    MOV EDX,dword ptr [0x00764838]      ; 00534fca | g_CBoxActorActorType_00764800.name_hash
    PUSH EDX                            ; 00534fd0
    PUSH ESI                            ; 00534fd1
    XOR EBX,EBX                         ; 00534fd2
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00534fd4
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 00534fd9
    TEST EAX,EAX                        ; 00534fdc
    JNZ 0x00535043                      ; 00534fde
        ;   XREF to: 00535043 (CONDITIONAL_JUMP)  ; LAB_00535043
    MOV ECX,dword ptr [0x02dd1204]      ; 00534fe0 | g_CCryptVesselActorType_02dd11cc.name_hash
        ;   Label: LAB_00534fe0
    PUSH ECX                            ; 00534fe6
    PUSH ESI                            ; 00534fe7
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00534fe8
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 00534fed
    TEST EAX,EAX                        ; 00534ff0
    JZ 0x00535004                       ; 00534ff2
        ;   XREF to: 00535004 (CONDITIONAL_JUMP)  ; LAB_00535004
    ADD EAX,0x150                       ; 00534ff4
    PUSH EAX                            ; 00534ff9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 00534ffa
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530()
    ADD ESP,0x4                         ; 00534fff
    MOV EBX,EAX                         ; 00535002
    TEST EBX,EBX                        ; 00535004
        ;   Label: LAB_00535004
    JZ 0x00535055                       ; 00535006
        ;   XREF to: 00535055 (CONDITIONAL_JUMP)  ; LAB_00535055
    PUSH EDI                            ; 00535008
    XOR EDI,EDI                         ; 00535009
    XOR ESI,ESI                         ; 0053500b
    XOR ECX,ECX                         ; 0053500d
    XOR EDX,EDX                         ; 0053500f
    MOV dword ptr [ESP + 0x8],EDI       ; 00535011
    MOV EAX,dword ptr [EBX + 0x104]     ; 00535015
        ;   Label: LAB_00535015
    CMP ECX,EAX                         ; 0053501b
    JGE 0x00535066                      ; 0053501d
        ;   XREF to: 00535066 (CONDITIONAL_JUMP)  ; LAB_00535066
    MOV EAX,dword ptr [EBX + 0x10c]     ; 0053501f
    ADD EAX,EDX                         ; 00535025
    MOV EBP,dword ptr [EAX]             ; 00535027
    CMP EDI,EBP                         ; 00535029
    JGE 0x00535036                      ; 0053502b
        ;   XREF to: 00535036 (CONDITIONAL_JUMP)  ; LAB_00535036
    MOV EDI,EBP                         ; 0053502d
    MOV EBP,dword ptr [EAX + 0x4]       ; 0053502f
    MOV dword ptr [ESP + 0x8],EBP       ; 00535032
    MOV EBP,dword ptr [EAX + 0x4]       ; 00535036
        ;   Label: LAB_00535036
    CMP ESI,EBP                         ; 00535039
    JL 0x00535062                       ; 0053503b
        ;   XREF to: 00535062 (CONDITIONAL_JUMP)  ; LAB_00535062
    INC ECX                             ; 0053503d
        ;   Label: LAB_0053503d
    ADD EDX,0xc                         ; 0053503e
    JMP 0x00535015                      ; 00535041
        ;   XREF to: 00535015 (UNCONDITIONAL_JUMP)  ; LAB_00535015
    ADD EAX,0x150                       ; 00535043
        ;   Label: LAB_00535043
    PUSH EAX                            ; 00535048
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 00535049
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530()
    ADD ESP,0x4                         ; 0053504e
    MOV EBX,EAX                         ; 00535051
    JMP 0x00534fe0                      ; 00535053
        ;   XREF to: 00534fe0 (UNCONDITIONAL_JUMP)  ; LAB_00534fe0
    MOV dword ptr [ESP],EBX             ; 00535055
        ;   Label: LAB_00535055
    MOV EAX,dword ptr [ESP]             ; 00535058
    ADD ESP,0xc                         ; 0053505b
    POP EBP                             ; 0053505e
    POP ESI                             ; 0053505f
    POP EBX                             ; 00535060
    RET                                 ; 00535061
    MOV ESI,EBP                         ; 00535062
        ;   Label: LAB_00535062
    JMP 0x0053503d                      ; 00535064
        ;   XREF to: 0053503d (UNCONDITIONAL_JUMP)  ; LAB_0053503d
    MOV EBP,dword ptr [ESP + 0x8]       ; 00535066
        ;   Label: LAB_00535066
    SUB ESI,EBP                         ; 0053506a
    MOV dword ptr [ESP + 0xc],ESI       ; 0053506c
    FILD dword ptr [ESP + 0xc]          ; 00535070
    FMUL double ptr [0x005951e7]        ; 00535074 | DOUBLE_005951e7
    FSTP float ptr [ESP + 0x4]          ; 0053507a
    POP EDI                             ; 0053507e
    MOV EAX,dword ptr [ESP]             ; 0053507f
    ADD ESP,0xc                         ; 00535082
    POP EBP                             ; 00535085
    POP ESI                             ; 00535086
    POP EBX                             ; 00535087
    RET                                 ; 00535088

