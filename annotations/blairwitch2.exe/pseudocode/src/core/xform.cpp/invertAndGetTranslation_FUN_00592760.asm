; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __stack_esi core_xform_cpp_invertAndGetTranslation_FUN_00592760(CMatrix3x4f *matrix_in,CVector3f *vector_out)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix_in
;
; Called Functions:
;   core_xform.cpp_getTranslation_FUN_00592720
;   core_xform.cpp_inverse_FUN_00592830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00592760
        ;   Label: core_xform.cpp_invertAndGetTranslation_FUN_00592760
    PUSH EDI                            ; 00592761
    SUB ESP,0x6c                        ; 00592762
    MOV EBX,ESI                         ; 00592765
    MOV EDX,dword ptr [ESP + 0x78]      ; 00592767
    PUSH EDX                            ; 0059276b
    LEA ESI,[ESP + 0x34]                ; 0059276c
    LEA EDI,[ESP + 0x4]                 ; 00592770
    CALL core_xform.cpp_inverse_FUN_00592830 ; 00592774
        ;   XREF to: 00592830 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_inverse_FUN_00592830(CMatrix3x4f * matrix_in, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 00592779
    LEA ESI,[ESP + 0x34]                ; 0059277e
    ADD ESP,0x4                         ; 00592782
    MOVSD.REP ES:EDI,ESI                ; 00592785
    MOV ESI,ESP                         ; 00592787
    PUSH ESI                            ; 00592789
    LEA ESI,[ESP + 0x64]                ; 0059278a
    MOV EDI,EBX                         ; 0059278e
    CALL core_xform.cpp_getTranslation_FUN_00592720 ; 00592790
        ;   XREF to: 00592720 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_getTranslation_FUN_00592720(CMatrix3x4f * matrix_in, CVector3f * vector_out)
    LEA ESI,[ESP + 0x64]                ; 00592795
    ADD ESP,0x4                         ; 00592799
    MOVSD ES:EDI,ESI                    ; 0059279c
    MOVSD ES:EDI,ESI                    ; 0059279d
    MOVSD ES:EDI,ESI                    ; 0059279e
    MOV EAX,EBX                         ; 0059279f
    ADD ESP,0x6c                        ; 005927a1
    POP EDI                             ; 005927a4
    POP EBX                             ; 005927a5
    RET                                 ; 005927a6

