; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_winrun_cpp_FUN_005b464c(undefined4 param_1)
;
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_ini.cpp_FUN_004f4d10
;   wincore_winrun.cpp_FUN_005b41c0
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 005b464c
        ;   Label: wincore_winrun.cpp_FUN_005b464c
    PUSH EBX                            ; 005b4650
    PUSH ESI                            ; 005b4651
    PUSH EDI                            ; 005b4652
    PUSH EBP                            ; 005b4653
    SUB ESP,0x114                       ; 005b4654
    MOV EDI,dword ptr [ESP + 0x128]     ; 005b465a
    MOV EDX,0x2c9d1d4                   ; 005b4661
    XOR ESI,ESI                         ; 005b4666
    MOV dword ptr [ESP + 0x108],EDX     ; 005b4668
    PUSH ESI                            ; 005b466f
        ;   Label: LAB_005b466f
    PUSH 0x5f9f56                       ; 005b4670
    LEA EAX,[ESP + 0x8]                 ; 005b4675
    XOR ECX,ECX                         ; 005b4679
    PUSH EAX                            ; 005b467b
    MOV dword ptr [ESP + 0x10c],ECX     ; 005b467c
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005b4683
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 005b4688
    LEA EAX,[ESP + 0x100]               ; 005b468b
    PUSH EAX                            ; 005b4692
    LEA EAX,[ESP + 0x4]                 ; 005b4693
    PUSH EAX                            ; 005b4697
    PUSH EDI                            ; 005b4698
    CALL engine_ini.cpp_FUN_004f4d10    ; 005b4699
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    ADD ESP,0xc                         ; 005b469e
    PUSH ESI                            ; 005b46a1
    PUSH 0x5f9f69                       ; 005b46a2
    LEA EAX,[ESP + 0x8]                 ; 005b46a7
    PUSH EAX                            ; 005b46ab
    MOV dword ptr [ESP + 0x110],ESI     ; 005b46ac
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005b46b3
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 005b46b8
    LEA EAX,[ESP + 0x104]               ; 005b46bb
    PUSH EAX                            ; 005b46c2
    LEA EAX,[ESP + 0x4]                 ; 005b46c3
    PUSH EAX                            ; 005b46c7
    PUSH EDI                            ; 005b46c8
    CALL engine_ini.cpp_FUN_004f4d10    ; 005b46c9
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    ADD ESP,0xc                         ; 005b46ce
    MOV EBX,dword ptr [ESP + 0x104]     ; 005b46d1
    PUSH EBX                            ; 005b46d8
    MOV EBP,dword ptr [ESP + 0x104]     ; 005b46d9
    PUSH EBP                            ; 005b46e0
    PUSH ESI                            ; 005b46e1
    CALL wincore_winrun.cpp_FUN_005b41c0 ; 005b46e2
        ;   XREF to: 005b41c0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b41c0()
    ADD ESP,0xc                         ; 005b46e7
    XOR EBX,EBX                         ; 005b46ea
    MOV EAX,dword ptr [ESP + 0x108]     ; 005b46ec
    MOV EBP,dword ptr [ESP + 0x108]     ; 005b46f3
    MOV dword ptr [ESP + 0x10c],EAX     ; 005b46fa
    ADD EAX,0x8                         ; 005b4701
    ADD EBP,0x4                         ; 005b4704
    MOV dword ptr [ESP + 0x110],EAX     ; 005b4707
    PUSH EBX                            ; 005b470e
        ;   Label: LAB_005b470e
    PUSH ESI                            ; 005b470f
    PUSH 0x5f9f7f                       ; 005b4710
    LEA EAX,[ESP + 0xc]                 ; 005b4715
    PUSH EAX                            ; 005b4719
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005b471a
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    IMUL EAX,EBX,0xc                    ; 005b471f
    ADD ESP,0x10                        ; 005b4722
    ADD EAX,dword ptr [ESP + 0x10c]     ; 005b4725
    PUSH EAX                            ; 005b472c
    LEA EAX,[ESP + 0x4]                 ; 005b472d
    PUSH EAX                            ; 005b4731
    PUSH EDI                            ; 005b4732
    CALL engine_ini.cpp_FUN_004f4d10    ; 005b4733
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    ADD ESP,0xc                         ; 005b4738
    PUSH EBX                            ; 005b473b
    PUSH ESI                            ; 005b473c
    PUSH 0x5f9f99                       ; 005b473d
    LEA EAX,[ESP + 0xc]                 ; 005b4742
    PUSH EAX                            ; 005b4746
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005b4747
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 005b474c
    PUSH EBP                            ; 005b474f
    LEA EAX,[ESP + 0x4]                 ; 005b4750
    PUSH EAX                            ; 005b4754
    PUSH EDI                            ; 005b4755
    CALL engine_ini.cpp_FUN_004f4d10    ; 005b4756
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    ADD ESP,0xc                         ; 005b475b
    PUSH EBX                            ; 005b475e
    PUSH ESI                            ; 005b475f
    PUSH 0x5f9fb3                       ; 005b4760
    LEA EAX,[ESP + 0xc]                 ; 005b4765
    PUSH EAX                            ; 005b4769
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005b476a
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 005b476f
    MOV ECX,dword ptr [ESP + 0x110]     ; 005b4772
    PUSH ECX                            ; 005b4779
    LEA EAX,[ESP + 0x4]                 ; 005b477a
    PUSH EAX                            ; 005b477e
    PUSH EDI                            ; 005b477f
    CALL engine_ini.cpp_FUN_004f4d10    ; 005b4780
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    ADD ESP,0xc                         ; 005b4785
    MOV EAX,dword ptr [ESP + 0x110]     ; 005b4788
    ADD EBP,0xc                         ; 005b478f
    ADD EAX,0xc                         ; 005b4792
    INC EBX                             ; 005b4795
    MOV dword ptr [ESP + 0x110],EAX     ; 005b4796
    CMP EBX,0x4                         ; 005b479d
    JL 0x005b470e                       ; 005b47a0
        ;   XREF to: 005b470e (CONDITIONAL_JUMP)  ; LAB_005b470e
    MOV EDX,dword ptr [ESP + 0x108]     ; 005b47a6
    ADD EDX,0x30                        ; 005b47ad
    INC ESI                             ; 005b47b0
    MOV dword ptr [ESP + 0x108],EDX     ; 005b47b1
    CMP ESI,0x4                         ; 005b47b8
    JL 0x005b466f                       ; 005b47bb
        ;   XREF to: 005b466f (CONDITIONAL_JUMP)  ; LAB_005b466f
    ADD ESP,0x114                       ; 005b47c1
    POP EBP                             ; 005b47c7
    POP EDI                             ; 005b47c8
    POP ESI                             ; 005b47c9
    POP EBX                             ; 005b47ca
    RET                                 ; 005b47cb

