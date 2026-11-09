; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00440760(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_FUN_0052f2a0 at 0052f553
;
; Referenced Globals:
;   TerminatedCString s_core_dcamera_cpp_005ce5ce
;   TerminatedCString s_Unable_to_lock_hold_buff_005ce5e2
;   undefined4 DAT_006141bc
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_0264bba0
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00442820
;   core_main.c_FUN_004e4500
;   engine_special.cpp_FUN_0055f500
;   engine_special.cpp_FUN_0055f550
;   engine_special.cpp_FUN_0055f590
;   engine_special.cpp_FUN_00560120
;   engine_special.cpp_FUN_00560140
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00440760
        ;   Label: core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00440760
    PUSH EDI                            ; 00440761
    CMP dword ptr [0x006141bc],0x1e0    ; 00440762 | DAT_006141bc
    JG 0x004407a1                       ; 0044076c
        ;   XREF to: 004407a1 (CONDITIONAL_JUMP)  ; LAB_004407a1
    CALL engine_special.cpp_FUN_0055f500 ; 0044076e
        ;   XREF to: 0055f500 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_0055f500()
    MOV ESI,dword ptr [ESP + 0xc]       ; 00440773
        ;   Label: LAB_00440773
    PUSH ESI                            ; 00440777
    CALL core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00442820 ; 00440778
        ;   XREF to: 00442820 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00442820(CDemonCamera * this_ptr)
    MOV EDI,dword ptr [0x006141bc]      ; 0044077d | DAT_006141bc
    ADD ESP,0x4                         ; 00440783
    CMP EDI,0x1e0                       ; 00440786
    JLE 0x004407d1                      ; 0044078c
        ;   XREF to: 004407d1 (CONDITIONAL_JUMP)  ; LAB_004407d1
    CALL engine_special.cpp_FUN_00560140 ; 0044078e
        ;   XREF to: 00560140 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_FUN_00560140()
    CMP dword ptr [0x0264bba0],0x0      ; 00440793 | DAT_0264bba0
    JNZ 0x004407e7                      ; 0044079a
        ;   XREF to: 004407e7 (CONDITIONAL_JUMP)  ; LAB_004407e7
    POP EDI                             ; 0044079c
    POP ESI                             ; 0044079d
    MOV EAX,EAX                         ; 0044079e
    RET                                 ; 004407a0
    CALL engine_special.cpp_FUN_00560120 ; 004407a1
        ;   XREF to: 00560120 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_FUN_00560120()
        ;   Label: LAB_004407a1
    TEST EAX,EAX                        ; 004407a6
    JNZ 0x00440773                      ; 004407a8
        ;   XREF to: 00440773 (CONDITIONAL_JUMP)  ; LAB_00440773
    PUSH EBX                            ; 004407aa
    MOV ECX,0x5ce5ce                    ; 004407ab | = "..\\core\\dcamera.cpp"
    MOV EBX,0xe80                       ; 004407b0
    PUSH 0x5ce5e2                       ; 004407b5 | = "Unable to lock hold buffer.   Please ..."
    MOV dword ptr [0x01d046a0],ECX      ; 004407ba | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 004407c0 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004407c6
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004407cb
    POP EBX                             ; 004407ce
    JMP 0x00440773                      ; 004407cf
        ;   XREF to: 00440773 (UNCONDITIONAL_JUMP)  ; LAB_00440773
    PUSH 0x0                            ; 004407d1
        ;   Label: LAB_004407d1
    CALL engine_special.cpp_FUN_0055f550 ; 004407d3
        ;   XREF to: 0055f550 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_FUN_0055f550(int clear_lock_flag)
    ADD ESP,0x4                         ; 004407d8
    CMP dword ptr [0x0264bba0],0x0      ; 004407db | DAT_0264bba0
    JNZ 0x004407e7                      ; 004407e2
        ;   XREF to: 004407e7 (CONDITIONAL_JUMP)  ; LAB_004407e7
    POP EDI                             ; 004407e4
    POP ESI                             ; 004407e5
    RET                                 ; 004407e6
    CALL engine_special.cpp_FUN_0055f590 ; 004407e7
        ;   XREF to: 0055f590 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_FUN_0055f590()
        ;   Label: LAB_004407e7
    POP EDI                             ; 004407ec
    POP ESI                             ; 004407ed
    RET                                 ; 004407ee

