; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __fastcall crt_watcom_c__memset_FUN_004ab020(void *dest,int fill_byte,uint size)
;
; Parameters:
; uint             Stack[0x4]:4   size
;
; XREF[4]:
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044fff0 at 004506e2
;   core_dcamera.cpp_CDemonCamera_processCorona_FUN_00451d90 at 00451dcc
;   core_dlight.cpp_CDemonLight_beginScene_FUN_00462820 at 004629f4
;   core_dlight.cpp_CDemonLight_initializeVisibilityBuffer_FUN_00465780 at 004657aa
;
; Referenced Globals:
;   undefined4 DAT_0061b6a0
;   void* switchdataD_0061bea0 = 004ab05c
;   undefined4 DAT_0061bee0
;
; *****************************************************************************

section .text

    AND EDX,0xff                        ; 004ab020
        ;   Label: crt_watcom.c__memset_FUN_004ab020
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ab026
    FILD qword ptr [EDX*0x8 + 0x61b6a0] ; 004ab02a | DAT_0061b6a0
    PUSH EBX                            ; 004ab031
    MOV EDX,dword ptr [EDX*0x8 + 0x61b6a0] ; 004ab032 | DAT_0061b6a0
    SUB EAX,0x8                         ; 004ab039
    JBE 0x004ab068                      ; 004ab03c
        ;   XREF to: 004ab068 (CONDITIONAL_JUMP)  ; LAB_004ab068
    MOV EBX,ECX                         ; 004ab03e
    NEG EBX                             ; 004ab040
    AND EBX,0x7                         ; 004ab042
    ADD ECX,EBX                         ; 004ab045
    SUB EAX,EBX                         ; 004ab047
    JMP dword ptr [EBX*0x4 + 0x61bea0]  ; 004ab049 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV byte ptr [ECX + -0x7],DL        ; 004ab050
        ;   Label: caseD_7
    MOV word ptr [ECX + -0x6],DX        ; 004ab053
        ;   Label: caseD_6
    MOV dword ptr [ECX + -0x4],EDX      ; 004ab057
        ;   Label: caseD_4
    JBE 0x004ab068                      ; 004ab05a
        ;   XREF to: 004ab068 (CONDITIONAL_JUMP)  ; LAB_004ab068
    FLD ST0                             ; 004ab05c
        ;   Label: caseD_0
    FISTP qword ptr [ECX]               ; 004ab05e
    ADD ECX,0x8                         ; 004ab060
    SUB EAX,0x8                         ; 004ab063
    JA 0x004ab05c                       ; 004ab066
        ;   XREF to: 004ab05c (CONDITIONAL_JUMP)  ; caseD_0
    POP EBX                             ; 004ab068
        ;   Label: LAB_004ab068
    JMP dword ptr [EAX*0x4 + 0x61bee0]  ; 004ab069 | DAT_0061bee0
    MOV byte ptr [ECX + -0x5],DL        ; 004ab070
        ;   Label: caseD_5
    MOV dword ptr [ECX + -0x4],EDX      ; 004ab073
    JA 0x004ab05c                       ; 004ab076
        ;   XREF to: 004ab05c (CONDITIONAL_JUMP)  ; caseD_0
    JMP 0x004ab068                      ; 004ab078
        ;   XREF to: 004ab068 (UNCONDITIONAL_JUMP)  ; LAB_004ab068
    MOV byte ptr [ECX + -0x3],DL        ; 004ab07c
        ;   Label: caseD_3
    MOV word ptr [ECX + -0x2],DX        ; 004ab07f
        ;   Label: caseD_2
    JA 0x004ab05c                       ; 004ab083
        ;   XREF to: 004ab05c (CONDITIONAL_JUMP)  ; caseD_0
    JMP 0x004ab068                      ; 004ab085
        ;   XREF to: 004ab068 (UNCONDITIONAL_JUMP)  ; LAB_004ab068
    MOV byte ptr [ECX + -0x1],DL        ; 004ab088
        ;   Label: caseD_1
    JA 0x004ab05c                       ; 004ab08b
        ;   XREF to: 004ab05c (CONDITIONAL_JUMP)  ; caseD_0
    JMP 0x004ab068                      ; 004ab08d
        ;   XREF to: 004ab068 (UNCONDITIONAL_JUMP)  ; LAB_004ab068

