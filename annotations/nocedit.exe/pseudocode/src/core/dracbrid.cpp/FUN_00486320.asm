; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_dracbrid.cpp_FUN_00486320()
;
;
; Referenced Globals:
;   undefined4 caseD_f
;   void* switchdataD_004862f0 = 0048632f
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00486320
        ;   Label: core_dracbrid.cpp_FUN_00486320
    MOV EDX,dword ptr [EAX + 0x70]      ; 00486324
    CMP EDX,0x2                         ; 00486327
    JNZ 0x0048633b                      ; 0048632a | LAB_0048633b
        ;   XREF to: 0048633b (CONDITIONAL_JUMP)
    MOV EAX,EDX                         ; 0048632c
    RET                                 ; 0048632e
    MOV EAX,0x1                         ; 0048632f
        ;   Label: caseD_a
    RET                                 ; 00486334
    MOV EAX,0x2                         ; 00486335
        ;   Label: caseD_11
    RET                                 ; 0048633a
    ADD EAX,0x158                       ; 0048633b
        ;   Label: LAB_0048633b
    PUSH EAX                            ; 00486340
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00486341 | SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00486346
    SUB EAX,0x7                         ; 00486349
    ADD ESP,0x4                         ; 0048634c
    CMP EAX,0xa                         ; 0048634f
    JA 0x00485bcd                       ; 00486352 | caseD_e
        ;   XREF to: 00485bcd (CONDITIONAL_JUMP)
    JMP dword ptr [EAX*0x4 + 0x4862f0]  ; 00486358 | void * switchdataD_004862f0
        ;   Label: switchD

