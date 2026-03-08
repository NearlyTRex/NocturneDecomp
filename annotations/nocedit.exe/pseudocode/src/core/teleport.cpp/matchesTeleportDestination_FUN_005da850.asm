; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_teleport_cpp_matchesTeleportDestination_FUN_005da850(CTeleportDest *dest,CTeleport *candidate)
;
; Parameters:
; CTeleportDest *  Stack[0x4]:4   dest
; CTeleport *      Stack[0x8]:4   candidate
;
; XREF[1]:
;   core_teleport.cpp_CTeleportDest_processInEditor_FUN_005da870 at 005da8a4
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005da850
        ;   Label: core_teleport.cpp_matchesTeleportDestination_FUN_005da850
    MOV EDX,dword ptr [ESP + 0x4]       ; 005da854
    MOV EAX,dword ptr [EAX + 0x164]     ; 005da858
    CMP EAX,EDX                         ; 005da85e
    SETZ AL                             ; 005da860
    AND EAX,0xff                        ; 005da863
    RET                                 ; 005da868

