; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSample * __cdecl sound_sndmain_cpp_findSfxSampleByName_FUN_0056e7f0(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e7f0
        ;   Label: sound_sndmain.cpp_findSfxSampleByName_FUN_0056e7f0
    PUSH ESI                            ; 0056e7f1
    PUSH EDI                            ; 0056e7f2
    MOV EDI,dword ptr [ESP + 0x10]      ; 0056e7f3
    MOV EBX,0x2c78ff4                   ; 0056e7f7
    XOR ESI,ESI                         ; 0056e7fc
    PUSH EDI                            ; 0056e7fe
        ;   Label: LAB_0056e7fe
    PUSH EBX                            ; 0056e7ff
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0056e800
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0056e805
    TEST EAX,EAX                        ; 0056e808
    JZ 0x0056e81e                       ; 0056e80a
        ;   XREF to: 0056e81e (CONDITIONAL_JUMP)  ; LAB_0056e81e
    INC ESI                             ; 0056e80c
    ADD EBX,0x1b0                       ; 0056e80d
    CMP ESI,0x40                        ; 0056e813
    JL 0x0056e7fe                       ; 0056e816
        ;   XREF to: 0056e7fe (CONDITIONAL_JUMP)  ; LAB_0056e7fe
    XOR EAX,EAX                         ; 0056e818
    POP EDI                             ; 0056e81a
    POP ESI                             ; 0056e81b
    POP EBX                             ; 0056e81c
    RET                                 ; 0056e81d
    MOV EAX,EBX                         ; 0056e81e
        ;   Label: LAB_0056e81e
    POP EDI                             ; 0056e820
    POP ESI                             ; 0056e821
    POP EBX                             ; 0056e822
    RET                                 ; 0056e823

