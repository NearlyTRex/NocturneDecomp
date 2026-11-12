; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_endScene_FUN_0044d610(CDemonCamera *this_ptr,int skip_zbuffer_copy)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   skip_zbuffer_copy
;
; XREF[3]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 at 0054f84d
;   core_set.cpp_FUN_0054e69e at 0054e9cc
;   core_set.cpp_FUN_00550580 at 00550ae1
;
; Referenced Globals:
;   TerminatedCString s_core_dcamera_cpp_005d7608
;   TerminatedCString s_CDemonCamera_endScene_Sc_005d761c
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01c4480c
;   undefined4 DAT_01c44810
;   undefined4 DAT_01c50948
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c83370
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_0044ce90
;   core_main.c_FUN_005030e0
;   crt_watcom.c__memcpy_FUN_004ab0c8
;   engine_drender.cpp_popViewport_FUN_00483c40
;   engine_special.cpp_FUN_00582000
;   engine_special.cpp_masterZBuffer_FUN_00582a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044d610
        ;   Label: core_dcamera.cpp_CDemonCamera_endScene_FUN_0044d610
    PUSH ESI                            ; 0044d611
    PUSH EBP                            ; 0044d612
    MOV EBX,dword ptr [ESP + 0x10]      ; 0044d613
    CMP dword ptr [EBX + 0x11e4],0x0    ; 0044d617
    JZ 0x0044d6bc                       ; 0044d61e
        ;   XREF to: 0044d6bc (CONDITIONAL_JUMP)  ; LAB_0044d6bc
    MOV dword ptr [EBX + 0x11e4],0x0    ; 0044d624
    CMP dword ptr [0x02c83370],0x0      ; 0044d62e | DAT_02c83370
        ;   Label: LAB_0044d62e
    JZ 0x0044d63c                       ; 0044d635
        ;   XREF to: 0044d63c (CONDITIONAL_JUMP)  ; LAB_0044d63c
    CALL engine_special.cpp_FUN_00582000 ; 0044d637
        ;   XREF to: 00582000 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_FUN_00582000()
    MOV EBP,dword ptr [EBX + 0x168]     ; 0044d63c
        ;   Label: LAB_0044d63c
    TEST EBP,EBP                        ; 0044d642
    JNZ 0x0044d6a1                      ; 0044d644
        ;   XREF to: 0044d6a1 (CONDITIONAL_JUMP)  ; LAB_0044d6a1
    CMP dword ptr [ESP + 0x14],0x0      ; 0044d646
    JNZ 0x0044d6a1                      ; 0044d64b
        ;   XREF to: 0044d6a1 (CONDITIONAL_JUMP)  ; LAB_0044d6a1
    CMP dword ptr [0x01c50948],0x0      ; 0044d64d | DAT_01c50948
    JNZ 0x0044d6e4                      ; 0044d654
        ;   XREF to: 0044d6e4 (CONDITIONAL_JUMP)  ; LAB_0044d6e4
    MOV ECX,dword ptr [EBX + 0x148]     ; 0044d65a
        ;   Label: LAB_0044d65a
    XOR ESI,ESI                         ; 0044d660
    TEST ECX,ECX                        ; 0044d662
    JLE 0x0044d6a1                      ; 0044d664
        ;   XREF to: 0044d6a1 (CONDITIONAL_JUMP)  ; LAB_0044d6a1
    PUSH EDI                            ; 0044d666
    XOR EDI,EDI                         ; 0044d667
    MOV ECX,dword ptr [EBX + 0x144]     ; 0044d669
        ;   Label: LAB_0044d669
    IMUL ECX,ESI                        ; 0044d66f
    MOV EDX,dword ptr [EBX + 0x144]     ; 0044d672
    SHL EDX,0x2                         ; 0044d678
    MOV EAX,dword ptr [EBX + 0x15c]     ; 0044d67b
    PUSH EDX                            ; 0044d681
    SHL ECX,0x2                         ; 0044d682
    MOV EDX,dword ptr [EDI + 0x1c4480c] ; 0044d685 | DAT_01c4480c | DAT_01c44810
    ADD ECX,EAX                         ; 0044d68b
    INC ESI                             ; 0044d68d
    CALL crt_watcom.c__memcpy_FUN_004ab0c8 ; 0044d68e
        ;   XREF to: 004ab0c8 (UNCONDITIONAL_CALL)  ; undefined crt_watcom.c__memcpy_FUN_004ab0c8()
    MOV EBP,dword ptr [EBX + 0x148]     ; 0044d693
    ADD EDI,0x4                         ; 0044d699
    CMP ESI,EBP                         ; 0044d69c
    JL 0x0044d669                       ; 0044d69e
        ;   XREF to: 0044d669 (CONDITIONAL_JUMP)  ; LAB_0044d669
    POP EDI                             ; 0044d6a0
    MOV EAX,[0x00612560]                ; 0044d6a1 | DAT_00612560
        ;   Label: LAB_0044d6a1
    PUSH EAX                            ; 0044d6a6 | DAT_01bc120c
    CALL engine_drender.cpp_popViewport_FUN_00483c40 ; 0044d6a7
        ;   XREF to: 00483c40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_popViewport_FUN_00483c40()
    ADD ESP,0x4                         ; 0044d6ac
    PUSH EBX                            ; 0044d6af
    CALL core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_0044ce90 ; 0044d6b0
        ;   XREF to: 0044ce90 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_0044ce90(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0044d6b5
    POP EBP                             ; 0044d6b8
    POP ESI                             ; 0044d6b9
    POP EBX                             ; 0044d6ba
    RET                                 ; 0044d6bb
    MOV ECX,0x5d7608                    ; 0044d6bc | = "..\\core\\dcamera.cpp"
        ;   Label: LAB_0044d6bc
    MOV ESI,0x3f2                       ; 0044d6c1
    PUSH 0x5d761c                       ; 0044d6c6 | = "CDemonCamera::endScene - Scene not open!"
    MOV dword ptr [0x01d1d400],ECX      ; 0044d6cb | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0044d6d1 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0044d6d7
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0044d6dc
    JMP 0x0044d62e                      ; 0044d6df
        ;   XREF to: 0044d62e (UNCONDITIONAL_JUMP)  ; LAB_0044d62e
    PUSH EBP                            ; 0044d6e4
        ;   Label: LAB_0044d6e4
    CALL engine_special.cpp_masterZBuffer_FUN_00582a80 ; 0044d6e5
        ;   XREF to: 00582a80 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_masterZBuffer_FUN_00582a80(int slot)
    ADD ESP,0x4                         ; 0044d6ea
    JMP 0x0044d65a                      ; 0044d6ed
        ;   XREF to: 0044d65a (UNCONDITIONAL_JUMP)  ; LAB_0044d65a

