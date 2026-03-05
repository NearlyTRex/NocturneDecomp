; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_CHero_getGrabbed_FUN_004f28d0(CHero *this_ptr,CDemonActor *grabber,int grab_type)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   grabber
; int              Stack[0xc]:4   grab_type
; Local Variables:
; undefined1       Stack[-0x14]:1  local_14
;
; XREF[1]:
;   core_stranger.cpp_CStranger_getGrabbed_FUN_005c66a0 at 005c66db
;
; Referenced Globals:
;   TerminatedCString s_GETGRABBED_0062eb80
;   TerminatedCString s_GETGRABBED_FRONT_0062eb8b
;   TerminatedCString s_GETGRABBED_FRONT_0062eb9c
;   TerminatedCString s_GETGRABBED_BACK_0062ebad
;   TerminatedCString s_GETGRABBED_0062ebbd
;
; Called Functions:
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
;   core_motion.cpp_CMotionController_setDesiredStateByName_FUN_0052db90
;   core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f28d0
        ;   Label: core_hero.cpp_CHero_getGrabbed_FUN_004f28d0
    PUSH ESI                            ; 004f28d1
    SUB ESP,0xc                         ; 004f28d2
    MOV ESI,dword ptr [ESP + 0x18]      ; 004f28d5
    MOV EDX,dword ptr [ESP + 0x20]      ; 004f28d9
    TEST EDX,EDX                        ; 004f28dd
    JZ 0x004f2900                       ; 004f28df
        ;   XREF to: 004f2900 (CONDITIONAL_JUMP)  ; LAB_004f2900
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f28e1
        ;   Label: LAB_004f28e1
    MOV dword ptr [ESI + 0x2598],EAX    ; 004f28e5
    MOV EAX,dword ptr [ESP + 0x20]      ; 004f28eb
    MOV dword ptr [ESI + 0x259c],EAX    ; 004f28ef
    MOV EAX,0x1                         ; 004f28f5
    ADD ESP,0xc                         ; 004f28fa
    POP ESI                             ; 004f28fd
    POP EBX                             ; 004f28fe
    RET                                 ; 004f28ff
    PUSH EDX                            ; 004f2900
        ;   Label: LAB_004f2900
    PUSH 0x62eb80                       ; 004f2901 | = "GETGRABBED"
    LEA EBX,[ESI + 0x158]               ; 004f2906
    PUSH EBX                            ; 004f290c
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 004f290d
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004f2912
    PUSH EAX                            ; 004f2915
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0 ; 004f2916
        ;   XREF to: 0052d4f0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 004f291b
    TEST EAX,EAX                        ; 004f291e
    JGE 0x004f292a                      ; 004f2920
        ;   XREF to: 004f292a (CONDITIONAL_JUMP)  ; LAB_004f292a
    XOR EAX,EAX                         ; 004f2922
    ADD ESP,0xc                         ; 004f2924
    POP ESI                             ; 004f2927
    POP EBX                             ; 004f2928
    RET                                 ; 004f2929
    PUSH 0x0                            ; 004f292a
        ;   Label: LAB_004f292a
    PUSH 0x62eb8b                       ; 004f292c | = "GETGRABBED_FRONT"
    PUSH EBX                            ; 004f2931
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 004f2932
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004f2937
    PUSH EAX                            ; 004f293a
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0 ; 004f293b
        ;   XREF to: 0052d4f0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 004f2940
    TEST EAX,EAX                        ; 004f2943
    JL 0x004f2991                       ; 004f2945
        ;   XREF to: 004f2991 (CONDITIONAL_JUMP)  ; LAB_004f2991
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f2947
    ADD EAX,0x20                        ; 004f294b
    PUSH EAX                            ; 004f294e
    LEA EAX,[ESP + 0x4]                 ; 004f294f
    PUSH EAX                            ; 004f2953
    PUSH ESI                            ; 004f2954
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 004f2955
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    FLDZ                                ; 004f295a
    ADD ESP,0xc                         ; 004f295c
    FCOMP float ptr [EAX + 0x8]         ; 004f295f
    FNSTSW AX                           ; 004f2962
    SAHF                                ; 004f2964
    JNC 0x004f297c                      ; 004f2965
        ;   XREF to: 004f297c (CONDITIONAL_JUMP)  ; LAB_004f297c
    PUSH 0x1                            ; 004f2967
    PUSH 0x62eb9c                       ; 004f2969 | = "GETGRABBED_FRONT"
    PUSH EBX                            ; 004f296e
    CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_0052db90 ; 004f296f
        ;   XREF to: 0052db90 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredStateByName_FUN_0052db90(CMotionController * this_ptr, char * state_name, int force_immediate)
    ADD ESP,0xc                         ; 004f2974
    JMP 0x004f28e1                      ; 004f2977
        ;   XREF to: 004f28e1 (UNCONDITIONAL_JUMP)  ; LAB_004f28e1
    PUSH 0x1                            ; 004f297c
        ;   Label: LAB_004f297c
    PUSH 0x62ebad                       ; 004f297e | = "GETGRABBED_BACK"
    PUSH EBX                            ; 004f2983
    CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_0052db90 ; 004f2984
        ;   XREF to: 0052db90 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredStateByName_FUN_0052db90(CMotionController * this_ptr, char * state_name, int force_immediate)
    ADD ESP,0xc                         ; 004f2989
    JMP 0x004f28e1                      ; 004f298c
        ;   XREF to: 004f28e1 (UNCONDITIONAL_JUMP)  ; LAB_004f28e1
    PUSH 0x1                            ; 004f2991
        ;   Label: LAB_004f2991
    PUSH 0x62ebbd                       ; 004f2993 | = "GETGRABBED"
    PUSH EBX                            ; 004f2998
    CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_0052db90 ; 004f2999
        ;   XREF to: 0052db90 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredStateByName_FUN_0052db90(CMotionController * this_ptr, char * state_name, int force_immediate)
    ADD ESP,0xc                         ; 004f299e
    JMP 0x004f28e1                      ; 004f29a1
        ;   XREF to: 004f28e1 (UNCONDITIONAL_JUMP)  ; LAB_004f28e1

