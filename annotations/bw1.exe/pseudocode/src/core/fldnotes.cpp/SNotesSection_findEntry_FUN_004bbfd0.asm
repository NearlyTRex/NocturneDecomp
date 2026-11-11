; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_fldnotes_cpp_SNotesSection_findEntry_FUN_004bbfd0(SNotesSection *this_ptr,char *param_2)
;
; Parameters:
; SNotesSection *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
;
; XREF[8]:
;   core_fldnotes.cpp_CFieldNotes_completeTask_FUN_004bdfa0 at 004bdfc1
;   core_fldnotes.cpp_CFieldNotes_enableEntry_FUN_004bdd00 at 004bdd21
;   core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004bcba0 at 004bd1ba
;   core_fldnotes.cpp_CFieldNotes_loadState_FUN_004bebc0 at 004bed80
;   core_fldnotes.cpp_CFieldNotes_turnToEntry_FUN_004bde80 at 004bdea1
;   core_fldnotes.cpp_FUN_004bdbf0 at 004bdc11
;   core_fldnotes.cpp_FUN_004bde20 at 004bde3d
;   unkaddr_004b9ab0.cpp_FUN_004b9db0 at 004b9dca
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bbfd0
        ;   Label: core_fldnotes.cpp_SNotesSection_findEntry_FUN_004bbfd0
    PUSH ESI                            ; 004bbfd1
    PUSH EDI                            ; 004bbfd2
    PUSH EBP                            ; 004bbfd3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004bbfd4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004bbfd8
    MOV EDX,dword ptr [EDI + 0x150]     ; 004bbfdc
    XOR ESI,ESI                         ; 004bbfe2
    TEST EDX,EDX                        ; 004bbfe4
    JLE 0x004bc00c                      ; 004bbfe6
        ;   XREF to: 004bc00c (CONDITIONAL_JUMP)  ; LAB_004bc00c
    MOV EBX,EDI                         ; 004bbfe8
    PUSH EBP                            ; 004bbfea
        ;   Label: LAB_004bbfea
    MOV EAX,dword ptr [EBX + 0x154]     ; 004bbfeb
    PUSH EAX                            ; 004bbff1
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004bbff2
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004bbff7
    TEST EAX,EAX                        ; 004bbffa
    JZ 0x004bc013                       ; 004bbffc
        ;   XREF to: 004bc013 (CONDITIONAL_JUMP)  ; LAB_004bc013
    INC ESI                             ; 004bbffe
    MOV ECX,dword ptr [EDI + 0x150]     ; 004bbfff
    ADD EBX,0x4                         ; 004bc005
    CMP ESI,ECX                         ; 004bc008
    JL 0x004bbfea                       ; 004bc00a
        ;   XREF to: 004bbfea (CONDITIONAL_JUMP)  ; LAB_004bbfea
    XOR EAX,EAX                         ; 004bc00c
        ;   Label: LAB_004bc00c
    POP EBP                             ; 004bc00e
    POP EDI                             ; 004bc00f
    POP ESI                             ; 004bc010
    POP EBX                             ; 004bc011
    RET                                 ; 004bc012
    MOV EAX,dword ptr [EBX + 0x154]     ; 004bc013
        ;   Label: LAB_004bc013
    POP EBP                             ; 004bc019
    POP EDI                             ; 004bc01a
    POP ESI                             ; 004bc01b
    POP EBX                             ; 004bc01c
    RET                                 ; 004bc01d

