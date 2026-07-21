; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_updateTextureAnimCounts_FUN_00486d40(void)
;
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_0048a390 at 0048a3a6
;
; Referenced Globals:
;   undefined4 DAT_01bd1d80
;   undefined4 DAT_01c094b4
;   undefined4 DAT_01c094b8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00486d40
        ;   Label: core_fire.cpp_updateTextureAnimCounts_FUN_00486d40
    PUSH ESI                            ; 00486d41
    MOV ECX,dword ptr [0x01bd1d80]      ; 00486d42 | DAT_01bd1d80
    MOV EBX,dword ptr [0x01c094b8]      ; 00486d48 | DAT_01c094b8
    MOV ESI,dword ptr [0x01c094b4]      ; 00486d4e | DAT_01c094b4
    MOV EDX,ECX                         ; 00486d54
    MOV EAX,ECX                         ; 00486d56
    SAR EDX,0x1f                        ; 00486d58
    SHL EDX,0x8                         ; 00486d5b
    SBB EAX,EDX                         ; 00486d5e
    SAR EAX,0x8                         ; 00486d60
    MOV EDX,ECX                         ; 00486d63
    ADD EBX,EAX                         ; 00486d65
    MOV EAX,ECX                         ; 00486d67
    SAR EDX,0x1f                        ; 00486d69
    SHL EDX,0x7                         ; 00486d6c
    SBB EAX,EDX                         ; 00486d6f
    SAR EAX,0x7                         ; 00486d71
    ADD ESI,EAX                         ; 00486d74
    AND EBX,0xff                        ; 00486d76
    AND ESI,0x7f                        ; 00486d7c
    MOV dword ptr [0x01c094b8],EBX      ; 00486d7f | DAT_01c094b8
    MOV dword ptr [0x01c094b4],ESI      ; 00486d85 | DAT_01c094b4
    POP ESI                             ; 00486d8b
    POP EBX                             ; 00486d8c
    RET                                 ; 00486d8d

