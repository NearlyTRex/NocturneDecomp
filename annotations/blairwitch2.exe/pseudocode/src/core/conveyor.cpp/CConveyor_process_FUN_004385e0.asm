; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_conveyor_cpp_CConveyor_process_FUN_004385e0(CConveyor *this_ptr,float delta_time)
;
; Parameters:
; CConveyor *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_006141f0
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_isOfClass_FUN_0040c840
;   core_event.cpp_CEventList_evaluateCondition_FUN_0048e340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004385e0
        ;   Label: core_conveyor.cpp_CConveyor_process_FUN_004385e0
    PUSH ESI                            ; 004385e1
    PUSH EDI                            ; 004385e2
    PUSH EBP                            ; 004385e3
    SUB ESP,0x40                        ; 004385e4
    MOV EBP,dword ptr [ESP + 0x54]      ; 004385e7
    LEA EAX,[EBP + 0x89c]               ; 004385eb
    PUSH EAX                            ; 004385f1
    MOV EDX,dword ptr [0x006141f0]      ; 004385f2 | DAT_006141f0
    PUSH EDX                            ; 004385f8
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 004385f9
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004385fe
    TEST EAX,EAX                        ; 00438601
    JZ 0x0043860f                       ; 00438603
        ;   XREF to: 0043860f (CONDITIONAL_JUMP)  ; LAB_0043860f
    MOV dword ptr [EBP + 0x964],0x1     ; 00438605
    LEA EAX,[EBP + 0x900]               ; 0043860f
        ;   Label: LAB_0043860f
    PUSH EAX                            ; 00438615
    MOV ECX,dword ptr [0x006141f0]      ; 00438616 | DAT_006141f0
    PUSH ECX                            ; 0043861c
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 0043861d
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00438622
    TEST EAX,EAX                        ; 00438625
    JNZ 0x0043868b                      ; 00438627
        ;   XREF to: 0043868b (CONDITIONAL_JUMP)  ; LAB_0043868b
    CMP dword ptr [EBP + 0x964],0x0     ; 00438629
    JZ 0x00438695                       ; 00438630
        ;   XREF to: 00438695 (CONDITIONAL_JUMP)  ; LAB_00438695
    MOV dword ptr [ESP + 0x38],EAX      ; 00438632
    LEA EAX,[EBP + 0x890]               ; 00438636
    XOR EDI,EDI                         ; 0043863c
    MOV dword ptr [ESP + 0x34],EAX      ; 0043863e
    LEA EAX,[EBP + 0x968]               ; 00438642
    MOV dword ptr [ESP + 0x3c],EDI      ; 00438648
    MOV dword ptr [ESP + 0x30],EAX      ; 0043864c
    MOV EAX,[0x0061b5a8]                ; 00438650 | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_00438650
    MOV EDX,dword ptr [ESP + 0x38]      ; 00438655
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 00438659 | g_CDemonSetInstance.actor_count
    JGE 0x00438695                      ; 0043865f
        ;   XREF to: 00438695 (CONDITIONAL_JUMP)  ; LAB_00438695
    ADD EAX,dword ptr [ESP + 0x3c]      ; 00438661
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 00438665 | g_CDemonSetInstance.actors[0]
    MOV ESI,dword ptr [EBX + 0xdc]      ; 0043866b
    CMP EBP,ESI                         ; 00438671
    JZ 0x0043869d                       ; 00438673
        ;   XREF to: 0043869d (CONDITIONAL_JUMP)  ; LAB_0043869d
    MOV ECX,dword ptr [ESP + 0x38]      ; 00438675
        ;   Label: LAB_00438675
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00438679
    INC ECX                             ; 0043867d
    ADD EDX,0x4                         ; 0043867e
    MOV dword ptr [ESP + 0x38],ECX      ; 00438681
    MOV dword ptr [ESP + 0x3c],EDX      ; 00438685
    JMP 0x00438650                      ; 00438689
        ;   XREF to: 00438650 (UNCONDITIONAL_JUMP)  ; LAB_00438650
    MOV dword ptr [EBP + 0x964],0x0     ; 0043868b
        ;   Label: LAB_0043868b
    ADD ESP,0x40                        ; 00438695
        ;   Label: LAB_00438695
    POP EBP                             ; 00438698
    POP EDI                             ; 00438699
    POP ESI                             ; 0043869a
    POP EBX                             ; 0043869b
    RET                                 ; 0043869c
    CMP byte ptr [ESI + 0x968],0x0      ; 0043869d
        ;   Label: LAB_0043869d
    JNZ 0x0043873a                      ; 004386a4
        ;   XREF to: 0043873a (CONDITIONAL_JUMP)  ; LAB_0043873a
    MOV EAX,dword ptr [ESP + 0x34]      ; 004386aa
        ;   Label: LAB_004386aa
    PUSH EAX                            ; 004386ae
    PUSH EBP                            ; 004386af
    LEA ESI,[ESP + 0x2c]                ; 004386b0
    LEA EDI,[ESP + 0x8]                 ; 004386b4
    CALL core_actor.cpp_FUN_00408cf0    ; 004386b8
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[ESP + 0x2c]                ; 004386bd
    ADD ESP,0x8                         ; 004386c1
    MOVSD ES:EDI,ESI                    ; 004386c4
    MOVSD ES:EDI,ESI                    ; 004386c5
    MOVSD ES:EDI,ESI                    ; 004386c6
    FLD float ptr [ESP + 0x58]          ; 004386c7
    FLD float ptr [ESP]                 ; 004386cb
    FMUL ST1                            ; 004386ce
    FLD float ptr [ESP + 0x4]           ; 004386d0
    FMUL ST2                            ; 004386d4
    FLD float ptr [ESP + 0x8]           ; 004386d6
    FMULP ST3                           ; 004386da
    LEA EAX,[ESP + 0x18]                ; 004386dc
    LEA EDX,[EBX + 0xe0]                ; 004386e0
    LEA EDI,[ESP + 0x18]                ; 004386e6
    LEA ESI,[ESP + 0xc]                 ; 004386ea
    FXCH                                ; 004386ee
    FSTP float ptr [ESP + 0xc]          ; 004386f0
    FSTP float ptr [ESP + 0x10]         ; 004386f4
    FSTP float ptr [ESP + 0x14]         ; 004386f8
    MOVSD ES:EDI,ESI                    ; 004386fc
    MOVSD ES:EDI,ESI                    ; 004386fd
    MOVSD ES:EDI,ESI                    ; 004386fe
    CMP EDX,EAX                         ; 004386ff
    JZ 0x00438717                       ; 00438701
        ;   XREF to: 00438717 (CONDITIONAL_JUMP)  ; LAB_00438717
    MOV EAX,dword ptr [ESP + 0x18]      ; 00438703
    MOV dword ptr [EDX],EAX             ; 00438707
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00438709
    MOV dword ptr [EDX + 0x4],EAX       ; 0043870d
    MOV EAX,dword ptr [ESP + 0x20]      ; 00438710
    MOV dword ptr [EDX + 0x8],EAX       ; 00438714
    MOV dword ptr [EBX + 0xf4],0x0      ; 00438717
        ;   Label: LAB_00438717
    MOV dword ptr [EBX + 0xf0],0x0      ; 00438721
    MOV dword ptr [EBX + 0xec],0x0      ; 0043872b
    JMP 0x00438675                      ; 00438735
        ;   XREF to: 00438675 (UNCONDITIONAL_JUMP)  ; LAB_00438675
    MOV EDI,dword ptr [ESP + 0x30]      ; 0043873a
        ;   Label: LAB_0043873a
    PUSH EDI                            ; 0043873e
    PUSH EBX                            ; 0043873f
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 00438740
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00438745
    TEST EAX,EAX                        ; 00438748
    JNZ 0x004386aa                      ; 0043874a
        ;   XREF to: 004386aa (CONDITIONAL_JUMP)  ; LAB_004386aa
    JMP 0x00438675                      ; 00438750
        ;   XREF to: 00438675 (UNCONDITIONAL_JUMP)  ; LAB_00438675

