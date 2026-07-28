; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_findSfxEntry_FUN_00480d10(CEventList *this_ptr,char *name)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
;
; XREF[2]:
;   core_event.cpp_CEventList_getSfxHandle_FUN_00480bf0 at 00480c04
;   core_event.cpp_CEventList_setSfxHandle_FUN_00480c30 at 00480c47
;
; Called Functions:
;   crt_string.c__stricmp_FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480d10
        ;   Label: core_event.cpp_CEventList_findSfxEntry_FUN_00480d10
    PUSH ESI                            ; 00480d11
    PUSH EDI                            ; 00480d12
    PUSH EBP                            ; 00480d13
    MOV EDI,dword ptr [ESP + 0x14]      ; 00480d14
    MOV EBP,dword ptr [ESP + 0x18]      ; 00480d18
    MOV EDX,dword ptr [EDI + 0x3ac8]    ; 00480d1c
    XOR EBX,EBX                         ; 00480d22
    TEST EDX,EDX                        ; 00480d24
    JLE 0x00480d4d                      ; 00480d26
        ;   XREF to: 00480d4d (CONDITIONAL_JUMP)  ; LAB_00480d4d
    LEA ESI,[EDI + 0x3ad0]              ; 00480d28
    PUSH EBP                            ; 00480d2e
        ;   Label: LAB_00480d2e
    PUSH ESI                            ; 00480d2f
    CALL crt_string.c__stricmp_FUN_00564520 ; 00480d30
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 00480d35
    TEST EAX,EAX                        ; 00480d38
    JZ 0x00480d57                       ; 00480d3a
        ;   XREF to: 00480d57 (CONDITIONAL_JUMP)  ; LAB_00480d57
    INC EBX                             ; 00480d3c
    MOV ECX,dword ptr [EDI + 0x3ac8]    ; 00480d3d
    ADD ESI,0x120                       ; 00480d43
    CMP EBX,ECX                         ; 00480d49
    JL 0x00480d2e                       ; 00480d4b
        ;   XREF to: 00480d2e (CONDITIONAL_JUMP)  ; LAB_00480d2e
    MOV EAX,0xffffffff                  ; 00480d4d
        ;   Label: LAB_00480d4d
    POP EBP                             ; 00480d52
    POP EDI                             ; 00480d53
    POP ESI                             ; 00480d54
    POP EBX                             ; 00480d55
    RET                                 ; 00480d56
    MOV EAX,EBX                         ; 00480d57
        ;   Label: LAB_00480d57
    POP EBP                             ; 00480d59
    POP EDI                             ; 00480d5a
    POP ESI                             ; 00480d5b
    POP EBX                             ; 00480d5c
    RET                                 ; 00480d5d

