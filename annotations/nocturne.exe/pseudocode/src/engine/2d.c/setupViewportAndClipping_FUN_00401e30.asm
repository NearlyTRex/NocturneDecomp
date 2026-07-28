; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_setupViewportAndClipping_FUN_00401e30(int left,int top,int right,int bottom)
;
; Parameters:
; int              Stack[0x4]:4   left
; int              Stack[0x8]:4   top
; int              Stack[0xc]:4   right
; int              Stack[0x10]:4   bottom
;
; XREF[3]:
;   engine_matrix.c_pushViewport_FUN_004ce7c0 at 004ce8dc
;   shape_edittool.cpp_CEditorTools_createModalWindow_FUN_00471b50 at 00472045
;   wincore_wddvmem.cpp_setScreenResolution_FUN_00552e00 at 00553136
;
; Referenced Globals:
;   undefined4 DAT_01c00c48
;   undefined4 DAT_01c00c4c
;   undefined4 DAT_01c00c50
;   undefined4 DAT_01c00c54
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c5c
;   undefined4 DAT_01c00c60
;   undefined4 DAT_01c00c64
;   undefined4 DAT_01c00c68
;   undefined4 DAT_01c00c6c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401e30
        ;   Label: engine_2d.c_setupViewportAndClipping_FUN_00401e30
    PUSH ESI                            ; 00401e31
    PUSH EDI                            ; 00401e32
    MOV EDI,dword ptr [ESP + 0x10]      ; 00401e33
    MOV EBX,dword ptr [ESP + 0x18]      ; 00401e37
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00401e3b
    MOV EAX,dword ptr [ESP + 0x14]      ; 00401e3f
    MOV dword ptr [0x01c00c60],EBX      ; 00401e43 | DAT_01c00c60
    MOV dword ptr [0x01c00c64],ECX      ; 00401e49 | DAT_01c00c64
    SUB EBX,EDI                         ; 00401e4f
    MOV [0x01c00c5c],EAX                ; 00401e51 | DAT_01c00c5c
    INC EBX                             ; 00401e56
    SUB ECX,EAX                         ; 00401e57
    MOV EDX,EBX                         ; 00401e59
    MOV EAX,EBX                         ; 00401e5b
    SAR EDX,0x1f                        ; 00401e5d
    SUB EAX,EDX                         ; 00401e60
    SAR EAX,0x1                         ; 00401e62
    INC ECX                             ; 00401e64
    AND EAX,0xffff                      ; 00401e65
    MOV EDX,ECX                         ; 00401e6a
    LEA ESI,[EAX + -0x1]                ; 00401e6c
    SAR EDX,0x1f                        ; 00401e6f
    MOV EAX,ECX                         ; 00401e72
    SUB EAX,EDX                         ; 00401e74
    SAR EAX,0x1                         ; 00401e76
    MOV dword ptr [0x01c00c58],EDI      ; 00401e78 | DAT_01c00c58
    MOV dword ptr [0x01c00c68],EBX      ; 00401e7e | DAT_01c00c68
    MOV dword ptr [0x01c00c6c],ECX      ; 00401e84 | DAT_01c00c6c
    AND EAX,0xffff                      ; 00401e8a
    MOV EDX,ESI                         ; 00401e8f
    ADD ESI,EDI                         ; 00401e91
    DEC EAX                             ; 00401e93
    INC ESI                             ; 00401e94
    SHL EDX,0x10                        ; 00401e95
    SHL ESI,0x10                        ; 00401e98
    MOV dword ptr [0x01c00c48],EDX      ; 00401e9b | DAT_01c00c48
    MOV dword ptr [0x01c00c50],ESI      ; 00401ea1 | DAT_01c00c50
    MOV ESI,dword ptr [ESP + 0x14]      ; 00401ea7
    MOV EDX,EAX                         ; 00401eab
    ADD EAX,ESI                         ; 00401ead
    NEG EDX                             ; 00401eaf
    INC EAX                             ; 00401eb1
    SHL EDX,0x10                        ; 00401eb2
    SHL EAX,0x10                        ; 00401eb5
    MOV dword ptr [0x01c00c4c],EDX      ; 00401eb8 | DAT_01c00c4c
    MOV [0x01c00c54],EAX                ; 00401ebe | DAT_01c00c54
    POP EDI                             ; 00401ec3
    POP ESI                             ; 00401ec4
    POP EBX                             ; 00401ec5
    RET                                 ; 00401ec6

