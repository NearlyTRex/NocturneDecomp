; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_script_cpp_CScript_findDialogEntry_FUN_0054b2a0(CScript *this_ptr,char *path)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   path
; Local Variables:
; undefined        Stack[-0x110]:1  local_110
;
; XREF[2]:
;   core_script.cpp_CScript_dbLoad_FUN_0054af20 at 0054b0d8
;   core_script.cpp_CScript_step_FUN_00544460 at 0054656c
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005c04e0
;   crt_string.c_splitpath_FUN_005c2238
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054b2a0
        ;   Label: core_script.cpp_CScript_findDialogEntry_FUN_0054b2a0
    PUSH ESI                            ; 0054b2a1
    PUSH EDI                            ; 0054b2a2
    PUSH EBP                            ; 0054b2a3
    SUB ESP,0x100                       ; 0054b2a4
    MOV EDI,dword ptr [ESP + 0x114]     ; 0054b2aa
    PUSH 0x0                            ; 0054b2b1
    LEA EAX,[ESP + 0x4]                 ; 0054b2b3
    PUSH EAX                            ; 0054b2b7
    PUSH 0x0                            ; 0054b2b8
    PUSH 0x0                            ; 0054b2ba
    MOV EDX,dword ptr [ESP + 0x128]     ; 0054b2bc
    PUSH EDX                            ; 0054b2c3
    XOR EBX,EBX                         ; 0054b2c4
    CALL crt_string.c_splitpath_FUN_005c2238 ; 0054b2c6
        ;   XREF to: 005c2238 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005c2238(char * path, char * drive, char * dir, char * fname, ...)
    MOV ECX,dword ptr [EDI + 0x20]      ; 0054b2cb
    ADD ESP,0x14                        ; 0054b2ce
    TEST ECX,ECX                        ; 0054b2d1
    JLE 0x0054b2fa                      ; 0054b2d3
        ;   XREF to: 0054b2fa (CONDITIONAL_JUMP)  ; LAB_0054b2fa
    XOR ESI,ESI                         ; 0054b2d5
    MOV EAX,ESP                         ; 0054b2d7
        ;   Label: LAB_0054b2d7
    PUSH EAX                            ; 0054b2d9
    MOV EAX,dword ptr [EDI + 0x24]      ; 0054b2da
    ADD EAX,ESI                         ; 0054b2dd
    PUSH EAX                            ; 0054b2df
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0054b2e0
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0054b2e5
    TEST EAX,EAX                        ; 0054b2e8
    JZ 0x0054b30a                       ; 0054b2ea
        ;   XREF to: 0054b30a (CONDITIONAL_JUMP)  ; LAB_0054b30a
    INC EBX                             ; 0054b2ec
    MOV EBP,dword ptr [EDI + 0x20]      ; 0054b2ed
    ADD ESI,0x226                       ; 0054b2f0
    CMP EBX,EBP                         ; 0054b2f6
    JL 0x0054b2d7                       ; 0054b2f8
        ;   XREF to: 0054b2d7 (CONDITIONAL_JUMP)  ; LAB_0054b2d7
    MOV EAX,0xffffffff                  ; 0054b2fa
        ;   Label: LAB_0054b2fa
    ADD ESP,0x100                       ; 0054b2ff
    POP EBP                             ; 0054b305
    POP EDI                             ; 0054b306
    POP ESI                             ; 0054b307
    POP EBX                             ; 0054b308
    RET                                 ; 0054b309
    MOV EAX,EBX                         ; 0054b30a
        ;   Label: LAB_0054b30a
    ADD ESP,0x100                       ; 0054b30c
    POP EBP                             ; 0054b312
    POP EDI                             ; 0054b313
    POP ESI                             ; 0054b314
    POP EBX                             ; 0054b315
    RET                                 ; 0054b316

