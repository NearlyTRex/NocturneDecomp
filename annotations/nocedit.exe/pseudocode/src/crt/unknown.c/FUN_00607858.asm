; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_00607858(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_unknown.c_FUN_00607958 at 0060798a
;
; Referenced Globals:
;   undefined4 DAT_00665f34+2
;   short g_DaysInMonth_Normal = 0x0
;   undefined4 DAT_00665f50
;   short g_DaysInMonth_Leap = 0x0
;
; Called Functions:
;   crt_time.c__mktime_FUN_00600f80
;   crt_time.c_is_leap_year_FUN_00607820
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00607858
        ;   Label: crt_unknown.c_FUN_00607858
    PUSH ESI                            ; 00607859
    PUSH EDI                            ; 0060785a
    PUSH EBP                            ; 0060785b
    SUB ESP,0x24                        ; 0060785c
    MOV EBX,dword ptr [ESP + 0x38]      ; 0060785f
    MOV EDI,dword ptr [ESP + 0x3c]      ; 00607863
    MOV EDX,dword ptr [EBX + 0x20]      ; 00607867
    TEST EDX,EDX                        ; 0060786a
    JNZ 0x00607938                      ; 0060786c
        ;   XREF to: 00607938 (CONDITIONAL_JUMP)  ; LAB_00607938
    LEA EAX,[EDI + 0x76c]               ; 00607872
    PUSH EAX                            ; 00607878
    CALL crt_time.c_is_leap_year_FUN_00607820 ; 00607879
        ;   XREF to: 00607820 (UNCONDITIONAL_CALL)  ; int crt_time.c_is_leap_year_FUN_00607820(int year)
    ADD ESP,0x4                         ; 0060787e
    TEST EAX,EAX                        ; 00607881
    JZ 0x00607898                       ; 00607883
        ;   XREF to: 00607898 (CONDITIONAL_JUMP)  ; LAB_00607898
    MOV EAX,dword ptr [EBX + 0x10]      ; 00607885
    MOV ESI,dword ptr [EAX*0x2 + 0x665f52] ; 00607888 | g_DaysInMonth_Leap
    MOV EAX,dword ptr [EAX*0x2 + 0x665f50] ; 0060788f | DAT_00665f50
    JMP 0x006078a9                      ; 00607896
        ;   XREF to: 006078a9 (UNCONDITIONAL_JUMP)  ; LAB_006078a9
    MOV EAX,dword ptr [EBX + 0x10]      ; 00607898
        ;   Label: LAB_00607898
    MOV ESI,dword ptr [EAX*0x2 + 0x665f38] ; 0060789b | g_DaysInMonth_Normal
    MOV EAX,dword ptr [EAX*0x2 + 0x665f36] ; 006078a2 | DAT_00665f34+2
    SAR ESI,0x10                        ; 006078a9
        ;   Label: LAB_006078a9
    SAR EAX,0x10                        ; 006078ac
    SUB ESI,EAX                         ; 006078af
    XOR EBP,EBP                         ; 006078b1
    MOV ECX,0x1                         ; 006078b3
    MOV dword ptr [ESP],EBP             ; 006078b8
    MOV dword ptr [ESP + 0x4],EBP       ; 006078bb
    MOV dword ptr [ESP + 0x8],EBP       ; 006078bf
    MOV dword ptr [ESP + 0xc],ECX       ; 006078c3
    MOV EAX,dword ptr [EBX + 0x10]      ; 006078c7
    MOV dword ptr [ESP + 0x10],EAX      ; 006078ca
    MOV EAX,ESP                         ; 006078ce
    PUSH EAX                            ; 006078d0
    MOV dword ptr [ESP + 0x18],EDI      ; 006078d1
    MOV dword ptr [ESP + 0x24],EBP      ; 006078d5
    CALL crt_time.c__mktime_FUN_00600f80 ; 006078d9
        ;   XREF to: 00600f80 (UNCONDITIONAL_CALL)  ; time_t crt_time.c__mktime_FUN_00600f80(_tm * timeptr)
    ADD ESP,0x4                         ; 006078de
    MOV EDX,dword ptr [EBX + 0x18]      ; 006078e1
    SUB EDX,dword ptr [ESP + 0x18]      ; 006078e4
    ADD EDX,0x7                         ; 006078e8
    MOV ECX,0x7                         ; 006078eb
    MOV EAX,EDX                         ; 006078f0
    SAR EDX,0x1f                        ; 006078f2
    IDIV ECX                            ; 006078f5
    MOV EAX,dword ptr [EBX + 0xc]       ; 006078f7
    CMP EAX,0x5                         ; 006078fa
    JNZ 0x00607920                      ; 006078fd
        ;   XREF to: 00607920 (CONDITIONAL_JUMP)  ; LAB_00607920
    LEA EDI,[EAX + -0x1]                ; 006078ff
    LEA ECX,[EDI*0x8 + 0x0]             ; 00607902
    LEA EAX,[EDX + 0x1]                 ; 00607909
    SUB ECX,EDI                         ; 0060790c
    ADD EAX,ECX                         ; 0060790e
    CMP EAX,ESI                         ; 00607910
    JLE 0x0060791c                      ; 00607912
        ;   XREF to: 0060791c (CONDITIONAL_JUMP)  ; LAB_0060791c
    MOV EAX,dword ptr [EBX + 0xc]       ; 00607914
    SUB EAX,0x2                         ; 00607917
    JMP 0x00607921                      ; 0060791a
        ;   XREF to: 00607921 (UNCONDITIONAL_JUMP)  ; LAB_00607921
    MOV EAX,EDI                         ; 0060791c
        ;   Label: LAB_0060791c
    JMP 0x00607921                      ; 0060791e
        ;   XREF to: 00607921 (UNCONDITIONAL_JUMP)  ; LAB_00607921
    DEC EAX                             ; 00607920
        ;   Label: LAB_00607920
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00607921
        ;   Label: LAB_00607921
    ADD EBX,EDX                         ; 00607925
    MOV EDX,EAX                         ; 00607927
    SHL EAX,0x3                         ; 00607929
    SUB EAX,EDX                         ; 0060792c
    ADD EAX,EBX                         ; 0060792e
    ADD ESP,0x24                        ; 00607930
    POP EBP                             ; 00607933
    POP EDI                             ; 00607934
    POP ESI                             ; 00607935
    POP EBX                             ; 00607936
    RET                                 ; 00607937
    CMP EDX,0x1                         ; 00607938
        ;   Label: LAB_00607938
    JNZ 0x0060794a                      ; 0060793b
        ;   XREF to: 0060794a (CONDITIONAL_JUMP)  ; LAB_0060794a
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0060793d
    SUB EAX,EDX                         ; 00607940
    ADD ESP,0x24                        ; 00607942
    POP EBP                             ; 00607945
    POP EDI                             ; 00607946
    POP ESI                             ; 00607947
    POP EBX                             ; 00607948
    RET                                 ; 00607949
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0060794a
        ;   Label: LAB_0060794a
    ADD ESP,0x24                        ; 0060794d
    POP EBP                             ; 00607950
    POP EDI                             ; 00607951
    POP ESI                             ; 00607952
    POP EBX                             ; 00607953
    RET                                 ; 00607954

