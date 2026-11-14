; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_demnfolk_cpp_CDemnfolk_renderOpaque_FUN_004581c0(CDemnfolk *this_ptr)
;
; Parameters:
; CDemnfolk *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_00600530
;   undefined4 DAT_01d82088
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004581c0
        ;   Label: core_demnfolk.cpp_CDemnfolk_renderOpaque_FUN_004581c0
    ADD EAX,0x158                       ; 004581c4
    PUSH EAX                            ; 004581c9
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 004581ca
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004581cf
    ADD ESP,0x4                         ; 004581d2
    CMP EAX,0x23                        ; 004581d5
    JNZ 0x004581eb                      ; 004581d8
        ;   XREF to: 004581eb (CONDITIONAL_JUMP)  ; LAB_004581eb
    MOV EAX,[0x00600530]                ; 004581da | DAT_00600530
    CMP dword ptr [EAX + 0x1008],0x0    ; 004581df | DAT_01d82088
    JNZ 0x004581eb                      ; 004581e6
        ;   XREF to: 004581eb (CONDITIONAL_JUMP)  ; LAB_004581eb
    XOR EAX,EAX                         ; 004581e8
    RET                                 ; 004581ea
    MOV ECX,dword ptr [ESP + 0x4]       ; 004581eb
        ;   Label: LAB_004581eb
    PUSH ECX                            ; 004581ef
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220 ; 004581f0
        ;   XREF to: 0042e220 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004581f5
    RET                                 ; 004581f8

