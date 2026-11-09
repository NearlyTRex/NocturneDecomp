; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_codec_cpp_FUN_004425b0(int *param_1,int param_2,uint param_3)
;
;
; XREF[1]:
;   support_codec.cpp_FUN_004431b0 at 00443220
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004425b0
        ;   Label: support_codec.cpp_FUN_004425b0
    MOV ECX,dword ptr [ESP + 0x8]       ; 004425b4
    TEST ECX,ECX                        ; 004425b8
    JLE 0x004425d9                      ; 004425ba
        ;   XREF to: 004425d9 (CONDITIONAL_JUMP)  ; LAB_004425d9
    PUSH ESI                            ; 004425bc
    PUSH EBX                            ; 004425bd
    MOV EBX,dword ptr [EAX + 0x4]       ; 004425be
    MOV EDX,dword ptr [EAX]             ; 004425c1
    SHL EBX,CL                          ; 004425c3
    ADD EDX,ECX                         ; 004425c5
    MOV ECX,dword ptr [ESP + 0x14]      ; 004425c7
    MOV dword ptr [EAX + 0x4],EBX       ; 004425cb
    MOV ESI,EBX                         ; 004425ce
    MOV dword ptr [EAX],EDX             ; 004425d0
    OR ESI,ECX                          ; 004425d2
    MOV dword ptr [EAX + 0x4],ESI       ; 004425d4
    POP EBX                             ; 004425d7
    POP ESI                             ; 004425d8
    RET                                 ; 004425d9
        ;   Label: LAB_004425d9

