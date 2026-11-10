; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_conveyor_cpp_CConveyor_process_FUN_004478a0(CConveyor *this_ptr,float delta_time)
;
; Parameters:
; CConveyor *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_0061b4d0
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_isOfClass_FUN_0040c550
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004478a0
        ;   Label: core_conveyor.cpp_CConveyor_process_FUN_004478a0
    PUSH ESI                            ; 004478a1
    PUSH EDI                            ; 004478a2
    PUSH EBP                            ; 004478a3
    SUB ESP,0x40                        ; 004478a4
    MOV EBP,dword ptr [ESP + 0x54]      ; 004478a7
    LEA EAX,[EBP + 0x740]               ; 004478ab
    PUSH EAX                            ; 004478b1
    MOV EDX,dword ptr [0x0061b4d0]      ; 004478b2 | DAT_0061b4d0
    PUSH EDX                            ; 004478b8
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 004478b9
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004478be
    TEST EAX,EAX                        ; 004478c1
    JZ 0x004478cf                       ; 004478c3
        ;   XREF to: 004478cf (CONDITIONAL_JUMP)  ; LAB_004478cf
    MOV dword ptr [EBP + 0x808],0x1     ; 004478c5
    LEA EAX,[EBP + 0x7a4]               ; 004478cf
        ;   Label: LAB_004478cf
    PUSH EAX                            ; 004478d5
    MOV ECX,dword ptr [0x0061b4d0]      ; 004478d6 | DAT_0061b4d0
    PUSH ECX                            ; 004478dc
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 004478dd
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004478e2
    TEST EAX,EAX                        ; 004478e5
    JNZ 0x0044794b                      ; 004478e7
        ;   XREF to: 0044794b (CONDITIONAL_JUMP)  ; LAB_0044794b
    CMP dword ptr [EBP + 0x808],0x0     ; 004478e9
    JZ 0x00447955                       ; 004478f0
        ;   XREF to: 00447955 (CONDITIONAL_JUMP)  ; LAB_00447955
    MOV dword ptr [ESP + 0x38],EAX      ; 004478f2
    LEA EAX,[EBP + 0x734]               ; 004478f6
    XOR EDI,EDI                         ; 004478fc
    MOV dword ptr [ESP + 0x34],EAX      ; 004478fe
    LEA EAX,[EBP + 0x80c]               ; 00447902
    MOV dword ptr [ESP + 0x3c],EDI      ; 00447908
    MOV dword ptr [ESP + 0x30],EAX      ; 0044790c
    MOV EAX,[0x00622c18]                ; 00447910 | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_00447910
    MOV EDX,dword ptr [ESP + 0x38]      ; 00447915
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 00447919 | g_CDemonSetInstance.actor_count
    JGE 0x00447955                      ; 0044791f
        ;   XREF to: 00447955 (CONDITIONAL_JUMP)  ; LAB_00447955
    ADD EAX,dword ptr [ESP + 0x3c]      ; 00447921
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 00447925 | g_CDemonSetInstance.actors[0]
    MOV ESI,dword ptr [EBX + 0xdc]      ; 0044792b
    CMP EBP,ESI                         ; 00447931
    JZ 0x0044795d                       ; 00447933
        ;   XREF to: 0044795d (CONDITIONAL_JUMP)  ; LAB_0044795d
    MOV ECX,dword ptr [ESP + 0x38]      ; 00447935
        ;   Label: LAB_00447935
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00447939
    INC ECX                             ; 0044793d
    ADD EDX,0x4                         ; 0044793e
    MOV dword ptr [ESP + 0x38],ECX      ; 00447941
    MOV dword ptr [ESP + 0x3c],EDX      ; 00447945
    JMP 0x00447910                      ; 00447949
        ;   XREF to: 00447910 (UNCONDITIONAL_JUMP)  ; LAB_00447910
    MOV dword ptr [EBP + 0x808],0x0     ; 0044794b
        ;   Label: LAB_0044794b
    ADD ESP,0x40                        ; 00447955
        ;   Label: LAB_00447955
    POP EBP                             ; 00447958
    POP EDI                             ; 00447959
    POP ESI                             ; 0044795a
    POP EBX                             ; 0044795b
    RET                                 ; 0044795c
    CMP byte ptr [ESI + 0x80c],0x0      ; 0044795d
        ;   Label: LAB_0044795d
    JNZ 0x004479fa                      ; 00447964
        ;   XREF to: 004479fa (CONDITIONAL_JUMP)  ; LAB_004479fa
    MOV EAX,dword ptr [ESP + 0x34]      ; 0044796a
        ;   Label: LAB_0044796a
    PUSH EAX                            ; 0044796e
    PUSH EBP                            ; 0044796f
    LEA ESI,[ESP + 0x2c]                ; 00447970
    LEA EDI,[ESP + 0x8]                 ; 00447974
    CALL core_actor.cpp_FUN_00408ac0    ; 00447978
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0x2c]                ; 0044797d
    ADD ESP,0x8                         ; 00447981
    MOVSD ES:EDI,ESI                    ; 00447984
    MOVSD ES:EDI,ESI                    ; 00447985
    MOVSD ES:EDI,ESI                    ; 00447986
    FLD float ptr [ESP + 0x58]          ; 00447987
    FLD float ptr [ESP]                 ; 0044798b
    FMUL ST1                            ; 0044798e
    FLD float ptr [ESP + 0x4]           ; 00447990
    FMUL ST2                            ; 00447994
    FLD float ptr [ESP + 0x8]           ; 00447996
    FMULP ST3                           ; 0044799a
    LEA EAX,[ESP + 0x18]                ; 0044799c
    LEA EDX,[EBX + 0xe0]                ; 004479a0
    LEA EDI,[ESP + 0x18]                ; 004479a6
    LEA ESI,[ESP + 0xc]                 ; 004479aa
    FXCH                                ; 004479ae
    FSTP float ptr [ESP + 0xc]          ; 004479b0
    FSTP float ptr [ESP + 0x10]         ; 004479b4
    FSTP float ptr [ESP + 0x14]         ; 004479b8
    MOVSD ES:EDI,ESI                    ; 004479bc
    MOVSD ES:EDI,ESI                    ; 004479bd
    MOVSD ES:EDI,ESI                    ; 004479be
    CMP EDX,EAX                         ; 004479bf
    JZ 0x004479d7                       ; 004479c1
        ;   XREF to: 004479d7 (CONDITIONAL_JUMP)  ; LAB_004479d7
    MOV EAX,dword ptr [ESP + 0x18]      ; 004479c3
    MOV dword ptr [EDX],EAX             ; 004479c7
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004479c9
    MOV dword ptr [EDX + 0x4],EAX       ; 004479cd
    MOV EAX,dword ptr [ESP + 0x20]      ; 004479d0
    MOV dword ptr [EDX + 0x8],EAX       ; 004479d4
    MOV dword ptr [EBX + 0xf4],0x0      ; 004479d7
        ;   Label: LAB_004479d7
    MOV dword ptr [EBX + 0xf0],0x0      ; 004479e1
    MOV dword ptr [EBX + 0xec],0x0      ; 004479eb
    JMP 0x00447935                      ; 004479f5
        ;   XREF to: 00447935 (UNCONDITIONAL_JUMP)  ; LAB_00447935
    MOV EDI,dword ptr [ESP + 0x30]      ; 004479fa
        ;   Label: LAB_004479fa
    PUSH EDI                            ; 004479fe
    PUSH EBX                            ; 004479ff
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 00447a00
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00447a05
    TEST EAX,EAX                        ; 00447a08
    JNZ 0x0044796a                      ; 00447a0a
        ;   XREF to: 0044796a (CONDITIONAL_JUMP)  ; LAB_0044796a
    JMP 0x00447935                      ; 00447a10
        ;   XREF to: 00447935 (UNCONDITIONAL_JUMP)  ; LAB_00447935

