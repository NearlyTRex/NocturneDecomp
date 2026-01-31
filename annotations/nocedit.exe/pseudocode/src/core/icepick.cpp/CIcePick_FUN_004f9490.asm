; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_icepick_cpp_CIcePick_FUN_004f9490(CIcePick *this_ptr)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined1       Stack[-0x30]:1  local_30
; undefined1       Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_icepick.cpp_CIcePick_FUN_004f93a0 at 004f940b
;
; Referenced Globals:
;   TerminatedCString s_icepick_punch_wav_0062f7e3
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.damage_listener_count
;   undefined4 g_CDemonSetInstance.damage_listeners
;   undefined4 DAT_03263318
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9490
        ;   Label: core_icepick.cpp_CIcePick_FUN_004f9490
    PUSH ESI                            ; 004f9491
    PUSH EDI                            ; 004f9492
    PUSH EBP                            ; 004f9493
    SUB ESP,0x5c                        ; 004f9494
    MOV ESI,dword ptr [ESP + 0x70]      ; 004f9497
    MOV EDX,dword ptr [ESP + 0x74]      ; 004f949b
    PUSH EDX                            ; 004f949f
    LEA EAX,[ESP + 0x4c]                ; 004f94a0
    PUSH EAX                            ; 004f94a4
    LEA EAX,[ESI + 0x158]               ; 004f94a5
    PUSH EAX                            ; 004f94ab
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 004f94ac
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004f94b1
    PUSH EAX                            ; 004f94b4
    LEA EAX,[ESP + 0x40]                ; 004f94b5
    PUSH EAX                            ; 004f94b9
    PUSH ESI                            ; 004f94ba
    XOR EDI,EDI                         ; 004f94bb
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004f94bd
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004f94c2
    XOR ECX,ECX                         ; 004f94c5
    XOR EBP,EBP                         ; 004f94c7
    MOV dword ptr [ESP + 0x54],ECX      ; 004f94c9
    MOV EAX,[0x006810c8]                ; 004f94cd | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_004f94cd
    CMP EDI,dword ptr [EAX + 0x14f098]  ; 004f94d2 | g_CDemonSetInstance.damage_listener_count
    JGE 0x004f9564                      ; 004f94d8
        ;   XREF to: 004f9564 (CONDITIONAL_JUMP)  ; LAB_004f9564
    MOV EBX,dword ptr [EAX + EBP*0x1 + 0x14f09c] ; 004f94de | g_CDemonSetInstance.damage_listeners | DAT_03263318
    CMP EBX,ESI                         ; 004f94e5
    JNZ 0x004f94ef                      ; 004f94e7
        ;   XREF to: 004f94ef (CONDITIONAL_JUMP)  ; LAB_004f94ef
    INC EDI                             ; 004f94e9
        ;   Label: LAB_004f94e9
    ADD EBP,0x4                         ; 004f94ea
    JMP 0x004f94cd                      ; 004f94ed
        ;   XREF to: 004f94cd (UNCONDITIONAL_JUMP)  ; LAB_004f94cd
    MOV EAX,ESP                         ; 004f94ef
        ;   Label: LAB_004f94ef
    PUSH EAX                            ; 004f94f1
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 004f94f2
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004f94f7
    PUSH 0x43020000                     ; 004f94fa
    PUSH 0x42b40000                     ; 004f94ff
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004f9504
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    CMP dword ptr [ESP + 0x54],0x0      ; 004f9564
        ;   Label: LAB_004f9564
    JNZ 0x004f9573                      ; 004f9569
        ;   XREF to: 004f9573 (CONDITIONAL_JUMP)  ; LAB_004f9573
    ADD ESP,0x5c                        ; 004f956b
    POP EBP                             ; 004f956e
    POP EDI                             ; 004f956f
    POP ESI                             ; 004f9570
    POP EBX                             ; 004f9571
    RET                                 ; 004f9572
    PUSH 0x62f7e3                       ; 004f9573 | = "icepick-punch?.wav"
        ;   Label: LAB_004f9573
    MOV EAX,dword ptr [ESI + 0x154]     ; 004f9578
    PUSH ESI                            ; 004f957e
    CALL dword ptr [EAX + 0x24]         ; 004f957f
    ADD ESP,0x8                         ; 004f9582
    ADD ESP,0x5c                        ; 004f9585
    POP EBP                             ; 004f9588
    POP EDI                             ; 004f9589
    POP ESI                             ; 004f958a
    POP EBX                             ; 004f958b
    RET                                 ; 004f958c

