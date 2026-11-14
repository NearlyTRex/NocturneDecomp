; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_updateFogScrollOffset_FUN_0044ca20(SFogGrid *fog_ptr,int time_major,int time_minor)
;
; Parameters:
; SFogGrid *       Stack[0x4]:4   fog_ptr
; int              Stack[0x8]:4   time_major
; int              Stack[0xc]:4   time_minor
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453ed0 at 00453f32
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00453610 at 00453807
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044ca20
        ;   Label: core_dcamera.cpp_updateFogScrollOffset_FUN_0044ca20
    PUSH ESI                            ; 0044ca21
    PUSH EDI                            ; 0044ca22
    PUSH EBP                            ; 0044ca23
    MOV EBX,dword ptr [ESP + 0x14]      ; 0044ca24
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044ca28
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0044ca2c
    SHL EAX,0x10                        ; 0044ca30
    ADD EAX,EDX                         ; 0044ca33
    MOV EDX,0x100                       ; 0044ca35
    IMUL EDX                            ; 0044ca3a
    SHRD EAX,EDX,0x10                   ; 0044ca3c
    MOV EDX,dword ptr [EBX + 0x100c]    ; 0044ca40
    MOV ECX,EAX                         ; 0044ca46
    IMUL EDX                            ; 0044ca48
    SHRD EAX,EDX,0x10                   ; 0044ca4a
    MOV ESI,EAX                         ; 0044ca4e
    MOV EDX,dword ptr [EBX + 0x1010]    ; 0044ca50
    MOV dword ptr [EBX + 0x1000],EAX    ; 0044ca56
    NEG ESI                             ; 0044ca5c
    MOV EAX,ECX                         ; 0044ca5e
    MOV dword ptr [EBX + 0x1000],ESI    ; 0044ca60
    IMUL EDX                            ; 0044ca66
    SHRD EAX,EDX,0x10                   ; 0044ca68
    MOV EDI,EAX                         ; 0044ca6c
    MOV EDX,dword ptr [EBX + 0x1014]    ; 0044ca6e
    MOV dword ptr [EBX + 0x1004],EAX    ; 0044ca74
    NEG EDI                             ; 0044ca7a
    MOV EAX,ECX                         ; 0044ca7c
    MOV dword ptr [EBX + 0x1004],EDI    ; 0044ca7e
    IMUL EDX                            ; 0044ca84
    SHRD EAX,EDX,0x10                   ; 0044ca86
    MOV EBP,EAX                         ; 0044ca8a
    MOV dword ptr [EBX + 0x1008],EAX    ; 0044ca8c
    NEG EBP                             ; 0044ca92
    MOV dword ptr [EBX + 0x1008],EBP    ; 0044ca94
    POP EBP                             ; 0044ca9a
    POP EDI                             ; 0044ca9b
    POP ESI                             ; 0044ca9c
    POP EBX                             ; 0044ca9d
    RET                                 ; 0044ca9e

