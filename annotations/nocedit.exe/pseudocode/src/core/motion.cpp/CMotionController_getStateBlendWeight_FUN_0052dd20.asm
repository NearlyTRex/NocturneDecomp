; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController *this_ptr,int desired_state_index)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   desired_state_index
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[19]:
;   core_charactr.cpp_CCharacter_canLookAt_FUN_0042de50 at 0042deac
;   core_gabriela.cpp_CGabriella_processMotionEvents_FUN_004d4890 at 004d49df
;   core_gabriela.cpp_CGabriella_process_FUN_004d2ea0 at 004d3509
;   core_ghoul.cpp_CGhoul_canBeAttracted_FUN_004e82d0 at 004e82f0
;   core_ghoul.cpp_CGhoul_process_FUN_004e6600 at 004e6672
;   core_hero.cpp_CHero_releaseFromGrab_FUN_004f29b0 at 004f29f6
;   core_hostage.cpp_CHostage_process_FUN_004f4bd0 at 004f4f1d
;   core_mimic.cpp_CMimic_FUN_0051fcc0 at 00520095
;   core_scat.cpp_CScat_FUN_005582c0 at 0055832c
;   core_scat.cpp_CScat_process_FUN_005571f0 at 005574a5
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052dd20
        ;   Label: core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
    PUSH EBP                            ; 0052dd21
    MOV EBP,ESP                         ; 0052dd22
    SUB ESP,0xc                         ; 0052dd24
    AND ESP,0xfffffff8                  ; 0052dd27
    MOV EDX,dword ptr [EBP + 0xc]       ; 0052dd2a
    MOV EBX,dword ptr [EBP + 0x10]      ; 0052dd2d
    FLDZ                                ; 0052dd30
    FLD float ptr [EDX + 0x14]          ; 0052dd32
    FSTP double ptr [ESP]               ; 0052dd35
    FCOMP double ptr [ESP]              ; 0052dd38
    FNSTSW AX                           ; 0052dd3b
    SAHF                                ; 0052dd3d
    JNC 0x0052dd7d                      ; 0052dd3e
        ;   XREF to: 0052dd7d (CONDITIONAL_JUMP)  ; LAB_0052dd7d
    IMUL ECX,dword ptr [EDX + 0x18],0x54c ; 0052dd40
    MOV EAX,dword ptr [EDX]             ; 0052dd47
    CMP EBX,dword ptr [ECX + EAX*0x1 + 0x98c] ; 0052dd49
    JZ 0x0052dd74                       ; 0052dd50
        ;   XREF to: 0052dd74 (CONDITIONAL_JUMP)  ; LAB_0052dd74
    IMUL EDX,dword ptr [EDX + 0x4],0x54c ; 0052dd52
    CMP EBX,dword ptr [EDX + EAX*0x1 + 0x98c] ; 0052dd59
    JNZ 0x0052dd99                      ; 0052dd60
        ;   XREF to: 0052dd99 (CONDITIONAL_JUMP)  ; LAB_0052dd99
    FLD1                                ; 0052dd62
    FSUB double ptr [ESP]               ; 0052dd64
    FSTP float ptr [ESP + 0x8]          ; 0052dd67
    MOV EAX,dword ptr [ESP + 0x8]       ; 0052dd6b
        ;   Label: LAB_0052dd6b
    MOV ESP,EBP                         ; 0052dd6f
    POP EBP                             ; 0052dd71
    POP EBX                             ; 0052dd72
    RET                                 ; 0052dd73
    MOV EAX,dword ptr [EDX + 0x14]      ; 0052dd74
        ;   Label: LAB_0052dd74
    MOV dword ptr [ESP + 0x8],EAX       ; 0052dd77
    JMP 0x0052dd6b                      ; 0052dd7b
        ;   XREF to: 0052dd6b (UNCONDITIONAL_JUMP)  ; LAB_0052dd6b
    IMUL EAX,dword ptr [EDX + 0x4],0x54c ; 0052dd7d
        ;   Label: LAB_0052dd7d
    MOV EDX,dword ptr [EDX]             ; 0052dd84
    CMP EBX,dword ptr [EDX + EAX*0x1 + 0x98c] ; 0052dd86
    JNZ 0x0052dd99                      ; 0052dd8d
        ;   XREF to: 0052dd99 (CONDITIONAL_JUMP)  ; LAB_0052dd99
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 0052dd8f
    JMP 0x0052dd6b                      ; 0052dd97
        ;   XREF to: 0052dd6b (UNCONDITIONAL_JUMP)  ; LAB_0052dd6b
    XOR EBX,EBX                         ; 0052dd99
        ;   Label: LAB_0052dd99
    MOV dword ptr [ESP + 0x8],EBX       ; 0052dd9b
    MOV EAX,dword ptr [ESP + 0x8]       ; 0052dd9f
    MOV ESP,EBP                         ; 0052dda3
    POP EBP                             ; 0052dda5
    POP EBX                             ; 0052dda6
    RET                                 ; 0052dda7

