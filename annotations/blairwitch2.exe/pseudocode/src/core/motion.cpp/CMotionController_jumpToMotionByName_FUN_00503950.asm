; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00503950(CMotionController *this_ptr,char *motion_name,float frame_number)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   motion_name
; float            Stack[0xc]:4   frame_number
;
; XREF[7]:
;   core_dracbrid.cpp_CDraculaBride_archive_FUN_00464cc0 at 00464d79
;   core_mimic.cpp_CMimic_setupCloth_FUN_004f17a0 at 004f181e
;   core_moloch.cpp_CMoloch_process_FUN_00501530 at 00501af6
;   core_stranger.cpp_CStranger_reset_FUN_0056f090 at 0056f0de
;   core_succubus.cpp_CSuccubus_process_FUN_0056f6d0 at 0056f977
;   core_vampboss.cpp_CVampireBoss_transformToHuman_FUN_00583650 at 0058366d
;   unkafter_stranger.cpp_FUN_0045dd30 at 0045dd7e
;
; Called Functions:
;   core_motion.cpp_CMotionController_jumpToMotion_FUN_00503980
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00503950
        ;   Label: core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00503950
    PUSH 0x1                            ; 00503951
    MOV EDX,dword ptr [ESP + 0x10]      ; 00503953
    MOV EAX,dword ptr [ESP + 0xc]       ; 00503957
    PUSH EDX                            ; 0050395b
    MOV ECX,dword ptr [EAX]             ; 0050395c
    PUSH ECX                            ; 0050395e
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10 ; 0050395f
        ;   XREF to: 00502f10 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00503964
    PUSH dword ptr [ESP + 0x10]         ; 00503967
    PUSH EAX                            ; 0050396b
    MOV EBX,dword ptr [ESP + 0x10]      ; 0050396c
    PUSH EBX                            ; 00503970
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_00503980 ; 00503971
        ;   XREF to: 00503980 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_00503980(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    ADD ESP,0xc                         ; 00503976
    POP EBX                             ; 00503979
    RET                                 ; 0050397a

