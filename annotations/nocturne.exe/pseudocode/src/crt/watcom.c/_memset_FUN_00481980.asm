; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_watcom_c__memset_FUN_00481980(uint param_1)
;
;
; XREF[4]:
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_00443250 at 00443942
;   core_dcamera.cpp_CDemonCamera_processCorona_FUN_00444f90 at 00444fcc
;   core_dlight.cpp_CDemonLight_beginScene_FUN_0044e470 at 0044e644
;   core_dlight.cpp_CDemonLight_initializeVisibilityBuffer_FUN_00451a60 at 00451a8a
;
; Referenced Globals:
;   undefined4 DAT_005b7790
;   void* switchdataD_005b7f90 = 004819bc
;   undefined4 DAT_005b7fd0
;
; *****************************************************************************

section .text

    AND EDX,0xff                        ; 00481980
        ;   Label: crt_watcom.c__memset_FUN_00481980
    MOV EAX,dword ptr [ESP + 0x4]       ; 00481986
    FILD qword ptr [EDX*0x8 + 0x5b7790] ; 0048198a | DAT_005b7790
    PUSH EBX                            ; 00481991
    MOV EDX,dword ptr [EDX*0x8 + 0x5b7790] ; 00481992 | DAT_005b7790
    SUB EAX,0x8                         ; 00481999
    JBE 0x004819c8                      ; 0048199c
        ;   XREF to: 004819c8 (CONDITIONAL_JUMP)  ; LAB_004819c8
    MOV EBX,ECX                         ; 0048199e
    NEG EBX                             ; 004819a0
    AND EBX,0x7                         ; 004819a2
    ADD ECX,EBX                         ; 004819a5
    SUB EAX,EBX                         ; 004819a7
    JMP dword ptr [EBX*0x4 + 0x5b7f90]  ; 004819a9 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV byte ptr [ECX + -0x7],DL        ; 004819b0
        ;   Label: caseD_7
    MOV word ptr [ECX + -0x6],DX        ; 004819b3
        ;   Label: caseD_6
    MOV dword ptr [ECX + -0x4],EDX      ; 004819b7
        ;   Label: caseD_4
    JBE 0x004819c8                      ; 004819ba
        ;   XREF to: 004819c8 (CONDITIONAL_JUMP)  ; LAB_004819c8
    FLD ST0                             ; 004819bc
        ;   Label: caseD_0
    FISTP qword ptr [ECX]               ; 004819be
    ADD ECX,0x8                         ; 004819c0
    SUB EAX,0x8                         ; 004819c3
    JA 0x004819bc                       ; 004819c6
        ;   XREF to: 004819bc (CONDITIONAL_JUMP)  ; caseD_0
    POP EBX                             ; 004819c8
        ;   Label: LAB_004819c8
    JMP dword ptr [EAX*0x4 + 0x5b7fd0]  ; 004819c9 | DAT_005b7fd0
    MOV byte ptr [ECX + -0x5],DL        ; 004819d0
        ;   Label: caseD_5
    MOV dword ptr [ECX + -0x4],EDX      ; 004819d3
    JA 0x004819bc                       ; 004819d6
        ;   XREF to: 004819bc (CONDITIONAL_JUMP)  ; caseD_0
    JMP 0x004819c8                      ; 004819d8
        ;   XREF to: 004819c8 (UNCONDITIONAL_JUMP)  ; LAB_004819c8
    MOV byte ptr [ECX + -0x3],DL        ; 004819dc
        ;   Label: caseD_3
    MOV word ptr [ECX + -0x2],DX        ; 004819df
        ;   Label: caseD_2
    JA 0x004819bc                       ; 004819e3
        ;   XREF to: 004819bc (CONDITIONAL_JUMP)  ; caseD_0
    JMP 0x004819c8                      ; 004819e5
        ;   XREF to: 004819c8 (UNCONDITIONAL_JUMP)  ; LAB_004819c8
    MOV byte ptr [ECX + -0x1],DL        ; 004819e8
        ;   Label: caseD_1
    JA 0x004819bc                       ; 004819eb
        ;   XREF to: 004819bc (CONDITIONAL_JUMP)  ; caseD_0
    JMP 0x004819c8                      ; 004819ed
        ;   XREF to: 004819c8 (UNCONDITIONAL_JUMP)  ; LAB_004819c8

