; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_hero_cpp_CHero_FUN_004f35b0(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x48]:1  local_48
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_hero.cpp_CHero_FUN_004f3760 at 004f37bd
;
; Referenced Globals:
;   TerminatedCString s_CTrap_0062ec8e
;   double DOUBLE_0062ec96 = 6
;   double DOUBLE_0062ec9e = 0.5
;   double DOUBLE_0062eca6 = 3
;   double DOUBLE_0062ecae = 60
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_CActorDestinationClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_list_ptr
;   undefined4 g_CDemonSetInstance.actor_list_data[0]
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_dest.cpp_FUN_0046fd50
;   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f35b0
        ;   Label: core_hero.cpp_CHero_FUN_004f35b0
    PUSH ESI                            ; 004f35b1
    PUSH EDI                            ; 004f35b2
    PUSH EBP                            ; 004f35b3
    MOV EBP,ESP                         ; 004f35b4
    SUB ESP,0x38                        ; 004f35b6
    MOV ESI,dword ptr [EBP + 0x14]      ; 004f35b9
    LEA EAX,[ESI + 0x1f738]             ; 004f35bc
    MOV dword ptr [ESI + 0x1fbb4],0x0   ; 004f35c2
    XOR EDX,EDX                         ; 004f35cc
    XOR EDI,EDI                         ; 004f35ce
    MOV dword ptr [EBP + -0x8],EDX      ; 004f35d0
    MOV dword ptr [EBP + -0x10],EAX     ; 004f35d3
    MOV EAX,[0x006810c8]                ; 004f35d6 | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_004f35d6
    MOV EBX,dword ptr [EBP + -0x8]      ; 004f35db
    CMP EBX,dword ptr [EAX + 0x14d154]  ; 004f35de | g_CDemonSetInstance.actor_list_ptr
    JL 0x004f3625                       ; 004f35e4
        ;   XREF to: 004f3625 (CONDITIONAL_JUMP)  ; LAB_004f3625
    MOV EAX,dword ptr [EBP + -0x10]     ; 004f35e6
    PUSH 0x62ec8e                       ; 004f35e9 | = "CTrap"
    MOV EAX,dword ptr [EAX + 0x334]     ; 004f35ee
    PUSH EAX                            ; 004f35f4
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004f35f5
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004f35fa
    TEST EAX,EAX                        ; 004f35fd
    JZ 0x004f3610                       ; 004f35ff
        ;   XREF to: 004f3610 (CONDITIONAL_JUMP)  ; LAB_004f3610
    MOV EAX,dword ptr [EBP + -0x10]     ; 004f3601
    MOV EAX,dword ptr [EAX + 0x334]     ; 004f3604
    MOV dword ptr [ESI + 0x1fbb4],EAX   ; 004f360a
    XOR EAX,EAX                         ; 004f3610
        ;   Label: LAB_004f3610
    MOV ESP,EBP                         ; 004f3612
    POP EBP                             ; 004f3614
    POP EDI                             ; 004f3615
    POP ESI                             ; 004f3616
    POP EBX                             ; 004f3617
    RET                                 ; 004f3618
    MOV EAX,dword ptr [EBP + -0x8]      ; 004f3619
        ;   Label: LAB_004f3619
    INC EAX                             ; 004f361c
    ADD EDI,0x4                         ; 004f361d
    MOV dword ptr [EBP + -0x8],EAX      ; 004f3620
    JMP 0x004f35d6                      ; 004f3623
        ;   XREF to: 004f35d6 (UNCONDITIONAL_JUMP)  ; LAB_004f35d6
    MOV EBX,dword ptr [0x020a4874]      ; 004f3625 | g_CActorDestinationClassInfo.name_hash
        ;   Label: LAB_004f3625
    PUSH EBX                            ; 004f362b
    MOV EDX,dword ptr [EDI + EAX*0x1 + 0x14d158] ; 004f362c | g_CDemonSetInstance.actor_list_data[0]
    PUSH EDX                            ; 004f3633
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004f3634
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 004f3639
    ADD ESP,0x8                         ; 004f363b
    MOV dword ptr [EBP + -0x4],EAX      ; 004f363e
    TEST EAX,EAX                        ; 004f3641
    JZ 0x004f3619                       ; 004f3643
        ;   XREF to: 004f3619 (CONDITIONAL_JUMP)  ; LAB_004f3619
    MOV EAX,dword ptr [EBP + -0x10]     ; 004f3645
    MOV EAX,dword ptr [EAX + 0x334]     ; 004f3648
    PUSH EAX                            ; 004f364e
    PUSH EBX                            ; 004f364f
    CALL core_dest.cpp_FUN_0046fd50     ; 004f3650
        ;   XREF to: 0046fd50 (UNCONDITIONAL_CALL)  ; int core_dest.cpp_FUN_0046fd50()
    ADD ESP,0x8                         ; 004f3655
    TEST EAX,EAX                        ; 004f3658
    JZ 0x004f3619                       ; 004f365a
        ;   XREF to: 004f3619 (CONDITIONAL_JUMP)  ; LAB_004f3619
    MOV EAX,EBX                         ; 004f365c
    ADD EAX,0x20                        ; 004f365e
    PUSH EAX                            ; 004f3661
    MOV dword ptr [EBP + -0xc],EAX      ; 004f3662
    LEA EAX,[EBP + -0x2c]               ; 004f3665
    PUSH EAX                            ; 004f3668
    PUSH ESI                            ; 004f3669
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 004f366a
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    FLD float ptr [EBP + -0x28]         ; 004f366f
    FLD1                                ; 004f3672
    ADD ESP,0xc                         ; 004f3674
    FXCH                                ; 004f3677
    FSTP double ptr [EBP + -0x20]       ; 004f3679
    FCOMP double ptr [EBP + -0x20]      ; 004f367c
    FNSTSW AX                           ; 004f367f
    SAHF                                ; 004f3681
    JA 0x004f3619                       ; 004f3682
        ;   XREF to: 004f3619 (CONDITIONAL_JUMP)  ; LAB_004f3619
    FLD double ptr [EBP + -0x20]        ; 004f3684
    FCOMP double ptr [0x0062ec96]       ; 004f3687 | DOUBLE_0062ec96
    FNSTSW AX                           ; 004f368d
    SAHF                                ; 004f368f
    JA 0x004f3619                       ; 004f3690
        ;   XREF to: 004f3619 (CONDITIONAL_JUMP)  ; LAB_004f3619
    FLD float ptr [EBP + -0x24]         ; 004f3692
    FST double ptr [EBP + -0x18]        ; 004f3695
    FCOMP double ptr [0x0062ec9e]       ; 004f3698 | DOUBLE_0062ec9e
    FNSTSW AX                           ; 004f369e
    SAHF                                ; 004f36a0
    JC 0x004f3619                       ; 004f36a1
        ;   XREF to: 004f3619 (CONDITIONAL_JUMP)  ; LAB_004f3619
    FLD double ptr [EBP + -0x18]        ; 004f36a7
    FCOMP double ptr [0x0062eca6]       ; 004f36aa | DOUBLE_0062eca6
    FNSTSW AX                           ; 004f36b0
    SAHF                                ; 004f36b2
    JA 0x004f3619                       ; 004f36b3
        ;   XREF to: 004f3619 (CONDITIONAL_JUMP)  ; LAB_004f3619
    FLD float ptr [EBP + -0x2c]         ; 004f36b9
    FABS                                ; 004f36bc
    FCOMP double ptr [0x0062eca6]       ; 004f36be | DOUBLE_0062eca6
    FNSTSW AX                           ; 004f36c4
    SAHF                                ; 004f36c6
    JA 0x004f3619                       ; 004f36c7
        ;   XREF to: 004f3619 (CONDITIONAL_JUMP)  ; LAB_004f3619
    LEA EAX,[EBP + -0x2c]               ; 004f36cd
    PUSH EAX                            ; 004f36d0
    LEA EAX,[EBP + -0x38]               ; 004f36d1
    PUSH EAX                            ; 004f36d4
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004f36d5
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EAX + 0x4]           ; 004f36da
    FABS                                ; 004f36dd
    ADD ESP,0x8                         ; 004f36df
    FCOMP double ptr [0x0062ecae]       ; 004f36e2 | DOUBLE_0062ecae
    FNSTSW AX                           ; 004f36e8
    SAHF                                ; 004f36ea
    JA 0x004f3619                       ; 004f36eb
        ;   XREF to: 004f3619 (CONDITIONAL_JUMP)  ; LAB_004f3619
    MOV EAX,dword ptr [EBX + 0x158]     ; 004f36f1
    MOV dword ptr [ESI + 0x1fbb4],EAX   ; 004f36f7
    TEST EAX,EAX                        ; 004f36fd
    JZ 0x004f3619                       ; 004f36ff
        ;   XREF to: 004f3619 (CONDITIONAL_JUMP)  ; LAB_004f3619
    MOV EDI,dword ptr [EBP + -0xc]      ; 004f3705
    LEA EAX,[ESI + 0x1fbb8]             ; 004f3708
    CMP EAX,EDI                         ; 004f370e
    JNZ 0x004f373e                      ; 004f3710
        ;   XREF to: 004f373e (CONDITIONAL_JUMP)  ; LAB_004f373e
    MOV EAX,dword ptr [EBP + -0x4]      ; 004f3712
        ;   Label: LAB_004f3712
    ADD ESI,0x1fbc4                     ; 004f3715
    ADD EAX,0x30                        ; 004f371b
    CMP ESI,EAX                         ; 004f371e
    JZ 0x004f3732                       ; 004f3720
        ;   XREF to: 004f3732 (CONDITIONAL_JUMP)  ; LAB_004f3732
    MOV EDX,dword ptr [EAX]             ; 004f3722
    MOV dword ptr [ESI],EDX             ; 004f3724
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f3726
    MOV dword ptr [ESI + 0x4],EDX       ; 004f3729
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f372c
    MOV dword ptr [ESI + 0x8],EDX       ; 004f372f
    MOV EAX,0x1                         ; 004f3732
        ;   Label: LAB_004f3732
    MOV ESP,EBP                         ; 004f3737
    POP EBP                             ; 004f3739
    POP EDI                             ; 004f373a
    POP ESI                             ; 004f373b
    POP EBX                             ; 004f373c
    RET                                 ; 004f373d
    MOV EBX,EDI                         ; 004f373e
        ;   Label: LAB_004f373e
    MOV EDX,dword ptr [EBX]             ; 004f3740
    MOV dword ptr [EAX],EDX             ; 004f3742
    MOV EDX,dword ptr [EBX + 0x4]       ; 004f3744
    MOV dword ptr [EAX + 0x4],EDX       ; 004f3747
    MOV EDX,dword ptr [EBX + 0x8]       ; 004f374a
    MOV dword ptr [EAX + 0x8],EDX       ; 004f374d
    JMP 0x004f3712                      ; 004f3750
        ;   XREF to: 004f3712 (UNCONDITIONAL_JUMP)  ; LAB_004f3712

