; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_updateTextureAnimCounts_FUN_00498c30(void)
;
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_0049c430 at 0049c446
;
; Referenced Globals:
;   undefined4 DAT_01c2a370
;   undefined4 DAT_01c3ec54
;   undefined4 DAT_01c3ec58
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00498c30
        ;   Label: core_fire.cpp_updateTextureAnimCounts_FUN_00498c30
    PUSH ESI                            ; 00498c31
    MOV ECX,dword ptr [0x01c2a370]      ; 00498c32 | DAT_01c2a370
    MOV EBX,dword ptr [0x01c3ec58]      ; 00498c38 | DAT_01c3ec58
    MOV ESI,dword ptr [0x01c3ec54]      ; 00498c3e | DAT_01c3ec54
    MOV EDX,ECX                         ; 00498c44
    MOV EAX,ECX                         ; 00498c46
    SAR EDX,0x1f                        ; 00498c48
    SHL EDX,0x8                         ; 00498c4b
    SBB EAX,EDX                         ; 00498c4e
    SAR EAX,0x8                         ; 00498c50
    MOV EDX,ECX                         ; 00498c53
    ADD EBX,EAX                         ; 00498c55
    MOV EAX,ECX                         ; 00498c57
    SAR EDX,0x1f                        ; 00498c59
    SHL EDX,0x7                         ; 00498c5c
    SBB EAX,EDX                         ; 00498c5f
    SAR EAX,0x7                         ; 00498c61
    ADD ESI,EAX                         ; 00498c64
    AND EBX,0xff                        ; 00498c66
    AND ESI,0x7f                        ; 00498c6c
    MOV dword ptr [0x01c3ec58],EBX      ; 00498c6f | DAT_01c3ec58
    MOV dword ptr [0x01c3ec54],ESI      ; 00498c75 | DAT_01c3ec54
    POP ESI                             ; 00498c7b
    POP EBX                             ; 00498c7c
    RET                                 ; 00498c7d

