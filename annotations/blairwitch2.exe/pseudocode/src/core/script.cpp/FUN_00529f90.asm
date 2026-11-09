; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_script_cpp_FUN_00529f90(CScript *this_ptr,char *path)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   path
; Local Variables:
; undefined        Stack[-0x110]:1  local_110
;
; XREF[2]:
;   core_script.cpp_CScript_dbLoad_FUN_00529c10 at 00529dc8
;   core_script.cpp_FUN_00522350 at 005246b7
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005b8130
;   crt_string.c_splitpath_FUN_005b9e58
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00529f90
        ;   Label: core_script.cpp_FUN_00529f90
    PUSH ESI                            ; 00529f91
    PUSH EDI                            ; 00529f92
    PUSH EBP                            ; 00529f93
    SUB ESP,0x100                       ; 00529f94
    MOV EDI,dword ptr [ESP + 0x114]     ; 00529f9a
    PUSH 0x0                            ; 00529fa1
    LEA EAX,[ESP + 0x4]                 ; 00529fa3
    PUSH EAX                            ; 00529fa7
    PUSH 0x0                            ; 00529fa8
    PUSH 0x0                            ; 00529faa
    MOV EDX,dword ptr [ESP + 0x128]     ; 00529fac
    PUSH EDX                            ; 00529fb3
    XOR EBX,EBX                         ; 00529fb4
    CALL crt_string.c_splitpath_FUN_005b9e58 ; 00529fb6
        ;   XREF to: 005b9e58 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005b9e58(char * path, char * drive, char * dir, char * fname, ...)
    MOV ECX,dword ptr [EDI + 0x20]      ; 00529fbb
    ADD ESP,0x14                        ; 00529fbe
    TEST ECX,ECX                        ; 00529fc1
    JLE 0x00529fea                      ; 00529fc3
        ;   XREF to: 00529fea (CONDITIONAL_JUMP)  ; LAB_00529fea
    XOR ESI,ESI                         ; 00529fc5
    MOV EAX,ESP                         ; 00529fc7
        ;   Label: LAB_00529fc7
    PUSH EAX                            ; 00529fc9
    MOV EAX,dword ptr [EDI + 0x24]      ; 00529fca
    ADD EAX,ESI                         ; 00529fcd
    PUSH EAX                            ; 00529fcf
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00529fd0
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00529fd5
    TEST EAX,EAX                        ; 00529fd8
    JZ 0x00529ffa                       ; 00529fda
        ;   XREF to: 00529ffa (CONDITIONAL_JUMP)  ; LAB_00529ffa
    INC EBX                             ; 00529fdc
    MOV EBP,dword ptr [EDI + 0x20]      ; 00529fdd
    ADD ESI,0x226                       ; 00529fe0
    CMP EBX,EBP                         ; 00529fe6
    JL 0x00529fc7                       ; 00529fe8
        ;   XREF to: 00529fc7 (CONDITIONAL_JUMP)  ; LAB_00529fc7
    MOV EAX,0xffffffff                  ; 00529fea
        ;   Label: LAB_00529fea
    ADD ESP,0x100                       ; 00529fef
    POP EBP                             ; 00529ff5
    POP EDI                             ; 00529ff6
    POP ESI                             ; 00529ff7
    POP EBX                             ; 00529ff8
    RET                                 ; 00529ff9
    MOV EAX,EBX                         ; 00529ffa
        ;   Label: LAB_00529ffa
    ADD ESP,0x100                       ; 00529ffc
    POP EBP                             ; 0052a002
    POP EDI                             ; 0052a003
    POP ESI                             ; 0052a004
    POP EBX                             ; 0052a005
    RET                                 ; 0052a006

