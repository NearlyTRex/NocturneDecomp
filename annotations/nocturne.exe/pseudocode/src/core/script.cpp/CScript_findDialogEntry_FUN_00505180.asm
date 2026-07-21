; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_script_cpp_CScript_findDialogEntry_FUN_00505180(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x110]:1  local_110
;
; XREF[2]:
;   core_script.cpp_CScript_dbLoad_FUN_00504e70 at 00505012
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00500f12
;
; Called Functions:
;   crt_string.c__stricmp_FUN_00564520
;   crt_string.c_splitpath_FUN_00566498
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505180
        ;   Label: core_script.cpp_CScript_findDialogEntry_FUN_00505180
    PUSH ESI                            ; 00505181
    PUSH EDI                            ; 00505182
    PUSH EBP                            ; 00505183
    SUB ESP,0x100                       ; 00505184
    MOV EDI,dword ptr [ESP + 0x114]     ; 0050518a
    PUSH 0x0                            ; 00505191
    LEA EAX,[ESP + 0x4]                 ; 00505193
    PUSH EAX                            ; 00505197
    PUSH 0x0                            ; 00505198
    PUSH 0x0                            ; 0050519a
    MOV EDX,dword ptr [ESP + 0x128]     ; 0050519c
    PUSH EDX                            ; 005051a3
    XOR EBX,EBX                         ; 005051a4
    CALL crt_string.c_splitpath_FUN_00566498 ; 005051a6
        ;   XREF to: 00566498 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_splitpath_FUN_00566498()
    MOV ECX,dword ptr [EDI + 0x1c]      ; 005051ab
    ADD ESP,0x14                        ; 005051ae
    TEST ECX,ECX                        ; 005051b1
    JLE 0x005051da                      ; 005051b3
        ;   XREF to: 005051da (CONDITIONAL_JUMP)  ; LAB_005051da
    XOR ESI,ESI                         ; 005051b5
    MOV EAX,ESP                         ; 005051b7
        ;   Label: LAB_005051b7
    PUSH EAX                            ; 005051b9
    MOV EAX,dword ptr [EDI + 0x20]      ; 005051ba
    ADD EAX,ESI                         ; 005051bd
    PUSH EAX                            ; 005051bf
    CALL crt_string.c__stricmp_FUN_00564520 ; 005051c0
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 005051c5
    TEST EAX,EAX                        ; 005051c8
    JZ 0x005051ea                       ; 005051ca
        ;   XREF to: 005051ea (CONDITIONAL_JUMP)  ; LAB_005051ea
    INC EBX                             ; 005051cc
    MOV EBP,dword ptr [EDI + 0x1c]      ; 005051cd
    ADD ESI,0x226                       ; 005051d0
    CMP EBX,EBP                         ; 005051d6
    JL 0x005051b7                       ; 005051d8
        ;   XREF to: 005051b7 (CONDITIONAL_JUMP)  ; LAB_005051b7
    MOV EAX,0xffffffff                  ; 005051da
        ;   Label: LAB_005051da
    ADD ESP,0x100                       ; 005051df
    POP EBP                             ; 005051e5
    POP EDI                             ; 005051e6
    POP ESI                             ; 005051e7
    POP EBX                             ; 005051e8
    RET                                 ; 005051e9
    MOV EAX,EBX                         ; 005051ea
        ;   Label: LAB_005051ea
    ADD ESP,0x100                       ; 005051ec
    POP EBP                             ; 005051f2
    POP EDI                             ; 005051f3
    POP ESI                             ; 005051f4
    POP EBX                             ; 005051f5
    RET                                 ; 005051f6

