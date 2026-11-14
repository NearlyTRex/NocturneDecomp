; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSample * __cdecl sound_sndmain_cpp_findFreeSfxSample_FUN_0054b8f0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02641920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054b8f0
        ;   Label: sound_sndmain.cpp_findFreeSfxSample_FUN_0054b8f0
    PUSH ESI                            ; 0054b8f1
    PUSH EDI                            ; 0054b8f2
    PUSH EBP                            ; 0054b8f3
    MOV EDX,dword ptr [0x02641920]      ; 0054b8f4 | DAT_02641920
    XOR ECX,ECX                         ; 0054b8fa
    XOR EBX,EBX                         ; 0054b8fc
    INC EDX                             ; 0054b8fe
        ;   Label: LAB_0054b8fe
    CMP EDX,0x40                        ; 0054b8ff
    JL 0x0054b906                       ; 0054b902
        ;   XREF to: 0054b906 (CONDITIONAL_JUMP)  ; LAB_0054b906
    MOV EDX,EBX                         ; 0054b904
    IMUL EAX,EDX,0x1ac                  ; 0054b906
        ;   Label: LAB_0054b906
    MOV ESI,dword ptr [EAX + 0x2641a74] ; 0054b90c
    CMP EBX,ESI                         ; 0054b912
    JZ 0x0054b929                       ; 0054b914
        ;   XREF to: 0054b929 (CONDITIONAL_JUMP)  ; LAB_0054b929
    INC ECX                             ; 0054b916
        ;   Label: LAB_0054b916
    CMP ECX,0x40                        ; 0054b917
    JL 0x0054b8fe                       ; 0054b91a
        ;   XREF to: 0054b8fe (CONDITIONAL_JUMP)  ; LAB_0054b8fe
    XOR EAX,EAX                         ; 0054b91c
    MOV dword ptr [0x02641920],EDX      ; 0054b91e | DAT_02641920
    POP EBP                             ; 0054b924
    POP EDI                             ; 0054b925
    POP ESI                             ; 0054b926
    POP EBX                             ; 0054b927
    RET                                 ; 0054b928
    MOV EDI,dword ptr [EAX + 0x2641a78] ; 0054b929
        ;   Label: LAB_0054b929
    CMP ESI,EDI                         ; 0054b92f
    JNZ 0x0054b916                      ; 0054b931
        ;   XREF to: 0054b916 (CONDITIONAL_JUMP)  ; LAB_0054b916
    MOV EBP,dword ptr [EAX + 0x2641a80] ; 0054b933
    CMP EDI,EBP                         ; 0054b939
    JNZ 0x0054b916                      ; 0054b93b
        ;   XREF to: 0054b916 (CONDITIONAL_JUMP)  ; LAB_0054b916
    CMP EBP,dword ptr [EAX + 0x2641acc] ; 0054b93d
    JNZ 0x0054b916                      ; 0054b943
        ;   XREF to: 0054b916 (CONDITIONAL_JUMP)  ; LAB_0054b916
    ADD EAX,0x2641924                   ; 0054b945
    MOV dword ptr [0x02641920],EDX      ; 0054b94a | DAT_02641920
    POP EBP                             ; 0054b950
    POP EDI                             ; 0054b951
    POP ESI                             ; 0054b952
    POP EBX                             ; 0054b953
    RET                                 ; 0054b954

