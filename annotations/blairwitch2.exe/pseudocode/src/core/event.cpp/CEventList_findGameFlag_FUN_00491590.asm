; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_findGameFlag_FUN_00491590(CEventList *this_ptr,char *name)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
;
; XREF[2]:
;   core_event.cpp_CEventList_resolveVariable_FUN_0048e2b0 at 0048e316
;   core_event.cpp_FUN_00491110 at 0049112a
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00491590
        ;   Label: core_event.cpp_CEventList_findGameFlag_FUN_00491590
    PUSH ESI                            ; 00491591
    PUSH EDI                            ; 00491592
    PUSH EBP                            ; 00491593
    MOV EDI,dword ptr [ESP + 0x14]      ; 00491594
    MOV EBP,dword ptr [ESP + 0x18]      ; 00491598
    MOV EDX,dword ptr [EDI + 0x1908]    ; 0049159c
    XOR EBX,EBX                         ; 004915a2
    TEST EDX,EDX                        ; 004915a4
    JLE 0x004915ca                      ; 004915a6
        ;   XREF to: 004915ca (CONDITIONAL_JUMP)  ; LAB_004915ca
    LEA ESI,[EDI + 0x190c]              ; 004915a8
    PUSH EBP                            ; 004915ae
        ;   Label: LAB_004915ae
    PUSH ESI                            ; 004915af
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004915b0
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004915b5
    TEST EAX,EAX                        ; 004915b8
    JZ 0x004915d4                       ; 004915ba
        ;   XREF to: 004915d4 (CONDITIONAL_JUMP)  ; LAB_004915d4
    INC EBX                             ; 004915bc
    MOV ECX,dword ptr [EDI + 0x1908]    ; 004915bd
    ADD ESI,0x20                        ; 004915c3
    CMP EBX,ECX                         ; 004915c6
    JL 0x004915ae                       ; 004915c8
        ;   XREF to: 004915ae (CONDITIONAL_JUMP)  ; LAB_004915ae
    MOV EAX,0xffffffff                  ; 004915ca
        ;   Label: LAB_004915ca
    POP EBP                             ; 004915cf
    POP EDI                             ; 004915d0
    POP ESI                             ; 004915d1
    POP EBX                             ; 004915d2
    RET                                 ; 004915d3
    MOV EAX,EBX                         ; 004915d4
        ;   Label: LAB_004915d4
    POP EBP                             ; 004915d6
    POP EDI                             ; 004915d7
    POP ESI                             ; 004915d8
    POP EBX                             ; 004915d9
    RET                                 ; 004915da

