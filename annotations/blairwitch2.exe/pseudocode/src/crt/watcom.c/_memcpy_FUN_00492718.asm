; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_watcom_c__memcpy_FUN_00492718(uint param_1)
;
;
; XREF[5]:
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_0043bf50 at 0043bfce
;   core_dcamera.cpp_CDemonCamera_processCorona_FUN_004406d0 at 00440753
;   core_dcamera.cpp_CDemonCamera_restoreZBufferScanlines_FUN_00443aa0 at 00443ada
;   core_dcamera.cpp_CDemonCamera_saveZBufferScanlines_FUN_00443a50 at 00443a8a
;   core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_00449f70 at 00449fb9
;
; Referenced Globals:
;   void* switchdataD_00614c04 = 0049273b
;   undefined4 DAT_00614c44
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00492718
        ;   Label: crt_watcom.c__memcpy_FUN_00492718
    PUSH EBX                            ; 0049271c
    SUB EAX,0x8                         ; 0049271d
    JBE 0x0049274b                      ; 00492720
        ;   XREF to: 0049274b (CONDITIONAL_JUMP)  ; LAB_0049274b
    MOV EBX,ECX                         ; 00492722
    NEG EBX                             ; 00492724
    AND EBX,0x7                         ; 00492726
    ADD ECX,EBX                         ; 00492729
    ADD EDX,EBX                         ; 0049272b
    SUB EAX,EBX                         ; 0049272d
    JMP dword ptr [EBX*0x4 + 0x614c04]  ; 0049272f | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    FISTP qword ptr [ECX + -0x8]        ; 00492738
        ;   Label: LAB_00492738
    FILD qword ptr [EDX]                ; 0049273b
        ;   Label: caseD_0
    ADD ECX,0x8                         ; 0049273d
    ADD EDX,0x8                         ; 00492740
    SUB EAX,0x8                         ; 00492743
    JA 0x00492738                       ; 00492746
        ;   XREF to: 00492738 (CONDITIONAL_JUMP)  ; LAB_00492738
    FISTP qword ptr [ECX + -0x8]        ; 00492748
    POP EBX                             ; 0049274b
        ;   Label: LAB_0049274b
    JMP dword ptr [EAX*0x4 + 0x614c44]  ; 0049274c | DAT_00614c44
    MOV BL,byte ptr [EDX + -0x7]        ; 00492754
        ;   Label: caseD_7
    MOV byte ptr [ECX + -0x7],BL        ; 00492757
    MOV BX,word ptr [EDX + -0x6]        ; 0049275a
        ;   Label: caseD_6
    MOV word ptr [ECX + -0x6],BX        ; 0049275e
    MOV EBX,dword ptr [EDX + -0x4]      ; 00492762
        ;   Label: caseD_4
    MOV dword ptr [ECX + -0x4],EBX      ; 00492765
    JA 0x0049273b                       ; 00492768
        ;   XREF to: 0049273b (CONDITIONAL_JUMP)  ; caseD_0
    POP EBX                             ; 0049276a
    JMP dword ptr [EAX*0x4 + 0x614c44]  ; 0049276b | DAT_00614c44
    MOV BL,byte ptr [EDX + -0x5]        ; 00492774
        ;   Label: caseD_5
    MOV byte ptr [ECX + -0x5],BL        ; 00492777
    MOV EBX,dword ptr [EDX + -0x4]      ; 0049277a
    MOV dword ptr [ECX + -0x4],EBX      ; 0049277d
    JA 0x0049273b                       ; 00492780
        ;   XREF to: 0049273b (CONDITIONAL_JUMP)  ; caseD_0
    POP EBX                             ; 00492782
    JMP dword ptr [EAX*0x4 + 0x614c44]  ; 00492783 | DAT_00614c44
    MOV BL,byte ptr [EDX + -0x3]        ; 0049278c
        ;   Label: caseD_3
    MOV byte ptr [ECX + -0x3],BL        ; 0049278f
    MOV BX,word ptr [EDX + -0x2]        ; 00492792
        ;   Label: caseD_2
    MOV word ptr [ECX + -0x2],BX        ; 00492796
    JA 0x0049273b                       ; 0049279a
        ;   XREF to: 0049273b (CONDITIONAL_JUMP)  ; caseD_0
    POP EBX                             ; 0049279c
    JMP dword ptr [EAX*0x4 + 0x614c44]  ; 0049279d | DAT_00614c44
    MOV BL,byte ptr [EDX + -0x1]        ; 004927a4
        ;   Label: caseD_1
    MOV byte ptr [ECX + -0x1],BL        ; 004927a7
    JA 0x0049273b                       ; 004927aa
        ;   XREF to: 0049273b (CONDITIONAL_JUMP)  ; caseD_0
    POP EBX                             ; 004927ac
    JMP dword ptr [EAX*0x4 + 0x614c44]  ; 004927ad | DAT_00614c44

