; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_00585170(CDemonActor *object)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   object
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[3]:
;   core_stranger.cpp_CStranger_tryPlaceObject_FUN_0058d910 at 0058dc56
;   core_stranger.cpp_CStranger_updateProceduralAnimation_FUN_00588ad0 at 005899eb
;   core_stranger.cpp_FUN_0058afe0 at 0058bfb2
;
; Referenced Globals:
;   undefined4 DAT_005f63b9
;   undefined4 g_CBoxActorClassInfo.name_hash
;   undefined4 g_CCryptVesselClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00585170
        ;   Label: core_stranger.cpp_getCarriedObjectVerticalOffset_FUN_00585170
    PUSH ESI                            ; 00585171
    PUSH EBP                            ; 00585172
    SUB ESP,0xc                         ; 00585173
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00585176
    MOV EDX,dword ptr [0x007c5094]      ; 0058517a | g_CBoxActorClassInfo.name_hash
    PUSH EDX                            ; 00585180
    PUSH ESI                            ; 00585181
    XOR EBX,EBX                         ; 00585182
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00585184
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00585189
    TEST EAX,EAX                        ; 0058518c
    JNZ 0x005851f3                      ; 0058518e
        ;   XREF to: 005851f3 (CONDITIONAL_JUMP)  ; LAB_005851f3
    MOV ECX,dword ptr [0x02c8afa8]      ; 00585190 | g_CCryptVesselClassInfo.name_hash
        ;   Label: LAB_00585190
    PUSH ECX                            ; 00585196
    PUSH ESI                            ; 00585197
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00585198
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0058519d
    TEST EAX,EAX                        ; 005851a0
    JZ 0x005851b4                       ; 005851a2
        ;   XREF to: 005851b4 (CONDITIONAL_JUMP)  ; LAB_005851b4
    ADD EAX,0x158                       ; 005851a4
    PUSH EAX                            ; 005851a9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 005851aa
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005851af
    MOV EBX,EAX                         ; 005851b2
    TEST EBX,EBX                        ; 005851b4
        ;   Label: LAB_005851b4
    JZ 0x00585205                       ; 005851b6
        ;   XREF to: 00585205 (CONDITIONAL_JUMP)  ; LAB_00585205
    PUSH EDI                            ; 005851b8
    XOR EDI,EDI                         ; 005851b9
    XOR ESI,ESI                         ; 005851bb
    XOR ECX,ECX                         ; 005851bd
    XOR EDX,EDX                         ; 005851bf
    MOV dword ptr [ESP + 0x8],EDI       ; 005851c1
    MOV EAX,dword ptr [EBX + 0x104]     ; 005851c5
        ;   Label: LAB_005851c5
    CMP ECX,EAX                         ; 005851cb
    JGE 0x00585216                      ; 005851cd
        ;   XREF to: 00585216 (CONDITIONAL_JUMP)  ; LAB_00585216
    MOV EAX,dword ptr [EBX + 0x10c]     ; 005851cf
    ADD EAX,EDX                         ; 005851d5
    MOV EBP,dword ptr [EAX]             ; 005851d7
    CMP EDI,EBP                         ; 005851d9
    JGE 0x005851e6                      ; 005851db
        ;   XREF to: 005851e6 (CONDITIONAL_JUMP)  ; LAB_005851e6
    MOV EDI,EBP                         ; 005851dd
    MOV EBP,dword ptr [EAX + 0x4]       ; 005851df
    MOV dword ptr [ESP + 0x8],EBP       ; 005851e2
    MOV EBP,dword ptr [EAX + 0x4]       ; 005851e6
        ;   Label: LAB_005851e6
    CMP ESI,EBP                         ; 005851e9
    JL 0x00585212                       ; 005851eb
        ;   XREF to: 00585212 (CONDITIONAL_JUMP)  ; LAB_00585212
    INC ECX                             ; 005851ed
        ;   Label: LAB_005851ed
    ADD EDX,0xc                         ; 005851ee
    JMP 0x005851c5                      ; 005851f1
        ;   XREF to: 005851c5 (UNCONDITIONAL_JUMP)  ; LAB_005851c5
    ADD EAX,0x158                       ; 005851f3
        ;   Label: LAB_005851f3
    PUSH EAX                            ; 005851f8
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 005851f9
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005851fe
    MOV EBX,EAX                         ; 00585201
    JMP 0x00585190                      ; 00585203
        ;   XREF to: 00585190 (UNCONDITIONAL_JUMP)  ; LAB_00585190
    MOV dword ptr [ESP],EBX             ; 00585205
        ;   Label: LAB_00585205
    MOV EAX,dword ptr [ESP]             ; 00585208
    ADD ESP,0xc                         ; 0058520b
    POP EBP                             ; 0058520e
    POP ESI                             ; 0058520f
    POP EBX                             ; 00585210
    RET                                 ; 00585211
    MOV ESI,EBP                         ; 00585212
        ;   Label: LAB_00585212
    JMP 0x005851ed                      ; 00585214
        ;   XREF to: 005851ed (UNCONDITIONAL_JUMP)  ; LAB_005851ed
    MOV EBP,dword ptr [ESP + 0x8]       ; 00585216
        ;   Label: LAB_00585216
    SUB ESI,EBP                         ; 0058521a
    MOV dword ptr [ESP + 0xc],ESI       ; 0058521c
    FILD dword ptr [ESP + 0xc]          ; 00585220
    FMUL double ptr [0x005f63b9]        ; 00585224 | DAT_005f63b9
    FSTP float ptr [ESP + 0x4]          ; 0058522a
    POP EDI                             ; 0058522e
    MOV EAX,dword ptr [ESP]             ; 0058522f
    ADD ESP,0xc                         ; 00585232
    POP EBP                             ; 00585235
    POP ESI                             ; 00585236
    POP EBX                             ; 00585237
    RET                                 ; 00585238

