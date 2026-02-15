; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_reset_FUN_00522c80(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_main.c_initializeGameSystems_FUN_00507a60 at 0050811d
;   core_msnedit.cpp_CDemonMission_importActors_FUN_0053ccf0 at 0053cde5
;
; Referenced Globals:
;   char[8100] g_PendingMissionName
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00522c80
        ;   Label: core_mission.cpp_CDemonMission_reset_FUN_00522c80
    MOV dword ptr [EAX + 0x4],0x0       ; 00522c84
    MOV dword ptr [EAX + 0x548],0x0     ; 00522c8b
    MOV dword ptr [EAX + 0x54c],0x0     ; 00522c95
    LEA EDX,[EAX + 0x550]               ; 00522c9f
    MOV dword ptr [EAX + 0x55c],0xffffffff ; 00522ca5
    MOV dword ptr [EDX + 0x8],0x0       ; 00522caf
    MOV ECX,dword ptr [EDX + 0x8]       ; 00522cb6
    MOV dword ptr [EDX + 0x4],ECX       ; 00522cb9
    MOV ECX,dword ptr [EDX + 0x4]       ; 00522cbc
    MOV dword ptr [EDX],ECX             ; 00522cbf
    MOV byte ptr [EAX + 0x44],0x0       ; 00522cc1
    MOV dword ptr [EAX + 0x560],0x0     ; 00522cc5
    MOV dword ptr [EAX + 0x3c],0x0      ; 00522ccf
    MOV dword ptr [EAX + 0x40],0x0      ; 00522cd6
    MOV dword ptr [EAX + 0x884],0x0     ; 00522cdd
    MOV dword ptr [EAX + 0xc],0x0       ; 00522ce7
    MOV dword ptr [EAX + 0x888],0x0     ; 00522cee
    MOV dword ptr [EAX + 0x88c],0x0     ; 00522cf8
    XOR DL,DL                           ; 00522d02
    MOV dword ptr [EAX + 0x8],0xffffffff ; 00522d04
    MOV byte ptr [0x02f35f10],DL        ; 00522d0b | g_PendingMissionName
    RET                                 ; 00522d11

