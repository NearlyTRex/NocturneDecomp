; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004de700(int param_1)
;
;
; XREF[1]:
;   FUN_004ddb20 at 004ddf04
;
; Referenced Globals:
;   string s_moloch-morph-todemon.wav_0058a87c
;   string s_moloch-morph-tohuman.wav_0058a895
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004de700
        ;   Label: FUN_004de700
    MOV dword ptr [EAX + 0x21cf8],0x0   ; 004de704
    MOV EDX,dword ptr [EAX + 0x21cf0]   ; 004de70e
    MOV dword ptr [EAX + 0x21cf4],0x1   ; 004de714
    TEST EDX,EDX                        ; 004de71e
    JZ 0x004de735                       ; 004de720
        ;   XREF to: 004de735 (CONDITIONAL_JUMP)  ; LAB_004de735
    PUSH 0x58a87c                       ; 004de722 | = "moloch-morph-todemon.wav"
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004de727
    PUSH EAX                            ; 004de72d
    CALL dword ptr [EDX + 0x24]         ; 004de72e
    ADD ESP,0x8                         ; 004de731
    RET                                 ; 004de734
    PUSH 0x58a895                       ; 004de735 | = "moloch-morph-tohuman.wav"
        ;   Label: LAB_004de735
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004de73a
    PUSH EAX                            ; 004de740
    CALL dword ptr [EDX + 0x24]         ; 004de741
    ADD ESP,0x8                         ; 004de744
    RET                                 ; 004de747

