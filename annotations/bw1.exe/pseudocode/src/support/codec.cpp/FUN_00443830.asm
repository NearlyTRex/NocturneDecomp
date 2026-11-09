; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int support_codec_cpp_FUN_00443830(uint param_1)
;
;
; XREF[1]:
;   support_codec.cpp_FUN_004439b0 at 004439d9
;
; Referenced Globals:
;   TerminatedCString s_s_0123456789ABCDEFGHJKLM_00610d70
;   undefined4 s_s_0123456789ABCDEFGHJKLM_00610d70+0xf
;   undefined4 s_s_0123456789ABCDEFGHJKLM_00610d70+0x1f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443830
        ;   Label: support_codec.cpp_FUN_00443830
    PUSH ESI                            ; 00443831
    MOV ESI,dword ptr [ESP + 0xc]       ; 00443832
    MOV EDX,0x3f                        ; 00443836
    XOR ECX,ECX                         ; 0044383b
    LEA EAX,[ECX + EDX*0x1]             ; 0044383d
        ;   Label: LAB_0044383d
    SAR EAX,0x1                         ; 00443840
    XOR EBX,EBX                         ; 00443842
    MOV BL,byte ptr [EAX + 0x610d70]    ; 00443844 | s_s_0123456789ABCDEFGHJKLM_00610d70+0x1f | s_s_0123456789ABCDEFGHJKLM_00610d70+0xf | = "!()*+0123456789ABCDEFGHJKLMNPQRSTUVWX..."
    CMP ESI,EBX                         ; 0044384a
    JZ 0x0044386b                       ; 0044384c
        ;   XREF to: 0044386b (CONDITIONAL_JUMP)  ; LAB_0044386b
    JGE 0x0044386e                      ; 0044384e
        ;   XREF to: 0044386e (CONDITIONAL_JUMP)  ; LAB_0044386e
    LEA EDX,[EAX + -0x1]                ; 00443850
    CMP ECX,EDX                         ; 00443853
        ;   Label: LAB_00443853
    JLE 0x0044383d                      ; 00443855
        ;   XREF to: 0044383d (CONDITIONAL_JUMP)  ; LAB_0044383d
    CMP ESI,0x4f                        ; 00443857
    JZ 0x00443873                       ; 0044385a
        ;   XREF to: 00443873 (CONDITIONAL_JUMP)  ; LAB_00443873
    CMP ESI,0x49                        ; 0044385c
    JZ 0x00443880                       ; 0044385f
        ;   XREF to: 00443880 (CONDITIONAL_JUMP)  ; LAB_00443880
    CMP ESI,0x6c                        ; 00443861
    JZ 0x00443880                       ; 00443864
        ;   XREF to: 00443880 (CONDITIONAL_JUMP)  ; LAB_00443880
    MOV EAX,0xffffffff                  ; 00443866
    POP ESI                             ; 0044386b
        ;   Label: LAB_0044386b
    POP EBX                             ; 0044386c
    RET                                 ; 0044386d
    LEA ECX,[EAX + 0x1]                 ; 0044386e
        ;   Label: LAB_0044386e
    JMP 0x00443853                      ; 00443871
        ;   XREF to: 00443853 (UNCONDITIONAL_JUMP)  ; LAB_00443853
    PUSH 0x30                           ; 00443873
        ;   Label: LAB_00443873
    CALL support_codec.cpp_FUN_00443830 ; 00443875
        ;   XREF to: 00443830 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00443830()
    ADD ESP,0x4                         ; 0044387a
    POP ESI                             ; 0044387d
    POP EBX                             ; 0044387e
    RET                                 ; 0044387f
    PUSH 0x31                           ; 00443880
        ;   Label: LAB_00443880
    CALL support_codec.cpp_FUN_00443830 ; 00443882
        ;   XREF to: 00443830 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00443830()
    ADD ESP,0x4                         ; 00443887
    POP ESI                             ; 0044388a
    POP EBX                             ; 0044388b
    RET                                 ; 0044388c

