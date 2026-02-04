; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0 (CMotionController *this_ptr,char *motion_name,float frame_number)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   motion_name
; float            Stack[0xc]:4   frame_number
;
; XREF[9]:
;   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 at 0043d480
;   core_dracbrid.cpp_CDraculaBride_archive_FUN_00485dd0 at 00485e89
;   core_mimic.cpp_CMimic_FUN_00520500 at 0052057e
;   core_moloch.cpp_CMoloch_process_FUN_00528d20 at 00529242
;   core_morph.cpp_FUN_0052bcb0 at 0052c9fd
;   core_msnedit.cpp_FUN_00536e20 at 005371de
;   core_stranger.cpp_CStranger_FUN_005c6750 at 005c679e
;   core_succubus.cpp_CSuccubus_process_FUN_005c6e90 at 005c70f3
;   core_vampboss.cpp_CVampireBoss_FUN_005e74c0 at 005e74dd
;
; Called Functions:
;   core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052ddb0
        ;   Label: core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
    PUSH 0x1                            ; 0052ddb1
    MOV EDX,dword ptr [ESP + 0x10]      ; 0052ddb3
    MOV EAX,dword ptr [ESP + 0xc]       ; 0052ddb7
    PUSH EDX                            ; 0052ddbb
    MOV ECX,dword ptr [EAX]             ; 0052ddbc
    PUSH ECX                            ; 0052ddbe
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460 ; 0052ddbf
        ;   XREF to: 0052d460 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460(CMotionList * this_ptr)
    ADD ESP,0xc                         ; 0052ddc4
    PUSH dword ptr [ESP + 0x10]         ; 0052ddc7
    PUSH EAX                            ; 0052ddcb
    MOV EBX,dword ptr [ESP + 0x10]      ; 0052ddcc
    PUSH EBX                            ; 0052ddd0
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0 ; 0052ddd1
        ;   XREF to: 0052dde0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    ADD ESP,0xc                         ; 0052ddd6
    POP EBX                             ; 0052ddd9
    RET                                 ; 0052ddda

