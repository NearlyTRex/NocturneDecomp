; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_fldnotes_cpp_SNotesMap_showAnnotation_FUN_004bc540(SNotesMap *this_ptr,char *name)
;
; Parameters:
; SNotesMap *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
;
; XREF[2]:
;   core_fldnotes.cpp_CFieldNotes_loadState_FUN_004bebc0 at 004bf0df
;   core_fldnotes.cpp_CFieldNotes_showMapAnnotation_FUN_004bdbf0 at 004bdc53
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bc540
        ;   Label: core_fldnotes.cpp_SNotesMap_showAnnotation_FUN_004bc540
    PUSH ESI                            ; 004bc541
    PUSH EDI                            ; 004bc542
    PUSH EBP                            ; 004bc543
    MOV EDI,dword ptr [ESP + 0x14]      ; 004bc544
    MOV EDX,dword ptr [EDI + 0x2c0]     ; 004bc548
    XOR EBX,EBX                         ; 004bc54e
    TEST EDX,EDX                        ; 004bc550
    JLE 0x004bc583                      ; 004bc552
        ;   XREF to: 004bc583 (CONDITIONAL_JUMP)  ; LAB_004bc583
    LEA ESI,[EDI + 0x2c4]               ; 004bc554
    MOV EBP,dword ptr [ESP + 0x18]      ; 004bc55a
        ;   Label: LAB_004bc55a
    PUSH EBP                            ; 004bc55e
    IMUL EBP,EBX,0xd4                   ; 004bc55f
    PUSH ESI                            ; 004bc565
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004bc566
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004bc56b
    TEST EAX,EAX                        ; 004bc56e
    JZ 0x004bc58a                       ; 004bc570
        ;   XREF to: 004bc58a (CONDITIONAL_JUMP)  ; LAB_004bc58a
    INC EBX                             ; 004bc572
    MOV ECX,dword ptr [EDI + 0x2c0]     ; 004bc573
    ADD ESI,0xd4                        ; 004bc579
    CMP EBX,ECX                         ; 004bc57f
    JL 0x004bc55a                       ; 004bc581
        ;   XREF to: 004bc55a (CONDITIONAL_JUMP)  ; LAB_004bc55a
    XOR EAX,EAX                         ; 004bc583
        ;   Label: LAB_004bc583
    POP EBP                             ; 004bc585
    POP EDI                             ; 004bc586
    POP ESI                             ; 004bc587
    POP EBX                             ; 004bc588
    RET                                 ; 004bc589
    MOV EAX,0x1                         ; 004bc58a
        ;   Label: LAB_004bc58a
    MOV dword ptr [EDI + EBP*0x1 + 0x394],0x1 ; 004bc58f
    POP EBP                             ; 004bc59a
    POP EDI                             ; 004bc59b
    POP ESI                             ; 004bc59c
    POP EBX                             ; 004bc59d
    RET                                 ; 004bc59e

