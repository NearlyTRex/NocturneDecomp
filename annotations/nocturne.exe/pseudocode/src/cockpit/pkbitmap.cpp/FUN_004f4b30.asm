; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_pkbitmap_cpp_FUN_004f4b30(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_wb_0058d1f0
;   TerminatedCString s_Unable_to_create_PBM_fil_0058d1f3
;   TerminatedCString s_cockpit_pkbitmap_cpp_0058d210
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_004f4bb0
;   core_main.c_FUN_004c8440
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fopen_FUN_0056568c
;   crt_stdio.c_sprintf_FUN_00563c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4b30
        ;   Label: cockpit_pkbitmap.cpp_FUN_004f4b30
    PUSH EBP                            ; 004f4b31
    SUB ESP,0x64                        ; 004f4b32
    PUSH 0x58d1f0                       ; 004f4b35 | = "wb"
    MOV EDX,dword ptr [ESP + 0x78]      ; 004f4b3a
    PUSH EDX                            ; 004f4b3e
    CALL crt_stdio.c_fopen_FUN_0056568c ; 004f4b3f
        ;   XREF to: 0056568c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_0056568c()
    ADD ESP,0x8                         ; 004f4b44
    MOV EBX,EAX                         ; 004f4b47
    TEST EAX,EAX                        ; 004f4b49
    JZ 0x004f4b6a                       ; 004f4b4b
        ;   XREF to: 004f4b6a (CONDITIONAL_JUMP)  ; LAB_004f4b6a
    PUSH EBX                            ; 004f4b4d
        ;   Label: LAB_004f4b4d
    MOV EBP,dword ptr [ESP + 0x74]      ; 004f4b4e
    PUSH EBP                            ; 004f4b52
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_004f4bb0 ; 004f4b53
        ;   XREF to: 004f4bb0 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_004f4bb0()
    ADD ESP,0x8                         ; 004f4b58
    PUSH EBX                            ; 004f4b5b
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004f4b5c
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 004f4b61
    ADD ESP,0x64                        ; 004f4b64
    POP EBP                             ; 004f4b67
    POP EBX                             ; 004f4b68
    RET                                 ; 004f4b69
    PUSH EDI                            ; 004f4b6a
        ;   Label: LAB_004f4b6a
    PUSH ESI                            ; 004f4b6b
    MOV ECX,dword ptr [ESP + 0x7c]      ; 004f4b6c
    PUSH ECX                            ; 004f4b70
    PUSH 0x58d1f3                       ; 004f4b71 | = "Unable to create PBM file %s"
    LEA EAX,[ESP + 0x10]                ; 004f4b76
    PUSH EAX                            ; 004f4b7a
    MOV ESI,0x58d210                    ; 004f4b7b | = "..\\cockpit\\pkbitmap.cpp"
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004f4b80
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 004f4b85
    LEA EAX,[ESP + 0x8]                 ; 004f4b88
    MOV EDI,0x473                       ; 004f4b8c
    PUSH EAX                            ; 004f4b91
    MOV dword ptr [0x01cc4800],ESI      ; 004f4b92 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004f4b98 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f4b9e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f4ba3
    POP ESI                             ; 004f4ba6
    POP EDI                             ; 004f4ba7
    JMP 0x004f4b4d                      ; 004f4ba8
        ;   XREF to: 004f4b4d (UNCONDITIONAL_JUMP)  ; LAB_004f4b4d

