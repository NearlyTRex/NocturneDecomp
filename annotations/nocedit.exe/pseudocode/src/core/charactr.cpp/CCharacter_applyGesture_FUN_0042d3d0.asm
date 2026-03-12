; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_applyGesture_FUN_0042d3d0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; float            Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 at 0042dfc6
;
; Referenced Globals:
;   TerminatedCString s_core_charactr_cpp_00617368
;   TerminatedCString s_CCharacter_applyGesture__0061737d
;   float FLOAT_006173c2 = 0.3000000
;   float FLOAT_006173c6 = 0.8500000
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042d3d0
        ;   Label: core_charactr.cpp_CCharacter_applyGesture_FUN_0042d3d0
    SUB ESP,0x10                        ; 0042d3d1
    MOV EBX,dword ptr [ESP + 0x18]      ; 0042d3d4
    CMP dword ptr [EBX + 0x25c8],0x0    ; 0042d3d8
    JL 0x0042d49e                       ; 0042d3df
        ;   XREF to: 0042d49e (CONDITIONAL_JUMP)  ; LAB_0042d49e
    PUSH ESI                            ; 0042d3e5
    CMP dword ptr [EBX + 0x25c4],-0x1   ; 0042d3e6
    JL 0x0042d4a3                       ; 0042d3ed
        ;   XREF to: 0042d4a3 (CONDITIONAL_JUMP)  ; LAB_0042d4a3
    IMUL ESI,dword ptr [EBX + 0x25c8],0x54c ; 0042d3f3
        ;   Label: LAB_0042d3f3
    LEA EAX,[EBX + 0x158]               ; 0042d3fd
    PUSH EAX                            ; 0042d403
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 0042d404
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
    FLD float ptr [ESI + EAX*0x1 + 0x988] ; 0042d409
    FMUL float ptr [0x006173c2]         ; 0042d410 | FLOAT_006173c2
    FLD float ptr [EBX + 0x25cc]        ; 0042d416
    ADD ESP,0x4                         ; 0042d41c
    FLD1                                ; 0042d41f
    FDIVRP ST2,ST0                      ; 0042d421
    FMUL ST1                            ; 0042d423
    FILD dword ptr [ESI + EAX*0x1 + 0x9cc] ; 0042d425
    FSUB float ptr [EBX + 0x25cc]       ; 0042d42c
    MOV EAX,0x3f59999a                  ; 0042d432
    FMULP ST2                           ; 0042d437
    MOV dword ptr [ESP + 0x10],EAX      ; 0042d439
    FSTP float ptr [ESP + 0x8]          ; 0042d43d
    FSTP float ptr [ESP + 0xc]          ; 0042d441
    FLD float ptr [ESP + 0x8]           ; 0042d445
    FCOMP float ptr [0x006173c6]        ; 0042d449 | FLOAT_006173c6
    FNSTSW AX                           ; 0042d44f
    SAHF                                ; 0042d451
    JNC 0x0042d45c                      ; 0042d452
        ;   XREF to: 0042d45c (CONDITIONAL_JUMP)  ; LAB_0042d45c
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042d454
    MOV dword ptr [ESP + 0x10],EAX      ; 0042d458
    FLD float ptr [ESP + 0xc]           ; 0042d45c
        ;   Label: LAB_0042d45c
    FCOMP float ptr [ESP + 0x10]        ; 0042d460
    FNSTSW AX                           ; 0042d464
    SAHF                                ; 0042d466
    JNC 0x0042d471                      ; 0042d467
        ;   XREF to: 0042d471 (CONDITIONAL_JUMP)  ; LAB_0042d471
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042d469
    MOV dword ptr [ESP + 0x10],EAX      ; 0042d46d
    PUSH 0x59ddb0                       ; 0042d471
        ;   Label: LAB_0042d471
    MOV EDX,dword ptr [EBX + 0x25c4]    ; 0042d476
    PUSH EDX                            ; 0042d47c
    PUSH dword ptr [ESP + 0x18]         ; 0042d47d
    MOV ECX,dword ptr [EBX + 0x25c8]    ; 0042d481
    PUSH dword ptr [EBX + 0x25cc]       ; 0042d487
    PUSH ECX                            ; 0042d48d
    ADD EBX,0x158                       ; 0042d48e
    PUSH EBX                            ; 0042d494
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50 ; 0042d495
        ;   XREF to: 0059eb50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    ADD ESP,0x18                        ; 0042d49a
    POP ESI                             ; 0042d49d
    ADD ESP,0x10                        ; 0042d49e
        ;   Label: LAB_0042d49e
    POP EBX                             ; 0042d4a1
    RET                                 ; 0042d4a2
    PUSH EDI                            ; 0042d4a3
        ;   Label: LAB_0042d4a3
    PUSH EBX                            ; 0042d4a4
    MOV ESI,0x617368                    ; 0042d4a5 | = "..\\core\\charactr.cpp"
    MOV EDI,0xcc7                       ; 0042d4aa
    PUSH 0x61737d                       ; 0042d4af | = "CCharacter::applyGesture - never set ..."
    MOV dword ptr [0x02f0ca48],ESI      ; 0042d4b4 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0042d4ba | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0042d4c0
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0042d4c5
    POP EDI                             ; 0042d4c8
    JMP 0x0042d3f3                      ; 0042d4c9
        ;   XREF to: 0042d3f3 (UNCONDITIONAL_JUMP)  ; LAB_0042d3f3

