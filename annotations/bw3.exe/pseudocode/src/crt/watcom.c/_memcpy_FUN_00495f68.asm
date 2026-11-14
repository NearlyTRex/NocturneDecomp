; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __fastcall crt_watcom_c__memcpy_FUN_00495f68(void *dest,void *src,uint size)
;
; Parameters:
; uint             Stack[0x4]:4   size
;
; XREF[5]:
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_00449750 at 004497ce
;   core_dcamera.cpp_CDemonCamera_processCorona_FUN_0044ded0 at 0044df53
;   core_dcamera.cpp_CDemonCamera_restoreZBufferScanlines_FUN_004512a0 at 004512da
;   core_dcamera.cpp_CDemonCamera_saveZBufferScanlines_FUN_00451250 at 0045128a
;   core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_0045c480 at 0045c4c9
;
; Referenced Globals:
;   void* switchdataD_005fc474 = 00495f8b
;   undefined4 DAT_005fc4b4
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00495f68
        ;   Label: crt_watcom.c__memcpy_FUN_00495f68
    PUSH EBX                            ; 00495f6c
    SUB EAX,0x8                         ; 00495f6d
    JBE 0x00495f9b                      ; 00495f70
        ;   XREF to: 00495f9b (CONDITIONAL_JUMP)  ; LAB_00495f9b
    MOV EBX,ECX                         ; 00495f72
    NEG EBX                             ; 00495f74
    AND EBX,0x7                         ; 00495f76
    ADD ECX,EBX                         ; 00495f79
    ADD EDX,EBX                         ; 00495f7b
    SUB EAX,EBX                         ; 00495f7d
    JMP dword ptr [EBX*0x4 + 0x5fc474]  ; 00495f7f | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    FISTP qword ptr [ECX + -0x8]        ; 00495f88
        ;   Label: LAB_00495f88
    FILD qword ptr [EDX]                ; 00495f8b
        ;   Label: caseD_0
    ADD ECX,0x8                         ; 00495f8d
    ADD EDX,0x8                         ; 00495f90
    SUB EAX,0x8                         ; 00495f93
    JA 0x00495f88                       ; 00495f96
        ;   XREF to: 00495f88 (CONDITIONAL_JUMP)  ; LAB_00495f88
    FISTP qword ptr [ECX + -0x8]        ; 00495f98
    POP EBX                             ; 00495f9b
        ;   Label: LAB_00495f9b
    JMP dword ptr [EAX*0x4 + 0x5fc4b4]  ; 00495f9c | DAT_005fc4b4
    MOV BL,byte ptr [EDX + -0x7]        ; 00495fa4
        ;   Label: caseD_7
    MOV byte ptr [ECX + -0x7],BL        ; 00495fa7
    MOV BX,word ptr [EDX + -0x6]        ; 00495faa
        ;   Label: caseD_6
    MOV word ptr [ECX + -0x6],BX        ; 00495fae
    MOV EBX,dword ptr [EDX + -0x4]      ; 00495fb2
        ;   Label: caseD_4
    MOV dword ptr [ECX + -0x4],EBX      ; 00495fb5
    JA 0x00495f8b                       ; 00495fb8
        ;   XREF to: 00495f8b (CONDITIONAL_JUMP)  ; caseD_0
    POP EBX                             ; 00495fba
    JMP dword ptr [EAX*0x4 + 0x5fc4b4]  ; 00495fbb | DAT_005fc4b4
    MOV BL,byte ptr [EDX + -0x5]        ; 00495fc4
        ;   Label: caseD_5
    MOV byte ptr [ECX + -0x5],BL        ; 00495fc7
    MOV EBX,dword ptr [EDX + -0x4]      ; 00495fca
    MOV dword ptr [ECX + -0x4],EBX      ; 00495fcd
    JA 0x00495f8b                       ; 00495fd0
        ;   XREF to: 00495f8b (CONDITIONAL_JUMP)  ; caseD_0
    POP EBX                             ; 00495fd2
    JMP dword ptr [EAX*0x4 + 0x5fc4b4]  ; 00495fd3 | DAT_005fc4b4
    MOV BL,byte ptr [EDX + -0x3]        ; 00495fdc
        ;   Label: caseD_3
    MOV byte ptr [ECX + -0x3],BL        ; 00495fdf
    MOV BX,word ptr [EDX + -0x2]        ; 00495fe2
        ;   Label: caseD_2
    MOV word ptr [ECX + -0x2],BX        ; 00495fe6
    JA 0x00495f8b                       ; 00495fea
        ;   XREF to: 00495f8b (CONDITIONAL_JUMP)  ; caseD_0
    POP EBX                             ; 00495fec
    JMP dword ptr [EAX*0x4 + 0x5fc4b4]  ; 00495fed | DAT_005fc4b4
    MOV BL,byte ptr [EDX + -0x1]        ; 00495ff4
        ;   Label: caseD_1
    MOV byte ptr [ECX + -0x1],BL        ; 00495ff7
    JA 0x00495f8b                       ; 00495ffa
        ;   XREF to: 00495f8b (CONDITIONAL_JUMP)  ; caseD_0
    POP EBX                             ; 00495ffc
    JMP dword ptr [EAX*0x4 + 0x5fc4b4]  ; 00495ffd | DAT_005fc4b4

