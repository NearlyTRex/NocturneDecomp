; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_FUN_004d7e00(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_main.c_FUN_004c85f0 at 004c8c8d
;
; Referenced Globals:
;   undefined4 DAT_01ccbbf0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d7e00
        ;   Label: core_mission.cpp_CDemonMission_FUN_004d7e00
    MOV dword ptr [EAX + 0x4],0x0       ; 004d7e04
    MOV dword ptr [EAX + 0x514],0x0     ; 004d7e0b
    MOV dword ptr [EAX + 0x518],0x0     ; 004d7e15
    LEA EDX,[EAX + 0x51c]               ; 004d7e1f
    MOV dword ptr [EAX + 0x528],0xffffffff ; 004d7e25
    MOV dword ptr [EDX + 0x8],0x0       ; 004d7e2f
    MOV ECX,dword ptr [EDX + 0x8]       ; 004d7e36
    MOV dword ptr [EDX + 0x4],ECX       ; 004d7e39
    MOV ECX,dword ptr [EDX + 0x4]       ; 004d7e3c
    MOV dword ptr [EDX],ECX             ; 004d7e3f
    MOV byte ptr [EAX + 0x10],0x0       ; 004d7e41
    MOV dword ptr [EAX + 0x52c],0x0     ; 004d7e45
    MOV dword ptr [EAX + 0x850],0x0     ; 004d7e4f
    MOV dword ptr [EAX + 0xc],0x0       ; 004d7e59
    MOV dword ptr [EAX + 0x854],0x0     ; 004d7e60
    MOV dword ptr [EAX + 0x858],0x0     ; 004d7e6a
    XOR DL,DL                           ; 004d7e74
    MOV dword ptr [EAX + 0x8],0xffffffff ; 004d7e76
    MOV byte ptr [0x01ccbbf0],DL        ; 004d7e7d | DAT_01ccbbf0
    RET                                 ; 004d7e83

