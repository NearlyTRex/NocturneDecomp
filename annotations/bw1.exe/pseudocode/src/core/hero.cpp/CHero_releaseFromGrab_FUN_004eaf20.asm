; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_CHero_releaseFromGrab_FUN_004eaf20(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_CHero_stopGettingGrabbed_005e47c5
;   TerminatedCString s_GETGRABBED_005e47ef
;   TerminatedCString s_STAND_005e47fa
;   CConsole* g_CConsolePtr = 007db5f0
;   undefined4 DAT_0078a123
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_charactr.cpp_CCharacter_releaseFromGrab_FUN_00431440
;   core_motion.cpp_CMotionController_getMotionList_FUN_00524a00
;   core_motion.cpp_CMotionController_setDesiredStateByName_FUN_00524850
;   core_motion.cpp_CMotionList_findStateIndex_FUN_00524150
;   core_motion.cpp_FUN_00524a40
;   engine_console.cpp_FUN_00445430
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eaf20
        ;   Label: core_hero.cpp_CHero_releaseFromGrab_FUN_004eaf20
    PUSH ESI                            ; 004eaf21
    SUB ESP,0x4                         ; 004eaf22
    MOV EBX,dword ptr [ESP + 0x10]      ; 004eaf25
    MOV EDX,dword ptr [EBX + 0x26fc]    ; 004eaf29
    TEST EDX,EDX                        ; 004eaf2f
    JNZ 0x004eafac                      ; 004eaf31
        ;   XREF to: 004eafac (CONDITIONAL_JUMP)  ; LAB_004eafac
    CMP dword ptr [EBX + 0x68],0x78a123 ; 004eaf37 | DAT_0078a123
        ;   Label: LAB_004eaf37
    JNZ 0x004eaf9d                      ; 004eaf3e
        ;   XREF to: 004eaf9d (CONDITIONAL_JUMP)  ; LAB_004eaf9d
    LEA EAX,[EBX + 0x158]               ; 004eaf40
    CMP dword ptr [EAX + 0x23a0],0x0    ; 004eaf46
    JZ 0x004eaf9d                       ; 004eaf4d
        ;   XREF to: 004eaf9d (CONDITIONAL_JUMP)  ; LAB_004eaf9d
    PUSH 0x0                            ; 004eaf4f
    PUSH 0x5e47ef                       ; 004eaf51 | = "GETGRABBED"
    LEA ESI,[EBX + 0x158]               ; 004eaf56
    PUSH ESI                            ; 004eaf5c
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00524a00 ; 004eaf5d
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00524a00(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004eaf62
    PUSH EAX                            ; 004eaf65
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_00524150 ; 004eaf66
        ;   XREF to: 00524150 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_00524150(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 004eaf6b
    TEST EAX,EAX                        ; 004eaf6e
    JL 0x004eaf9d                       ; 004eaf70
        ;   XREF to: 004eaf9d (CONDITIONAL_JUMP)  ; LAB_004eaf9d
    PUSH EAX                            ; 004eaf72
    PUSH ESI                            ; 004eaf73
    CALL core_motion.cpp_FUN_00524a40   ; 004eaf74
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x8],EAX       ; 004eaf79
    FLD float ptr [ESP + 0x8]           ; 004eaf7d
    FLDZ                                ; 004eaf81
    ADD ESP,0x8                         ; 004eaf83
    FCOMPP                              ; 004eaf86
    FNSTSW AX                           ; 004eaf88
    SAHF                                ; 004eaf8a
    JNC 0x004eaf9d                      ; 004eaf8b
        ;   XREF to: 004eaf9d (CONDITIONAL_JUMP)  ; LAB_004eaf9d
    PUSH 0x1                            ; 004eaf8d
    PUSH 0x5e47fa                       ; 004eaf8f | = "STAND"
    PUSH ESI                            ; 004eaf94
    CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_00524850 ; 004eaf95
        ;   XREF to: 00524850 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredStateByName_FUN_00524850(CMotionController * this_ptr, char * state_name, int force_immediate)
    ADD ESP,0xc                         ; 004eaf9a
    PUSH EBX                            ; 004eaf9d
        ;   Label: LAB_004eaf9d
    CALL core_charactr.cpp_CCharacter_releaseFromGrab_FUN_00431440 ; 004eaf9e
        ;   XREF to: 00431440 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_releaseFromGrab_FUN_00431440(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004eafa3
    ADD ESP,0x4                         ; 004eafa6
    POP ESI                             ; 004eafa9
    POP EBX                             ; 004eafaa
    RET                                 ; 004eafab
    PUSH EDI                            ; 004eafac
        ;   Label: LAB_004eafac
    MOV ECX,dword ptr [EBX + 0x2700]    ; 004eafad
    PUSH ECX                            ; 004eafb3
    PUSH EDX                            ; 004eafb4
    PUSH 0x5e47c5                       ; 004eafb5 | = "CHero::stopGettingGrabbed by %s, type..."
    MOV EDI,dword ptr [0x00611100]      ; 004eafba | g_CConsolePtr
    PUSH EDI                            ; 004eafc0 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 004eafc1
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x10                        ; 004eafc6
    POP EDI                             ; 004eafc9
    JMP 0x004eaf37                      ; 004eafca
        ;   XREF to: 004eaf37 (UNCONDITIONAL_JUMP)  ; LAB_004eaf37

