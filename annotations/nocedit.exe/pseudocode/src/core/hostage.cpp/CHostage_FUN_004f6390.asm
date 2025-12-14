; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_hostage.cpp_CHostage_FUN_004f6390(CHostage * this_ptr)
;
; Parameters:
; CHostage *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f6390
        ;   Label: core_hostage.cpp_CHostage_FUN_004f6390
    CMP dword ptr [EAX + 0x1fab8],0x0   ; 004f6394
    JZ 0x004f63ad                       ; 004f639b
        ;   XREF to: 004f63ad (CONDITIONAL_JUMP)  ; LAB_004f63ad
    MOV ECX,dword ptr [EAX + 0x1fabc]   ; 004f639d
    CMP ECX,0x3                         ; 004f63a3
    JZ 0x004f63ad                       ; 004f63a6
        ;   XREF to: 004f63ad (CONDITIONAL_JUMP)  ; LAB_004f63ad
    CMP ECX,0x4                         ; 004f63a8
    JNZ 0x004f63b0                      ; 004f63ab
        ;   XREF to: 004f63b0 (CONDITIONAL_JUMP)  ; LAB_004f63b0
    XOR EAX,EAX                         ; 004f63ad
        ;   Label: LAB_004f63ad
    RET                                 ; 004f63af
    ADD EAX,0x158                       ; 004f63b0
        ;   Label: LAB_004f63b0
    PUSH EAX                            ; 004f63b5
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004f63b6
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f63bb
    ADD ESP,0x4                         ; 004f63be
    CMP EAX,0xa                         ; 004f63c1
    JZ 0x004f63ad                       ; 004f63c4
        ;   XREF to: 004f63ad (CONDITIONAL_JUMP)  ; LAB_004f63ad
    LEA EAX,[EAX]                       ; 004f63c6
    LEA EDX,[EDX]                       ; 004f63cc

