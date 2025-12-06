; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_frankgen.cpp_CFrankenstienMachine_findLeader_FUN_004d2330()
;
;
; XREF[4]:
;   core_frankgen.cpp_FUN_004d1f70 at 004d1f8a
;   core_frankgen.cpp_FUN_004d2500 at 004d2536
;   core_frankgen.cpp_FUN_004d25f0 at 004d2653
;   core_frankgen.cpp_PlaySounds_FUN_004d1a40 at 004d1a57
;
; Referenced Globals:
;   TerminatedCString s_core_frankgen_cpp_0062ab4f
;   TerminatedCString s_CFrankenstienMachine_fin_0062ab64
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_CFrankenstienMachineClassInfo.name_hash
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_list_ptr
;   undefined4 g_CDemonSetInstance.actor_list_data[0]
;   undefined4 DAT_032613d4
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d2330
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_findLeader_FUN_004d2330
    PUSH ESI                            ; 004d2331
    PUSH EDI                            ; 004d2332
    PUSH EBP                            ; 004d2333
    XOR ESI,ESI                         ; 004d2334
    XOR EBX,EBX                         ; 004d2336
    MOV EAX,[0x006810c8]                ; 004d2338 | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
        ;   Label: LAB_004d2338
    CMP EBX,dword ptr [EAX + 0x14d154]  ; 004d233d | g_CDemonSetInstance.actor_list_ptr
    JGE 0x004d236a                      ; 004d2343 | LAB_004d236a
        ;   XREF to: 004d236a (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [0x02d7b7ec]      ; 004d2345 | g_CFrankenstienMachineClassInfo.name_hash
    PUSH EDI                            ; 004d234b
    MOV EBP,dword ptr [ESI + EAX*0x1 + 0x14d158] ; 004d234c | g_CDemonSetInstance.actor_list_data[0]
    PUSH EBP                            ; 004d2353
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004d2354 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004d2359
    TEST EAX,EAX                        ; 004d235c
    JNZ 0x004d2260                      ; 004d235e | LAB_004d2260
        ;   XREF to: 004d2260 (CONDITIONAL_JUMP)
    INC EBX                             ; 004d2364
    ADD ESI,0x4                         ; 004d2365
    JMP 0x004d2338                      ; 004d2368 | LAB_004d2338
        ;   XREF to: 004d2338 (UNCONDITIONAL_JUMP)
    MOV ECX,0x62ab4f                    ; 004d236a | = "..\\core\\frankgen.cpp" | s_core_frankgen_cpp_0062ab4f = ..\core\frankgen.cpp
        ;   Label: LAB_004d236a
    MOV EBX,0x1cf                       ; 004d236f
    PUSH 0x62ab64                       ; 004d2374 | = "CFrankenstienMachine::findLeader - no..." | s_CFrankenstienMachine_fin_0062ab64 = CFrankenstienMachine::findLeader - no leader found!
    MOV dword ptr [0x02f0ca48],ECX      ; 004d2379 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 004d237f | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004d2385 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d238a
    XOR EAX,EAX                         ; 004d238d
    POP EBP                             ; 004d238f
    POP EDI                             ; 004d2390
    POP ESI                             ; 004d2391
    POP EBX                             ; 004d2392
    RET                                 ; 004d2393

