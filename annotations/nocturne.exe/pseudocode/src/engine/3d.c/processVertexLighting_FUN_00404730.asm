; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_processVertexLighting_FUN_00404730(SMRGLHeaderExtended *mrgl)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   mrgl
;
; XREF[1]:
;   engine_3d.c_FUN_00408fc0 at 00409082
;
; Referenced Globals:
;   undefined4 DAT_006b0264
;
; Called Functions:
;   engine_light.cpp_calculateAndStoreVertexLight_FUN_004c6d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404730
        ;   Label: engine_3d.c_processVertexLighting_FUN_00404730
    PUSH ESI                            ; 00404731
    PUSH EDI                            ; 00404732
    PUSH EBP                            ; 00404733
    MOV EDI,dword ptr [ESP + 0x14]      ; 00404734
    LEA ESI,[EDI + 0xc]                 ; 00404738
    MOV EDX,dword ptr [EDI + 0x8]       ; 0040473b
    XOR EBX,EBX                         ; 0040473e
    TEST EDX,EDX                        ; 00404740
    JLE 0x00404770                      ; 00404742
        ;   XREF to: 00404770 (CONDITIONAL_JUMP)  ; LAB_00404770
    MOV EAX,dword ptr [EDI + 0x4]       ; 00404744
        ;   Label: LAB_00404744
    MOV ECX,dword ptr [0x006b0264]      ; 00404747 | DAT_006b0264
    ADD EAX,EBX                         ; 0040474d
    PUSH ESI                            ; 0040474f
    ADD EAX,ECX                         ; 00404750
    PUSH EAX                            ; 00404752
    ADD ESI,0xc                         ; 00404753
    INC EBX                             ; 00404756
    CALL engine_light.cpp_calculateAndStoreVertexLight_FUN_004c6d90 ; 00404757
        ;   XREF to: 004c6d90 (UNCONDITIONAL_CALL)  ; undefined engine_light.cpp_calculateAndStoreVertexLight_FUN_004c6d90()
    MOV EBP,dword ptr [EDI + 0x8]       ; 0040475c
    ADD ESP,0x8                         ; 0040475f
    CMP EBX,EBP                         ; 00404762
    JL 0x00404744                       ; 00404764
        ;   XREF to: 00404744 (CONDITIONAL_JUMP)  ; LAB_00404744
    LEA EAX,[EAX]                       ; 00404766
    LEA EDX,[EDX]                       ; 0040476c
    MOV EBX,dword ptr [EDI + 0x8]       ; 00404770
        ;   Label: LAB_00404770
    LEA EAX,[EBX*0x4 + 0x0]             ; 00404773
    SUB EAX,EBX                         ; 0040477a
    LEA EBX,[EAX*0x4 + 0x0]             ; 0040477c
    LEA EAX,[EDI + 0xc]                 ; 00404783
    ADD EAX,EBX                         ; 00404786
    POP EBP                             ; 00404788
    POP EDI                             ; 00404789
    POP ESI                             ; 0040478a
    POP EBX                             ; 0040478b
    RET                                 ; 0040478c

