; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_msnedit_cpp_CDemonMission_findSetByName_FUN_00538f40(CDemonMission *this_ptr,char *set_name)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   set_name
;
; XREF[1]:
;   core_msnedit.cpp_CDemonMission_addSet_FUN_00538d60 at 00538d6c
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00538f40
        ;   Label: core_msnedit.cpp_CDemonMission_findSetByName_FUN_00538f40
    PUSH ESI                            ; 00538f41
    PUSH EDI                            ; 00538f42
    PUSH EBP                            ; 00538f43
    MOV EDI,dword ptr [ESP + 0x14]      ; 00538f44
    MOV EBP,dword ptr [ESP + 0x18]      ; 00538f48
    MOV EDX,dword ptr [EDI + 0x144]     ; 00538f4c
    XOR EBX,EBX                         ; 00538f52
    TEST EDX,EDX                        ; 00538f54
    JLE 0x00538f7d                      ; 00538f56
        ;   XREF to: 00538f7d (CONDITIONAL_JUMP)  ; LAB_00538f7d
    LEA ESI,[EDI + 0x148]               ; 00538f58
    PUSH EBP                            ; 00538f5e
        ;   Label: LAB_00538f5e
    PUSH ESI                            ; 00538f5f
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 00538f60
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00538f65
    TEST EAX,EAX                        ; 00538f68
    JZ 0x00538f87                       ; 00538f6a
        ;   XREF to: 00538f87 (CONDITIONAL_JUMP)  ; LAB_00538f87
    INC EBX                             ; 00538f6c
    MOV ECX,dword ptr [EDI + 0x144]     ; 00538f6d
    ADD ESI,0x100                       ; 00538f73
    CMP EBX,ECX                         ; 00538f79
    JL 0x00538f5e                       ; 00538f7b
        ;   XREF to: 00538f5e (CONDITIONAL_JUMP)  ; LAB_00538f5e
    MOV EAX,0xffffffff                  ; 00538f7d
        ;   Label: LAB_00538f7d
    POP EBP                             ; 00538f82
    POP EDI                             ; 00538f83
    POP ESI                             ; 00538f84
    POP EBX                             ; 00538f85
    RET                                 ; 00538f86
    MOV EAX,EBX                         ; 00538f87
        ;   Label: LAB_00538f87
    POP EBP                             ; 00538f89
    POP EDI                             ; 00538f8a
    POP ESI                             ; 00538f8b
    POP EBX                             ; 00538f8c
    RET                                 ; 00538f8d

