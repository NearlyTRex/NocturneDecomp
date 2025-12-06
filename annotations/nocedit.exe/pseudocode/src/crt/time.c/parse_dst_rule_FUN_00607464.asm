; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * crt_time.c_parse_dst_rule_FUN_00607464(char * rule_string, dst_rule * rule)
;
; Parameters:
; char *           Stack[0x4]:4   rule_string
; dst_rule *       Stack[0x8]:4   rule
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   crt_time.c_parse_tz_string_FUN_0060756c at 0060761b
;
; Called Functions:
;   crt_string.c_parse_uint_FUN_00607318
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00607464
        ;   Label: crt_time.c_parse_dst_rule_FUN_00607464
    PUSH ESI                            ; 00607465
    SUB ESP,0x10                        ; 00607466
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00607469
    MOV EBX,dword ptr [ESP + 0x20]      ; 0060746d
    MOV AH,byte ptr [EDX]               ; 00607471
    MOV ESI,0xffffffff                  ; 00607473
    CMP AH,0x4a                         ; 00607478
    JNZ 0x00607484                      ; 0060747b | LAB_00607484
        ;   XREF to: 00607484 (CONDITIONAL_JUMP)
    MOV ESI,0x1                         ; 0060747d
    ADD EDX,ESI                         ; 00607482
    CMP byte ptr [EDX],0x4d             ; 00607484
        ;   Label: LAB_00607484
    JNZ 0x0060748c                      ; 00607487 | LAB_0060748c
        ;   XREF to: 0060748c (CONDITIONAL_JUMP)
    INC EDX                             ; 00607489
    XOR ESI,ESI                         ; 0060748a
    LEA EAX,[ESP + 0xc]                 ; 0060748c
        ;   Label: LAB_0060748c
    PUSH EAX                            ; 00607490
    PUSH EDX                            ; 00607491
    MOV dword ptr [EBX + 0x20],ESI      ; 00607492
    CALL crt_string.c_parse_uint_FUN_00607318 ; 00607495 | char * crt_string.c_parse_uint_FUN_00607318(char * str, int * result)
        ;   XREF to: 00607318 (UNCONDITIONAL_CALL)
    MOV ECX,EAX                         ; 0060749a
    ADD ESP,0x8                         ; 0060749c
    MOV EDX,EAX                         ; 0060749f
    TEST ESI,ESI                        ; 006074a1
    JZ 0x006074ae                       ; 006074a3 | LAB_006074ae
        ;   XREF to: 006074ae (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0xc]       ; 006074a5
    MOV dword ptr [EBX + 0x1c],EAX      ; 006074a9
    JMP 0x006074f9                      ; 006074ac | LAB_006074f9
        ;   XREF to: 006074f9 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0xc]       ; 006074ae
        ;   Label: LAB_006074ae
    DEC EAX                             ; 006074b2
    MOV dword ptr [EBX + 0x10],EAX      ; 006074b3
    CMP byte ptr [ECX],0x2e             ; 006074b6
    JNZ 0x006074f2                      ; 006074b9 | LAB_006074f2
        ;   XREF to: 006074f2 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0xc]                 ; 006074bb
    PUSH EAX                            ; 006074bf
    INC ECX                             ; 006074c0
    PUSH ECX                            ; 006074c1
    CALL crt_string.c_parse_uint_FUN_00607318 ; 006074c2 | char * crt_string.c_parse_uint_FUN_00607318(char * str, int * result)
        ;   XREF to: 00607318 (UNCONDITIONAL_CALL)
    MOV ECX,EAX                         ; 006074c7
    ADD ESP,0x8                         ; 006074c9
    MOV EDX,EAX                         ; 006074cc
    MOV EAX,dword ptr [ESP + 0xc]       ; 006074ce
    MOV dword ptr [EBX + 0xc],EAX       ; 006074d2
    CMP byte ptr [ECX],0x2e             ; 006074d5
    JNZ 0x006074f2                      ; 006074d8 | LAB_006074f2
        ;   XREF to: 006074f2 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0xc]                 ; 006074da
    PUSH EAX                            ; 006074de
    INC ECX                             ; 006074df
    PUSH ECX                            ; 006074e0
    CALL crt_string.c_parse_uint_FUN_00607318 ; 006074e1 | char * crt_string.c_parse_uint_FUN_00607318(char * str, int * result)
        ;   XREF to: 00607318 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 006074e6
    MOV EDX,EAX                         ; 006074e9
    MOV EAX,dword ptr [ESP + 0xc]       ; 006074eb
    MOV dword ptr [EBX + 0x18],EAX      ; 006074ef
    MOV dword ptr [EBX + 0x1c],0x0      ; 006074f2
        ;   Label: LAB_006074f2
    MOV ECX,0x2                         ; 006074f9
        ;   Label: LAB_006074f9
    XOR ESI,ESI                         ; 006074fe
    MOV dword ptr [ESP + 0x8],ECX       ; 00607500
    MOV dword ptr [ESP],ESI             ; 00607504
    MOV dword ptr [ESP + 0x4],ESI       ; 00607507
    CMP byte ptr [EDX],0x2f             ; 0060750b
    JNZ 0x0060754f                      ; 0060750e | LAB_0060754f
        ;   XREF to: 0060754f (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x8]                 ; 00607510
    PUSH EAX                            ; 00607514
    INC EDX                             ; 00607515
    PUSH EDX                            ; 00607516
    CALL crt_string.c_parse_uint_FUN_00607318 ; 00607517 | char * crt_string.c_parse_uint_FUN_00607318(char * str, int * result)
        ;   XREF to: 00607318 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0060751c
    MOV CH,byte ptr [EAX]               ; 0060751f
    MOV EDX,EAX                         ; 00607521
    CMP CH,0x3a                         ; 00607523
    JNZ 0x0060754f                      ; 00607526 | LAB_0060754f
        ;   XREF to: 0060754f (CONDITIONAL_JUMP)
    LEA EDX,[ESP + 0x4]                 ; 00607528
    PUSH EDX                            ; 0060752c
    INC EAX                             ; 0060752d
    PUSH EAX                            ; 0060752e
    CALL crt_string.c_parse_uint_FUN_00607318 ; 0060752f | char * crt_string.c_parse_uint_FUN_00607318(char * str, int * result)
        ;   XREF to: 00607318 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00607534
    MOV CL,byte ptr [EAX]               ; 00607537
    MOV EDX,EAX                         ; 00607539
    CMP CL,0x3a                         ; 0060753b
    JNZ 0x0060754f                      ; 0060753e | LAB_0060754f
        ;   XREF to: 0060754f (CONDITIONAL_JUMP)
    MOV EDX,ESP                         ; 00607540
    PUSH EDX                            ; 00607542
    INC EAX                             ; 00607543
    PUSH EAX                            ; 00607544
    CALL crt_string.c_parse_uint_FUN_00607318 ; 00607545 | char * crt_string.c_parse_uint_FUN_00607318(char * str, int * result)
        ;   XREF to: 00607318 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0060754a
    MOV EDX,EAX                         ; 0060754d
    MOV EAX,dword ptr [ESP]             ; 0060754f
        ;   Label: LAB_0060754f
    MOV dword ptr [EBX],EAX             ; 00607552
    MOV EAX,dword ptr [ESP + 0x4]       ; 00607554
    MOV dword ptr [EBX + 0x4],EAX       ; 00607558
    MOV EAX,dword ptr [ESP + 0x8]       ; 0060755b
    MOV dword ptr [EBX + 0x8],EAX       ; 0060755f
    MOV EAX,EDX                         ; 00607562
    ADD ESP,0x10                        ; 00607564
    POP ESI                             ; 00607567
    POP EBX                             ; 00607568
    RET                                 ; 00607569

