; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_findSfxEntry_FUN_004aa3b0(CEventList *this_ptr,char *name)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
;
; XREF[2]:
;   core_event.cpp_CEventList_getSfxHandle_FUN_004aa290 at 004aa2a4
;   core_event.cpp_CEventList_setSfxHandle_FUN_004aa2d0 at 004aa2e7
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aa3b0
        ;   Label: core_event.cpp_CEventList_findSfxEntry_FUN_004aa3b0
    PUSH ESI                            ; 004aa3b1
    PUSH EDI                            ; 004aa3b2
    PUSH EBP                            ; 004aa3b3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004aa3b4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004aa3b8
    MOV EDX,dword ptr [EDI + 0x3ac8]    ; 004aa3bc
    XOR EBX,EBX                         ; 004aa3c2
    TEST EDX,EDX                        ; 004aa3c4
    JLE 0x004aa3ed                      ; 004aa3c6
        ;   XREF to: 004aa3ed (CONDITIONAL_JUMP)  ; LAB_004aa3ed
    LEA ESI,[EDI + 0x3ad0]              ; 004aa3c8
    PUSH EBP                            ; 004aa3ce
        ;   Label: LAB_004aa3ce
    PUSH ESI                            ; 004aa3cf
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004aa3d0
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aa3d5
    TEST EAX,EAX                        ; 004aa3d8
    JZ 0x004aa3f7                       ; 004aa3da
        ;   XREF to: 004aa3f7 (CONDITIONAL_JUMP)  ; LAB_004aa3f7
    INC EBX                             ; 004aa3dc
    MOV ECX,dword ptr [EDI + 0x3ac8]    ; 004aa3dd
    ADD ESI,0x120                       ; 004aa3e3
    CMP EBX,ECX                         ; 004aa3e9
    JL 0x004aa3ce                       ; 004aa3eb
        ;   XREF to: 004aa3ce (CONDITIONAL_JUMP)  ; LAB_004aa3ce
    MOV EAX,0xffffffff                  ; 004aa3ed
        ;   Label: LAB_004aa3ed
    POP EBP                             ; 004aa3f2
    POP EDI                             ; 004aa3f3
    POP ESI                             ; 004aa3f4
    POP EBX                             ; 004aa3f5
    RET                                 ; 004aa3f6
    MOV EAX,EBX                         ; 004aa3f7
        ;   Label: LAB_004aa3f7
    POP EBP                             ; 004aa3f9
    POP EDI                             ; 004aa3fa
    POP ESI                             ; 004aa3fb
    POP EBX                             ; 004aa3fc
    RET                                 ; 004aa3fd

