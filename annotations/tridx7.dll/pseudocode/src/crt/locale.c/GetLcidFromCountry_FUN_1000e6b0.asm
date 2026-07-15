; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl crt_locale_c_GetLcidFromCountry_FUN_1000e6b0(char *country)
;
; Parameters:
; char *           Stack[0x4]:4   country
;
; XREF[1]:
;   crt_locale.c___get_qualified_locale_FUN_1000e350 at 1000e3d8
;
; Referenced Globals:
;   TerminatedCString s_italy_100128c4
;   TerminatedCString s_england_10012944
;   void* PTR_s_england_10012944_10017d28 = 10012944
;   void* PTR_s_italy_100128c4_10017dd8 = 100128c4
;   undefined2 DAT_10017ddc
;
; Called Functions:
;   crt_string.c__stricmp_FUN_1000ff20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 1000e6b0
        ;   Label: crt_locale.c_GetLcidFromCountry_FUN_1000e6b0
    PUSH ESI                            ; 1000e6b1
    PUSH EDI                            ; 1000e6b2
    MOV EBX,0x57                        ; 1000e6b3
    PUSH EBP                            ; 1000e6b8
    XOR EDI,EDI                         ; 1000e6b9
    MOV ESI,dword ptr [ESP + 0x14]      ; 1000e6bb
    LEA EAX,[EDI + EBX*0x1]             ; 1000e6bf
        ;   Label: LAB_1000e6bf
    CDQ                                 ; 1000e6c2
    SUB EAX,EDX                         ; 1000e6c3
    SAR EAX,0x1                         ; 1000e6c5
    MOV EBP,EAX                         ; 1000e6c8
    MOV EAX,dword ptr [EAX*0x8 + 0x10017c80] ; 1000e6ca | PTR_s_italy_100128c4_10017dd8 | PTR_s_england_10012944_10017d28
    PUSH EAX                            ; 1000e6d1 | = "italy" | s_england_10012944
    PUSH ESI                            ; 1000e6d2
    CALL crt_string.c__stricmp_FUN_1000ff20 ; 1000e6d3
        ;   XREF to: 1000ff20 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_1000ff20(char * str1, char * str2)
    ADD ESP,0x8                         ; 1000e6d8
    TEST EAX,EAX                        ; 1000e6db
    JZ 0x1000e6f8                       ; 1000e6dd
        ;   XREF to: 1000e6f8 (CONDITIONAL_JUMP)  ; LAB_1000e6f8
    JGE 0x1000e6e5                      ; 1000e6df
        ;   XREF to: 1000e6e5 (CONDITIONAL_JUMP)  ; LAB_1000e6e5
    MOV EBX,EBP                         ; 1000e6e1
    JMP 0x1000e6e7                      ; 1000e6e3
        ;   XREF to: 1000e6e7 (UNCONDITIONAL_JUMP)  ; LAB_1000e6e7
    MOV EDI,EBP                         ; 1000e6e5
        ;   Label: LAB_1000e6e5
    MOV EAX,EDI                         ; 1000e6e7
        ;   Label: LAB_1000e6e7
    SUB EAX,EBX                         ; 1000e6e9
    CMP EAX,-0x1                        ; 1000e6eb
    JNZ 0x1000e6bf                      ; 1000e6ee
        ;   XREF to: 1000e6bf (CONDITIONAL_JUMP)  ; LAB_1000e6bf
    XOR AX,AX                           ; 1000e6f0
    POP EBP                             ; 1000e6f3
    POP EDI                             ; 1000e6f4
    POP ESI                             ; 1000e6f5
    POP EBX                             ; 1000e6f6
    RET                                 ; 1000e6f7
    MOV AX,word ptr [EBP*0x8 + 0x10017c84] ; 1000e6f8 | DAT_10017ddc
        ;   Label: LAB_1000e6f8
    POP EBP                             ; 1000e700
    POP EDI                             ; 1000e701
    POP ESI                             ; 1000e702
    POP EBX                             ; 1000e703
    RET                                 ; 1000e704

