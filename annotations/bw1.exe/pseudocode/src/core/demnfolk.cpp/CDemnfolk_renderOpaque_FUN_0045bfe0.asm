; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_demnfolk_cpp_CDemnfolk_renderOpaque_FUN_0045bfe0(CDemnfolk *this_ptr)
;
; Parameters:
; CDemnfolk *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_0061f650
;   undefined4 DAT_01d2d908
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0045bfe0
        ;   Label: core_demnfolk.cpp_CDemnfolk_renderOpaque_FUN_0045bfe0
    ADD EAX,0x158                       ; 0045bfe4
    PUSH EAX                            ; 0045bfe9
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0045bfea
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0045bfef
    ADD ESP,0x4                         ; 0045bff2
    CMP EAX,0x24                        ; 0045bff5
    JNZ 0x0045c00b                      ; 0045bff8
        ;   XREF to: 0045c00b (CONDITIONAL_JUMP)  ; LAB_0045c00b
    MOV EAX,[0x0061f650]                ; 0045bffa | DAT_0061f650
    CMP dword ptr [EAX + 0x1008],0x0    ; 0045bfff | DAT_01d2d908
    JNZ 0x0045c00b                      ; 0045c006
        ;   XREF to: 0045c00b (CONDITIONAL_JUMP)  ; LAB_0045c00b
    XOR EAX,EAX                         ; 0045c008
    RET                                 ; 0045c00a
    MOV ECX,dword ptr [ESP + 0x4]       ; 0045c00b
        ;   Label: LAB_0045c00b
    PUSH ECX                            ; 0045c00f
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240 ; 0045c010
        ;   XREF to: 0042f240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0045c015
    RET                                 ; 0045c018

