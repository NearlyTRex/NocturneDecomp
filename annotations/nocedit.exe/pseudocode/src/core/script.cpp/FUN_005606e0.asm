; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_script.cpp_FUN_005606e0()
;
; Local Variables:
; undefined1       Stack[-0x110]:1  local_110
;
; XREF[2]:
;   core_script.cpp_CScript_dbLoad_FUN_005603c0 at 00560562
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055c462
;
; Called Functions:
;   crt_string.c_splitpath_FUN_005ff178
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005606e0
        ;   Label: core_script.cpp_FUN_005606e0
    PUSH ESI                            ; 005606e1
    PUSH EDI                            ; 005606e2
    PUSH EBP                            ; 005606e3
    SUB ESP,0x100                       ; 005606e4
    MOV EDI,dword ptr [ESP + 0x114]     ; 005606ea
    PUSH 0x0                            ; 005606f1
    LEA EAX,[ESP + 0x4]                 ; 005606f3
    PUSH EAX                            ; 005606f7
    PUSH 0x0                            ; 005606f8
    PUSH 0x0                            ; 005606fa
    MOV EDX,dword ptr [ESP + 0x128]     ; 005606fc
    PUSH EDX                            ; 00560703
    XOR EBX,EBX                         ; 00560704
    CALL crt_string.c_splitpath_FUN_005ff178 ; 00560706 | void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [EDI + 0x1c]      ; 0056070b
    ADD ESP,0x14                        ; 0056070e
    TEST ECX,ECX                        ; 00560711
    JLE 0x0056073a                      ; 00560713 | LAB_0056073a
        ;   XREF to: 0056073a (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 00560715
    MOV EAX,ESP                         ; 00560717
        ;   Label: LAB_00560717
    PUSH EAX                            ; 00560719
    MOV EAX,dword ptr [EDI + 0x20]      ; 0056071a
    ADD EAX,ESI                         ; 0056071d
    PUSH EAX                            ; 0056071f
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 00560720 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00560725
    TEST EAX,EAX                        ; 00560728
    JZ 0x0056074a                       ; 0056072a | LAB_0056074a
        ;   XREF to: 0056074a (CONDITIONAL_JUMP)
    INC EBX                             ; 0056072c
    MOV EBP,dword ptr [EDI + 0x1c]      ; 0056072d
    ADD ESI,0x226                       ; 00560730
    CMP EBX,EBP                         ; 00560736
    JL 0x00560717                       ; 00560738 | LAB_00560717
        ;   XREF to: 00560717 (CONDITIONAL_JUMP)
    MOV EAX,0xffffffff                  ; 0056073a
        ;   Label: LAB_0056073a
    ADD ESP,0x100                       ; 0056073f
    POP EBP                             ; 00560745
    POP EDI                             ; 00560746
    POP ESI                             ; 00560747
    POP EBX                             ; 00560748
    RET                                 ; 00560749
    MOV EAX,EBX                         ; 0056074a
        ;   Label: LAB_0056074a
    ADD ESP,0x100                       ; 0056074c
    POP EBP                             ; 00560752
    POP EDI                             ; 00560753
    POP ESI                             ; 00560754
    POP EBX                             ; 00560755
    RET                                 ; 00560756

