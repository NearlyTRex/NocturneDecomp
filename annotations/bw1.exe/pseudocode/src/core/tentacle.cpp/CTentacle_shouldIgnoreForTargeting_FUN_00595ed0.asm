; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_tentacle_cpp_CTentacle_shouldIgnoreForTargeting_FUN_00595ed0(CTentacle *this_ptr)
;
; Parameters:
; CTentacle *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005f77b6
;
; Called Functions:
;   core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c5a0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00595ed0
        ;   Label: core_tentacle.cpp_CTentacle_shouldIgnoreForTargeting_FUN_00595ed0
    MOV EBP,ESP                         ; 00595ed1
    MOV EAX,dword ptr [EBP + 0x8]       ; 00595ed3
    PUSH 0x5f77b6                       ; 00595ed6 | DAT_005f77b6
    ADD EAX,0x158                       ; 00595edb
    PUSH EAX                            ; 00595ee0
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00595ee1
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00595ee6
    PUSH EAX                            ; 00595ee9
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 00595eea
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00595eef
    TEST EAX,EAX                        ; 00595ef2
    JNZ 0x00595efd                      ; 00595ef4
        ;   XREF to: 00595efd (CONDITIONAL_JUMP)  ; LAB_00595efd
    MOV EAX,0x1                         ; 00595ef6
    POP EBP                             ; 00595efb
    RET                                 ; 00595efc
    MOV EDX,dword ptr [EBP + 0x8]       ; 00595efd
        ;   Label: LAB_00595efd
    PUSH EDX                            ; 00595f00
    CALL core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c5a0 ; 00595f01
        ;   XREF to: 0040c5a0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c5a0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00595f06
    POP EBP                             ; 00595f09
    RET                                 ; 00595f0a

