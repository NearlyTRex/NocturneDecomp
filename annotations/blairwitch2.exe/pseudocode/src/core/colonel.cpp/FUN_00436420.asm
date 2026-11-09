; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ushort core_colonel_cpp_FUN_00436420(CCharacter *param_1,float param_2)
;
;
; XREF[1]:
;   core_colonel.cpp_FUN_00435830 at 0043589f
;
; Called Functions:
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00
;   core_motion.cpp_CMotionController_advance_FUN_005030c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00436420
        ;   Label: core_colonel.cpp_FUN_00436420
    PUSH ESI                            ; 00436421
    PUSH EBP                            ; 00436422
    MOV EBP,ESP                         ; 00436423
    AND ESP,0xfffffff8                  ; 00436425
    MOV ESI,dword ptr [EBP + 0x10]      ; 00436428
    LEA EBX,[ESI + 0x2b4]               ; 0043642b
    LEA EAX,[EBP + 0x14]                ; 00436431
        ;   Label: LAB_00436431
    PUSH EAX                            ; 00436434
    PUSH EBX                            ; 00436435
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 00436436
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0043643b
    MOV EDX,EAX                         ; 0043643e
    CMP EAX,0x64                        ; 00436440
    JC 0x00436461                       ; 00436443
        ;   XREF to: 00436461 (CONDITIONAL_JUMP)  ; LAB_00436461
    JA 0x0043646d                       ; 00436445
        ;   XREF to: 0043646d (CONDITIONAL_JUMP)  ; LAB_0043646d
    FLD float ptr [EBP + 0x14]          ; 00436447
        ;   Label: LAB_00436447
    FLDZ                                ; 0043644a
    FCOMPP                              ; 0043644c
    FNSTSW AX                           ; 0043644e
    SAHF                                ; 00436450
    JC 0x00436431                       ; 00436451
        ;   XREF to: 00436431 (CONDITIONAL_JUMP)  ; LAB_00436431
    MOV ESP,EBP                         ; 00436453
    POP EBP                             ; 00436455
    POP ESI                             ; 00436456
    POP EBX                             ; 00436457
    LEA EAX,[EAX]                       ; 00436458
    MOV EDX,EDX                         ; 0043645e
    RET                                 ; 00436460
    PUSH EDX                            ; 00436461
        ;   Label: LAB_00436461
    PUSH ESI                            ; 00436462
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00 ; 00436463
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00436468
    JMP 0x00436447                      ; 0043646b
        ;   XREF to: 00436447 (UNCONDITIONAL_JUMP)  ; LAB_00436447
    CMP EAX,0x65                        ; 0043646d
        ;   Label: LAB_0043646d
    JZ 0x00436447                       ; 00436470
        ;   XREF to: 00436447 (CONDITIONAL_JUMP)  ; LAB_00436447
    PUSH EDX                            ; 00436472
    PUSH ESI                            ; 00436473
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00 ; 00436474
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00436479
    JMP 0x00436447                      ; 0043647c
        ;   XREF to: 00436447 (UNCONDITIONAL_JUMP)  ; LAB_00436447

