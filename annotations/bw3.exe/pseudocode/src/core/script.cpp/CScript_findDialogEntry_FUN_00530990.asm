; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_script_cpp_CScript_findDialogEntry_FUN_00530990(CScript *this_ptr,char *path)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   path
; Local Variables:
; undefined        Stack[-0x110]:1  local_110
;
; XREF[2]:
;   core_script.cpp_CScript_dbLoad_FUN_00530610 at 005307c8
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052bc53
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005a3260
;   crt_string.c_splitpath_FUN_005a5128
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00530990
        ;   Label: core_script.cpp_CScript_findDialogEntry_FUN_00530990
    PUSH ESI                            ; 00530991
    PUSH EDI                            ; 00530992
    PUSH EBP                            ; 00530993
    SUB ESP,0x100                       ; 00530994
    MOV EDI,dword ptr [ESP + 0x114]     ; 0053099a
    PUSH 0x0                            ; 005309a1
    LEA EAX,[ESP + 0x4]                 ; 005309a3
    PUSH EAX                            ; 005309a7
    PUSH 0x0                            ; 005309a8
    PUSH 0x0                            ; 005309aa
    MOV EDX,dword ptr [ESP + 0x128]     ; 005309ac
    PUSH EDX                            ; 005309b3
    XOR EBX,EBX                         ; 005309b4
    CALL crt_string.c_splitpath_FUN_005a5128 ; 005309b6
        ;   XREF to: 005a5128 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005a5128(char * path, char * drive, char * dir, char * fname, ...)
    MOV ECX,dword ptr [EDI + 0x20]      ; 005309bb
    ADD ESP,0x14                        ; 005309be
    TEST ECX,ECX                        ; 005309c1
    JLE 0x005309ea                      ; 005309c3
        ;   XREF to: 005309ea (CONDITIONAL_JUMP)  ; LAB_005309ea
    XOR ESI,ESI                         ; 005309c5
    MOV EAX,ESP                         ; 005309c7
        ;   Label: LAB_005309c7
    PUSH EAX                            ; 005309c9
    MOV EAX,dword ptr [EDI + 0x24]      ; 005309ca
    ADD EAX,ESI                         ; 005309cd
    PUSH EAX                            ; 005309cf
    CALL crt_string.c__stricmp_FUN_005a3260 ; 005309d0
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 005309d5
    TEST EAX,EAX                        ; 005309d8
    JZ 0x005309fa                       ; 005309da
        ;   XREF to: 005309fa (CONDITIONAL_JUMP)  ; LAB_005309fa
    INC EBX                             ; 005309dc
    MOV EBP,dword ptr [EDI + 0x20]      ; 005309dd
    ADD ESI,0x226                       ; 005309e0
    CMP EBX,EBP                         ; 005309e6
    JL 0x005309c7                       ; 005309e8
        ;   XREF to: 005309c7 (CONDITIONAL_JUMP)  ; LAB_005309c7
    MOV EAX,0xffffffff                  ; 005309ea
        ;   Label: LAB_005309ea
    ADD ESP,0x100                       ; 005309ef
    POP EBP                             ; 005309f5
    POP EDI                             ; 005309f6
    POP ESI                             ; 005309f7
    POP EBX                             ; 005309f8
    RET                                 ; 005309f9
    MOV EAX,EBX                         ; 005309fa
        ;   Label: LAB_005309fa
    ADD ESP,0x100                       ; 005309fc
    POP EBP                             ; 00530a02
    POP EDI                             ; 00530a03
    POP ESI                             ; 00530a04
    POP EBX                             ; 00530a05
    RET                                 ; 00530a06

