; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004fc3f0(CMotionController *this_ptr,char *motion_name,float frame_number)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   motion_name
; float            Stack[0xc]:4   frame_number
;
; XREF[3]:
;   core_asgaya.cpp_FUN_005a0be0 at 005a169f
;   core_mattnntt.cpp_FUN_00591f30 at 005935c4
;   core_stranger.cpp_FUN_00526f50 at 00526f9e
;
; Called Functions:
;   core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420
;   core_motion.cpp_FUN_004fb9c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc3f0
        ;   Label: core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004fc3f0
    PUSH 0x1                            ; 004fc3f1
    MOV EDX,dword ptr [ESP + 0x10]      ; 004fc3f3
    MOV EAX,dword ptr [ESP + 0xc]       ; 004fc3f7
    PUSH EDX                            ; 004fc3fb
    MOV ECX,dword ptr [EAX]             ; 004fc3fc
    PUSH ECX                            ; 004fc3fe
    CALL core_motion.cpp_FUN_004fb9c0   ; 004fc3ff
        ;   XREF to: 004fb9c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_004fb9c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 004fc404
    PUSH dword ptr [ESP + 0x10]         ; 004fc407
    PUSH EAX                            ; 004fc40b
    MOV EBX,dword ptr [ESP + 0x10]      ; 004fc40c
    PUSH EBX                            ; 004fc410
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420 ; 004fc411
        ;   XREF to: 004fc420 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    ADD ESP,0xc                         ; 004fc416
    POP EBX                             ; 004fc419
    RET                                 ; 004fc41a

