; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_updateFogScrollOffset_FUN_0043b380(int param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00442820 at 00442882
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00441f50 at 00442147
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b380
        ;   Label: core_dcamera.cpp_updateFogScrollOffset_FUN_0043b380
    PUSH ESI                            ; 0043b381
    PUSH EDI                            ; 0043b382
    PUSH EBP                            ; 0043b383
    MOV EBX,dword ptr [ESP + 0x14]      ; 0043b384
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043b388
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0043b38c
    SHL EAX,0x10                        ; 0043b390
    ADD EAX,EDX                         ; 0043b393
    MOV EDX,0x100                       ; 0043b395
    IMUL EDX                            ; 0043b39a
    SHRD EAX,EDX,0x10                   ; 0043b39c
    MOV EDX,dword ptr [EBX + 0x100c]    ; 0043b3a0
    MOV ECX,EAX                         ; 0043b3a6
    IMUL EDX                            ; 0043b3a8
    SHRD EAX,EDX,0x10                   ; 0043b3aa
    MOV ESI,EAX                         ; 0043b3ae
    MOV EDX,dword ptr [EBX + 0x1010]    ; 0043b3b0
    MOV dword ptr [EBX + 0x1000],EAX    ; 0043b3b6
    NEG ESI                             ; 0043b3bc
    MOV EAX,ECX                         ; 0043b3be
    MOV dword ptr [EBX + 0x1000],ESI    ; 0043b3c0
    IMUL EDX                            ; 0043b3c6
    SHRD EAX,EDX,0x10                   ; 0043b3c8
    MOV EDI,EAX                         ; 0043b3cc
    MOV EDX,dword ptr [EBX + 0x1014]    ; 0043b3ce
    MOV dword ptr [EBX + 0x1004],EAX    ; 0043b3d4
    NEG EDI                             ; 0043b3da
    MOV EAX,ECX                         ; 0043b3dc
    MOV dword ptr [EBX + 0x1004],EDI    ; 0043b3de
    IMUL EDX                            ; 0043b3e4
    SHRD EAX,EDX,0x10                   ; 0043b3e6
    MOV EBP,EAX                         ; 0043b3ea
    MOV dword ptr [EBX + 0x1008],EAX    ; 0043b3ec
    NEG EBP                             ; 0043b3f2
    MOV dword ptr [EBX + 0x1008],EBP    ; 0043b3f4
    POP EBP                             ; 0043b3fa
    POP EDI                             ; 0043b3fb
    POP ESI                             ; 0043b3fc
    POP EBX                             ; 0043b3fd
    RET                                 ; 0043b3fe

