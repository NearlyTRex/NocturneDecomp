; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_pkbmpset_cpp_FUN_00538db0(CPackedBitmapSet *param_1,int param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_00537d00
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_005392d0
;   core_main.c_FUN_005030e0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fread_FUN_005c0b10
;   crt_stdio.c_fseek_FUN_005c170c
;   crt_unknown.c_FUN_005c08d0
;   crt_unknown.c_FUN_005c09f0
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_dosio.cpp_FUN_00479180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00538db0
        ;   Label: cockpit_pkbmpset.cpp_FUN_00538db0
    PUSH ESI                            ; 00538db1
    PUSH EDI                            ; 00538db2
    PUSH EBP                            ; 00538db3
    SUB ESP,0x138                       ; 00538db4
    MOV ESI,dword ptr [ESP + 0x14c]     ; 00538dba
    PUSH 0x5ed2f8                       ; 00538dc1
    LEA EBX,[ESI + 0x8]                 ; 00538dc6
    PUSH EBX                            ; 00538dc9
    PUSH 0x5ed2fb                       ; 00538dca
    CALL engine_dosio.cpp_FUN_00479180  ; 00538dcf
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00538dd4
    MOV dword ptr [ESP + 0x134],EAX     ; 00538dd7
    TEST EAX,EAX                        ; 00538dde
    JZ 0x00538eb5                       ; 00538de0
        ;   XREF to: 00538eb5 (CONDITIONAL_JUMP)  ; LAB_00538eb5
    MOV EBP,dword ptr [ESI + 0x1c]      ; 00538de6
        ;   Label: LAB_00538de6
    IMUL EBP,dword ptr [ESI + 0x20]     ; 00538de9
    PUSH EBP                            ; 00538ded
    CALL crt_unknown.c_FUN_005c08d0     ; 00538dee
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 00538df3
    MOV dword ptr [ESP + 0x130],EAX     ; 00538df6
    TEST EAX,EAX                        ; 00538dfd
    JNZ 0x00538e34                      ; 00538dff
        ;   XREF to: 00538e34 (CONDITIONAL_JUMP)  ; LAB_00538e34
    PUSH EBP                            ; 00538e01
    PUSH 0x5ed34e                       ; 00538e02
    LEA EAX,[ESP + 0x8]                 ; 00538e07
    PUSH EAX                            ; 00538e0b
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00538e0c
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EAX,0x117                       ; 00538e11
    ADD ESP,0xc                         ; 00538e16
    MOV [0x01d1d404],EAX                ; 00538e19 | DAT_01d1d404
    MOV EAX,ESP                         ; 00538e1e
    MOV EDI,0x5ed398                    ; 00538e20
    PUSH EAX                            ; 00538e25
    MOV dword ptr [0x01d1d400],EDI      ; 00538e26 | DAT_01d1d400
    CALL core_main.c_FUN_005030e0       ; 00538e2c
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00538e31
    MOV EDX,dword ptr [ESI]             ; 00538e34
        ;   Label: LAB_00538e34
    XOR EBX,EBX                         ; 00538e36
    TEST EDX,EDX                        ; 00538e38
    JLE 0x00538e7c                      ; 00538e3a
        ;   XREF to: 00538e7c (CONDITIONAL_JUMP)  ; LAB_00538e7c
    LEA EAX,[ESI + 0x8]                 ; 00538e3c
    XOR EDI,EDI                         ; 00538e3f
    MOV dword ptr [ESP + 0x12c],EAX     ; 00538e41
    MOV EAX,dword ptr [ESP + 0x154]     ; 00538e48
        ;   Label: LAB_00538e48
    TEST EAX,EAX                        ; 00538e4f
    JL 0x00538ef0                       ; 00538e51
        ;   XREF to: 00538ef0 (CONDITIONAL_JUMP)  ; LAB_00538ef0
    CMP EBX,EAX                         ; 00538e57
    JZ 0x00538ef0                       ; 00538e59
        ;   XREF to: 00538ef0 (CONDITIONAL_JUMP)  ; LAB_00538ef0
    PUSH 0x1                            ; 00538e5f
    PUSH EBP                            ; 00538e61
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00538e62
    PUSH EAX                            ; 00538e69
    CALL crt_stdio.c_fseek_FUN_005c170c ; 00538e6a
        ;   XREF to: 005c170c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_005c170c()
    ADD ESP,0xc                         ; 00538e6f
        ;   Label: LAB_00538e6f
    INC EBX                             ; 00538e72
    MOV ECX,dword ptr [ESI]             ; 00538e73
    ADD EDI,0x24                        ; 00538e75
    CMP EBX,ECX                         ; 00538e78
    JL 0x00538e48                       ; 00538e7a
        ;   XREF to: 00538e48 (CONDITIONAL_JUMP)  ; LAB_00538e48
    MOV EBX,dword ptr [ESP + 0x130]     ; 00538e7c
        ;   Label: LAB_00538e7c
    PUSH EBX                            ; 00538e83
    CALL crt_unknown.c_FUN_005c09f0     ; 00538e84
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 00538e89
    MOV EDI,dword ptr [ESP + 0x134]     ; 00538e8c
    PUSH EDI                            ; 00538e93
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 00538e94
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 00538e99
    CMP dword ptr [ESP + 0x150],0x0     ; 00538e9c
    JNZ 0x00538f6e                      ; 00538ea4
        ;   XREF to: 00538f6e (CONDITIONAL_JUMP)  ; LAB_00538f6e
    ADD ESP,0x138                       ; 00538eaa
    POP EBP                             ; 00538eb0
    POP EDI                             ; 00538eb1
    POP ESI                             ; 00538eb2
    POP EBX                             ; 00538eb3
    RET                                 ; 00538eb4
    PUSH EBX                            ; 00538eb5
        ;   Label: LAB_00538eb5
    PUSH 0x5ed2ff                       ; 00538eb6
    LEA EAX,[ESP + 0x6c]                ; 00538ebb
    PUSH EAX                            ; 00538ebf
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00538ec0
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EDX,0x5ed336                    ; 00538ec5
    ADD ESP,0xc                         ; 00538eca
    LEA EAX,[ESP + 0x64]                ; 00538ecd
    MOV ECX,0x10a                       ; 00538ed1
    PUSH EAX                            ; 00538ed6
    MOV dword ptr [0x01d1d400],EDX      ; 00538ed7 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00538edd | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00538ee3
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00538ee8
    JMP 0x00538de6                      ; 00538eeb
        ;   XREF to: 00538de6 (UNCONDITIONAL_JUMP)  ; LAB_00538de6
    MOV ECX,dword ptr [ESP + 0x134]     ; 00538ef0
        ;   Label: LAB_00538ef0
    PUSH ECX                            ; 00538ef7
    PUSH 0x1                            ; 00538ef8
    PUSH EBP                            ; 00538efa
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00538efb
    PUSH EAX                            ; 00538f02
    CALL crt_stdio.c_fread_FUN_005c0b10 ; 00538f03
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005c0b10()
    ADD ESP,0x10                        ; 00538f08
    CMP EAX,0x1                         ; 00538f0b
    JZ 0x00538f52                       ; 00538f0e
        ;   XREF to: 00538f52 (CONDITIONAL_JUMP)  ; LAB_00538f52
    MOV EDX,dword ptr [ESP + 0x12c]     ; 00538f10
    PUSH EDX                            ; 00538f17
    PUSH 0x5ed3b0                       ; 00538f18
    LEA EAX,[ESP + 0xd0]                ; 00538f1d
    PUSH EAX                            ; 00538f24
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00538f25
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EAX,0x12a                       ; 00538f2a
    ADD ESP,0xc                         ; 00538f2f
    MOV [0x01d1d404],EAX                ; 00538f32 | DAT_01d1d404
    LEA EAX,[ESP + 0xc8]                ; 00538f37
    MOV ECX,0x5ed3e9                    ; 00538f3e
    PUSH EAX                            ; 00538f43
    MOV dword ptr [0x01d1d400],ECX      ; 00538f44 | DAT_01d1d400
    CALL core_main.c_FUN_005030e0       ; 00538f4a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00538f4f
    MOV EDX,dword ptr [ESI + 0x1c]      ; 00538f52
        ;   Label: LAB_00538f52
    PUSH EDX                            ; 00538f55
    MOV ECX,dword ptr [ESP + 0x134]     ; 00538f56
    MOV EAX,dword ptr [ESI + 0x4]       ; 00538f5d
    PUSH ECX                            ; 00538f60
    ADD EAX,EDI                         ; 00538f61
    PUSH EAX                            ; 00538f63
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_00537d00 ; 00538f64
        ;   XREF to: 00537d00 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_00537d00(CPackedBitmap * this_ptr, uchar * raw_bitmap_data, int row_stride)
    JMP 0x00538e6f                      ; 00538f69
        ;   XREF to: 00538e6f (UNCONDITIONAL_JUMP)  ; LAB_00538e6f
    PUSH ESI                            ; 00538f6e
        ;   Label: LAB_00538f6e
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_005392d0 ; 00538f6f
        ;   XREF to: 005392d0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_005392d0(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 00538f74
    ADD ESP,0x138                       ; 00538f77
    POP EBP                             ; 00538f7d
    POP EDI                             ; 00538f7e
    POP ESI                             ; 00538f7f
    POP EBX                             ; 00538f80
    RET                                 ; 00538f81

