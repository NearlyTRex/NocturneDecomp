; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_platfrm_cpp_CPlatform_attachActor_FUN_004f75c0(CPlatform *this_ptr,CDemonActor *actor)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; Local Variables:
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0x40]:1  local_40
;
; XREF[2]:
;   core_platfrm.cpp_CPlatform_setup_FUN_004f5f60 at 004f5fda
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00500b22
;
; Referenced Globals:
;   TerminatedCString s_core_platfrm_cpp_0058d971
;   TerminatedCString s_CPlatform_attachActor_to_0058d985
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
;   core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f75c0
        ;   Label: core_platfrm.cpp_CPlatform_attachActor_FUN_004f75c0
    PUSH ESI                            ; 004f75c1
    PUSH EDI                            ; 004f75c2
    PUSH EBP                            ; 004f75c3
    SUB ESP,0x90                        ; 004f75c4
    MOV ESI,dword ptr [ESP + 0xa4]      ; 004f75ca
    MOV EBX,dword ptr [ESP + 0xa8]      ; 004f75d1
    TEST EBX,EBX                        ; 004f75d8
    JZ 0x004f75fb                       ; 004f75da
        ;   XREF to: 004f75fb (CONDITIONAL_JUMP)  ; LAB_004f75fb
    MOV EDI,ESI                         ; 004f75dc
    MOV EDX,dword ptr [ESI + 0x514]     ; 004f75de
    XOR EAX,EAX                         ; 004f75e4
    CMP EBX,EDX                         ; 004f75e6
    JZ 0x004f75fb                       ; 004f75e8
        ;   XREF to: 004f75fb (CONDITIONAL_JUMP)  ; LAB_004f75fb
    INC EAX                             ; 004f75ea
        ;   Label: LAB_004f75ea
    ADD EDI,0x34                        ; 004f75eb
    CMP EAX,0xa                         ; 004f75ee
    JGE 0x004f7606                      ; 004f75f1
        ;   XREF to: 004f7606 (CONDITIONAL_JUMP)  ; LAB_004f7606
    CMP EBX,dword ptr [EDI + 0x514]     ; 004f75f3
    JNZ 0x004f75ea                      ; 004f75f9
        ;   XREF to: 004f75ea (CONDITIONAL_JUMP)  ; LAB_004f75ea
    ADD ESP,0x90                        ; 004f75fb
        ;   Label: LAB_004f75fb
    POP EBP                             ; 004f7601
    POP EDI                             ; 004f7602
    POP ESI                             ; 004f7603
    POP EBX                             ; 004f7604
    RET                                 ; 004f7605
    MOV EDI,ESI                         ; 004f7606
        ;   Label: LAB_004f7606
    MOV EBP,dword ptr [ESI + 0x514]     ; 004f7608
    XOR EAX,EAX                         ; 004f760e
    TEST EBP,EBP                        ; 004f7610
    JZ 0x004f7626                       ; 004f7612
        ;   XREF to: 004f7626 (CONDITIONAL_JUMP)  ; LAB_004f7626
    INC EAX                             ; 004f7614
        ;   Label: LAB_004f7614
    ADD EDI,0x34                        ; 004f7615
    CMP EAX,0xa                         ; 004f7618
    JGE 0x004f7688                      ; 004f761b
        ;   XREF to: 004f7688 (CONDITIONAL_JUMP)  ; LAB_004f7688
    CMP dword ptr [EDI + 0x514],0x0     ; 004f761d
    JNZ 0x004f7614                      ; 004f7624
        ;   XREF to: 004f7614 (CONDITIONAL_JUMP)  ; LAB_004f7614
    LEA EAX,[EBX + 0x30]                ; 004f7626
        ;   Label: LAB_004f7626
    PUSH EAX                            ; 004f7629
    LEA EAX,[EBX + 0x20]                ; 004f762a
    PUSH EAX                            ; 004f762d
    LEA EAX,[ESP + 0x8]                 ; 004f762e
    PUSH EAX                            ; 004f7632
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 004f7633
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 004f7638
    LEA EAX,[ESI + 0x30]                ; 004f763b
    PUSH EAX                            ; 004f763e
    ADD ESI,0x20                        ; 004f763f
    PUSH ESI                            ; 004f7642
    LEA EAX,[ESP + 0x68]                ; 004f7643
    PUSH EAX                            ; 004f7647
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80 ; 004f7648
        ;   XREF to: 0055ae80 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 004f764d
    LEA EAX,[ESP + 0x60]                ; 004f7650
    PUSH EAX                            ; 004f7654
    LEA EAX,[ESP + 0x4]                 ; 004f7655
    PUSH EAX                            ; 004f7659
    LEA ESI,[ESP + 0x38]                ; 004f765a
    MOV dword ptr [EDI + 0x514],EBX     ; 004f765e
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 004f7664
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 004f7669
    LEA ESI,[ESP + 0x38]                ; 004f766e
    LEA EDI,[EDI + 0x518]               ; 004f7672
    ADD ESP,0x8                         ; 004f7678
    MOVSD.REP ES:EDI,ESI                ; 004f767b
    ADD ESP,0x90                        ; 004f767d
    POP EBP                             ; 004f7683
    POP EDI                             ; 004f7684
    POP ESI                             ; 004f7685
    POP EBX                             ; 004f7686
    RET                                 ; 004f7687
    MOV ECX,0x58d971                    ; 004f7688 | = "..\\core\\platfrm.cpp"
        ;   Label: LAB_004f7688
    MOV EBX,0x3d0                       ; 004f768d
    PUSH 0x58d985                       ; 004f7692 | = "CPlatform::attachActor - too many!"
    MOV dword ptr [0x01cc4800],ECX      ; 004f7697 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 004f769d | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f76a3
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f76a8
    ADD ESP,0x90                        ; 004f76ab
    POP EBP                             ; 004f76b1
    POP EDI                             ; 004f76b2
    POP ESI                             ; 004f76b3
    POP EBX                             ; 004f76b4
    RET                                 ; 004f76b5

