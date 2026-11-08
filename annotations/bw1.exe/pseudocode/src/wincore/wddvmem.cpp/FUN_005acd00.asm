; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005acd00(void)
;
; Local Variables:
; undefined4       Stack[-0x70]:4  local_70
;
; XREF[1]:
;   FUN_005acec0 at 005acfdf
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_005f96f1
;   TerminatedCString s_setColorTable16_Unable_t_005f9708
;   TerminatedCString s_wincore_wddvmem_cpp_005f9736
;   TerminatedCString s_setColorTable16_Unable_t_005f974d
;   undefined4 DAT_01c4e9d4
;   undefined4 DAT_01c4e9d8
;   undefined4 DAT_01c4e9dc
;   undefined4 DAT_01c4e9e0
;   undefined4 DAT_01c4e9e4
;   undefined4 DAT_01c4e9e8
;   undefined4 DAT_01c4e9ec
;   undefined4 DAT_01c4e9f0
;   undefined4 DAT_01c4e9f4
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   ... and 1 more
;
; Called Functions:
;   FUN_004ecf70
;   FUN_005030e0
;   FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005acd00
        ;   Label: FUN_005acd00
    SUB ESP,0x6c                        ; 005acd01
    PUSH 0x6c                           ; 005acd04
    PUSH 0x0                            ; 005acd06
    LEA EAX,[ESP + 0x8]                 ; 005acd08
    PUSH EAX                            ; 005acd0c
    CALL FUN_005bfb70                   ; 005acd0d
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 005acd12
    PUSH 0x0                            ; 005acd15
    PUSH 0x1                            ; 005acd17
    LEA ECX,[ESP + 0x8]                 ; 005acd19
    MOV EDX,0x6c                        ; 005acd1d
    PUSH ECX                            ; 005acd22
    MOV EAX,[0x02c99308]                ; 005acd23 | DAT_02c99308
    MOV dword ptr [ESP + 0xc],EDX       ; 005acd28
    PUSH 0x0                            ; 005acd2c
    MOV EDX,dword ptr [EAX]             ; 005acd2e
    PUSH EAX                            ; 005acd30
    CALL dword ptr [EDX + 0x64]         ; 005acd31
    TEST EAX,EAX                        ; 005acd34
    JNZ 0x005acdc0                      ; 005acd36
        ;   XREF to: 005acdc0 (CONDITIONAL_JUMP)  ; LAB_005acdc0
    PUSH 0x0                            ; 005acd3c
        ;   Label: LAB_005acd3c
    MOV EAX,[0x02c99308]                ; 005acd3e | DAT_02c99308
    PUSH EAX                            ; 005acd43
    MOV ECX,dword ptr [EAX]             ; 005acd44
    CALL dword ptr [ECX + 0x80]         ; 005acd46
    TEST EAX,EAX                        ; 005acd4c
    JZ 0x005acd77                       ; 005acd4e
        ;   XREF to: 005acd77 (CONDITIONAL_JUMP)  ; LAB_005acd77
    PUSH EDI                            ; 005acd50
    PUSH ESI                            ; 005acd51
    MOV ESI,0x5f9736                    ; 005acd52 | = "..\\wincore\\wddvmem.cpp"
    MOV EDI,0x2c0                       ; 005acd57
    PUSH 0x5f974d                       ; 005acd5c | = "setColorTable16 - Unable to unlock ba..."
    MOV dword ptr [0x01d1d400],ESI      ; 005acd61 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 005acd67 | DAT_01d1d404
    CALL FUN_005030e0                   ; 005acd6d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 005acd72
    POP ESI                             ; 005acd75
    POP EDI                             ; 005acd76
    MOV EAX,dword ptr [ESP + 0x58]      ; 005acd77
        ;   Label: LAB_005acd77
    MOV DL,byte ptr [ESP + 0x58]        ; 005acd7b
    XOR ECX,ECX                         ; 005acd7f
    TEST DL,0x1                         ; 005acd81
    JNZ 0x005acd90                      ; 005acd84
        ;   XREF to: 005acd90 (CONDITIONAL_JUMP)  ; LAB_005acd90
    SHR EAX,0x1                         ; 005acd86
        ;   Label: LAB_005acd86
    INC ECX                             ; 005acd88
    TEST AL,0x1                         ; 005acd89
    JZ 0x005acd86                       ; 005acd8b
        ;   XREF to: 005acd86 (CONDITIONAL_JUMP)  ; LAB_005acd86
    LEA EAX,[EAX]                       ; 005acd8d
    MOV EAX,dword ptr [ESP + 0x58]      ; 005acd90
        ;   Label: LAB_005acd90
    MOV dword ptr [0x01c4e9d4],ECX      ; 005acd94 | DAT_01c4e9d4
    SHR EAX,CL                          ; 005acd9a
    XOR EDX,EDX                         ; 005acd9c
    MOV ECX,EAX                         ; 005acd9e
    MOV EAX,0xff                        ; 005acda0
    DIV ECX                             ; 005acda5
    MOV [0x01c4e9d8],EAX                ; 005acda7 | DAT_01c4e9d8
    XOR ECX,ECX                         ; 005acdac
    TEST EAX,EAX                        ; 005acdae
    JZ 0x005acde8                       ; 005acdb0
        ;   XREF to: 005acde8 (CONDITIONAL_JUMP)  ; LAB_005acde8
    CMP EAX,0x1                         ; 005acdb2
        ;   Label: LAB_005acdb2
    JBE 0x005ace3c                      ; 005acdb5
        ;   XREF to: 005ace3c (CONDITIONAL_JUMP)  ; LAB_005ace3c
    INC ECX                             ; 005acdbb
    SHR EAX,0x1                         ; 005acdbc
    JMP 0x005acdb2                      ; 005acdbe
        ;   XREF to: 005acdb2 (UNCONDITIONAL_JUMP)  ; LAB_005acdb2
    MOV ECX,0x5f96f1                    ; 005acdc0 | = "..\\wincore\\wddvmem.cpp"
        ;   Label: LAB_005acdc0
    MOV EBX,0x2be                       ; 005acdc5
    PUSH 0x5f9708                       ; 005acdca | = "setColorTable16 - Unable to lock back..."
    MOV dword ptr [0x01d1d400],ECX      ; 005acdcf | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 005acdd5 | DAT_01d1d404
    CALL FUN_005030e0                   ; 005acddb
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 005acde0
    JMP 0x005acd3c                      ; 005acde3
        ;   XREF to: 005acd3c (UNCONDITIONAL_JUMP)  ; LAB_005acd3c
    MOV EAX,0x20                        ; 005acde8
        ;   Label: LAB_005acde8
    MOV DH,byte ptr [ESP + 0x5c]        ; 005acded
        ;   Label: LAB_005acded
    MOV [0x01c4e9dc],EAX                ; 005acdf1 | DAT_01c4e9dc
    XOR ECX,ECX                         ; 005acdf6
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005acdf8
    TEST DH,0x1                         ; 005acdfc
    JNZ 0x005ace10                      ; 005acdff
        ;   XREF to: 005ace10 (CONDITIONAL_JUMP)  ; LAB_005ace10
    SHR EAX,0x1                         ; 005ace01
        ;   Label: LAB_005ace01
    INC ECX                             ; 005ace03
    TEST AL,0x1                         ; 005ace04
    JZ 0x005ace01                       ; 005ace06
        ;   XREF to: 005ace01 (CONDITIONAL_JUMP)  ; LAB_005ace01
    LEA EAX,[EAX]                       ; 005ace08
    MOV EDX,EDX                         ; 005ace0e
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005ace10
        ;   Label: LAB_005ace10
    MOV dword ptr [0x01c4e9e0],ECX      ; 005ace14 | DAT_01c4e9e0
    SHR EAX,CL                          ; 005ace1a
    XOR EDX,EDX                         ; 005ace1c
    MOV ECX,EAX                         ; 005ace1e
    MOV EAX,0xff                        ; 005ace20
    DIV ECX                             ; 005ace25
    MOV [0x01c4e9e4],EAX                ; 005ace27 | DAT_01c4e9e4
    XOR ECX,ECX                         ; 005ace2c
    TEST EAX,EAX                        ; 005ace2e
    JZ 0x005ace40                       ; 005ace30
        ;   XREF to: 005ace40 (CONDITIONAL_JUMP)  ; LAB_005ace40
    CMP EAX,0x1                         ; 005ace32
        ;   Label: LAB_005ace32
    JBE 0x005ace8c                      ; 005ace35
        ;   XREF to: 005ace8c (CONDITIONAL_JUMP)  ; LAB_005ace8c
    INC ECX                             ; 005ace37
    SHR EAX,0x1                         ; 005ace38
    JMP 0x005ace32                      ; 005ace3a
        ;   XREF to: 005ace32 (UNCONDITIONAL_JUMP)  ; LAB_005ace32
    MOV EAX,ECX                         ; 005ace3c
        ;   Label: LAB_005ace3c
    JMP 0x005acded                      ; 005ace3e
        ;   XREF to: 005acded (UNCONDITIONAL_JUMP)  ; LAB_005acded
    MOV EAX,0x20                        ; 005ace40
        ;   Label: LAB_005ace40
    MOV BL,byte ptr [ESP + 0x60]        ; 005ace45
        ;   Label: LAB_005ace45
    MOV [0x01c4e9e8],EAX                ; 005ace49 | DAT_01c4e9e8
    XOR ECX,ECX                         ; 005ace4e
    MOV EAX,dword ptr [ESP + 0x60]      ; 005ace50
    TEST BL,0x1                         ; 005ace54
    JNZ 0x005ace60                      ; 005ace57
        ;   XREF to: 005ace60 (CONDITIONAL_JUMP)  ; LAB_005ace60
    SHR EAX,0x1                         ; 005ace59
        ;   Label: LAB_005ace59
    INC ECX                             ; 005ace5b
    TEST AL,0x1                         ; 005ace5c
    JZ 0x005ace59                       ; 005ace5e
        ;   XREF to: 005ace59 (CONDITIONAL_JUMP)  ; LAB_005ace59
    MOV EAX,dword ptr [ESP + 0x60]      ; 005ace60
        ;   Label: LAB_005ace60
    MOV dword ptr [0x01c4e9ec],ECX      ; 005ace64 | DAT_01c4e9ec
    SHR EAX,CL                          ; 005ace6a
    XOR EDX,EDX                         ; 005ace6c
    MOV ECX,EAX                         ; 005ace6e
    MOV EAX,0xff                        ; 005ace70
    DIV ECX                             ; 005ace75
    MOV [0x01c4e9f0],EAX                ; 005ace77 | DAT_01c4e9f0
    XOR ECX,ECX                         ; 005ace7c
    TEST EAX,EAX                        ; 005ace7e
    JZ 0x005ace90                       ; 005ace80
        ;   XREF to: 005ace90 (CONDITIONAL_JUMP)  ; LAB_005ace90
    CMP EAX,0x1                         ; 005ace82
        ;   Label: LAB_005ace82
    JBE 0x005acea4                      ; 005ace85
        ;   XREF to: 005acea4 (CONDITIONAL_JUMP)  ; LAB_005acea4
    INC ECX                             ; 005ace87
    SHR EAX,0x1                         ; 005ace88
    JMP 0x005ace82                      ; 005ace8a
        ;   XREF to: 005ace82 (UNCONDITIONAL_JUMP)  ; LAB_005ace82
    MOV EAX,ECX                         ; 005ace8c
        ;   Label: LAB_005ace8c
    JMP 0x005ace45                      ; 005ace8e
        ;   XREF to: 005ace45 (UNCONDITIONAL_JUMP)  ; LAB_005ace45
    MOV EAX,0x20                        ; 005ace90
        ;   Label: LAB_005ace90
    MOV [0x01c4e9f4],EAX                ; 005ace95 | DAT_01c4e9f4
    CALL FUN_004ecf70                   ; 005ace9a
        ;   XREF to: 004ecf70 (UNCONDITIONAL_CALL)  ; undefined FUN_004ecf70()
    ADD ESP,0x6c                        ; 005ace9f
    POP EBX                             ; 005acea2
    RET                                 ; 005acea3
    MOV EAX,ECX                         ; 005acea4
        ;   Label: LAB_005acea4
    MOV [0x01c4e9f4],EAX                ; 005acea6 | DAT_01c4e9f4
    CALL FUN_004ecf70                   ; 005aceab
        ;   XREF to: 004ecf70 (UNCONDITIONAL_CALL)  ; undefined FUN_004ecf70()
    ADD ESP,0x6c                        ; 005aceb0
    POP EBX                             ; 005aceb3
    RET                                 ; 005aceb4

