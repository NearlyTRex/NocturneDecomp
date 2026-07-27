; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_watcom_c__memcpy_FUN_00481a28(uint param_1)
;
;
; XREF[5]:
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_00440a20 at 00440ab3
;   core_dcamera.cpp_CDemonCamera_processCorona_FUN_00444f90 at 00445013
;   core_dcamera.cpp_FUN_00448310 at 0044835b
;   core_dcamera.cpp_FUN_00448380 at 004483cb
;   core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_0044e3c0 at 0044e409
;
; Referenced Globals:
;   void* switchdataD_005b7fd4 = 00481a4b
;   undefined4 DAT_005b8014
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00481a28
        ;   Label: crt_watcom.c__memcpy_FUN_00481a28
    PUSH EBX                            ; 00481a2c
    SUB EAX,0x8                         ; 00481a2d
    JBE 0x00481a5b                      ; 00481a30
        ;   XREF to: 00481a5b (CONDITIONAL_JUMP)  ; LAB_00481a5b
    MOV EBX,ECX                         ; 00481a32
    NEG EBX                             ; 00481a34
    AND EBX,0x7                         ; 00481a36
    ADD ECX,EBX                         ; 00481a39
    ADD EDX,EBX                         ; 00481a3b
    SUB EAX,EBX                         ; 00481a3d
    JMP dword ptr [EBX*0x4 + 0x5b7fd4]  ; 00481a3f | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    FISTP qword ptr [ECX + -0x8]        ; 00481a48
        ;   Label: LAB_00481a48
    FILD qword ptr [EDX]                ; 00481a4b
        ;   Label: caseD_0
    ADD ECX,0x8                         ; 00481a4d
    ADD EDX,0x8                         ; 00481a50
    SUB EAX,0x8                         ; 00481a53
    JA 0x00481a48                       ; 00481a56
        ;   XREF to: 00481a48 (CONDITIONAL_JUMP)  ; LAB_00481a48
    FISTP qword ptr [ECX + -0x8]        ; 00481a58
    POP EBX                             ; 00481a5b
        ;   Label: LAB_00481a5b
    JMP dword ptr [EAX*0x4 + 0x5b8014]  ; 00481a5c | DAT_005b8014
    MOV BL,byte ptr [EDX + -0x7]        ; 00481a64
        ;   Label: caseD_7
    MOV byte ptr [ECX + -0x7],BL        ; 00481a67
    MOV BX,word ptr [EDX + -0x6]        ; 00481a6a
        ;   Label: caseD_6
    MOV word ptr [ECX + -0x6],BX        ; 00481a6e
    MOV EBX,dword ptr [EDX + -0x4]      ; 00481a72
        ;   Label: caseD_4
    MOV dword ptr [ECX + -0x4],EBX      ; 00481a75
    JA 0x00481a4b                       ; 00481a78
        ;   XREF to: 00481a4b (CONDITIONAL_JUMP)  ; caseD_0
    POP EBX                             ; 00481a7a
    JMP dword ptr [EAX*0x4 + 0x5b8014]  ; 00481a7b | DAT_005b8014
    MOV BL,byte ptr [EDX + -0x5]        ; 00481a84
        ;   Label: caseD_5
    MOV byte ptr [ECX + -0x5],BL        ; 00481a87
    MOV EBX,dword ptr [EDX + -0x4]      ; 00481a8a
    MOV dword ptr [ECX + -0x4],EBX      ; 00481a8d
    JA 0x00481a4b                       ; 00481a90
        ;   XREF to: 00481a4b (CONDITIONAL_JUMP)  ; caseD_0
    POP EBX                             ; 00481a92
    JMP dword ptr [EAX*0x4 + 0x5b8014]  ; 00481a93 | DAT_005b8014
    MOV BL,byte ptr [EDX + -0x3]        ; 00481a9c
        ;   Label: caseD_3
    MOV byte ptr [ECX + -0x3],BL        ; 00481a9f
    MOV BX,word ptr [EDX + -0x2]        ; 00481aa2
        ;   Label: caseD_2
    MOV word ptr [ECX + -0x2],BX        ; 00481aa6
    JA 0x00481a4b                       ; 00481aaa
        ;   XREF to: 00481a4b (CONDITIONAL_JUMP)  ; caseD_0
    POP EBX                             ; 00481aac
    JMP dword ptr [EAX*0x4 + 0x5b8014]  ; 00481aad | DAT_005b8014
    MOV BL,byte ptr [EDX + -0x1]        ; 00481ab4
        ;   Label: caseD_1
    MOV byte ptr [ECX + -0x1],BL        ; 00481ab7
    JA 0x00481a4b                       ; 00481aba
        ;   XREF to: 00481a4b (CONDITIONAL_JUMP)  ; caseD_0
    POP EBX                             ; 00481abc
    JMP dword ptr [EAX*0x4 + 0x5b8014]  ; 00481abd | DAT_005b8014

