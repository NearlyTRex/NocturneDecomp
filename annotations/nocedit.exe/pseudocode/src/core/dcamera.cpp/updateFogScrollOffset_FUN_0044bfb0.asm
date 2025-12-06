; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dcamera.cpp_updateFogScrollOffset_FUN_0044bfb0(SFogGrid * fog_ptr, int time_major, int time_minor)
;
; Parameters:
; SFogGrid *       Stack[0x4]:4   fog_ptr
; int              Stack[0x8]:4   time_major
; int              Stack[0xc]:4   time_minor
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270 at 004532d2
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0 at 00452ba5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044bfb0
        ;   Label: core_dcamera.cpp_updateFogScrollOffset_FUN_0044bfb0
    PUSH ESI                            ; 0044bfb1
    PUSH EDI                            ; 0044bfb2
    PUSH EBP                            ; 0044bfb3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0044bfb4
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044bfb8
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0044bfbc
    SHL EAX,0x10                        ; 0044bfc0
    ADD EAX,EDX                         ; 0044bfc3
    MOV EDX,0x100                       ; 0044bfc5
    IMUL EDX                            ; 0044bfca
    SHRD EAX,EDX,0x10                   ; 0044bfcc
    MOV EDX,dword ptr [EBX + 0x100c]    ; 0044bfd0
    MOV ECX,EAX                         ; 0044bfd6
    IMUL EDX                            ; 0044bfd8
    SHRD EAX,EDX,0x10                   ; 0044bfda
    MOV ESI,EAX                         ; 0044bfde
    MOV EDX,dword ptr [EBX + 0x1010]    ; 0044bfe0
    MOV dword ptr [EBX + 0x1000],EAX    ; 0044bfe6
    NEG ESI                             ; 0044bfec
    MOV EAX,ECX                         ; 0044bfee
    MOV dword ptr [EBX + 0x1000],ESI    ; 0044bff0
    IMUL EDX                            ; 0044bff6
    SHRD EAX,EDX,0x10                   ; 0044bff8
    MOV EDI,EAX                         ; 0044bffc
    MOV EDX,dword ptr [EBX + 0x1014]    ; 0044bffe
    MOV dword ptr [EBX + 0x1004],EAX    ; 0044c004
    NEG EDI                             ; 0044c00a
    MOV EAX,ECX                         ; 0044c00c
    MOV dword ptr [EBX + 0x1004],EDI    ; 0044c00e
    IMUL EDX                            ; 0044c014
    SHRD EAX,EDX,0x10                   ; 0044c016
    MOV EBP,EAX                         ; 0044c01a
    MOV dword ptr [EBX + 0x1008],EAX    ; 0044c01c
    NEG EBP                             ; 0044c022
    MOV dword ptr [EBX + 0x1008],EBP    ; 0044c024
    POP EBP                             ; 0044c02a
    POP EDI                             ; 0044c02b
    POP ESI                             ; 0044c02c
    POP EBX                             ; 0044c02d
    RET                                 ; 0044c02e

