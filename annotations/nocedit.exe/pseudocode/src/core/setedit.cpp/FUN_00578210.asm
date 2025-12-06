; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_setedit.cpp_FUN_00578210()
;
; Local Variables:
; undefined        Stack[-0x10c]:1  local_10c
;
; Referenced Globals:
;   undefined4 DAT_03654368
;   undefined4 DAT_03654370
;   undefined4 DAT_03654398
;   undefined1 DAT_03659190
;
; Called Functions:
;   crt_string.c_stricmp_FUN_005fe7f0
;   engine_dosio.c_splitPath_FUN_00481f20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578210
        ;   Label: core_setedit.cpp_FUN_00578210
    PUSH ESI                            ; 00578211
    PUSH EDI                            ; 00578212
    SUB ESP,0x100                       ; 00578213
    PUSH 0x0                            ; 00578219
    LEA EAX,[ESP + 0x4]                 ; 0057821b
    PUSH EAX                            ; 0057821f
    PUSH 0x0                            ; 00578220
    PUSH 0x0                            ; 00578222
    MOV EDX,dword ptr [ESP + 0x120]     ; 00578224
    PUSH EDX                            ; 0057822b
    XOR EBX,EBX                         ; 0057822c
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 0057822e | void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [0x03654368]      ; 00578233 | undefined4 DAT_03654368
    ADD ESP,0x14                        ; 00578239
    TEST ECX,ECX                        ; 0057823c
    JLE 0x00578277                      ; 0057823e | LAB_00578277
        ;   XREF to: 00578277 (CONDITIONAL_JUMP)
    MOV ESI,0x3654370                   ; 00578240 | DAT_03654370
    MOV EAX,ESP                         ; 00578245
        ;   Label: LAB_00578245
    PUSH EAX                            ; 00578247
    PUSH ESI                            ; 00578248 | DAT_03654370
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 00578249 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0057824e
    TEST EAX,EAX                        ; 00578251
    JNZ 0x00578269                      ; 00578253 | LAB_00578269
        ;   XREF to: 00578269 (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 00578255
    JL 0x00578277                       ; 00578257 | LAB_00578277
        ;   XREF to: 00578277 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [EBX + 0x3659190]   ; 00578259 | undefined1 DAT_03659190
    ADD ESP,0x100                       ; 0057825f
    POP EDI                             ; 00578265
    POP ESI                             ; 00578266
    POP EBX                             ; 00578267
    RET                                 ; 00578268
    MOV EDI,dword ptr [0x03654368]      ; 00578269 | undefined4 DAT_03654368
        ;   Label: LAB_00578269
    INC EBX                             ; 0057826f
    ADD ESI,0x28                        ; 00578270
    CMP EBX,EDI                         ; 00578273
    JL 0x00578245                       ; 00578275 | LAB_00578245
        ;   XREF to: 00578245 (CONDITIONAL_JUMP)
    MOV EAX,0xffffffff                  ; 00578277
        ;   Label: LAB_00578277
    ADD ESP,0x100                       ; 0057827c
    POP EDI                             ; 00578282
    POP ESI                             ; 00578283
    POP EBX                             ; 00578284
    RET                                 ; 00578285

