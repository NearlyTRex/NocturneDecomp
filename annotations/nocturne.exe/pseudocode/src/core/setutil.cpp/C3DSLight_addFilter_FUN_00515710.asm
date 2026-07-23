; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSLight_addFilter_FUN_00515710(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 005008a4
;
; Referenced Globals:
;   TerminatedCString s_core_setutil_cpp_00590f8a
;   TerminatedCString s_C3DSLight_addFilter_too_00590f9e
;   undefined4 DAT_005ad54c
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   core_dfilter.cpp_CFilterCache_getFilter_FUN_0044bd20
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515710
        ;   Label: core_setutil.cpp_C3DSLight_addFilter_FUN_00515710
    PUSH ESI                            ; 00515711
    PUSH EDI                            ; 00515712
    PUSH EBP                            ; 00515713
    MOV EBX,dword ptr [ESP + 0x14]      ; 00515714
    CMP dword ptr [EBX + 0x11ec],0x20   ; 00515718
    JGE 0x005157ca                      ; 0051571f
        ;   XREF to: 005157ca (CONDITIONAL_JUMP)  ; LAB_005157ca
    MOV EDX,dword ptr [EBX + 0x11ec]    ; 00515725
        ;   Label: LAB_00515725
    LEA EAX,[EDX*0x4 + 0x0]             ; 0051572b
    ADD EAX,EDX                         ; 00515732
    LEA ECX,[EBX + 0x11f4]              ; 00515734
    SHL EAX,0x3                         ; 0051573a
    MOV ESI,dword ptr [ESP + 0x18]      ; 0051573d
    LEA EDI,[ECX + EAX*0x1]             ; 00515741
    PUSH EDI                            ; 00515744
    MOV AL,byte ptr [ESI]               ; 00515745
        ;   Label: LAB_00515745
    MOV byte ptr [EDI],AL               ; 00515747
    CMP AL,0x0                          ; 00515749
    JZ 0x0051575d                       ; 0051574b
        ;   XREF to: 0051575d (CONDITIONAL_JUMP)  ; LAB_0051575d
    MOV AL,byte ptr [ESI + 0x1]         ; 0051574d
    ADD ESI,0x2                         ; 00515750
    MOV byte ptr [EDI + 0x1],AL         ; 00515753
    ADD EDI,0x2                         ; 00515756
    CMP AL,0x0                          ; 00515759
    JNZ 0x00515745                      ; 0051575b
        ;   XREF to: 00515745 (CONDITIONAL_JUMP)  ; LAB_00515745
    POP EDI                             ; 0051575d
        ;   Label: LAB_0051575d
    MOV EAX,dword ptr [EBX + 0x11ec]    ; 0051575e
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00515764
    MOV dword ptr [EBX + EAX*0x4 + 0x16f4],EDX ; 00515768
    MOV EAX,dword ptr [EBX + 0x11ec]    ; 0051576f
    MOV EDX,dword ptr [ESP + 0x20]      ; 00515775
    MOV dword ptr [EBX + EAX*0x4 + 0x1774],EDX ; 00515779
    MOV EDX,dword ptr [EBX + 0x11ec]    ; 00515780
    LEA EAX,[EDX*0x4 + 0x0]             ; 00515786
    ADD EAX,EDX                         ; 0051578d
    MOV EDI,dword ptr [EBX + 0x11f0]    ; 0051578f
    SHL EAX,0x3                         ; 00515795
    PUSH EDI                            ; 00515798
    ADD ECX,EAX                         ; 00515799
    PUSH ECX                            ; 0051579b
    MOV EBP,dword ptr [0x005ad54c]      ; 0051579c | DAT_005ad54c
    PUSH EBP                            ; 005157a2
    CALL core_dfilter.cpp_CFilterCache_getFilter_FUN_0044bd20 ; 005157a3
        ;   XREF to: 0044bd20 (UNCONDITIONAL_CALL)  ; undefined core_dfilter.cpp_CFilterCache_getFilter_FUN_0044bd20()
    MOV EDX,dword ptr [EBX + 0x11ec]    ; 005157a8
    MOV dword ptr [EBX + EDX*0x4 + 0x1810],EAX ; 005157ae
    MOV EAX,dword ptr [EBX + 0x11ec]    ; 005157b5
    INC EAX                             ; 005157bb
    ADD ESP,0xc                         ; 005157bc
    MOV dword ptr [EBX + 0x11ec],EAX    ; 005157bf
    POP EBP                             ; 005157c5
    POP EDI                             ; 005157c6
    POP ESI                             ; 005157c7
    POP EBX                             ; 005157c8
    RET                                 ; 005157c9
    PUSH 0x20                           ; 005157ca
        ;   Label: LAB_005157ca
    MOV ECX,0x590f8a                    ; 005157cc | = "..\\core\\setutil.cpp"
    MOV ESI,0x383                       ; 005157d1
    PUSH 0x590f9e                       ; 005157d6 | = "C3DSLight::addFilter - too many filte..."
    MOV dword ptr [0x01cc4800],ECX      ; 005157db | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 005157e1 | DAT_01cc4804
    CALL FUN_004c8440                   ; 005157e7
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 005157ec
    JMP 0x00515725                      ; 005157ef
        ;   XREF to: 00515725 (UNCONDITIONAL_JUMP)  ; LAB_00515725

