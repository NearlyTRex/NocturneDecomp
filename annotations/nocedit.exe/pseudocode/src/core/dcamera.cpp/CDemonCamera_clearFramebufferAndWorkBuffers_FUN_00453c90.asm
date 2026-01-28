; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dcamera_cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00453c90 (CDemonCamera *this_ptr,int clear_color)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   clear_color
;
; XREF[1]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 at 004dfa1c
;
; Referenced Globals:
;   SFogImagePlane g_CameraPlaneWorkBuffer
;   undefined4 DAT_013da779
;   undefined4 DAT_013da8b8
;   SFogImagePlane[16] g_CameraImageDecompressBuffer
;   undefined4 DAT_013ed379
;   undefined4 DAT_013ed4b8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453c90
        ;   Label: core_dcamera.cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00453c90
    PUSH ESI                            ; 00453c91
    PUSH EDI                            ; 00453c92
    PUSH EBP                            ; 00453c93
    MOV EDX,dword ptr [ESP + 0x14]      ; 00453c94
    MOV EDI,dword ptr [ESP + 0x18]      ; 00453c98
    MOV ECX,dword ptr [EDX + 0x148]     ; 00453c9c
    XOR ESI,ESI                         ; 00453ca2
    TEST ECX,ECX                        ; 00453ca4
    JLE 0x00453cda                      ; 00453ca6
        ;   XREF to: 00453cda (CONDITIONAL_JUMP)  ; LAB_00453cda
    MOV EBP,dword ptr [EDX + 0x144]     ; 00453ca8
        ;   Label: LAB_00453ca8
    XOR EAX,EAX                         ; 00453cae
    TEST EBP,EBP                        ; 00453cb0
    JLE 0x00453cd1                      ; 00453cb2
        ;   XREF to: 00453cd1 (CONDITIONAL_JUMP)  ; LAB_00453cd1
    MOV ECX,dword ptr [EDX + 0x144]     ; 00453cb4
        ;   Label: LAB_00453cb4
    IMUL ECX,ESI                        ; 00453cba
    MOV EBX,dword ptr [EDX + 0x158]     ; 00453cbd
    ADD ECX,EAX                         ; 00453cc3
    MOV dword ptr [EBX + ECX*0x4],EDI   ; 00453cc5
    INC EAX                             ; 00453cc8
    CMP EAX,dword ptr [EDX + 0x144]     ; 00453cc9
    JL 0x00453cb4                       ; 00453ccf
        ;   XREF to: 00453cb4 (CONDITIONAL_JUMP)  ; LAB_00453cb4
    INC ESI                             ; 00453cd1
        ;   Label: LAB_00453cd1
    CMP ESI,dword ptr [EDX + 0x148]     ; 00453cd2
    JL 0x00453ca8                       ; 00453cd8
        ;   XREF to: 00453ca8 (CONDITIONAL_JUMP)  ; LAB_00453ca8
    MOV ESI,0x140                       ; 00453cda
        ;   Label: LAB_00453cda
    XOR ECX,ECX                         ; 00453cdf
    MOV EDX,ESI                         ; 00453ce1
        ;   Label: LAB_00453ce1
    XOR BL,BL                           ; 00453ce3
    IMUL EAX,ECX,0x140                  ; 00453ce5
    INC EAX                             ; 00453ceb
        ;   Label: LAB_00453ceb
    MOV byte ptr [EAX + 0x13ed377],BL   ; 00453cec | g_CameraImageDecompressBuffer | DAT_013ed379 | DAT_013ed4b8
    MOV byte ptr [EAX + 0x13da777],BL   ; 00453cf2 | g_CameraPlaneWorkBuffer | DAT_013da779 | DAT_013da8b8
    CMP EAX,EDX                         ; 00453cf8
    JNZ 0x00453ceb                      ; 00453cfa
        ;   XREF to: 00453ceb (CONDITIONAL_JUMP)  ; LAB_00453ceb
    INC ECX                             ; 00453cfc
    ADD ESI,0x140                       ; 00453cfd
    CMP ECX,0xf0                        ; 00453d03
    JL 0x00453ce1                       ; 00453d09
        ;   XREF to: 00453ce1 (CONDITIONAL_JUMP)  ; LAB_00453ce1
    POP EBP                             ; 00453d0b
    POP EDI                             ; 00453d0c
    POP ESI                             ; 00453d0d
    POP EBX                             ; 00453d0e
    RET                                 ; 00453d0f

