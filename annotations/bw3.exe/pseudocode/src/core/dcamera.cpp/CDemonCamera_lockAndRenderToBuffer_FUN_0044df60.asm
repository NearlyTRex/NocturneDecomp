; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_0044df60(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_FUN_00535da0 at 00536053
;
; Referenced Globals:
;   TerminatedCString s_core_dcamera_cpp_005b9efe
;   TerminatedCString s_Unable_to_lock_hold_buff_005b9f12
;   undefined4 DAT_005fba1c
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02cf5fcc
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00450020
;   core_main.c_FUN_004e4330
;   engine_special.cpp_FUN_00565820
;   engine_special.cpp_FUN_005658b0
;   engine_special.cpp_FUN_00566440
;   engine_special.cpp_FUN_00566460
;   engine_special.cpp_unlockFrame_FUN_00565870
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0044df60
        ;   Label: core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_0044df60
    PUSH EDI                            ; 0044df61
    CMP dword ptr [0x005fba1c],0x1e0    ; 0044df62 | DAT_005fba1c
    JG 0x0044dfa1                       ; 0044df6c
        ;   XREF to: 0044dfa1 (CONDITIONAL_JUMP)  ; LAB_0044dfa1
    CALL engine_special.cpp_FUN_00565820 ; 0044df6e
        ;   XREF to: 00565820 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00565820()
    MOV ESI,dword ptr [ESP + 0xc]       ; 0044df73
        ;   Label: LAB_0044df73
    PUSH ESI                            ; 0044df77
    CALL core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00450020 ; 0044df78
        ;   XREF to: 00450020 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00450020(CDemonCamera * this_ptr)
    MOV EDI,dword ptr [0x005fba1c]      ; 0044df7d | DAT_005fba1c
    ADD ESP,0x4                         ; 0044df83
    CMP EDI,0x1e0                       ; 0044df86
    JLE 0x0044dfd1                      ; 0044df8c
        ;   XREF to: 0044dfd1 (CONDITIONAL_JUMP)  ; LAB_0044dfd1
    CALL engine_special.cpp_FUN_00566460 ; 0044df8e
        ;   XREF to: 00566460 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_FUN_00566460()
    CMP dword ptr [0x02cf5fcc],0x0      ; 0044df93 | DAT_02cf5fcc
    JNZ 0x0044dfe7                      ; 0044df9a
        ;   XREF to: 0044dfe7 (CONDITIONAL_JUMP)  ; LAB_0044dfe7
    POP EDI                             ; 0044df9c
    POP ESI                             ; 0044df9d
    MOV EAX,EAX                         ; 0044df9e
    RET                                 ; 0044dfa0
    CALL engine_special.cpp_FUN_00566440 ; 0044dfa1
        ;   XREF to: 00566440 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_FUN_00566440()
        ;   Label: LAB_0044dfa1
    TEST EAX,EAX                        ; 0044dfa6
    JNZ 0x0044df73                      ; 0044dfa8
        ;   XREF to: 0044df73 (CONDITIONAL_JUMP)  ; LAB_0044df73
    PUSH EBX                            ; 0044dfaa
    MOV ECX,0x5b9efe                    ; 0044dfab | = "..\\core\\dcamera.cpp"
    MOV EBX,0xe84                       ; 0044dfb0
    PUSH 0x5b9f12                       ; 0044dfb5 | = "Unable to lock hold buffer.   Please ..."
    MOV dword ptr [0x01d71de0],ECX      ; 0044dfba | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0044dfc0 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0044dfc6
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0044dfcb
    POP EBX                             ; 0044dfce
    JMP 0x0044df73                      ; 0044dfcf
        ;   XREF to: 0044df73 (UNCONDITIONAL_JUMP)  ; LAB_0044df73
    PUSH 0x0                            ; 0044dfd1
        ;   Label: LAB_0044dfd1
    CALL engine_special.cpp_unlockFrame_FUN_00565870 ; 0044dfd3
        ;   XREF to: 00565870 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_unlockFrame_FUN_00565870(int clear_lock_flag)
    ADD ESP,0x4                         ; 0044dfd8
    CMP dword ptr [0x02cf5fcc],0x0      ; 0044dfdb | DAT_02cf5fcc
    JNZ 0x0044dfe7                      ; 0044dfe2
        ;   XREF to: 0044dfe7 (CONDITIONAL_JUMP)  ; LAB_0044dfe7
    POP EDI                             ; 0044dfe4
    POP ESI                             ; 0044dfe5
    RET                                 ; 0044dfe6
    CALL engine_special.cpp_FUN_005658b0 ; 0044dfe7
        ;   XREF to: 005658b0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_FUN_005658b0()
        ;   Label: LAB_0044dfe7
    POP EDI                             ; 0044dfec
    POP ESI                             ; 0044dfed
    RET                                 ; 0044dfee

