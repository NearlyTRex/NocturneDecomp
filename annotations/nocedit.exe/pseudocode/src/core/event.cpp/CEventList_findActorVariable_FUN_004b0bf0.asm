; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_findActorVariable_FUN_004b0bf0(CEventList *this_ptr,char *name)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
;
; XREF[2]:
;   core_event.cpp_CEventList_getActorByVarName_FUN_004b0b80 at 004b0b8e
;   core_event.cpp_CEventList_setActorVariable_FUN_004b09a0 at 004b09ed
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0bf0
        ;   Label: core_event.cpp_CEventList_findActorVariable_FUN_004b0bf0
    PUSH ESI                            ; 004b0bf1
    PUSH EDI                            ; 004b0bf2
    PUSH EBP                            ; 004b0bf3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004b0bf4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004b0bf8
    MOV EDX,dword ptr [EDI + 0x34e8]    ; 004b0bfc
    XOR EBX,EBX                         ; 004b0c02
    TEST EDX,EDX                        ; 004b0c04
    JLE 0x004b0c2a                      ; 004b0c06
        ;   XREF to: 004b0c2a (CONDITIONAL_JUMP)  ; LAB_004b0c2a
    LEA ESI,[EDI + 0x34ec]              ; 004b0c08
    PUSH EBP                            ; 004b0c0e
        ;   Label: LAB_004b0c0e
    PUSH ESI                            ; 004b0c0f
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004b0c10
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004b0c15
    TEST EAX,EAX                        ; 004b0c18
    JZ 0x004b0c34                       ; 004b0c1a
        ;   XREF to: 004b0c34 (CONDITIONAL_JUMP)  ; LAB_004b0c34
    INC EBX                             ; 004b0c1c
    MOV ECX,dword ptr [EDI + 0x34e8]    ; 004b0c1d
    ADD ESI,0x1e                        ; 004b0c23
    CMP EBX,ECX                         ; 004b0c26
    JL 0x004b0c0e                       ; 004b0c28
        ;   XREF to: 004b0c0e (CONDITIONAL_JUMP)  ; LAB_004b0c0e
    MOV EAX,0xffffffff                  ; 004b0c2a
        ;   Label: LAB_004b0c2a
    POP EBP                             ; 004b0c2f
    POP EDI                             ; 004b0c30
    POP ESI                             ; 004b0c31
    POP EBX                             ; 004b0c32
    RET                                 ; 004b0c33
    MOV EAX,EBX                         ; 004b0c34
        ;   Label: LAB_004b0c34
    POP EBP                             ; 004b0c36
    POP EDI                             ; 004b0c37
    POP ESI                             ; 004b0c38
    POP EBX                             ; 004b0c39
    RET                                 ; 004b0c3a

