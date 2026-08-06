; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00445020(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_FUN_00509a80 at 00509d1f
;
; Referenced Globals:
;   TerminatedCString s_core_dcamera_cpp_0057b983
;   TerminatedCString s_Unable_to_lock_hold_buff_0057b997
;   int g_WindowHeight = 0xc8
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int INT_02dc9d60
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_004470f0
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   engine_special.cpp_beginScene_FUN_00532340
;   engine_special.cpp_FUN_00532320
;   engine_special.cpp_lockFrame_FUN_005322e0
;   engine_special.cpp_lockHoldBuffer_FUN_00532d60
;   engine_special.cpp_unlockHoldBuffer_FUN_00532d80
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00445020
        ;   Label: core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00445020
    PUSH EDI                            ; 00445021
    CMP dword ptr [0x005b7620],0x1e0    ; 00445022 | g_WindowHeight
    JG 0x00445061                       ; 0044502c
        ;   XREF to: 00445061 (CONDITIONAL_JUMP)  ; LAB_00445061
    CALL engine_special.cpp_lockFrame_FUN_005322e0 ; 0044502e
        ;   XREF to: 005322e0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_lockFrame_FUN_005322e0()
    MOV ESI,dword ptr [ESP + 0xc]       ; 00445033
        ;   Label: LAB_00445033
    PUSH ESI                            ; 00445037
    CALL core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_004470f0 ; 00445038
        ;   XREF to: 004470f0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_004470f0(CDemonCamera * this_ptr)
    MOV EDI,dword ptr [0x005b7620]      ; 0044503d | g_WindowHeight
    ADD ESP,0x4                         ; 00445043
    CMP EDI,0x1e0                       ; 00445046
    JLE 0x00445091                      ; 0044504c
        ;   XREF to: 00445091 (CONDITIONAL_JUMP)  ; LAB_00445091
    CALL engine_special.cpp_unlockHoldBuffer_FUN_00532d80 ; 0044504e
        ;   XREF to: 00532d80 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_unlockHoldBuffer_FUN_00532d80()
    CMP dword ptr [0x02dc9d60],0x0      ; 00445053 | INT_02dc9d60
    JNZ 0x004450a2                      ; 0044505a
        ;   XREF to: 004450a2 (CONDITIONAL_JUMP)  ; LAB_004450a2
    POP EDI                             ; 0044505c
    POP ESI                             ; 0044505d
    MOV EAX,EAX                         ; 0044505e
    RET                                 ; 00445060
    CALL engine_special.cpp_lockHoldBuffer_FUN_00532d60 ; 00445061
        ;   XREF to: 00532d60 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_lockHoldBuffer_FUN_00532d60()
        ;   Label: LAB_00445061
    TEST EAX,EAX                        ; 00445066
    JNZ 0x00445033                      ; 00445068
        ;   XREF to: 00445033 (CONDITIONAL_JUMP)  ; LAB_00445033
    PUSH EBX                            ; 0044506a
    MOV ECX,0x57b983                    ; 0044506b | = "..\\core\\dcamera.cpp"
    MOV EBX,0xe2b                       ; 00445070
    PUSH 0x57b997                       ; 00445075 | = "Unable to lock hold buffer.   Please ..."
    MOV dword ptr [0x01cc4800],ECX      ; 0044507a | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBX      ; 00445080 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00445086
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0044508b
    POP EBX                             ; 0044508e
    JMP 0x00445033                      ; 0044508f
        ;   XREF to: 00445033 (UNCONDITIONAL_JUMP)  ; LAB_00445033
    CALL engine_special.cpp_FUN_00532320 ; 00445091
        ;   XREF to: 00532320 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00532320()
        ;   Label: LAB_00445091
    CMP dword ptr [0x02dc9d60],0x0      ; 00445096 | INT_02dc9d60
    JNZ 0x004450a2                      ; 0044509d
        ;   XREF to: 004450a2 (CONDITIONAL_JUMP)  ; LAB_004450a2
    POP EDI                             ; 0044509f
    POP ESI                             ; 004450a0
    RET                                 ; 004450a1
    CALL engine_special.cpp_beginScene_FUN_00532340 ; 004450a2
        ;   XREF to: 00532340 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_beginScene_FUN_00532340()
        ;   Label: LAB_004450a2
    POP EDI                             ; 004450a7
    POP ESI                             ; 004450a8
    RET                                 ; 004450a9

