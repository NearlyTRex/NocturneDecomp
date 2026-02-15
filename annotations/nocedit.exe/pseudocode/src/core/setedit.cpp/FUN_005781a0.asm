; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setedit_cpp_FUN_005781a0(void)
;
; Local Variables:
; undefined        Stack[-0x10c]:1  local_10c
;
; Referenced Globals:
;   undefined4 DAT_03654368
;   undefined4 DAT_03654370
;   undefined4 DAT_03654398
;
; Called Functions:
;   crt_string.c_stricmp_FUN_005fe7f0
;   engine_dosio.c_splitPath_FUN_00481f20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005781a0
        ;   Label: core_setedit.cpp_FUN_005781a0
    PUSH ESI                            ; 005781a1
    PUSH EDI                            ; 005781a2
    SUB ESP,0x100                       ; 005781a3
    PUSH 0x0                            ; 005781a9
    LEA EAX,[ESP + 0x4]                 ; 005781ab
    PUSH EAX                            ; 005781af
    PUSH 0x0                            ; 005781b0
    PUSH 0x0                            ; 005781b2
    MOV EDX,dword ptr [ESP + 0x120]     ; 005781b4
    PUSH EDX                            ; 005781bb
    XOR EBX,EBX                         ; 005781bc
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 005781be
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    MOV ECX,dword ptr [0x03654368]      ; 005781c3 | DAT_03654368
    ADD ESP,0x14                        ; 005781c9
    TEST ECX,ECX                        ; 005781cc
    JLE 0x005781f3                      ; 005781ce
        ;   XREF to: 005781f3 (CONDITIONAL_JUMP)  ; LAB_005781f3
    MOV ESI,0x3654370                   ; 005781d0 | DAT_03654370
    MOV EAX,ESP                         ; 005781d5
        ;   Label: LAB_005781d5
    PUSH EAX                            ; 005781d7
    PUSH ESI                            ; 005781d8 | DAT_03654370 | DAT_03654398
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005781d9
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005781de
    TEST EAX,EAX                        ; 005781e1
    JZ 0x00578202                       ; 005781e3
        ;   XREF to: 00578202 (CONDITIONAL_JUMP)  ; LAB_00578202
    MOV EDI,dword ptr [0x03654368]      ; 005781e5 | DAT_03654368
    INC EBX                             ; 005781eb
    ADD ESI,0x28                        ; 005781ec
    CMP EBX,EDI                         ; 005781ef
    JL 0x005781d5                       ; 005781f1
        ;   XREF to: 005781d5 (CONDITIONAL_JUMP)  ; LAB_005781d5
    MOV EAX,0xffffffff                  ; 005781f3
        ;   Label: LAB_005781f3
    ADD ESP,0x100                       ; 005781f8
    POP EDI                             ; 005781fe
    POP ESI                             ; 005781ff
    POP EBX                             ; 00578200
    RET                                 ; 00578201
    MOV EAX,EBX                         ; 00578202
        ;   Label: LAB_00578202
    ADD ESP,0x100                       ; 00578204
    POP EDI                             ; 0057820a
    POP ESI                             ; 0057820b
    POP EBX                             ; 0057820c
    RET                                 ; 0057820d

