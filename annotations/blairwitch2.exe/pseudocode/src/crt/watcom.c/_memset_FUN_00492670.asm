; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __fastcall crt_watcom_c__memset_FUN_00492670(void *dest,int fill_byte,uint size)
;
; Parameters:
; uint             Stack[0x4]:4   size
;
; XREF[4]:
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0043e930 at 0043f022
;   core_dcamera.cpp_CDemonCamera_processCorona_FUN_004406d0 at 0044070c
;   core_dlight.cpp_CDemonLight_beginScene_FUN_0044a020 at 0044a1f4
;   core_dlight.cpp_CDemonLight_initializeVisibilityBuffer_FUN_0044cf50 at 0044cf7a
;
; Referenced Globals:
;   undefined4 DAT_006143c0
;   void* switchdataD_00614bc0 = 004926ac
;   undefined4 DAT_00614c00
;
; *****************************************************************************

section .text

    AND EDX,0xff                        ; 00492670
        ;   Label: crt_watcom.c__memset_FUN_00492670
    MOV EAX,dword ptr [ESP + 0x4]       ; 00492676
    FILD qword ptr [EDX*0x8 + 0x6143c0] ; 0049267a | DAT_006143c0
    PUSH EBX                            ; 00492681
    MOV EDX,dword ptr [EDX*0x8 + 0x6143c0] ; 00492682 | DAT_006143c0
    SUB EAX,0x8                         ; 00492689
    JBE 0x004926b8                      ; 0049268c
        ;   XREF to: 004926b8 (CONDITIONAL_JUMP)  ; LAB_004926b8
    MOV EBX,ECX                         ; 0049268e
    NEG EBX                             ; 00492690
    AND EBX,0x7                         ; 00492692
    ADD ECX,EBX                         ; 00492695
    SUB EAX,EBX                         ; 00492697
    JMP dword ptr [EBX*0x4 + 0x614bc0]  ; 00492699 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV byte ptr [ECX + -0x7],DL        ; 004926a0
        ;   Label: caseD_7
    MOV word ptr [ECX + -0x6],DX        ; 004926a3
        ;   Label: caseD_6
    MOV dword ptr [ECX + -0x4],EDX      ; 004926a7
        ;   Label: caseD_4
    JBE 0x004926b8                      ; 004926aa
        ;   XREF to: 004926b8 (CONDITIONAL_JUMP)  ; LAB_004926b8
    FLD ST0                             ; 004926ac
        ;   Label: caseD_0
    FISTP qword ptr [ECX]               ; 004926ae
    ADD ECX,0x8                         ; 004926b0
    SUB EAX,0x8                         ; 004926b3
    JA 0x004926ac                       ; 004926b6
        ;   XREF to: 004926ac (CONDITIONAL_JUMP)  ; caseD_0
    POP EBX                             ; 004926b8
        ;   Label: LAB_004926b8
    JMP dword ptr [EAX*0x4 + 0x614c00]  ; 004926b9 | DAT_00614c00
    MOV byte ptr [ECX + -0x5],DL        ; 004926c0
        ;   Label: caseD_5
    MOV dword ptr [ECX + -0x4],EDX      ; 004926c3
    JA 0x004926ac                       ; 004926c6
        ;   XREF to: 004926ac (CONDITIONAL_JUMP)  ; caseD_0
    JMP 0x004926b8                      ; 004926c8
        ;   XREF to: 004926b8 (UNCONDITIONAL_JUMP)  ; LAB_004926b8
    MOV byte ptr [ECX + -0x3],DL        ; 004926cc
        ;   Label: caseD_3
    MOV word ptr [ECX + -0x2],DX        ; 004926cf
        ;   Label: caseD_2
    JA 0x004926ac                       ; 004926d3
        ;   XREF to: 004926ac (CONDITIONAL_JUMP)  ; caseD_0
    JMP 0x004926b8                      ; 004926d5
        ;   XREF to: 004926b8 (UNCONDITIONAL_JUMP)  ; LAB_004926b8
    MOV byte ptr [ECX + -0x1],DL        ; 004926d8
        ;   Label: caseD_1
    JA 0x004926ac                       ; 004926db
        ;   XREF to: 004926ac (CONDITIONAL_JUMP)  ; caseD_0
    JMP 0x004926b8                      ; 004926dd
        ;   XREF to: 004926b8 (UNCONDITIONAL_JUMP)  ; LAB_004926b8

