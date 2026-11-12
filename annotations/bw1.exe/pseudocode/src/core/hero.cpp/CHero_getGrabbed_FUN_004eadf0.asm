; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_CHero_getGrabbed_FUN_004eadf0(CHero *this_ptr,CDemonActor *grabber,int grab_type)
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
;   core_doc.cpp_CDoc_getGrabbed_FUN_00476260 at 00476325
;   core_stranger.cpp_CStranger_getGrabbed_FUN_00591c30 at 00591c6b
;
; Referenced Globals:
;   TerminatedCString s_CHero_startGettingGrabbe_005e4728
;   TerminatedCString s_current_motion_is_s_005e4753
;   TerminatedCString s_GETGRABBED_005e476b
;   TerminatedCString s_GETGRABBED_FRONT_005e4776
;   TerminatedCString s_GETGRABBED_FRONT_005e4787
;   TerminatedCString s_GETGRABBED_BACK_005e4798
;   TerminatedCString s_GETGRABBED_005e47a8
;   TerminatedCString s_We_are_grabbed_005e47b3
;   CConsole* g_CConsolePtr = 007db5f0
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_actor.cpp_FUN_00408bb0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionController_getMotionList_FUN_00524a00
;   core_motion.cpp_CMotionController_setDesiredStateByName_FUN_00524850
;   core_motion.cpp_CMotionList_findStateIndex_FUN_00524150
;   engine_console.cpp_CConsole_printf_FUN_00445430
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eadf0
        ;   Label: core_hero.cpp_CHero_getGrabbed_FUN_004eadf0
    PUSH ESI                            ; 004eadf1
    PUSH EDI                            ; 004eadf2
    PUSH EBP                            ; 004eadf3
    SUB ESP,0x18                        ; 004eadf4
    MOV EBP,dword ptr [ESP + 0x30]      ; 004eadf7
    TEST EBP,EBP                        ; 004eadfb
    JNZ 0x004eae09                      ; 004eadfd
        ;   XREF to: 004eae09 (CONDITIONAL_JUMP)  ; LAB_004eae09
    XOR EAX,EAX                         ; 004eadff
        ;   Label: LAB_004eadff
    ADD ESP,0x18                        ; 004eae01
    POP EBP                             ; 004eae04
    POP EDI                             ; 004eae05
    POP ESI                             ; 004eae06
    POP EBX                             ; 004eae07
    RET                                 ; 004eae08
    MOV EDX,dword ptr [ESP + 0x34]      ; 004eae09
        ;   Label: LAB_004eae09
    PUSH EDX                            ; 004eae0d
    PUSH EBP                            ; 004eae0e
    PUSH 0x5e4728                       ; 004eae0f | = "CHero::startGettingGrabbed by %s, typ..."
    MOV ECX,dword ptr [0x00611100]      ; 004eae14 | g_CConsolePtr
    PUSH ECX                            ; 004eae1a | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 004eae1b
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 004eae20
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004eae23
    ADD EBX,0x158                       ; 004eae27
    PUSH EBX                            ; 004eae2d
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004eae2e
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004eae33
    PUSH EAX                            ; 004eae36
    PUSH 0x5e4753                       ; 004eae37 | = "  current motion is %s\n"
    MOV ESI,dword ptr [0x00611100]      ; 004eae3c | g_CConsolePtr
    PUSH ESI                            ; 004eae42 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 004eae43
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004eae48
    MOV EDI,dword ptr [ESP + 0x34]      ; 004eae4b
    TEST EDI,EDI                        ; 004eae4f
    JNZ 0x004eaece                      ; 004eae51
        ;   XREF to: 004eaece (CONDITIONAL_JUMP)  ; LAB_004eaece
    PUSH EDI                            ; 004eae57
    PUSH 0x5e476b                       ; 004eae58 | = "GETGRABBED"
    PUSH EBX                            ; 004eae5d
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00524a00 ; 004eae5e
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00524a00(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004eae63
    PUSH EAX                            ; 004eae66
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_00524150 ; 004eae67
        ;   XREF to: 00524150 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_00524150(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 004eae6c
    TEST EAX,EAX                        ; 004eae6f
    JL 0x004eadff                       ; 004eae71
        ;   XREF to: 004eadff (CONDITIONAL_JUMP)  ; LAB_004eadff
    PUSH EDI                            ; 004eae73
    PUSH 0x5e4776                       ; 004eae74 | = "GETGRABBED_FRONT"
    PUSH EBX                            ; 004eae79
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00524a00 ; 004eae7a
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00524a00(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004eae7f
    PUSH EAX                            ; 004eae82
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_00524150 ; 004eae83
        ;   XREF to: 00524150 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_00524150(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 004eae88
    TEST EAX,EAX                        ; 004eae8b
    JL 0x004eaf10                       ; 004eae8d
        ;   XREF to: 004eaf10 (CONDITIONAL_JUMP)  ; LAB_004eaf10
    LEA EAX,[EBP + 0x20]                ; 004eae93
    PUSH EAX                            ; 004eae96
    MOV EAX,dword ptr [ESP + 0x30]      ; 004eae97
    PUSH EAX                            ; 004eae9b
    LEA ESI,[ESP + 0x8]                 ; 004eae9c
    LEA EDI,[ESP + 0x14]                ; 004eaea0
    CALL core_actor.cpp_FUN_00408bb0    ; 004eaea4
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x8]                 ; 004eaea9
    ADD ESP,0x8                         ; 004eaead
    MOVSD ES:EDI,ESI                    ; 004eaeb0
    MOVSD ES:EDI,ESI                    ; 004eaeb1
    MOVSD ES:EDI,ESI                    ; 004eaeb2
    FLDZ                                ; 004eaeb3
    FCOMP float ptr [ESP + 0x14]        ; 004eaeb5
    FNSTSW AX                           ; 004eaeb9
    SAHF                                ; 004eaebb
    JNC 0x004eaf07                      ; 004eaebc
        ;   XREF to: 004eaf07 (CONDITIONAL_JUMP)  ; LAB_004eaf07
    PUSH 0x1                            ; 004eaebe
    PUSH 0x5e4787                       ; 004eaec0 | = "GETGRABBED_FRONT"
    PUSH EBX                            ; 004eaec5
        ;   Label: LAB_004eaec5
    CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_00524850 ; 004eaec6
        ;   XREF to: 00524850 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredStateByName_FUN_00524850(CMotionController * this_ptr, char * state_name, int force_immediate)
    ADD ESP,0xc                         ; 004eaecb
    PUSH 0x5e47b3                       ; 004eaece | = "  We are grabbed\n"
        ;   Label: LAB_004eaece
    MOV EDX,dword ptr [0x00611100]      ; 004eaed3 | g_CConsolePtr
    PUSH EDX                            ; 004eaed9 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 004eaeda
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 004eaedf
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004eaee2
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004eaee6
    MOV dword ptr [EAX + 0x26fc],EBP    ; 004eaeea
    MOV EAX,dword ptr [ESP + 0x34]      ; 004eaef0
    MOV dword ptr [EBX + 0x2700],EAX    ; 004eaef4
    MOV EAX,0x1                         ; 004eaefa
    ADD ESP,0x18                        ; 004eaeff
    POP EBP                             ; 004eaf02
    POP EDI                             ; 004eaf03
    POP ESI                             ; 004eaf04
    POP EBX                             ; 004eaf05
    RET                                 ; 004eaf06
    PUSH 0x1                            ; 004eaf07
        ;   Label: LAB_004eaf07
    PUSH 0x5e4798                       ; 004eaf09 | = "GETGRABBED_BACK"
    JMP 0x004eaec5                      ; 004eaf0e
        ;   XREF to: 004eaec5 (UNCONDITIONAL_JUMP)  ; LAB_004eaec5
    PUSH 0x1                            ; 004eaf10
        ;   Label: LAB_004eaf10
    PUSH 0x5e47a8                       ; 004eaf12 | = "GETGRABBED"
    JMP 0x004eaec5                      ; 004eaf17
        ;   XREF to: 004eaec5 (UNCONDITIONAL_JUMP)  ; LAB_004eaec5

