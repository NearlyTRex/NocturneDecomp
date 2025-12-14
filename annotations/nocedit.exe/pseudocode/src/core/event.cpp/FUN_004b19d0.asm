; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_event.cpp_FUN_004b19d0(void)
;
;
; XREF[4]:
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0 at 0044fae2
;   core_dcamera.cpp_CDemonCamera_processCorona_FUN_00451130 at 0045116c
;   core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80 at 00472c54
;   core_dlight.cpp_CDemonLight_initializeVisibilityBuffer_FUN_00475fc0 at 00475fea
;
; Referenced Globals:
;   undefined4 g_CharacterSet
;   void* switchdataD_00679d10 = 004b1a0c
;   undefined4 DAT_00679d50
;
; *****************************************************************************

section .text

    AND EDX,0xff                        ; 004b19d0
        ;   Label: core_event.cpp_FUN_004b19d0
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b19d6
    FILD qword ptr [EDX*0x8 + 0x679510] ; 004b19da | g_CharacterSet
    PUSH EBX                            ; 004b19e1
    MOV EDX,dword ptr [EDX*0x8 + 0x679510] ; 004b19e2 | g_CharacterSet
    SUB EAX,0x8                         ; 004b19e9
    JBE 0x004b1a18                      ; 004b19ec
        ;   XREF to: 004b1a18 (CONDITIONAL_JUMP)  ; LAB_004b1a18
    MOV EBX,ECX                         ; 004b19ee
    NEG EBX                             ; 004b19f0
    AND EBX,0x7                         ; 004b19f2
    ADD ECX,EBX                         ; 004b19f5
    SUB EAX,EBX                         ; 004b19f7
    JMP dword ptr [EBX*0x4 + 0x679d10]  ; 004b19f9 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV byte ptr [ECX + -0x7],DL        ; 004b1a00
        ;   Label: caseD_7
    MOV word ptr [ECX + -0x6],DX        ; 004b1a03
        ;   Label: caseD_6
    MOV dword ptr [ECX + -0x4],EDX      ; 004b1a07
        ;   Label: caseD_4
    JBE 0x004b1a18                      ; 004b1a0a
        ;   XREF to: 004b1a18 (CONDITIONAL_JUMP)  ; LAB_004b1a18
    FLD ST0                             ; 004b1a0c
        ;   Label: caseD_0
    FISTP qword ptr [ECX]               ; 004b1a0e
    ADD ECX,0x8                         ; 004b1a10
    SUB EAX,0x8                         ; 004b1a13
    JA 0x004b1a0c                       ; 004b1a16
        ;   XREF to: 004b1a0c (CONDITIONAL_JUMP)  ; caseD_0
    POP EBX                             ; 004b1a18
        ;   Label: LAB_004b1a18
    JMP dword ptr [EAX*0x4 + 0x679d50]  ; 004b1a19 | DAT_00679d50
    MOV byte ptr [ECX + -0x5],DL        ; 004b1a20
        ;   Label: caseD_5
    MOV dword ptr [ECX + -0x4],EDX      ; 004b1a23
    JA 0x004b1a0c                       ; 004b1a26
        ;   XREF to: 004b1a0c (CONDITIONAL_JUMP)  ; caseD_0
    JMP 0x004b1a18                      ; 004b1a28
        ;   XREF to: 004b1a18 (UNCONDITIONAL_JUMP)  ; LAB_004b1a18
    MOV byte ptr [ECX + -0x3],DL        ; 004b1a2c
        ;   Label: caseD_3
    MOV word ptr [ECX + -0x2],DX        ; 004b1a2f
        ;   Label: caseD_2
    JA 0x004b1a0c                       ; 004b1a33
        ;   XREF to: 004b1a0c (CONDITIONAL_JUMP)  ; caseD_0
    JMP 0x004b1a18                      ; 004b1a35
        ;   XREF to: 004b1a18 (UNCONDITIONAL_JUMP)  ; LAB_004b1a18
    MOV byte ptr [ECX + -0x1],DL        ; 004b1a38
        ;   Label: caseD_1
    JA 0x004b1a0c                       ; 004b1a3b
        ;   XREF to: 004b1a0c (CONDITIONAL_JUMP)  ; caseD_0
    JMP 0x004b1a18                      ; 004b1a3d
        ;   XREF to: 004b1a18 (UNCONDITIONAL_JUMP)  ; LAB_004b1a18

