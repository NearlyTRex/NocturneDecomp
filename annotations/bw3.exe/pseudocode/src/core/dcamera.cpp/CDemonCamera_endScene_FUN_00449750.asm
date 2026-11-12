; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_endScene_FUN_00449750(CDemonCamera *this_ptr,int skip_zbuffer_copy)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   skip_zbuffer_copy
;
; XREF[3]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_00534890 at 0053500d
;   core_set.cpp_FUN_00533e5e at 0053418c
;   core_set.cpp_FUN_00535da0 at 00536301
;
; Referenced Globals:
;   TerminatedCString s_core_dcamera_cpp_005b9c6f
;   TerminatedCString s_CDemonCamera_endScene_Sc_005b9c83
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c60dac
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02cf5fcc
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_00448fd0
;   core_main.c_FUN_004e4330
;   crt_watcom.c__memcpy_FUN_00495f68
;   engine_drender.cpp_popViewport_FUN_0046d320
;   engine_special.cpp_FUN_005658d0
;   engine_special.cpp_masterZBuffer_FUN_00566350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449750
        ;   Label: core_dcamera.cpp_CDemonCamera_endScene_FUN_00449750
    PUSH ESI                            ; 00449751
    PUSH EBP                            ; 00449752
    MOV EBX,dword ptr [ESP + 0x10]      ; 00449753
    CMP dword ptr [EBX + 0x11e4],0x0    ; 00449757
    JZ 0x004497fc                       ; 0044975e
        ;   XREF to: 004497fc (CONDITIONAL_JUMP)  ; LAB_004497fc
    MOV dword ptr [EBX + 0x11e4],0x0    ; 00449764
    CMP dword ptr [0x02cf5fcc],0x0      ; 0044976e | DAT_02cf5fcc
        ;   Label: LAB_0044976e
    JZ 0x0044977c                       ; 00449775
        ;   XREF to: 0044977c (CONDITIONAL_JUMP)  ; LAB_0044977c
    CALL engine_special.cpp_FUN_005658d0 ; 00449777
        ;   XREF to: 005658d0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_FUN_005658d0()
    MOV EBP,dword ptr [EBX + 0x168]     ; 0044977c
        ;   Label: LAB_0044977c
    TEST EBP,EBP                        ; 00449782
    JNZ 0x004497e1                      ; 00449784
        ;   XREF to: 004497e1 (CONDITIONAL_JUMP)  ; LAB_004497e1
    CMP dword ptr [ESP + 0x14],0x0      ; 00449786
    JNZ 0x004497e1                      ; 0044978b
        ;   XREF to: 004497e1 (CONDITIONAL_JUMP)  ; LAB_004497e1
    CMP dword ptr [0x01c6cee8],0x0      ; 0044978d | DAT_01c6cee8
    JNZ 0x00449824                      ; 00449794
        ;   XREF to: 00449824 (CONDITIONAL_JUMP)  ; LAB_00449824
    MOV ECX,dword ptr [EBX + 0x148]     ; 0044979a
        ;   Label: LAB_0044979a
    XOR ESI,ESI                         ; 004497a0
    TEST ECX,ECX                        ; 004497a2
    JLE 0x004497e1                      ; 004497a4
        ;   XREF to: 004497e1 (CONDITIONAL_JUMP)  ; LAB_004497e1
    PUSH EDI                            ; 004497a6
    XOR EDI,EDI                         ; 004497a7
    MOV ECX,dword ptr [EBX + 0x144]     ; 004497a9
        ;   Label: LAB_004497a9
    IMUL ECX,ESI                        ; 004497af
    MOV EDX,dword ptr [EBX + 0x144]     ; 004497b2
    SHL EDX,0x2                         ; 004497b8
    MOV EAX,dword ptr [EBX + 0x15c]     ; 004497bb
    PUSH EDX                            ; 004497c1
    SHL ECX,0x2                         ; 004497c2
    MOV EDX,dword ptr [EDI + 0x1c60dac] ; 004497c5 | DAT_01c60dac
    ADD ECX,EAX                         ; 004497cb
    INC ESI                             ; 004497cd
    CALL crt_watcom.c__memcpy_FUN_00495f68 ; 004497ce
        ;   XREF to: 00495f68 (UNCONDITIONAL_CALL)  ; void crt_watcom.c__memcpy_FUN_00495f68(void * dest, void * src, uint size)
    MOV EBP,dword ptr [EBX + 0x148]     ; 004497d3
    ADD EDI,0x4                         ; 004497d9
    CMP ESI,EBP                         ; 004497dc
    JL 0x004497a9                       ; 004497de
        ;   XREF to: 004497a9 (CONDITIONAL_JUMP)  ; LAB_004497a9
    POP EDI                             ; 004497e0
    MOV EAX,[0x005f2afc]                ; 004497e1 | DAT_005f2afc
        ;   Label: LAB_004497e1
    PUSH EAX                            ; 004497e6 | DAT_01bdd7e4
    CALL engine_drender.cpp_popViewport_FUN_0046d320 ; 004497e7
        ;   XREF to: 0046d320 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_popViewport_FUN_0046d320()
    ADD ESP,0x4                         ; 004497ec
    PUSH EBX                            ; 004497ef
    CALL core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_00448fd0 ; 004497f0
        ;   XREF to: 00448fd0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_00448fd0(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 004497f5
    POP EBP                             ; 004497f8
    POP ESI                             ; 004497f9
    POP EBX                             ; 004497fa
    RET                                 ; 004497fb
    MOV ECX,0x5b9c6f                    ; 004497fc | = "..\\core\\dcamera.cpp"
        ;   Label: LAB_004497fc
    MOV ESI,0x3f2                       ; 00449801
    PUSH 0x5b9c83                       ; 00449806 | = "CDemonCamera::endScene - Scene not open!"
    MOV dword ptr [0x01d71de0],ECX      ; 0044980b | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00449811 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00449817
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0044981c
    JMP 0x0044976e                      ; 0044981f
        ;   XREF to: 0044976e (UNCONDITIONAL_JUMP)  ; LAB_0044976e
    PUSH EBP                            ; 00449824
        ;   Label: LAB_00449824
    CALL engine_special.cpp_masterZBuffer_FUN_00566350 ; 00449825
        ;   XREF to: 00566350 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_masterZBuffer_FUN_00566350(int slot)
    ADD ESP,0x4                         ; 0044982a
    JMP 0x0044979a                      ; 0044982d
        ;   XREF to: 0044979a (UNCONDITIONAL_JUMP)  ; LAB_0044979a

