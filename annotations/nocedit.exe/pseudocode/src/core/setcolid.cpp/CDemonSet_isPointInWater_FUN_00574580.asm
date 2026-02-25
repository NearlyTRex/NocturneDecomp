; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setcolid_cpp_CDemonSet_isPointInWater_FUN_00574580(CDemonSet *this_ptr,CVector3f *point)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   point
; Local Variables:
; undefined1       Stack[-0x1c]:1  local_1c
;
; XREF[2]:
;   core_actor.cpp_CDemonActor_handleFootstep_FUN_0040ca10 at 0040ca8a
;   core_charactr.cpp_CCharacter_processSmoking_FUN_0042ea40 at 0042eb34
;
; Referenced Globals:
;   float FLOAT_006463fa = -10
;   CWater* g_CWaterPtr = 03f875e0
;   undefined4 DAT_03f875e4
;   undefined4 g_CWaterActorClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574580
        ;   Label: core_setcolid.cpp_CDemonSet_isPointInWater_FUN_00574580
    PUSH ESI                            ; 00574581
    PUSH EDI                            ; 00574582
    PUSH EBP                            ; 00574583
    SUB ESP,0x24                        ; 00574584
    MOV EBP,dword ptr [ESP + 0x38]      ; 00574587
    MOV EAX,[0x006844f0]                ; 0057458b | g_CWaterPtr
    TEST dword ptr [EAX + 0x4],0x7fffffff ; 00574590 | DAT_03f875e4
    JZ 0x005745a8                       ; 00574597
        ;   XREF to: 005745a8 (CONDITIONAL_JUMP)  ; LAB_005745a8
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00574599
    FLD float ptr [EDX + 0x4]           ; 0057459d
    FCOMP float ptr [EAX + 0x4]         ; 005745a0 | DAT_03f875e4
    FNSTSW AX                           ; 005745a3
    SAHF                                ; 005745a5
    JC 0x005745e9                       ; 005745a6
        ;   XREF to: 005745e9 (CONDITIONAL_JUMP)  ; LAB_005745e9
    MOV ECX,dword ptr [EBP + 0x14d154]  ; 005745a8
        ;   Label: LAB_005745a8
    XOR ESI,ESI                         ; 005745ae
    TEST ECX,ECX                        ; 005745b0
    JLE 0x005745df                      ; 005745b2
        ;   XREF to: 005745df (CONDITIONAL_JUMP)  ; LAB_005745df
    MOV EDI,EBP                         ; 005745b4
    MOV EAX,[0x03f939a0]                ; 005745b6 | g_CWaterActorClassInfo.name_hash
        ;   Label: LAB_005745b6
    PUSH EAX                            ; 005745bb
    MOV EDX,dword ptr [EDI + 0x14d158]  ; 005745bc
    PUSH EDX                            ; 005745c2
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005745c3
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 005745c8
    ADD ESP,0x8                         ; 005745ca
    TEST EAX,EAX                        ; 005745cd
    JNZ 0x005745f0                      ; 005745cf
        ;   XREF to: 005745f0 (CONDITIONAL_JUMP)  ; LAB_005745f0
    INC ESI                             ; 005745d1
        ;   Label: LAB_005745d1
    MOV EBX,dword ptr [EBP + 0x14d154]  ; 005745d2
    ADD EDI,0x4                         ; 005745d8
    CMP ESI,EBX                         ; 005745db
    JL 0x005745b6                       ; 005745dd
        ;   XREF to: 005745b6 (CONDITIONAL_JUMP)  ; LAB_005745b6
    XOR EAX,EAX                         ; 005745df
        ;   Label: LAB_005745df
    ADD ESP,0x24                        ; 005745e1
        ;   Label: LAB_005745e1
    POP EBP                             ; 005745e4
    POP EDI                             ; 005745e5
    POP ESI                             ; 005745e6
    POP EBX                             ; 005745e7
    RET                                 ; 005745e8
    MOV EAX,0x1                         ; 005745e9
        ;   Label: LAB_005745e9
    JMP 0x005745e1                      ; 005745ee
        ;   XREF to: 005745e1 (UNCONDITIONAL_JUMP)  ; LAB_005745e1
    MOV ECX,dword ptr [ESP + 0x3c]      ; 005745f0
        ;   Label: LAB_005745f0
    PUSH ECX                            ; 005745f4
    LEA EAX,[ESP + 0x1c]                ; 005745f5
    PUSH EAX                            ; 005745f9
    PUSH EBX                            ; 005745fa
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005745fb
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 00574600
    MOV EAX,ESP                         ; 00574603
    PUSH EAX                            ; 00574605
    MOV EDX,dword ptr [EBX + 0x154]     ; 00574606
    PUSH EBX                            ; 0057460c
    CALL dword ptr [EDX + 0x14]         ; 0057460d
    ADD ESP,0x8                         ; 00574610
    FLD float ptr [ESP + 0x4]           ; 00574613
    FADD float ptr [0x006463fa]         ; 00574617 | FLOAT_006463fa
    FLD float ptr [ESP]                 ; 0057461d
    FXCH                                ; 00574620
    FSTP float ptr [ESP + 0x4]          ; 00574622
    FCOMP float ptr [ESP + 0x18]        ; 00574626
    FNSTSW AX                           ; 0057462a
    SAHF                                ; 0057462c
    JA 0x005745d1                       ; 0057462d
        ;   XREF to: 005745d1 (CONDITIONAL_JUMP)  ; LAB_005745d1
    FLD float ptr [ESP + 0x4]           ; 0057462f
    FCOMP float ptr [ESP + 0x1c]        ; 00574633
    FNSTSW AX                           ; 00574637
    SAHF                                ; 00574639
    JA 0x005745d1                       ; 0057463a
        ;   XREF to: 005745d1 (CONDITIONAL_JUMP)  ; LAB_005745d1
    FLD float ptr [ESP + 0x8]           ; 0057463c
    FCOMP float ptr [ESP + 0x20]        ; 00574640
    FNSTSW AX                           ; 00574644
    SAHF                                ; 00574646
    JA 0x005745d1                       ; 00574647
        ;   XREF to: 005745d1 (CONDITIONAL_JUMP)  ; LAB_005745d1
    FLD float ptr [ESP + 0xc]           ; 00574649
    FCOMP float ptr [ESP + 0x18]        ; 0057464d
    FNSTSW AX                           ; 00574651
    SAHF                                ; 00574653
    JC 0x005745d1                       ; 00574654
        ;   XREF to: 005745d1 (CONDITIONAL_JUMP)  ; LAB_005745d1
    FLD float ptr [ESP + 0x10]          ; 0057465a
    FCOMP float ptr [ESP + 0x1c]        ; 0057465e
    FNSTSW AX                           ; 00574662
    SAHF                                ; 00574664
    JC 0x005745d1                       ; 00574665
        ;   XREF to: 005745d1 (CONDITIONAL_JUMP)  ; LAB_005745d1
    FLD float ptr [ESP + 0x14]          ; 0057466b
    FCOMP float ptr [ESP + 0x20]        ; 0057466f
    FNSTSW AX                           ; 00574673
    SAHF                                ; 00574675
    JC 0x005745d1                       ; 00574676
        ;   XREF to: 005745d1 (CONDITIONAL_JUMP)  ; LAB_005745d1
    MOV EAX,0x1                         ; 0057467c
    ADD ESP,0x24                        ; 00574681
    POP EBP                             ; 00574684
    POP EDI                             ; 00574685
    POP ESI                             ; 00574686
    POP EBX                             ; 00574687
    RET                                 ; 00574688

