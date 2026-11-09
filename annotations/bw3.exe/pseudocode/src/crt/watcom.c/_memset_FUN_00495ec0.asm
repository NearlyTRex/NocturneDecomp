; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_watcom_c__memset_FUN_00495ec0(uint param_1)
;
;
; XREF[4]:
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044c130 at 0044c822
;   core_dcamera.cpp_CDemonCamera_processCorona_FUN_0044ded0 at 0044df0c
;   core_dlight.cpp_CDemonLight_beginScene_FUN_0045c530 at 0045c704
;   core_dlight.cpp_CDemonLight_initializeVisibilityBuffer_FUN_0045f490 at 0045f4ba
;
; Referenced Globals:
;   undefined4 DAT_005fbc30
;   void* switchdataD_005fc430 = 00495efc
;   undefined4 DAT_005fc470
;
; *****************************************************************************

section .text

    AND EDX,0xff                        ; 00495ec0
        ;   Label: crt_watcom.c__memset_FUN_00495ec0
    MOV EAX,dword ptr [ESP + 0x4]       ; 00495ec6
    FILD qword ptr [EDX*0x8 + 0x5fbc30] ; 00495eca | DAT_005fbc30
    PUSH EBX                            ; 00495ed1
    MOV EDX,dword ptr [EDX*0x8 + 0x5fbc30] ; 00495ed2 | DAT_005fbc30
    SUB EAX,0x8                         ; 00495ed9
    JBE 0x00495f08                      ; 00495edc
        ;   XREF to: 00495f08 (CONDITIONAL_JUMP)  ; LAB_00495f08
    MOV EBX,ECX                         ; 00495ede
    NEG EBX                             ; 00495ee0
    AND EBX,0x7                         ; 00495ee2
    ADD ECX,EBX                         ; 00495ee5
    SUB EAX,EBX                         ; 00495ee7
    JMP dword ptr [EBX*0x4 + 0x5fc430]  ; 00495ee9 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV byte ptr [ECX + -0x7],DL        ; 00495ef0
        ;   Label: caseD_7
    MOV word ptr [ECX + -0x6],DX        ; 00495ef3
        ;   Label: caseD_6
    MOV dword ptr [ECX + -0x4],EDX      ; 00495ef7
        ;   Label: caseD_4
    JBE 0x00495f08                      ; 00495efa
        ;   XREF to: 00495f08 (CONDITIONAL_JUMP)  ; LAB_00495f08
    FLD ST0                             ; 00495efc
        ;   Label: caseD_0
    FISTP qword ptr [ECX]               ; 00495efe
    ADD ECX,0x8                         ; 00495f00
    SUB EAX,0x8                         ; 00495f03
    JA 0x00495efc                       ; 00495f06
        ;   XREF to: 00495efc (CONDITIONAL_JUMP)  ; caseD_0
    POP EBX                             ; 00495f08
        ;   Label: LAB_00495f08
    JMP dword ptr [EAX*0x4 + 0x5fc470]  ; 00495f09 | DAT_005fc470
    MOV byte ptr [ECX + -0x5],DL        ; 00495f10
        ;   Label: caseD_5
    MOV dword ptr [ECX + -0x4],EDX      ; 00495f13
    JA 0x00495efc                       ; 00495f16
        ;   XREF to: 00495efc (CONDITIONAL_JUMP)  ; caseD_0
    JMP 0x00495f08                      ; 00495f18
        ;   XREF to: 00495f08 (UNCONDITIONAL_JUMP)  ; LAB_00495f08
    MOV byte ptr [ECX + -0x3],DL        ; 00495f1c
        ;   Label: caseD_3
    MOV word ptr [ECX + -0x2],DX        ; 00495f1f
        ;   Label: caseD_2
    JA 0x00495efc                       ; 00495f23
        ;   XREF to: 00495efc (CONDITIONAL_JUMP)  ; caseD_0
    JMP 0x00495f08                      ; 00495f25
        ;   XREF to: 00495f08 (UNCONDITIONAL_JUMP)  ; LAB_00495f08
    MOV byte ptr [ECX + -0x1],DL        ; 00495f28
        ;   Label: caseD_1
    JA 0x00495efc                       ; 00495f2b
        ;   XREF to: 00495efc (CONDITIONAL_JUMP)  ; caseD_0
    JMP 0x00495f08                      ; 00495f2d
        ;   XREF to: 00495f08 (UNCONDITIONAL_JUMP)  ; LAB_00495f08

