; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_CHero_getGrabbed_FUN_004cea50(CHero *this_ptr,CDemonActor *grabber,int grab_type)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   grabber
; int              Stack[0xc]:4   grab_type
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_doc.cpp_CDoc_getGrabbed_FUN_0045dc40 at 0045dcc8
;   core_stranger.cpp_CStranger_getGrabbed_FUN_0056efe0 at 0056f01b
;
; Referenced Globals:
;   TerminatedCString s_CHero_startGettingGrabbe_005d9b89
;   TerminatedCString s_current_motion_is_s_005d9bb4
;   TerminatedCString s_GETGRABBED_005d9bcc
;   TerminatedCString s_GETGRABBED_FRONT_005d9bd7
;   TerminatedCString s_GETGRABBED_FRONT_005d9be8
;   TerminatedCString s_GETGRABBED_BACK_005d9bf9
;   TerminatedCString s_GETGRABBED_005d9c09
;   TerminatedCString s_We_are_grabbed_005d9c14
;   CConsole* g_CConsolePtr = 007c158c
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_actor.cpp_FUN_00408de0
;   core_motion.cpp_CMotionController_getMotionList_FUN_00503860
;   core_motion.cpp_CMotionController_setDesiredStateByName_FUN_005036b0
;   core_motion.cpp_CMotionList_findStateIndex_FUN_00502fa0
;   core_motion.cpp_FUN_005035c0
;   engine_console.cpp_FUN_00436710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cea50
        ;   Label: core_hero.cpp_CHero_getGrabbed_FUN_004cea50
    PUSH ESI                            ; 004cea51
    PUSH EDI                            ; 004cea52
    PUSH EBP                            ; 004cea53
    SUB ESP,0x18                        ; 004cea54
    MOV EBP,dword ptr [ESP + 0x30]      ; 004cea57
    TEST EBP,EBP                        ; 004cea5b
    JNZ 0x004cea69                      ; 004cea5d
        ;   XREF to: 004cea69 (CONDITIONAL_JUMP)  ; LAB_004cea69
    XOR EAX,EAX                         ; 004cea5f
        ;   Label: LAB_004cea5f
    ADD ESP,0x18                        ; 004cea61
    POP EBP                             ; 004cea64
    POP EDI                             ; 004cea65
    POP ESI                             ; 004cea66
    POP EBX                             ; 004cea67
    RET                                 ; 004cea68
    MOV EDX,dword ptr [ESP + 0x34]      ; 004cea69
        ;   Label: LAB_004cea69
    PUSH EDX                            ; 004cea6d
    PUSH EBP                            ; 004cea6e
    PUSH 0x5d9b89                       ; 004cea6f | = "CHero::startGettingGrabbed by %s, typ..."
    MOV ECX,dword ptr [0x00609ed0]      ; 004cea74 | g_CConsolePtr
    PUSH ECX                            ; 004cea7a | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 004cea7b
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x10                        ; 004cea80
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004cea83
    ADD EBX,0x2b4                       ; 004cea87
    PUSH EBX                            ; 004cea8d
    CALL core_motion.cpp_FUN_005035c0   ; 004cea8e
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 004cea93
    PUSH EAX                            ; 004cea96
    PUSH 0x5d9bb4                       ; 004cea97 | = "  current motion is %s\n"
    MOV ESI,dword ptr [0x00609ed0]      ; 004cea9c | g_CConsolePtr
    PUSH ESI                            ; 004ceaa2 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 004ceaa3
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0xc                         ; 004ceaa8
    MOV EDI,dword ptr [ESP + 0x34]      ; 004ceaab
    TEST EDI,EDI                        ; 004ceaaf
    JNZ 0x004ceb2e                      ; 004ceab1
        ;   XREF to: 004ceb2e (CONDITIONAL_JUMP)  ; LAB_004ceb2e
    PUSH EDI                            ; 004ceab7
    PUSH 0x5d9bcc                       ; 004ceab8 | = "GETGRABBED"
    PUSH EBX                            ; 004ceabd
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00503860 ; 004ceabe
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00503860(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004ceac3
    PUSH EAX                            ; 004ceac6
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_00502fa0 ; 004ceac7
        ;   XREF to: 00502fa0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_00502fa0(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 004ceacc
    TEST EAX,EAX                        ; 004ceacf
    JL 0x004cea5f                       ; 004cead1
        ;   XREF to: 004cea5f (CONDITIONAL_JUMP)  ; LAB_004cea5f
    PUSH EDI                            ; 004cead3
    PUSH 0x5d9bd7                       ; 004cead4 | = "GETGRABBED_FRONT"
    PUSH EBX                            ; 004cead9
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00503860 ; 004ceada
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00503860(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004ceadf
    PUSH EAX                            ; 004ceae2
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_00502fa0 ; 004ceae3
        ;   XREF to: 00502fa0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_00502fa0(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 004ceae8
    TEST EAX,EAX                        ; 004ceaeb
    JL 0x004ceb70                       ; 004ceaed
        ;   XREF to: 004ceb70 (CONDITIONAL_JUMP)  ; LAB_004ceb70
    LEA EAX,[EBP + 0x20]                ; 004ceaf3
    PUSH EAX                            ; 004ceaf6
    MOV EAX,dword ptr [ESP + 0x30]      ; 004ceaf7
    PUSH EAX                            ; 004ceafb
    LEA ESI,[ESP + 0x8]                 ; 004ceafc
    LEA EDI,[ESP + 0x14]                ; 004ceb00
    CALL core_actor.cpp_FUN_00408de0    ; 004ceb04
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x8]                 ; 004ceb09
    ADD ESP,0x8                         ; 004ceb0d
    MOVSD ES:EDI,ESI                    ; 004ceb10
    MOVSD ES:EDI,ESI                    ; 004ceb11
    MOVSD ES:EDI,ESI                    ; 004ceb12
    FLDZ                                ; 004ceb13
    FCOMP float ptr [ESP + 0x14]        ; 004ceb15
    FNSTSW AX                           ; 004ceb19
    SAHF                                ; 004ceb1b
    JNC 0x004ceb67                      ; 004ceb1c
        ;   XREF to: 004ceb67 (CONDITIONAL_JUMP)  ; LAB_004ceb67
    PUSH 0x1                            ; 004ceb1e
    PUSH 0x5d9be8                       ; 004ceb20 | = "GETGRABBED_FRONT"
    PUSH EBX                            ; 004ceb25
        ;   Label: LAB_004ceb25
    CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_005036b0 ; 004ceb26
        ;   XREF to: 005036b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredStateByName_FUN_005036b0(CMotionController * this_ptr, char * state_name, int force_immediate)
    ADD ESP,0xc                         ; 004ceb2b
    PUSH 0x5d9c14                       ; 004ceb2e | = "  We are grabbed\n"
        ;   Label: LAB_004ceb2e
    MOV EDX,dword ptr [0x00609ed0]      ; 004ceb33 | g_CConsolePtr
    PUSH EDX                            ; 004ceb39 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 004ceb3a
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x8                         ; 004ceb3f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004ceb42
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004ceb46
    MOV dword ptr [EAX + 0x276c],EBP    ; 004ceb4a
    MOV EAX,dword ptr [ESP + 0x34]      ; 004ceb50
    MOV dword ptr [EBX + 0x2770],EAX    ; 004ceb54
    MOV EAX,0x1                         ; 004ceb5a
    ADD ESP,0x18                        ; 004ceb5f
    POP EBP                             ; 004ceb62
    POP EDI                             ; 004ceb63
    POP ESI                             ; 004ceb64
    POP EBX                             ; 004ceb65
    RET                                 ; 004ceb66
    PUSH 0x1                            ; 004ceb67
        ;   Label: LAB_004ceb67
    PUSH 0x5d9bf9                       ; 004ceb69 | = "GETGRABBED_BACK"
    JMP 0x004ceb25                      ; 004ceb6e
        ;   XREF to: 004ceb25 (UNCONDITIONAL_JUMP)  ; LAB_004ceb25
    PUSH 0x1                            ; 004ceb70
        ;   Label: LAB_004ceb70
    PUSH 0x5d9c09                       ; 004ceb72 | = "GETGRABBED"
    JMP 0x004ceb25                      ; 004ceb77
        ;   XREF to: 004ceb25 (UNCONDITIONAL_JUMP)  ; LAB_004ceb25

