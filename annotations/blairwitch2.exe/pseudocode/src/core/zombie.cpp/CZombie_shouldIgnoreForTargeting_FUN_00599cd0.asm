; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_zombie_cpp_CZombie_shouldIgnoreForTargeting_FUN_00599cd0(CZombie *this_ptr)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_FUN_0040c890
;   core_motion.cpp_FUN_005035c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00599cd0
        ;   Label: core_zombie.cpp_CZombie_shouldIgnoreForTargeting_FUN_00599cd0
    ADD EAX,0x2b4                       ; 00599cd4
    PUSH EAX                            ; 00599cd9
    CALL core_motion.cpp_FUN_005035c0   ; 00599cda
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00599cdf
    ADD ESP,0x4                         ; 00599ce2
    CMP EAX,0xe                         ; 00599ce5
    JNZ 0x00599cf0                      ; 00599ce8
        ;   XREF to: 00599cf0 (CONDITIONAL_JUMP)  ; LAB_00599cf0
    MOV EAX,0x1                         ; 00599cea
    RET                                 ; 00599cef
    MOV EDX,dword ptr [ESP + 0x4]       ; 00599cf0
        ;   Label: LAB_00599cf0
    PUSH EDX                            ; 00599cf4
    CALL core_actor.cpp_FUN_0040c890    ; 00599cf5
        ;   XREF to: 0040c890 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c890(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00599cfa
    RET                                 ; 00599cfd

