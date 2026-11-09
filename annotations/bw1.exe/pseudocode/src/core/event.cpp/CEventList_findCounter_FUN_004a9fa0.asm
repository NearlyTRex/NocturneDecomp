; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_findCounter_FUN_004a9fa0(CEventList *this_ptr,char *name)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
;
; XREF[2]:
;   core_event.cpp_CEventList_getCounterValue_FUN_004a9e80 at 004a9e8a
;   core_event.cpp_CEventList_setCounter_FUN_004a9d70 at 004a9d82
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9fa0
        ;   Label: core_event.cpp_CEventList_findCounter_FUN_004a9fa0
    PUSH ESI                            ; 004a9fa1
    PUSH EDI                            ; 004a9fa2
    PUSH EBP                            ; 004a9fa3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004a9fa4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004a9fa8
    MOV EDX,dword ptr [EDI + 0x337c]    ; 004a9fac
    XOR EBX,EBX                         ; 004a9fb2
    TEST EDX,EDX                        ; 004a9fb4
    JLE 0x004a9fda                      ; 004a9fb6
        ;   XREF to: 004a9fda (CONDITIONAL_JUMP)  ; LAB_004a9fda
    LEA ESI,[EDI + 0x3380]              ; 004a9fb8
    PUSH EBP                            ; 004a9fbe
        ;   Label: LAB_004a9fbe
    PUSH ESI                            ; 004a9fbf
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a9fc0
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a9fc5
    TEST EAX,EAX                        ; 004a9fc8
    JZ 0x004a9fe4                       ; 004a9fca
        ;   XREF to: 004a9fe4 (CONDITIONAL_JUMP)  ; LAB_004a9fe4
    INC EBX                             ; 004a9fcc
    MOV ECX,dword ptr [EDI + 0x337c]    ; 004a9fcd
    ADD ESI,0x20                        ; 004a9fd3
    CMP EBX,ECX                         ; 004a9fd6
    JL 0x004a9fbe                       ; 004a9fd8
        ;   XREF to: 004a9fbe (CONDITIONAL_JUMP)  ; LAB_004a9fbe
    MOV EAX,0xffffffff                  ; 004a9fda
        ;   Label: LAB_004a9fda
    POP EBP                             ; 004a9fdf
    POP EDI                             ; 004a9fe0
    POP ESI                             ; 004a9fe1
    POP EBX                             ; 004a9fe2
    RET                                 ; 004a9fe3
    MOV EAX,EBX                         ; 004a9fe4
        ;   Label: LAB_004a9fe4
    POP EBP                             ; 004a9fe6
    POP EDI                             ; 004a9fe7
    POP ESI                             ; 004a9fe8
    POP EBX                             ; 004a9fe9
    RET                                 ; 004a9fea

