; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_pkbitmap_cpp_FUN_00538130(CPackedBitmap *param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_005381b0
;   core_main.c_FUN_005030e0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fopen_FUN_005c157c
;   crt_unknown.c_sprintf_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00538130
        ;   Label: cockpit_pkbitmap.cpp_FUN_00538130
    PUSH EBP                            ; 00538131
    SUB ESP,0x64                        ; 00538132
    PUSH 0x5ecea6                       ; 00538135
    MOV EDX,dword ptr [ESP + 0x78]      ; 0053813a
    PUSH EDX                            ; 0053813e
    CALL crt_stdio.c_fopen_FUN_005c157c ; 0053813f
        ;   XREF to: 005c157c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005c157c()
    ADD ESP,0x8                         ; 00538144
    MOV EBX,EAX                         ; 00538147
    TEST EAX,EAX                        ; 00538149
    JZ 0x0053816a                       ; 0053814b
        ;   XREF to: 0053816a (CONDITIONAL_JUMP)  ; LAB_0053816a
    PUSH EBX                            ; 0053814d
        ;   Label: LAB_0053814d
    MOV EBP,dword ptr [ESP + 0x74]      ; 0053814e
    PUSH EBP                            ; 00538152
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_005381b0 ; 00538153
        ;   XREF to: 005381b0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_005381b0(CPackedBitmap * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 00538158
    PUSH EBX                            ; 0053815b
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 0053815c
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 00538161
    ADD ESP,0x64                        ; 00538164
    POP EBP                             ; 00538167
    POP EBX                             ; 00538168
    RET                                 ; 00538169
    PUSH EDI                            ; 0053816a
        ;   Label: LAB_0053816a
    PUSH ESI                            ; 0053816b
    MOV ECX,dword ptr [ESP + 0x7c]      ; 0053816c
    PUSH ECX                            ; 00538170
    PUSH 0x5ecea9                       ; 00538171
    LEA EAX,[ESP + 0x10]                ; 00538176
    PUSH EAX                            ; 0053817a
    MOV ESI,0x5ecec6                    ; 0053817b
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00538180
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 00538185
    LEA EAX,[ESP + 0x8]                 ; 00538188
    MOV EDI,0x474                       ; 0053818c
    PUSH EAX                            ; 00538191
    MOV dword ptr [0x01d1d400],ESI      ; 00538192 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00538198 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0053819e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005381a3
    POP ESI                             ; 005381a6
    POP EDI                             ; 005381a7
    JMP 0x0053814d                      ; 005381a8
        ;   XREF to: 0053814d (UNCONDITIONAL_JUMP)  ; LAB_0053814d

