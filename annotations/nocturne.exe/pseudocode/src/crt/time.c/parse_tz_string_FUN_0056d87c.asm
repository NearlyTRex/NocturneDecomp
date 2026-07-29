; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_time_c_parse_tz_string_FUN_0056d87c(char *tz_string)
;
; Parameters:
; char *           Stack[0x4]:4   tz_string
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_time.c_tzset_FUN_0056d608 at 0056d61e
;
; Referenced Globals:
;   undefined4 DAT_005c1dc0
;   undefined4 DAT_005c1de4
;   undefined4 DAT_005c1de8
;   undefined4 DAT_005c1dec
;   undefined4 DAT_005c1e08
;   undefined1 DAT_005c1e89
;   undefined4 DAT_005c1f14
;   undefined4 DAT_005c1f18
;   undefined4 DAT_005c1f1c
;
; Called Functions:
;   crt_time.c_parse_dst_rule_FUN_0056d774
;   crt_time.c_parse_timezone_spec_FUN_0056d658
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056d87c
        ;   Label: crt_time.c_parse_tz_string_FUN_0056d87c
    PUSH ESI                            ; 0056d87d
    PUSH EDI                            ; 0056d87e
    PUSH EBP                            ; 0056d87f
    SUB ESP,0x4                         ; 0056d880
    MOV ESI,dword ptr [0x005c1f1c]      ; 0056d883 | DAT_005c1f1c
    PUSH 0x5c1f14                       ; 0056d889 | DAT_005c1f14
    PUSH 0x5c1e08                       ; 0056d88e | DAT_005c1e08
    MOV EBX,dword ptr [ESP + 0x20]      ; 0056d893
    XOR EDX,EDX                         ; 0056d897
    PUSH EBX                            ; 0056d899
    MOV dword ptr [0x005c1f18],EDX      ; 0056d89a | DAT_005c1f18
    CALL crt_time.c_parse_timezone_spec_FUN_0056d658 ; 0056d8a0
        ;   XREF to: 0056d658 (UNCONDITIONAL_CALL)  ; char * crt_time.c_parse_timezone_spec_FUN_0056d658(char * tz_string, char * name_buffer, int * offset_seconds)
    MOV EDX,EAX                         ; 0056d8a5
    MOV AH,byte ptr [EAX]               ; 0056d8a7
    ADD ESP,0xc                         ; 0056d8a9
    TEST AH,AH                          ; 0056d8ac
    JNZ 0x0056d8c1                      ; 0056d8ae
        ;   XREF to: 0056d8c1 (CONDITIONAL_JUMP)  ; LAB_0056d8c1
    MOV ESI,dword ptr [0x005c1f1c]      ; 0056d8b0 | DAT_005c1f1c
    MOV byte ptr [0x005c1e89],AH        ; 0056d8b6 | DAT_005c1e89
    JMP 0x0056d98d                      ; 0056d8bc
        ;   XREF to: 0056d98d (UNCONDITIONAL_JUMP)  ; LAB_0056d98d
    MOV EAX,[0x005c1f14]                ; 0056d8c1 | DAT_005c1f14
        ;   Label: LAB_0056d8c1
    SUB EAX,0xe10                       ; 0056d8c6
    MOV dword ptr [ESP],EAX             ; 0056d8cb
    MOV EAX,ESP                         ; 0056d8ce
    PUSH EAX                            ; 0056d8d0
    PUSH 0x5c1e89                       ; 0056d8d1 | DAT_005c1e89
    MOV ECX,0x1                         ; 0056d8d6
    PUSH EDX                            ; 0056d8db
    MOV dword ptr [0x005c1f18],ECX      ; 0056d8dc | DAT_005c1f18
    CALL crt_time.c_parse_timezone_spec_FUN_0056d658 ; 0056d8e2
        ;   XREF to: 0056d658 (UNCONDITIONAL_CALL)  ; char * crt_time.c_parse_timezone_spec_FUN_0056d658(char * tz_string, char * name_buffer, int * offset_seconds)
    ADD ESP,0xc                         ; 0056d8e7
    MOV EBX,dword ptr [0x005c1f14]      ; 0056d8ea | DAT_005c1f14
    MOV ESI,dword ptr [ESP]             ; 0056d8f0
    SUB EBX,ESI                         ; 0056d8f3
    MOV ESI,EBX                         ; 0056d8f5
    MOV dword ptr [0x005c1f1c],EBX      ; 0056d8f7 | DAT_005c1f1c
    MOV BL,byte ptr [EAX]               ; 0056d8fd
    MOV EDX,EAX                         ; 0056d8ff
    CMP BL,0x2c                         ; 0056d901
    JNZ 0x0056d917                      ; 0056d904
        ;   XREF to: 0056d917 (CONDITIONAL_JUMP)  ; LAB_0056d917
    PUSH 0x5c1dc0                       ; 0056d906 | DAT_005c1dc0
    INC EAX                             ; 0056d90b
    PUSH EAX                            ; 0056d90c
    CALL crt_time.c_parse_dst_rule_FUN_0056d774 ; 0056d90d
        ;   XREF to: 0056d774 (UNCONDITIONAL_CALL)  ; char * crt_time.c_parse_dst_rule_FUN_0056d774(char * rule_string, dst_rule * rule)
    ADD ESP,0x8                         ; 0056d912
    MOV EDX,EAX                         ; 0056d915
    MOV BH,byte ptr [EDX]               ; 0056d917
        ;   Label: LAB_0056d917
    MOV ESI,dword ptr [0x005c1f1c]      ; 0056d919 | DAT_005c1f1c
    CMP BH,0x2c                         ; 0056d91f
    JNZ 0x0056d98d                      ; 0056d922
        ;   XREF to: 0056d98d (CONDITIONAL_JUMP)  ; LAB_0056d98d
    PUSH 0x5c1de4                       ; 0056d924 | DAT_005c1de4
    INC EDX                             ; 0056d929
    PUSH EDX                            ; 0056d92a
    CALL crt_time.c_parse_dst_rule_FUN_0056d774 ; 0056d92b
        ;   XREF to: 0056d774 (UNCONDITIONAL_CALL)  ; char * crt_time.c_parse_dst_rule_FUN_0056d774(char * rule_string, dst_rule * rule)
    MOV ESI,dword ptr [0x005c1f1c]      ; 0056d930 | DAT_005c1f1c
    MOV EBX,0xe10                       ; 0056d936
    MOV EDX,ESI                         ; 0056d93b
    MOV EAX,ESI                         ; 0056d93d
    SAR EDX,0x1f                        ; 0056d93f
    IDIV EBX                            ; 0056d942
    MOV EDI,dword ptr [0x005c1dec]      ; 0056d944 | DAT_005c1dec
    MOV EBX,0x3c                        ; 0056d94a
    MOV EDX,ESI                         ; 0056d94f
    SUB EDI,EAX                         ; 0056d951
    MOV EAX,ESI                         ; 0056d953
    SAR EDX,0x1f                        ; 0056d955
    IDIV EBX                            ; 0056d958
    MOV EDX,EAX                         ; 0056d95a
    SAR EDX,0x1f                        ; 0056d95c
    IDIV EBX                            ; 0056d95f
    MOV EBP,dword ptr [0x005c1de8]      ; 0056d961 | DAT_005c1de8
    SUB EBP,EDX                         ; 0056d967
    MOV EDX,ESI                         ; 0056d969
    MOV EAX,ESI                         ; 0056d96b
    SAR EDX,0x1f                        ; 0056d96d
    IDIV EBX                            ; 0056d970
    ADD ESP,0x8                         ; 0056d972
    MOV EAX,[0x005c1de4]                ; 0056d975 | DAT_005c1de4
    MOV dword ptr [0x005c1dec],EDI      ; 0056d97a | DAT_005c1dec
    SUB EAX,EDX                         ; 0056d980
    MOV dword ptr [0x005c1de8],EBP      ; 0056d982 | DAT_005c1de8
    MOV [0x005c1de4],EAX                ; 0056d988 | DAT_005c1de4
    MOV dword ptr [0x005c1f1c],ESI      ; 0056d98d | DAT_005c1f1c
        ;   Label: LAB_0056d98d
    ADD ESP,0x4                         ; 0056d993
    POP EBP                             ; 0056d996
    POP EDI                             ; 0056d997
    POP ESI                             ; 0056d998
    POP EBX                             ; 0056d999
    RET                                 ; 0056d99a

