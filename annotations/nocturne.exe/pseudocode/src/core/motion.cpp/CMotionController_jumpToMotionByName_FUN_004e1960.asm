; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004e1960(CMotionController *this_ptr,char *motion_name,float frame_number)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   motion_name
; float            Stack[0xc]:4   frame_number
;
; XREF[6]:
;   core_dracbrid.cpp_CDraculaBride_archive_FUN_0045a450 at 0045a509
;   core_mimic.cpp_CMimic_setupCloth_FUN_004d5770 at 004d57ee
;   core_moloch.cpp_CMoloch_process_FUN_004ddb20 at 004de042
;   core_stranger.cpp_CStranger_reset_FUN_00540820 at 0054086e
;   core_succubus.cpp_CSuccubus_process_FUN_00540f50 at 005411b3
;   core_vampboss.cpp_CVampireBoss_transformToHuman_FUN_0054e1e0 at 0054e1fd
;
; Called Functions:
;   core_motion.cpp_CMotionController_jumpToMotion_FUN_004e1990
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e1960
        ;   Label: core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004e1960
    PUSH 0x1                            ; 004e1961
    MOV EDX,dword ptr [ESP + 0x10]      ; 004e1963
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e1967
    PUSH EDX                            ; 004e196b
    MOV ECX,dword ptr [EAX]             ; 004e196c
    PUSH ECX                            ; 004e196e
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010 ; 004e196f
        ;   XREF to: 004e1010 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 004e1974
    PUSH dword ptr [ESP + 0x10]         ; 004e1977
    PUSH EAX                            ; 004e197b
    MOV EBX,dword ptr [ESP + 0x10]      ; 004e197c
    PUSH EBX                            ; 004e1980
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_004e1990 ; 004e1981
        ;   XREF to: 004e1990 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_004e1990(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    ADD ESP,0xc                         ; 004e1986
    POP EBX                             ; 004e1989
    RET                                 ; 004e198a

