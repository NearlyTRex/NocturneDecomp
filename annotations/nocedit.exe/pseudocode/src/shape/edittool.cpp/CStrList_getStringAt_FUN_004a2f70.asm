; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
;
; XREF[61]:
;   core_charactr.cpp_CCharacter_FUN_0042f3e0 at 0042f639
;   core_cloth.cpp_FUN_0043c430 at 0043c523
;   core_fileman.cpp_preprocessMusicFiles_FUN_004bd750 at 004bd7a6
;   core_mission.cpp_FUN_00524c20 at 00524cb6
;   core_morph.cpp_FUN_0052bcb0 at 0052c9f3
;   core_msnedit.cpp_DeleteActors_FUN_0053df90 at 0053e089
;   core_msnedit.cpp_FUN_0053b510 at 0053b907
;   core_msnedit.cpp_FUN_0053b9f0 at 0053ba75
;   core_msnedit.cpp_FUN_0053c210 at 0053c2e4
;   core_msnedit.cpp_FUN_0053d8b0 at 0053d9ba
;   ... and 51 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a2f70
        ;   Label: shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a2f74
    MOV EAX,dword ptr [EAX + 0x8]       ; 004a2f78
    MOV EAX,dword ptr [EAX + EDX*0x4]   ; 004a2f7b
    RET                                 ; 004a2f7e

