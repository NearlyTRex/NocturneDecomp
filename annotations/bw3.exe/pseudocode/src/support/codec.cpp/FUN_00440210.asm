; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_codec_cpp_FUN_00440210(int *param_1,int param_2,uint param_3)
;
;
; XREF[1]:
;   support_codec.cpp_FUN_00440e10 at 00440e80
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00440210
        ;   Label: support_codec.cpp_FUN_00440210
    MOV ECX,dword ptr [ESP + 0x8]       ; 00440214
    TEST ECX,ECX                        ; 00440218
    JLE 0x00440239                      ; 0044021a
        ;   XREF to: 00440239 (CONDITIONAL_JUMP)  ; LAB_00440239
    PUSH ESI                            ; 0044021c
    PUSH EBX                            ; 0044021d
    MOV EBX,dword ptr [EAX + 0x4]       ; 0044021e
    MOV EDX,dword ptr [EAX]             ; 00440221
    SHL EBX,CL                          ; 00440223
    ADD EDX,ECX                         ; 00440225
    MOV ECX,dword ptr [ESP + 0x14]      ; 00440227
    MOV dword ptr [EAX + 0x4],EBX       ; 0044022b
    MOV ESI,EBX                         ; 0044022e
    MOV dword ptr [EAX],EDX             ; 00440230
    OR ESI,ECX                          ; 00440232
    MOV dword ptr [EAX + 0x4],ESI       ; 00440234
    POP EBX                             ; 00440237
    POP ESI                             ; 00440238
    RET                                 ; 00440239
        ;   Label: LAB_00440239

