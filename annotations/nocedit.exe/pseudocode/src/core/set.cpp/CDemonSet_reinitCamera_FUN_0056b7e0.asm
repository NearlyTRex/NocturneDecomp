; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_reinitCamera_FUN_0056b7e0(CDemonSet *this_ptr,uint param_2,uint param_3,int screen_height)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   param_2
; uint             Stack[0xc]:4   param_3
; int              Stack[0x10]:4   screen_height
;
; XREF[4]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 at 004ddfdd
;   core_game.cpp_CGame_processHotkeys_FUN_004dcee0 at 004dd0a7
;   core_msnedit.cpp_CDemonMission_editActorProperties_FUN_00539060 at 005390a9
;   core_setedit.cpp_CDemonSet_FUN_0057ae50 at 0057b302
;
; Referenced Globals:
;   CDemonCamera g_CDemonCameraInstance
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_init_FUN_0044c190
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x10]      ; 0056b7e0
        ;   Label: core_set.cpp_CDemonSet_reinitCamera_FUN_0056b7e0
    PUSH EDX                            ; 0056b7e4
    PUSH 0x32758e4                      ; 0056b7e5 | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_init_FUN_0044c190 ; 0056b7ea
        ;   XREF to: 0044c190 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_init_FUN_0044c190(CDemonCamera * this_ptr, int screen_height)
    ADD ESP,0x8                         ; 0056b7ef
    MOV EAX,dword ptr [ESP + 0x4]       ; 0056b7f2
    MOV ECX,dword ptr [EAX + 0x15aea4]  ; 0056b7f6
    PUSH ECX                            ; 0056b7fc
    PUSH EAX                            ; 0056b7fd
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 ; 0056b7fe
        ;   XREF to: 0056ae50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 0056b803
    RET                                 ; 0056b806

