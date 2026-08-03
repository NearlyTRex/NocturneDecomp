; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EDeathState __cdecl core_dracbrid_cpp_CDraculaBride_getDeathState_FUN_0045a9a0(CDraculaBride *this_ptr)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 caseD_8
;   undefined1* switchdataD_0045a970 = 0045a9af
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0045a9a0
        ;   Label: core_dracbrid.cpp_CDraculaBride_getDeathState_FUN_0045a9a0
    MOV EDX,dword ptr [EAX + 0x70]      ; 0045a9a4
    CMP EDX,0x2                         ; 0045a9a7
    JNZ 0x0045a9bb                      ; 0045a9aa
        ;   XREF to: 0045a9bb (CONDITIONAL_JUMP)  ; LAB_0045a9bb
    MOV EAX,EDX                         ; 0045a9ac
    RET                                 ; 0045a9ae
    MOV EAX,0x1                         ; 0045a9af
        ;   Label: caseD_7
    RET                                 ; 0045a9b4
    MOV EAX,0x2                         ; 0045a9b5
        ;   Label: caseD_10
    RET                                 ; 0045a9ba
    ADD EAX,0x150                       ; 0045a9bb
        ;   Label: LAB_0045a9bb
    PUSH EAX                            ; 0045a9c0
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 0045a9c1
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0045a9c6
    SUB EAX,0x7                         ; 0045a9c9
    ADD ESP,0x4                         ; 0045a9cc
    CMP EAX,0xa                         ; 0045a9cf
    JA 0x0045a24d                       ; 0045a9d2
        ;   XREF to: 0045a24d (CONDITIONAL_JUMP)  ; caseD_f
    JMP dword ptr [EAX*0x4 + 0x45a970]  ; 0045a9d8 | caseD_a | caseD_f | caseD_11
        ;   Label: switchD

