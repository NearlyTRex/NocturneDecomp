; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSample * __cdecl sound_sndmain_cpp_findSfxSampleByName_FUN_0054c180(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054c180
        ;   Label: sound_sndmain.cpp_findSfxSampleByName_FUN_0054c180
    PUSH ESI                            ; 0054c181
    PUSH EDI                            ; 0054c182
    MOV EDI,dword ptr [ESP + 0x10]      ; 0054c183
    MOV EBX,0x2641924                   ; 0054c187
    XOR ESI,ESI                         ; 0054c18c
    PUSH EDI                            ; 0054c18e
        ;   Label: LAB_0054c18e
    PUSH EBX                            ; 0054c18f
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0054c190
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0054c195
    TEST EAX,EAX                        ; 0054c198
    JZ 0x0054c1ae                       ; 0054c19a
        ;   XREF to: 0054c1ae (CONDITIONAL_JUMP)  ; LAB_0054c1ae
    INC ESI                             ; 0054c19c
    ADD EBX,0x1ac                       ; 0054c19d
    CMP ESI,0x40                        ; 0054c1a3
    JL 0x0054c18e                       ; 0054c1a6
        ;   XREF to: 0054c18e (CONDITIONAL_JUMP)  ; LAB_0054c18e
    XOR EAX,EAX                         ; 0054c1a8
    POP EDI                             ; 0054c1aa
    POP ESI                             ; 0054c1ab
    POP EBX                             ; 0054c1ac
    RET                                 ; 0054c1ad
    MOV EAX,EBX                         ; 0054c1ae
        ;   Label: LAB_0054c1ae
    POP EDI                             ; 0054c1b0
    POP ESI                             ; 0054c1b1
    POP EBX                             ; 0054c1b2
    RET                                 ; 0054c1b3

