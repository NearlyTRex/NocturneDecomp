; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_msnedit.cpp_FUN_005374b0()
;
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CScript* g_CScriptPtr = 0310f858
;   CDemonMission g_CDemonMissionInstance
;   undefined4 DAT_02f7c634
;   CScript g_CScriptInstance
;
; Called Functions:
;   core_msnedit.cpp_CalltoCallToDemonCameraInit_FUN_00539060
;   core_script.cpp_CScript_unk50_FUN_00566660
;   engine_2d.c_clearInputAndWait_FUN_00403260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005374b0
        ;   Label: core_msnedit.cpp_FUN_005374b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005374b1
    CMP EBX,0x2                         ; 005374b5
    JLE 0x005374fe                      ; 005374b8 | LAB_005374fe
        ;   XREF to: 005374fe (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 005374ba
        ;   Label: LAB_005374ba
    MOV EAX,[0x00679398]                ; 005374bc | int g_WindowHeight
        ;   Label: LAB_005374bc
    DEC EAX                             ; 005374c1
    PUSH EAX                            ; 005374c2
    MOV EAX,[0x00679394]                ; 005374c3 | int g_WindowWidth
    DEC EAX                             ; 005374c8
    PUSH EAX                            ; 005374c9
    PUSH 0x101                          ; 005374ca
    PUSH 0x0                            ; 005374cf
    MOV ECX,dword ptr [0x00680d50]      ; 005374d1 | CScript g_CScriptInstance | CScript * g_CScriptPtr
    PUSH ECX                            ; 005374d7 | CScript g_CScriptInstance
    CALL core_script.cpp_CScript_unk50_FUN_00566660 ; 005374d8 | undefined core_script.cpp_CScript_unk50_FUN_00566660()
        ;   Label: LAB_005374d8
        ;   XREF to: 00566660 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005374dd
    PUSH 0x1                            ; 005374e0
    MOV dword ptr [0x02f7c634],EBX      ; 005374e2 | undefined4 DAT_02f7c634
    MOV EBX,dword ptr [0x0067d550]      ; 005374e8 | CDemonMission g_CDemonMissionInstance | CDemonMission * g_CDemonMissionPtr
    PUSH EBX                            ; 005374ee | CDemonMission g_CDemonMissionInstance
    CALL core_msnedit.cpp_CalltoCallToDemonCameraInit_FUN_00539060 ; 005374ef | undefined core_msnedit.cpp_CalltoCallToDemonCameraInit_FUN_00539060()
        ;   XREF to: 00539060 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005374f4
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 005374f7 | void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)
    POP EBX                             ; 005374fc
    RET                                 ; 005374fd
    TEST EBX,EBX                        ; 005374fe
        ;   Label: LAB_005374fe
    JL 0x005374ba                       ; 00537500 | LAB_005374ba
        ;   XREF to: 005374ba (CONDITIONAL_JUMP)
    CMP EBX,0x2                         ; 00537502
    JNZ 0x005374bc                      ; 00537505 | LAB_005374bc
        ;   XREF to: 005374bc (CONDITIONAL_JUMP)
    MOV EAX,[0x00679398]                ; 00537507 | int g_WindowHeight
    DEC EAX                             ; 0053750c
    PUSH EAX                            ; 0053750d
    MOV EAX,[0x00679394]                ; 0053750e | int g_WindowWidth
    DEC EAX                             ; 00537513
    PUSH EAX                            ; 00537514
    PUSH 0x0                            ; 00537515
    PUSH 0x0                            ; 00537517
    MOV EDX,dword ptr [0x00680d50]      ; 00537519 | CScript g_CScriptInstance | CScript * g_CScriptPtr
    PUSH EDX                            ; 0053751f | CScript g_CScriptInstance
    JMP 0x005374d8                      ; 00537520 | LAB_005374d8
        ;   XREF to: 005374d8 (UNCONDITIONAL_JUMP)

