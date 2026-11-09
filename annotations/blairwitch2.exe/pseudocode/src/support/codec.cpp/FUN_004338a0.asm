; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_codec_cpp_FUN_004338a0(int *param_1,int param_2,uint param_3)
;
;
; XREF[1]:
;   support_codec.cpp_FUN_00434490 at 00434500
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004338a0
        ;   Label: support_codec.cpp_FUN_004338a0
    MOV ECX,dword ptr [ESP + 0x8]       ; 004338a4
    TEST ECX,ECX                        ; 004338a8
    JLE 0x004338c9                      ; 004338aa
        ;   XREF to: 004338c9 (CONDITIONAL_JUMP)  ; LAB_004338c9
    PUSH ESI                            ; 004338ac
    PUSH EBX                            ; 004338ad
    MOV EBX,dword ptr [EAX + 0x4]       ; 004338ae
    MOV EDX,dword ptr [EAX]             ; 004338b1
    SHL EBX,CL                          ; 004338b3
    ADD EDX,ECX                         ; 004338b5
    MOV ECX,dword ptr [ESP + 0x14]      ; 004338b7
    MOV dword ptr [EAX + 0x4],EBX       ; 004338bb
    MOV ESI,EBX                         ; 004338be
    MOV dword ptr [EAX],EDX             ; 004338c0
    OR ESI,ECX                          ; 004338c2
    MOV dword ptr [EAX + 0x4],ESI       ; 004338c4
    POP EBX                             ; 004338c7
    POP ESI                             ; 004338c8
    RET                                 ; 004338c9
        ;   Label: LAB_004338c9

