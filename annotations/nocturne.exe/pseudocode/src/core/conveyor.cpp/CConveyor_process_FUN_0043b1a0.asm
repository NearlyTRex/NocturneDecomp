; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_conveyor_cpp_CConveyor_process_FUN_0043b1a0(CConveyor *this_ptr,float delta_time)
;
; Parameters:
; CConveyor *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_005b7650
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   CDemonSet g_CDemonSet_01e57284
;   undefined4 g_CDemonSet_01e57284.actor_count
;   undefined4 g_CDemonSet_01e57284.actors[0]
;   undefined4 g_CDemonSet_01e57284.actors[1]
;   undefined4 g_CDemonSet_01e57284.actors[2]
;
; Called Functions:
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b1a0
        ;   Label: core_conveyor.cpp_CConveyor_process_FUN_0043b1a0
    PUSH ESI                            ; 0043b1a1
    PUSH EDI                            ; 0043b1a2
    PUSH EBP                            ; 0043b1a3
    SUB ESP,0x20                        ; 0043b1a4
    MOV ESI,dword ptr [ESP + 0x34]      ; 0043b1a7
    LEA EAX,[ESI + 0x738]               ; 0043b1ab
    PUSH EAX                            ; 0043b1b1
    MOV EDX,dword ptr [0x005b7650]      ; 0043b1b2 | DAT_005b7650
    PUSH EDX                            ; 0043b1b8
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 0043b1b9
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0043b1be
    TEST EAX,EAX                        ; 0043b1c1
    JZ 0x0043b1cf                       ; 0043b1c3
        ;   XREF to: 0043b1cf (CONDITIONAL_JUMP)  ; LAB_0043b1cf
    MOV dword ptr [ESI + 0x800],0x1     ; 0043b1c5
    LEA EAX,[ESI + 0x79c]               ; 0043b1cf
        ;   Label: LAB_0043b1cf
    PUSH EAX                            ; 0043b1d5
    MOV ECX,dword ptr [0x005b7650]      ; 0043b1d6 | DAT_005b7650
    PUSH ECX                            ; 0043b1dc
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 0043b1dd
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0043b1e2
    TEST EAX,EAX                        ; 0043b1e5
    JNZ 0x0043b22e                      ; 0043b1e7
        ;   XREF to: 0043b22e (CONDITIONAL_JUMP)  ; LAB_0043b22e
    CMP dword ptr [ESI + 0x800],0x0     ; 0043b1e9
    JZ 0x0043b238                       ; 0043b1f0
        ;   XREF to: 0043b238 (CONDITIONAL_JUMP)  ; LAB_0043b238
    LEA EAX,[ESI + 0x72c]               ; 0043b1f2
    XOR EDI,EDI                         ; 0043b1f8
    MOV dword ptr [ESP + 0x18],EAX      ; 0043b1fa
    LEA EAX,[ESI + 0x804]               ; 0043b1fe
    XOR EBP,EBP                         ; 0043b204
    MOV dword ptr [ESP + 0x1c],EAX      ; 0043b206
    MOV EAX,[0x005be368]                ; 0043b20a | g_CDemonSet_PTR_005be368 | g_CDemonSet_01e57284
        ;   Label: LAB_0043b20a
    CMP EDI,dword ptr [EAX + 0x14cd6c]  ; 0043b20f | g_CDemonSet_01e57284.actor_count
    JGE 0x0043b238                      ; 0043b215
        ;   XREF to: 0043b238 (CONDITIONAL_JUMP)  ; LAB_0043b238
    MOV EBX,dword ptr [EAX + EBP*0x1 + 0x14cd70] ; 0043b217 | g_CDemonSet_01e57284.actors[0] | g_CDemonSet_01e57284.actors[1] | g_CDemonSet_01e57284.actors[2]
    MOV ECX,dword ptr [EBX + 0xdc]      ; 0043b21e
    CMP ESI,ECX                         ; 0043b224
    JZ 0x0043b240                       ; 0043b226
        ;   XREF to: 0043b240 (CONDITIONAL_JUMP)  ; LAB_0043b240
    INC EDI                             ; 0043b228
    ADD EBP,0x4                         ; 0043b229
    JMP 0x0043b20a                      ; 0043b22c
        ;   XREF to: 0043b20a (UNCONDITIONAL_JUMP)  ; LAB_0043b20a
    MOV dword ptr [ESI + 0x800],0x0     ; 0043b22e
        ;   Label: LAB_0043b22e
    ADD ESP,0x20                        ; 0043b238
        ;   Label: LAB_0043b238
    POP EBP                             ; 0043b23b
    POP EDI                             ; 0043b23c
    POP ESI                             ; 0043b23d
    POP EBX                             ; 0043b23e
    RET                                 ; 0043b23f
    CMP byte ptr [ECX + 0x804],0x0      ; 0043b240
        ;   Label: LAB_0043b240
    JNZ 0x0043b2cc                      ; 0043b247
        ;   XREF to: 0043b2cc (CONDITIONAL_JUMP)  ; LAB_0043b2cc
    MOV EDX,dword ptr [ESP + 0x18]      ; 0043b24d
        ;   Label: LAB_0043b24d
    PUSH EDX                            ; 0043b251
    LEA EAX,[ESP + 0x4]                 ; 0043b252
    PUSH EAX                            ; 0043b256
    PUSH ESI                            ; 0043b257
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 0043b258
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_0040a200(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0043b25d
    FLD float ptr [ESP + 0x38]          ; 0043b260
    FLD float ptr [ESP]                 ; 0043b264
    FMUL ST1                            ; 0043b267
    FLD float ptr [ESP + 0x4]           ; 0043b269
    FMUL ST2                            ; 0043b26d
    FLD float ptr [ESP + 0x8]           ; 0043b26f
    FMULP ST3                           ; 0043b273
    LEA EAX,[ESP + 0xc]                 ; 0043b275
    LEA EDX,[EBX + 0xe0]                ; 0043b279
    FXCH                                ; 0043b27f
    FSTP float ptr [ESP + 0xc]          ; 0043b281
    FSTP float ptr [ESP + 0x10]         ; 0043b285
    FSTP float ptr [ESP + 0x14]         ; 0043b289
    CMP EDX,EAX                         ; 0043b28d
    JZ 0x0043b2a5                       ; 0043b28f
        ;   XREF to: 0043b2a5 (CONDITIONAL_JUMP)  ; LAB_0043b2a5
    MOV EAX,dword ptr [ESP + 0xc]       ; 0043b291
    MOV dword ptr [EDX],EAX             ; 0043b295
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043b297
    MOV dword ptr [EDX + 0x4],EAX       ; 0043b29b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043b29e
    MOV dword ptr [EDX + 0x8],EAX       ; 0043b2a2
    MOV dword ptr [EBX + 0xf4],0x0      ; 0043b2a5
        ;   Label: LAB_0043b2a5
    MOV dword ptr [EBX + 0xf0],0x0      ; 0043b2af
    MOV dword ptr [EBX + 0xec],0x0      ; 0043b2b9
    INC EDI                             ; 0043b2c3
    ADD EBP,0x4                         ; 0043b2c4
    JMP 0x0043b20a                      ; 0043b2c7
        ;   XREF to: 0043b20a (UNCONDITIONAL_JUMP)  ; LAB_0043b20a
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0043b2cc
        ;   Label: LAB_0043b2cc
    PUSH EAX                            ; 0043b2d0
    PUSH EBX                            ; 0043b2d1
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 0043b2d2
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0043b2d7
    TEST EAX,EAX                        ; 0043b2da
    JNZ 0x0043b24d                      ; 0043b2dc
        ;   XREF to: 0043b24d (CONDITIONAL_JUMP)  ; LAB_0043b24d
    INC EDI                             ; 0043b2e2
    ADD EBP,0x4                         ; 0043b2e3
    JMP 0x0043b20a                      ; 0043b2e6
        ;   XREF to: 0043b20a (UNCONDITIONAL_JUMP)  ; LAB_0043b20a

