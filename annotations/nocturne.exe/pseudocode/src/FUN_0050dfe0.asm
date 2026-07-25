; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0050dfe0(int param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   FUN_004574e0 at 00457622
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b9354
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01b4d750
;   undefined4 DAT_01c02594
;   undefined4 DAT_01c777dc
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0
;   FUN_004d7760
;   wincore_windll.cpp_sync_FUN_00532b30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050dfe0
        ;   Label: FUN_0050dfe0
    PUSH ESI                            ; 0050dfe1
    PUSH EDI                            ; 0050dfe2
    PUSH EBP                            ; 0050dfe3
    MOV EBP,dword ptr [ESP + 0x14]      ; 0050dfe4
    MOV EAX,dword ptr [ESP + 0x18]      ; 0050dfe8
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0050dfec
    MOV EBX,dword ptr [0x005b9354]      ; 0050dff0 | DAT_005b9354
    CMP dword ptr [EBX + 0x1f0],0x0     ; 0050dff6 | DAT_01c777dc
    JNZ 0x0050e039                      ; 0050dffd
        ;   XREF to: 0050e039 (CONDITIONAL_JUMP)  ; LAB_0050e039
    MOV EBX,dword ptr [0x005ae704]      ; 0050dfff | DAT_005ae704
    MOV EBX,dword ptr [EBX + 0x18]      ; 0050e005 | DAT_01b4d750
    TEST EBX,EBX                        ; 0050e008
    JZ 0x0050e03e                       ; 0050e00a
        ;   XREF to: 0050e03e (CONDITIONAL_JUMP)  ; LAB_0050e03e
    XOR EBX,EBX                         ; 0050e00c
    TEST EDI,EDI                        ; 0050e00e
    JLE 0x0050e030                      ; 0050e010
        ;   XREF to: 0050e030 (CONDITIONAL_JUMP)  ; LAB_0050e030
    MOV ESI,EAX                         ; 0050e012
    PUSH ESI                            ; 0050e014
        ;   Label: LAB_0050e014
    MOV EAX,dword ptr [EBP + 0x161268]  ; 0050e015
    PUSH EAX                            ; 0050e01b
    INC EBX                             ; 0050e01c
    CALL FUN_004d7760                   ; 0050e01d
        ;   XREF to: 004d7760 (UNCONDITIONAL_CALL)  ; undefined FUN_004d7760()
    ADD ESI,0x48                        ; 0050e022
    ADD ESP,0x8                         ; 0050e025
    CMP EBX,EDI                         ; 0050e028
    JL 0x0050e014                       ; 0050e02a
        ;   XREF to: 0050e014 (CONDITIONAL_JUMP)  ; LAB_0050e014
    LEA EAX,[EAX]                       ; 0050e02c
    CMP dword ptr [0x01c02594],0x0      ; 0050e030 | DAT_01c02594
        ;   Label: LAB_0050e030
    JNZ 0x0050e06c                      ; 0050e037
        ;   XREF to: 0050e06c (CONDITIONAL_JUMP)  ; LAB_0050e06c
    POP EBP                             ; 0050e039
        ;   Label: LAB_0050e039
    POP EDI                             ; 0050e03a
    POP ESI                             ; 0050e03b
    POP EBX                             ; 0050e03c
    RET                                 ; 0050e03d
    XOR ESI,ESI                         ; 0050e03e
        ;   Label: LAB_0050e03e
    TEST EDI,EDI                        ; 0050e040
    JLE 0x0050e030                      ; 0050e042
        ;   XREF to: 0050e030 (CONDITIONAL_JUMP)  ; LAB_0050e030
    MOV EBX,EAX                         ; 0050e044
    PUSH EBX                            ; 0050e046
        ;   Label: LAB_0050e046
    MOV ECX,dword ptr [0x005ae704]      ; 0050e047 | DAT_005ae704
    PUSH ECX                            ; 0050e04d | DAT_01b4d738
    INC ESI                             ; 0050e04e
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0 ; 0050e04f
        ;   XREF to: 0045eee0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0()
    ADD EBX,0x48                        ; 0050e054
    ADD ESP,0x8                         ; 0050e057
    CMP ESI,EDI                         ; 0050e05a
    JL 0x0050e046                       ; 0050e05c
        ;   XREF to: 0050e046 (CONDITIONAL_JUMP)  ; LAB_0050e046
    CMP dword ptr [0x01c02594],0x0      ; 0050e05e | DAT_01c02594
    JNZ 0x0050e06c                      ; 0050e065
        ;   XREF to: 0050e06c (CONDITIONAL_JUMP)  ; LAB_0050e06c
    POP EBP                             ; 0050e067
    POP EDI                             ; 0050e068
    POP ESI                             ; 0050e069
    POP EBX                             ; 0050e06a
    RET                                 ; 0050e06b
    CALL wincore_windll.cpp_sync_FUN_00532b30 ; 0050e06c
        ;   XREF to: 00532b30 (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_sync_FUN_00532b30()
        ;   Label: LAB_0050e06c
    POP EBP                             ; 0050e071
    POP EDI                             ; 0050e072
    POP ESI                             ; 0050e073
    POP EBX                             ; 0050e074
    RET                                 ; 0050e075

