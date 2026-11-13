; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_fldnotes_cpp_SNotesMap_showAnnotation_FUN_004aa1a0(SNotesMap *this_ptr,char *name)
;
; Parameters:
; SNotesMap *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
;
; XREF[2]:
;   core_fldnotes.cpp_CFieldNotes_loadState_FUN_004ac900 at 004ace1f
;   core_fldnotes.cpp_CFieldNotes_showMapAnnotation_FUN_004ab8f0 at 004ab965
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aa1a0
        ;   Label: core_fldnotes.cpp_SNotesMap_showAnnotation_FUN_004aa1a0
    PUSH ESI                            ; 004aa1a1
    PUSH EDI                            ; 004aa1a2
    PUSH EBP                            ; 004aa1a3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004aa1a4
    MOV EDX,dword ptr [EDI + 0x5f0]     ; 004aa1a8
    XOR EBX,EBX                         ; 004aa1ae
    TEST EDX,EDX                        ; 004aa1b0
    JLE 0x004aa1e3                      ; 004aa1b2
        ;   XREF to: 004aa1e3 (CONDITIONAL_JUMP)  ; LAB_004aa1e3
    LEA ESI,[EDI + 0x5f4]               ; 004aa1b4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004aa1ba
        ;   Label: LAB_004aa1ba
    PUSH EBP                            ; 004aa1be
    IMUL EBP,EBX,0xd4                   ; 004aa1bf
    PUSH ESI                            ; 004aa1c5
    CALL crt_string.c__stricmp_FUN_005a3260 ; 004aa1c6
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aa1cb
    TEST EAX,EAX                        ; 004aa1ce
    JZ 0x004aa1ea                       ; 004aa1d0
        ;   XREF to: 004aa1ea (CONDITIONAL_JUMP)  ; LAB_004aa1ea
    INC EBX                             ; 004aa1d2
    MOV ECX,dword ptr [EDI + 0x5f0]     ; 004aa1d3
    ADD ESI,0xd4                        ; 004aa1d9
    CMP EBX,ECX                         ; 004aa1df
    JL 0x004aa1ba                       ; 004aa1e1
        ;   XREF to: 004aa1ba (CONDITIONAL_JUMP)  ; LAB_004aa1ba
    XOR EAX,EAX                         ; 004aa1e3
        ;   Label: LAB_004aa1e3
    POP EBP                             ; 004aa1e5
    POP EDI                             ; 004aa1e6
    POP ESI                             ; 004aa1e7
    POP EBX                             ; 004aa1e8
    RET                                 ; 004aa1e9
    MOV EAX,0x1                         ; 004aa1ea
        ;   Label: LAB_004aa1ea
    MOV dword ptr [EDI + EBP*0x1 + 0x6c4],0x1 ; 004aa1ef
    POP EBP                             ; 004aa1fa
    POP EDI                             ; 004aa1fb
    POP ESI                             ; 004aa1fc
    POP EBX                             ; 004aa1fd
    RET                                 ; 004aa1fe

