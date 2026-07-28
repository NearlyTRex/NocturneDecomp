; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_platfrm_cpp_CPlatform_updateAttachedActors_FUN_004f7700(CPlatform *this_ptr)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0xbc]:1  local_bc
; undefined        Stack[-0x8c]:1  local_8c
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x2c]:1  local_2c
; undefined        Stack[-0x20]:1  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_platfrm.cpp_FUN_004f6170 at 004f6bb9
;
; Called Functions:
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
;   core_xform.cpp_getTranslation_FUN_0055bc00
;   core_xform.cpp_matrixToEulerAngles_FUN_0055b180
;   core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f7700
        ;   Label: core_platfrm.cpp_CPlatform_updateAttachedActors_FUN_004f7700
    PUSH ESI                            ; 004f7701
    PUSH EDI                            ; 004f7702
    PUSH EBP                            ; 004f7703
    SUB ESP,0xac                        ; 004f7704
    MOV EBP,dword ptr [ESP + 0xc0]      ; 004f770a
    LEA EAX,[EBP + 0x30]                ; 004f7711
    PUSH EAX                            ; 004f7714
    LEA EAX,[EBP + 0x20]                ; 004f7715
    PUSH EAX                            ; 004f7718
    LEA EAX,[ESP + 0x38]                ; 004f7719
    PUSH EAX                            ; 004f771d
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 004f771e
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    ADD ESP,0xc                         ; 004f7723
    LEA EAX,[EBP + 0x514]               ; 004f7726
    XOR EBX,EBX                         ; 004f772c
    MOV dword ptr [ESP + 0xa8],EAX      ; 004f772e
    IMUL ESI,EBX,0x34                   ; 004f7735
        ;   Label: LAB_004f7735
    CMP dword ptr [EBP + 0x514],0x0     ; 004f7738
    JNZ 0x004f7755                      ; 004f773f
        ;   XREF to: 004f7755 (CONDITIONAL_JUMP)  ; LAB_004f7755
    INC EBX                             ; 004f7741
        ;   Label: LAB_004f7741
    ADD EBP,0x34                        ; 004f7742
    CMP EBX,0xa                         ; 004f7745
    JL 0x004f7735                       ; 004f7748
        ;   XREF to: 004f7735 (CONDITIONAL_JUMP)  ; LAB_004f7735
    ADD ESP,0xac                        ; 004f774a
    POP EBP                             ; 004f7750
    POP EDI                             ; 004f7751
    POP ESI                             ; 004f7752
    POP EBX                             ; 004f7753
    RET                                 ; 004f7754
    LEA EAX,[ESP + 0x30]                ; 004f7755
        ;   Label: LAB_004f7755
    PUSH EAX                            ; 004f7759
    MOV EAX,dword ptr [ESP + 0xac]      ; 004f775a
    ADD EAX,ESI                         ; 004f7761
    ADD EAX,0x4                         ; 004f7763
    PUSH EAX                            ; 004f7766
    LEA ESI,[ESP + 0x68]                ; 004f7767
    LEA EDI,[ESP + 0x8]                 ; 004f776b
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 004f776f
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 004f7774
    ADD ESP,0x8                         ; 004f7779
    LEA EAX,[ESP + 0x9c]                ; 004f777c
    LEA ESI,[ESP + 0x60]                ; 004f7783
    PUSH EAX                            ; 004f7787
    MOVSD.REP ES:EDI,ESI                ; 004f7788
    LEA EAX,[ESP + 0x4]                 ; 004f778a
    MOV ESI,dword ptr [EBP + 0x514]     ; 004f778e
    PUSH EAX                            ; 004f7794
    MOV EDI,dword ptr [ESI + 0x14c]     ; 004f7795
    CALL core_xform.cpp_matrixToEulerAngles_FUN_0055b180 ; 004f779b
        ;   XREF to: 0055b180 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_0055b180(CMatrix3x4f * matrix_in, CVector3f * euler_out)
    ADD ESP,0x8                         ; 004f77a0
    PUSH EAX                            ; 004f77a3
    LEA EAX,[ESP + 0x94]                ; 004f77a4
    PUSH EAX                            ; 004f77ab
    LEA EAX,[ESP + 0x8]                 ; 004f77ac
    PUSH EAX                            ; 004f77b0
    CALL core_xform.cpp_getTranslation_FUN_0055bc00 ; 004f77b1
        ;   XREF to: 0055bc00 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_getTranslation_FUN_0055bc00(CMatrix3x4f * matrix_in, CVector3f * vector_out)
    ADD ESP,0x8                         ; 004f77b6
    PUSH EAX                            ; 004f77b9
    PUSH ESI                            ; 004f77ba
    CALL dword ptr [EDI + 0x60]         ; 004f77bb
    ADD ESP,0xc                         ; 004f77be
    JMP 0x004f7741                      ; 004f77c1
        ;   XREF to: 004f7741 (UNCONDITIONAL_JUMP)  ; LAB_004f7741

