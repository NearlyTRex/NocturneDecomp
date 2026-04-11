; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __fastcall crt_watcom_c__memcpy_FUN_004b1a78(void *dest,void *src,uint size)
;
; Parameters:
; uint             Stack[0x4]:4   size
;
; XREF[5]:
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80 at 0044cbfe
;   core_dcamera.cpp_CDemonCamera_processCorona_FUN_00451130 at 004511b3
;   core_dcamera.cpp_CDemonCamera_restoreZBufferScanlines_FUN_004544a0 at 004544da
;   core_dcamera.cpp_CDemonCamera_saveZBufferScanlines_FUN_00454450 at 0045448a
;   core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_004729d0 at 00472a19
;
; Referenced Globals:
;   void* switchdataD_00679d54 = 004b1a9b
;   int INT_00679d94 = 0x4b1b14
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b1a78
        ;   Label: crt_watcom.c__memcpy_FUN_004b1a78
    PUSH EBX                            ; 004b1a7c
    SUB EAX,0x8                         ; 004b1a7d
    JBE 0x004b1aab                      ; 004b1a80
        ;   XREF to: 004b1aab (CONDITIONAL_JUMP)  ; LAB_004b1aab
    MOV EBX,ECX                         ; 004b1a82
    NEG EBX                             ; 004b1a84
    AND EBX,0x7                         ; 004b1a86
    ADD ECX,EBX                         ; 004b1a89
    ADD EDX,EBX                         ; 004b1a8b
    SUB EAX,EBX                         ; 004b1a8d
    JMP dword ptr [EBX*0x4 + 0x679d54]  ; 004b1a8f | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    FISTP qword ptr [ECX + -0x8]        ; 004b1a98
        ;   Label: LAB_004b1a98
    FILD qword ptr [EDX]                ; 004b1a9b
        ;   Label: caseD_0
    ADD ECX,0x8                         ; 004b1a9d
    ADD EDX,0x8                         ; 004b1aa0
    SUB EAX,0x8                         ; 004b1aa3
    JA 0x004b1a98                       ; 004b1aa6
        ;   XREF to: 004b1a98 (CONDITIONAL_JUMP)  ; LAB_004b1a98
    FISTP qword ptr [ECX + -0x8]        ; 004b1aa8
    POP EBX                             ; 004b1aab
        ;   Label: LAB_004b1aab
    JMP dword ptr [EAX*0x4 + 0x679d94]  ; 004b1aac | INT_00679d94
    MOV BL,byte ptr [EDX + -0x7]        ; 004b1ab4
        ;   Label: caseD_7
    MOV byte ptr [ECX + -0x7],BL        ; 004b1ab7
    MOV BX,word ptr [EDX + -0x6]        ; 004b1aba
        ;   Label: caseD_6
    MOV word ptr [ECX + -0x6],BX        ; 004b1abe
    MOV EBX,dword ptr [EDX + -0x4]      ; 004b1ac2
        ;   Label: caseD_4
    MOV dword ptr [ECX + -0x4],EBX      ; 004b1ac5
    JA 0x004b1a9b                       ; 004b1ac8
        ;   XREF to: 004b1a9b (CONDITIONAL_JUMP)  ; caseD_0
    POP EBX                             ; 004b1aca
    JMP dword ptr [EAX*0x4 + 0x679d94]  ; 004b1acb | INT_00679d94
    MOV BL,byte ptr [EDX + -0x5]        ; 004b1ad4
        ;   Label: caseD_5
    MOV byte ptr [ECX + -0x5],BL        ; 004b1ad7
    MOV EBX,dword ptr [EDX + -0x4]      ; 004b1ada
    MOV dword ptr [ECX + -0x4],EBX      ; 004b1add
    JA 0x004b1a9b                       ; 004b1ae0
        ;   XREF to: 004b1a9b (CONDITIONAL_JUMP)  ; caseD_0
    POP EBX                             ; 004b1ae2
    JMP dword ptr [EAX*0x4 + 0x679d94]  ; 004b1ae3 | INT_00679d94
    MOV BL,byte ptr [EDX + -0x3]        ; 004b1aec
        ;   Label: caseD_3
    MOV byte ptr [ECX + -0x3],BL        ; 004b1aef
    MOV BX,word ptr [EDX + -0x2]        ; 004b1af2
        ;   Label: caseD_2
    MOV word ptr [ECX + -0x2],BX        ; 004b1af6
    JA 0x004b1a9b                       ; 004b1afa
        ;   XREF to: 004b1a9b (CONDITIONAL_JUMP)  ; caseD_0
    POP EBX                             ; 004b1afc
    JMP dword ptr [EAX*0x4 + 0x679d94]  ; 004b1afd | INT_00679d94
    MOV BL,byte ptr [EDX + -0x1]        ; 004b1b04
        ;   Label: caseD_1
    MOV byte ptr [ECX + -0x1],BL        ; 004b1b07
    JA 0x004b1a9b                       ; 004b1b0a
        ;   XREF to: 004b1a9b (CONDITIONAL_JUMP)  ; caseD_0
    POP EBX                             ; 004b1b0c
    JMP dword ptr [EAX*0x4 + 0x679d94]  ; 004b1b0d | INT_00679d94

