; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_stranger_cpp_CStranger_process_FUN_005bb830(CStranger *this_ptr,float delta_time)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   void* switchdataD_005bb7dc = 005bb84e
;   double DOUBLE_006534ac = 0.25
;   CGame* g_CGamePtr = 02d81a9c
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.delta_time_float
;
; Called Functions:
;   core_charactr.cpp_CCharacter_FUN_00429870
;   core_game.cpp_CGame_slamDT_FUN_004e3080
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_stranger.cpp_CStranger_FUN_005bb960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bb830
        ;   Label: core_stranger.cpp_CStranger_process_FUN_005bb830
    SUB ESP,0x8                         ; 005bb831
    MOV EBX,dword ptr [ESP + 0x10]      ; 005bb834
    PUSH dword ptr [ESP + 0x14]         ; 005bb838
    PUSH EBX                            ; 005bb83c
    CALL core_charactr.cpp_CCharacter_FUN_00429870 ; 005bb83d
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_00429870(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 005bb842
    TEST EAX,EAX                        ; 005bb845
    JNZ 0x005bb8bb                      ; 005bb847
        ;   XREF to: 005bb8bb (CONDITIONAL_JUMP)  ; LAB_005bb8bb
    ADD ESP,0x8                         ; 005bb849
    POP EBX                             ; 005bb84c
    RET                                 ; 005bb84d
    MOV ESI,0x1                         ; 005bb84e
        ;   Label: caseD_1b
    CMP dword ptr [EBX + 0x1fc38],0x7   ; 005bb853
        ;   Label: caseD_1a
    JNZ 0x005bb8f2                      ; 005bb85a
        ;   XREF to: 005bb8f2 (CONDITIONAL_JUMP)  ; LAB_005bb8f2
    FLD float ptr [ESP + 0x18]          ; 005bb860
        ;   Label: LAB_005bb860
    FMUL double ptr [0x006534ac]        ; 005bb864 | DOUBLE_006534ac
    FSTP float ptr [ESP + 0x4]          ; 005bb86a
    PUSH dword ptr [ESP + 0x4]          ; 005bb86e
    PUSH EBX                            ; 005bb872
    CALL core_stranger.cpp_CStranger_FUN_005bb960 ; 005bb873
        ;   XREF to: 005bb960 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_FUN_005bb960(CStranger * this_ptr)
    ADD ESP,0x8                         ; 005bb878
    PUSH dword ptr [ESP + 0x4]          ; 005bb87b
    PUSH EBX                            ; 005bb87f
    CALL core_stranger.cpp_CStranger_FUN_005bb960 ; 005bb880
        ;   XREF to: 005bb960 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_FUN_005bb960(CStranger * this_ptr)
    ADD ESP,0x8                         ; 005bb885
    PUSH dword ptr [ESP + 0x4]          ; 005bb888
    PUSH EBX                            ; 005bb88c
    CALL core_stranger.cpp_CStranger_FUN_005bb960 ; 005bb88d
        ;   XREF to: 005bb960 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_FUN_005bb960(CStranger * this_ptr)
    ADD ESP,0x8                         ; 005bb892
    PUSH dword ptr [ESP + 0x4]          ; 005bb895
    PUSH EBX                            ; 005bb899
        ;   Label: LAB_005bb899
    CALL core_stranger.cpp_CStranger_FUN_005bb960 ; 005bb89a
        ;   XREF to: 005bb960 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_FUN_005bb960(CStranger * this_ptr)
    ADD ESP,0x8                         ; 005bb89f
    MOV ECX,dword ptr [0x0067b654]      ; 005bb8a2 | g_CGameInstance | g_CGamePtr
    PUSH dword ptr [ESP + 0x8]          ; 005bb8a8
    PUSH ECX                            ; 005bb8ac | g_CGameInstance
    CALL core_game.cpp_CGame_slamDT_FUN_004e3080 ; 005bb8ad
        ;   XREF to: 004e3080 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_slamDT_FUN_004e3080(CGame * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005bb8b2
    POP ESI                             ; 005bb8b5
    ADD ESP,0x8                         ; 005bb8b6
    POP EBX                             ; 005bb8b9
    RET                                 ; 005bb8ba
    PUSH ESI                            ; 005bb8bb
        ;   Label: LAB_005bb8bb
    MOV EAX,[0x0067b654]                ; 005bb8bc | g_CGamePtr
    FLD float ptr [EAX + 0x264]         ; 005bb8c1 | g_CGameInstance.delta_time_float
    LEA EAX,[EBX + 0x158]               ; 005bb8c7
    PUSH EAX                            ; 005bb8cd
    FSTP float ptr [ESP + 0xc]          ; 005bb8ce
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005bb8d2
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005bb8d7
    XOR ESI,ESI                         ; 005bb8da
    SUB EAX,0x7                         ; 005bb8dc
    ADD ESP,0x4                         ; 005bb8df
    CMP EAX,0x14                        ; 005bb8e2
    JA 0x005bb853                       ; 005bb8e5
        ;   XREF to: 005bb853 (CONDITIONAL_JUMP)  ; caseD_18
    JMP dword ptr [EAX*0x4 + 0x5bb7dc]  ; 005bb8eb | caseD_f | caseD_18 | switchdataD_005bb7dc
        ;   Label: switchD
    TEST ESI,ESI                        ; 005bb8f2
        ;   Label: LAB_005bb8f2
    JNZ 0x005bb860                      ; 005bb8f4
        ;   XREF to: 005bb860 (CONDITIONAL_JUMP)  ; LAB_005bb860
    PUSH dword ptr [ESP + 0x18]         ; 005bb8fa
    JMP 0x005bb899                      ; 005bb8fe
        ;   XREF to: 005bb899 (UNCONDITIONAL_JUMP)  ; LAB_005bb899

