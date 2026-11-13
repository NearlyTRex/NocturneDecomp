; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_winrun_cpp_FUN_00582830(void)
;
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_ini.cpp_FUN_004d8c30
;   wincore_winrun.cpp_FUN_005823a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00582830
        ;   Label: wincore_winrun.cpp_FUN_00582830
    PUSH ESI                            ; 00582831
    PUSH EDI                            ; 00582832
    PUSH EBP                            ; 00582833
    SUB ESP,0x114                       ; 00582834
    MOV EDI,dword ptr [ESP + 0x128]     ; 0058283a
    MOV EDX,0x2d22ee4                   ; 00582841
    XOR ESI,ESI                         ; 00582846
    MOV dword ptr [ESP + 0x108],EDX     ; 00582848
    PUSH ESI                            ; 0058284f
        ;   Label: LAB_0058284f
    PUSH 0x5d7f81                       ; 00582850
    LEA EAX,[ESP + 0x8]                 ; 00582855
    XOR ECX,ECX                         ; 00582859
    PUSH EAX                            ; 0058285b
    MOV dword ptr [ESP + 0x10c],ECX     ; 0058285c
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00582863
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00582868
    LEA EAX,[ESP + 0x100]               ; 0058286b
    PUSH EAX                            ; 00582872
    LEA EAX,[ESP + 0x4]                 ; 00582873
    PUSH EAX                            ; 00582877
    PUSH EDI                            ; 00582878
    CALL engine_ini.cpp_FUN_004d8c30    ; 00582879
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    ADD ESP,0xc                         ; 0058287e
    PUSH ESI                            ; 00582881
    PUSH 0x5d7f94                       ; 00582882
    LEA EAX,[ESP + 0x8]                 ; 00582887
    PUSH EAX                            ; 0058288b
    MOV dword ptr [ESP + 0x110],ESI     ; 0058288c
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00582893
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00582898
    LEA EAX,[ESP + 0x104]               ; 0058289b
    PUSH EAX                            ; 005828a2
    LEA EAX,[ESP + 0x4]                 ; 005828a3
    PUSH EAX                            ; 005828a7
    PUSH EDI                            ; 005828a8
    CALL engine_ini.cpp_FUN_004d8c30    ; 005828a9
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    ADD ESP,0xc                         ; 005828ae
    MOV EBX,dword ptr [ESP + 0x104]     ; 005828b1
    PUSH EBX                            ; 005828b8
    MOV EBP,dword ptr [ESP + 0x104]     ; 005828b9
    PUSH EBP                            ; 005828c0
    PUSH ESI                            ; 005828c1
    CALL wincore_winrun.cpp_FUN_005823a0 ; 005828c2
        ;   XREF to: 005823a0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005823a0()
    ADD ESP,0xc                         ; 005828c7
    XOR EBX,EBX                         ; 005828ca
    MOV EAX,dword ptr [ESP + 0x108]     ; 005828cc
    MOV EBP,dword ptr [ESP + 0x108]     ; 005828d3
    MOV dword ptr [ESP + 0x10c],EAX     ; 005828da
    ADD EAX,0x8                         ; 005828e1
    ADD EBP,0x4                         ; 005828e4
    MOV dword ptr [ESP + 0x110],EAX     ; 005828e7
    PUSH EBX                            ; 005828ee
        ;   Label: LAB_005828ee
    PUSH ESI                            ; 005828ef
    PUSH 0x5d7faa                       ; 005828f0
    LEA EAX,[ESP + 0xc]                 ; 005828f5
    PUSH EAX                            ; 005828f9
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 005828fa
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    IMUL EAX,EBX,0xc                    ; 005828ff
    ADD ESP,0x10                        ; 00582902
    ADD EAX,dword ptr [ESP + 0x10c]     ; 00582905
    PUSH EAX                            ; 0058290c
    LEA EAX,[ESP + 0x4]                 ; 0058290d
    PUSH EAX                            ; 00582911
    PUSH EDI                            ; 00582912
    CALL engine_ini.cpp_FUN_004d8c30    ; 00582913
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    ADD ESP,0xc                         ; 00582918
    PUSH EBX                            ; 0058291b
    PUSH ESI                            ; 0058291c
    PUSH 0x5d7fc4                       ; 0058291d
    LEA EAX,[ESP + 0xc]                 ; 00582922
    PUSH EAX                            ; 00582926
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00582927
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0058292c
    PUSH EBP                            ; 0058292f
    LEA EAX,[ESP + 0x4]                 ; 00582930
    PUSH EAX                            ; 00582934
    PUSH EDI                            ; 00582935
    CALL engine_ini.cpp_FUN_004d8c30    ; 00582936
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    ADD ESP,0xc                         ; 0058293b
    PUSH EBX                            ; 0058293e
    PUSH ESI                            ; 0058293f
    PUSH 0x5d7fde                       ; 00582940
    LEA EAX,[ESP + 0xc]                 ; 00582945
    PUSH EAX                            ; 00582949
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0058294a
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0058294f
    MOV ECX,dword ptr [ESP + 0x110]     ; 00582952
    PUSH ECX                            ; 00582959
    LEA EAX,[ESP + 0x4]                 ; 0058295a
    PUSH EAX                            ; 0058295e
    PUSH EDI                            ; 0058295f
    CALL engine_ini.cpp_FUN_004d8c30    ; 00582960
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    ADD ESP,0xc                         ; 00582965
    MOV EAX,dword ptr [ESP + 0x110]     ; 00582968
    ADD EBP,0xc                         ; 0058296f
    ADD EAX,0xc                         ; 00582972
    INC EBX                             ; 00582975
    MOV dword ptr [ESP + 0x110],EAX     ; 00582976
    CMP EBX,0x4                         ; 0058297d
    JL 0x005828ee                       ; 00582980
        ;   XREF to: 005828ee (CONDITIONAL_JUMP)  ; LAB_005828ee
    MOV EDX,dword ptr [ESP + 0x108]     ; 00582986
    ADD EDX,0x30                        ; 0058298d
    INC ESI                             ; 00582990
    MOV dword ptr [ESP + 0x108],EDX     ; 00582991
    CMP ESI,0x4                         ; 00582998
    JL 0x0058284f                       ; 0058299b
        ;   XREF to: 0058284f (CONDITIONAL_JUMP)  ; LAB_0058284f
    ADD ESP,0x114                       ; 005829a1
    POP EBP                             ; 005829a7
    POP EDI                             ; 005829a8
    POP ESI                             ; 005829a9
    POP EBX                             ; 005829aa
    RET                                 ; 005829ab

