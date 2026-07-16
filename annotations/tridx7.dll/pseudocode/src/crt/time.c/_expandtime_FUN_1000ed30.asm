; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_time_c__expandtime_FUN_1000ed30(uchar code,_tm *tb,char **buf,size_t *count)
;
; Parameters:
; uchar            Stack[0x4]:1   code
; _tm *            Stack[0x8]:4   tb
; char * *         Stack[0xc]:4   buf
; size_t *         Stack[0x10]:4   count
;
; XREF[2]:
;   crt_time.c__expand_locale_picture_FUN_1000f3c0 at 1000f5ea
;   crt_time.c_strftime_FUN_1000ec20 at 1000ecdf
;
; Referenced Globals:
;   undefined1* switchdataD_1000f1e0 = 1000ed5a
;   undefined4 PTR_caseD_63_1000f218+3
;   TerminatedCString s_H_mm_ss_10012d30
;   TerminatedCString s_dddd_MMMM_dd_yyyy_10012d38
;   TerminatedCString s_M_d_yy_10012d4c
;   TerminatedCString s_PM_10012d54
;   TerminatedCString s_AM_10012d58
;   void* PTR_s_Sun_10018160 = 10012e50
;   undefined1* PTR_s_Sunday_1001817c = 10012e30
;   undefined1* PTR_s_Jan_10018198 = 10012df0
;   undefined1* PTR_s_January_100181c8 = 10012dbc
;   void* PTR_s_AM_100181f8 = 10012d58
;   void* PTR_s_PM_100181fc = 10012d54
;   undefined1* PTR_s_M_d_yy_10012d4c_10018200 = 10012d4c
;   undefined1* PTR_s_dddd_MMMM_dd_yyyy_10012d38_10018204 = 10012d38
;   ... and 5 more
;
; Called Functions:
;   crt_time.c___tzset_FUN_1000fff0
;   crt_time.c__expand_locale_picture_FUN_1000f3c0
;   crt_time.c__store_number_FUN_1000f2d0
;   crt_time.c__store_str_FUN_1000f2a0
;
; *****************************************************************************

section .text

    MOVSX EAX,byte ptr [ESP + 0x4]      ; 1000ed30
        ;   Label: crt_time.c__expandtime_FUN_1000ed30
    PUSH EBX                            ; 1000ed35
    SUB EAX,0x25                        ; 1000ed36
    PUSH ESI                            ; 1000ed39
    CMP EAX,0x55                        ; 1000ed3a
    PUSH EDI                            ; 1000ed3d
    MOV ESI,dword ptr [0x1001820c]      ; 1000ed3e | PTR_PTR_1001820c
    PUSH EBP                            ; 1000ed44
    JA 0x1000f1db                       ; 1000ed45
        ;   XREF to: 1000f1db (CONDITIONAL_JUMP)  ; caseD_76
    XOR ECX,ECX                         ; 1000ed4b
    MOV CL,byte ptr [EAX + 0x1000f240]  ; 1000ed4d | PTR_caseD_63_1000f218+3
    JMP dword ptr [ECX*0x4 + 0x1000f1e0] ; 1000ed53 | caseD_25 | caseD_76 | caseD_41
        ;   Label: switchD
    MOV EDI,dword ptr [ESP + 0x1c]      ; 1000ed5a
        ;   Label: caseD_25
    MOV EBX,dword ptr [ESP + 0x20]      ; 1000ed5e
    POP EBP                             ; 1000ed62
    MOV EAX,dword ptr [EDI]             ; 1000ed63
    MOV byte ptr [EAX],0x25             ; 1000ed65
    INC dword ptr [EDI]                 ; 1000ed68
    POP EDI                             ; 1000ed6a
    POP ESI                             ; 1000ed6b
    DEC dword ptr [EBX]                 ; 1000ed6c
    POP EBX                             ; 1000ed6e
    RET                                 ; 1000ed6f
    MOV EBX,dword ptr [ESP + 0x20]      ; 1000ed70
        ;   Label: caseD_41
    MOV EDI,dword ptr [ESP + 0x1c]      ; 1000ed74
    MOV EBP,dword ptr [ESP + 0x18]      ; 1000ed78
    PUSH EBX                            ; 1000ed7c
    PUSH EDI                            ; 1000ed7d
    MOV EAX,dword ptr [EBP + 0x18]      ; 1000ed7e
    MOV ECX,dword ptr [ESI + EAX*0x4 + 0x1c] ; 1000ed81 | PTR_s_Sunday_1001817c
    PUSH ECX                            ; 1000ed85
    CALL crt_time.c__store_str_FUN_1000f2a0 ; 1000ed86
        ;   XREF to: 1000f2a0 (UNCONDITIONAL_CALL)  ; void crt_time.c__store_str_FUN_1000f2a0(char * src, char * * pbuf, int * pcount)
    ADD ESP,0xc                         ; 1000ed8b
    POP EBP                             ; 1000ed8e
    POP EDI                             ; 1000ed8f
    POP ESI                             ; 1000ed90
    POP EBX                             ; 1000ed91
    RET                                 ; 1000ed92
    MOV EBX,dword ptr [ESP + 0x20]      ; 1000ed93
        ;   Label: caseD_42
    MOV EDI,dword ptr [ESP + 0x1c]      ; 1000ed97
    MOV EBP,dword ptr [ESP + 0x18]      ; 1000ed9b
    PUSH EBX                            ; 1000ed9f
    PUSH EDI                            ; 1000eda0
    MOV EAX,dword ptr [EBP + 0x10]      ; 1000eda1
    MOV ECX,dword ptr [ESI + EAX*0x4 + 0x68] ; 1000eda4 | PTR_s_January_100181c8
    PUSH ECX                            ; 1000eda8
    CALL crt_time.c__store_str_FUN_1000f2a0 ; 1000eda9
        ;   XREF to: 1000f2a0 (UNCONDITIONAL_CALL)  ; void crt_time.c__store_str_FUN_1000f2a0(char * src, char * * pbuf, int * pcount)
    ADD ESP,0xc                         ; 1000edae
    POP EBP                             ; 1000edb1
    POP EDI                             ; 1000edb2
    POP ESI                             ; 1000edb3
    POP EBX                             ; 1000edb4
    RET                                 ; 1000edb5
    MOV EAX,[0x10018210]                ; 1000edb6 | DAT_10018210
        ;   Label: caseD_48
    MOV EBX,dword ptr [ESP + 0x20]      ; 1000edbb
    MOV EDI,dword ptr [ESP + 0x1c]      ; 1000edbf
    PUSH EBX                            ; 1000edc3
    MOV EBP,dword ptr [ESP + 0x1c]      ; 1000edc4
    PUSH EDI                            ; 1000edc8
    PUSH 0x2                            ; 1000edc9
    MOV [0x10018214],EAX                ; 1000edcb | DAT_10018214
    MOV EAX,dword ptr [EBP + 0x8]       ; 1000edd0
    PUSH EAX                            ; 1000edd3
    CALL crt_time.c__store_number_FUN_1000f2d0 ; 1000edd4
        ;   XREF to: 1000f2d0 (UNCONDITIONAL_CALL)  ; void crt_time.c__store_number_FUN_1000f2d0(int value, uint width, char * * buf, size_t * count)
    ADD ESP,0x10                        ; 1000edd9
    POP EBP                             ; 1000eddc
    POP EDI                             ; 1000eddd
    POP ESI                             ; 1000edde
    POP EBX                             ; 1000eddf
    RET                                 ; 1000ede0
    MOV EAX,[0x10018210]                ; 1000ede1 | DAT_10018210
        ;   Label: caseD_49
    MOV ECX,0xc                         ; 1000ede6
    MOV EBP,dword ptr [ESP + 0x18]      ; 1000edeb
    MOV [0x10018214],EAX                ; 1000edef | DAT_10018214
    MOV EAX,dword ptr [EBP + 0x8]       ; 1000edf4
    CDQ                                 ; 1000edf7
    IDIV ECX                            ; 1000edf8
    TEST EDX,EDX                        ; 1000edfa
    JNZ 0x1000ee00                      ; 1000edfc
        ;   XREF to: 1000ee00 (CONDITIONAL_JUMP)  ; LAB_1000ee00
    MOV EDX,ECX                         ; 1000edfe
    MOV EBX,dword ptr [ESP + 0x20]      ; 1000ee00
        ;   Label: LAB_1000ee00
    MOV EDI,dword ptr [ESP + 0x1c]      ; 1000ee04
    PUSH EBX                            ; 1000ee08
    PUSH EDI                            ; 1000ee09
    PUSH 0x2                            ; 1000ee0a
    PUSH EDX                            ; 1000ee0c
    CALL crt_time.c__store_number_FUN_1000f2d0 ; 1000ee0d
        ;   XREF to: 1000f2d0 (UNCONDITIONAL_CALL)  ; void crt_time.c__store_number_FUN_1000f2d0(int value, uint width, char * * buf, size_t * count)
    ADD ESP,0x10                        ; 1000ee12
    POP EBP                             ; 1000ee15
    POP EDI                             ; 1000ee16
    POP ESI                             ; 1000ee17
    POP EBX                             ; 1000ee18
    RET                                 ; 1000ee19
    MOV EAX,[0x10018210]                ; 1000ee1a | DAT_10018210
        ;   Label: caseD_4d
    MOV EBX,dword ptr [ESP + 0x20]      ; 1000ee1f
    MOV EDI,dword ptr [ESP + 0x1c]      ; 1000ee23
    PUSH EBX                            ; 1000ee27
    MOV EBP,dword ptr [ESP + 0x1c]      ; 1000ee28
    PUSH EDI                            ; 1000ee2c
    PUSH 0x2                            ; 1000ee2d
    MOV [0x10018214],EAX                ; 1000ee2f | DAT_10018214
    MOV EAX,dword ptr [EBP + 0x4]       ; 1000ee34
    PUSH EAX                            ; 1000ee37
    CALL crt_time.c__store_number_FUN_1000f2d0 ; 1000ee38
        ;   XREF to: 1000f2d0 (UNCONDITIONAL_CALL)  ; void crt_time.c__store_number_FUN_1000f2d0(int value, uint width, char * * buf, size_t * count)
    ADD ESP,0x10                        ; 1000ee3d
    POP EBP                             ; 1000ee40
    POP EDI                             ; 1000ee41
    POP ESI                             ; 1000ee42
    POP EBX                             ; 1000ee43
    RET                                 ; 1000ee44
    MOV EAX,[0x10018210]                ; 1000ee45 | DAT_10018210
        ;   Label: caseD_53
    MOV EBX,dword ptr [ESP + 0x20]      ; 1000ee4a
    MOV EDI,dword ptr [ESP + 0x1c]      ; 1000ee4e
    PUSH EBX                            ; 1000ee52
    MOV EBP,dword ptr [ESP + 0x1c]      ; 1000ee53
    PUSH EDI                            ; 1000ee57
    PUSH 0x2                            ; 1000ee58
    MOV [0x10018214],EAX                ; 1000ee5a | DAT_10018214
    MOV EAX,dword ptr [EBP]             ; 1000ee5f
    PUSH EAX                            ; 1000ee62
    CALL crt_time.c__store_number_FUN_1000f2d0 ; 1000ee63
        ;   XREF to: 1000f2d0 (UNCONDITIONAL_CALL)  ; void crt_time.c__store_number_FUN_1000f2d0(int value, uint width, char * * buf, size_t * count)
    ADD ESP,0x10                        ; 1000ee68
    POP EBP                             ; 1000ee6b
    POP EDI                             ; 1000ee6c
    POP ESI                             ; 1000ee6d
    POP EBX                             ; 1000ee6e
    RET                                 ; 1000ee6f
    MOV EAX,[0x10018210]                ; 1000ee70 | DAT_10018210
        ;   Label: caseD_55
    MOV EBP,dword ptr [ESP + 0x18]      ; 1000ee75
    MOV [0x10018214],EAX                ; 1000ee79 | DAT_10018214
    MOV ESI,dword ptr [EBP + 0x18]      ; 1000ee7e
    JMP 0x1000eea0                      ; 1000ee81
        ;   XREF to: 1000eea0 (UNCONDITIONAL_JUMP)  ; LAB_1000eea0
    MOV EAX,[0x10018210]                ; 1000ee83 | DAT_10018210
        ;   Label: caseD_57
    MOV EBP,dword ptr [ESP + 0x18]      ; 1000ee88
    MOV [0x10018214],EAX                ; 1000ee8c | DAT_10018214
    MOV ESI,dword ptr [EBP + 0x18]      ; 1000ee91
    TEST ESI,ESI                        ; 1000ee94
    JNZ 0x1000ee9f                      ; 1000ee96
        ;   XREF to: 1000ee9f (CONDITIONAL_JUMP)  ; LAB_1000ee9f
    MOV ESI,0x6                         ; 1000ee98
    JMP 0x1000eea0                      ; 1000ee9d
        ;   XREF to: 1000eea0 (UNCONDITIONAL_JUMP)  ; LAB_1000eea0
    DEC ESI                             ; 1000ee9f
        ;   Label: LAB_1000ee9f
    MOV EDI,dword ptr [EBP + 0x1c]      ; 1000eea0
        ;   Label: LAB_1000eea0
    CMP EDI,ESI                         ; 1000eea3
    JGE 0x1000eeab                      ; 1000eea5
        ;   XREF to: 1000eeab (CONDITIONAL_JUMP)  ; LAB_1000eeab
    XOR EBP,EBP                         ; 1000eea7
    JMP 0x1000eec1                      ; 1000eea9
        ;   XREF to: 1000eec1 (UNCONDITIONAL_JUMP)  ; LAB_1000eec1
    MOV ECX,0x7                         ; 1000eeab
        ;   Label: LAB_1000eeab
    MOV EAX,EDI                         ; 1000eeb0
    CDQ                                 ; 1000eeb2
    IDIV ECX                            ; 1000eeb3
    MOV EBP,EAX                         ; 1000eeb5
    MOV EAX,EDI                         ; 1000eeb7
    CDQ                                 ; 1000eeb9
    IDIV ECX                            ; 1000eeba
    CMP EDX,ESI                         ; 1000eebc
    JL 0x1000eec1                       ; 1000eebe
        ;   XREF to: 1000eec1 (CONDITIONAL_JUMP)  ; LAB_1000eec1
    INC EBP                             ; 1000eec0
    MOV EBX,dword ptr [ESP + 0x20]      ; 1000eec1
        ;   Label: LAB_1000eec1
    MOV EDI,dword ptr [ESP + 0x1c]      ; 1000eec5
    PUSH EBX                            ; 1000eec9
    PUSH EDI                            ; 1000eeca
    PUSH 0x2                            ; 1000eecb
    PUSH EBP                            ; 1000eecd
    CALL crt_time.c__store_number_FUN_1000f2d0 ; 1000eece
        ;   XREF to: 1000f2d0 (UNCONDITIONAL_CALL)  ; void crt_time.c__store_number_FUN_1000f2d0(int value, uint width, char * * buf, size_t * count)
    ADD ESP,0x10                        ; 1000eed3
    POP EBP                             ; 1000eed6
    POP EDI                             ; 1000eed7
    POP ESI                             ; 1000eed8
    POP EBX                             ; 1000eed9
    RET                                 ; 1000eeda
    MOV EBX,dword ptr [ESP + 0x20]      ; 1000eedb
        ;   Label: caseD_58
    MOV EDI,dword ptr [ESP + 0x1c]      ; 1000eedf
    MOV EBP,dword ptr [ESP + 0x18]      ; 1000eee3
    PUSH EBX                            ; 1000eee7
    MOV dword ptr [0x10018210],0x0      ; 1000eee8 | DAT_10018210
    PUSH EDI                            ; 1000eef2
    MOV EAX,dword ptr [ESI + 0xa8]      ; 1000eef3 | PTR_s_H_mm_ss_10012d30_10018208
    PUSH EBP                            ; 1000eef9
    PUSH EAX                            ; 1000eefa | = "H:mm:ss"
    CALL crt_time.c__expand_locale_picture_FUN_1000f3c0 ; 1000eefb
        ;   XREF to: 1000f3c0 (UNCONDITIONAL_CALL)  ; void crt_time.c__expand_locale_picture_FUN_1000f3c0(char * picture, uint flags, char * * buf, size_t * count)
    ADD ESP,0x10                        ; 1000ef00
    POP EBP                             ; 1000ef03
    POP EDI                             ; 1000ef04
    POP ESI                             ; 1000ef05
    POP EBX                             ; 1000ef06
    RET                                 ; 1000ef07
    MOV EAX,[0x10018210]                ; 1000ef08 | DAT_10018210
        ;   Label: caseD_59
    MOV EBP,dword ptr [ESP + 0x18]      ; 1000ef0d
    MOV ECX,0x64                        ; 1000ef11
    MOV [0x10018214],EAX                ; 1000ef16 | DAT_10018214
    MOV EDI,dword ptr [EBP + 0x14]      ; 1000ef1b
    MOV ESI,0x64                        ; 1000ef1e
    MOV EAX,EDI                         ; 1000ef23
    CDQ                                 ; 1000ef25
    IDIV ECX                            ; 1000ef26
    LEA EAX,[EAX*0x4 + 0x4c]            ; 1000ef28
    MOV EBX,dword ptr [ESP + 0x20]      ; 1000ef2f
    PUSH EBX                            ; 1000ef33
    LEA EDX,[EAX + EAX*0x4]             ; 1000ef34
    MOV EAX,EDI                         ; 1000ef37
    LEA ECX,[EDX + EDX*0x4]             ; 1000ef39
    CDQ                                 ; 1000ef3c
    IDIV ESI                            ; 1000ef3d
    ADD ECX,EDX                         ; 1000ef3f
    MOV EDI,dword ptr [ESP + 0x20]      ; 1000ef41
    PUSH EDI                            ; 1000ef45
    PUSH 0x4                            ; 1000ef46
    PUSH ECX                            ; 1000ef48
    CALL crt_time.c__store_number_FUN_1000f2d0 ; 1000ef49
        ;   XREF to: 1000f2d0 (UNCONDITIONAL_CALL)  ; void crt_time.c__store_number_FUN_1000f2d0(int value, uint width, char * * buf, size_t * count)
    ADD ESP,0x10                        ; 1000ef4e
    POP EBP                             ; 1000ef51
    POP EDI                             ; 1000ef52
    POP ESI                             ; 1000ef53
    POP EBX                             ; 1000ef54
    RET                                 ; 1000ef55
    CALL crt_time.c___tzset_FUN_1000fff0 ; 1000ef56
        ;   XREF to: 1000fff0 (UNCONDITIONAL_CALL)  ; void crt_time.c___tzset_FUN_1000fff0()
        ;   Label: caseD_5a
    MOV EBX,dword ptr [ESP + 0x20]      ; 1000ef5b
    MOV EDI,dword ptr [ESP + 0x1c]      ; 1000ef5f
    MOV EBP,dword ptr [ESP + 0x18]      ; 1000ef63
    PUSH EBX                            ; 1000ef67
    CMP dword ptr [EBP + 0x20],0x1      ; 1000ef68
    SBB EAX,EAX                         ; 1000ef6c
    PUSH EDI                            ; 1000ef6e
    MOV ECX,dword ptr [EAX*0x4 + 0x100185b4] ; 1000ef6f | PTR_DAT_100185b4
    PUSH ECX                            ; 1000ef76
    CALL crt_time.c__store_str_FUN_1000f2a0 ; 1000ef77
        ;   XREF to: 1000f2a0 (UNCONDITIONAL_CALL)  ; void crt_time.c__store_str_FUN_1000f2a0(char * src, char * * pbuf, int * pcount)
    ADD ESP,0xc                         ; 1000ef7c
    POP EBP                             ; 1000ef7f
    POP EDI                             ; 1000ef80
    POP ESI                             ; 1000ef81
    POP EBX                             ; 1000ef82
    RET                                 ; 1000ef83
    MOV EBX,dword ptr [ESP + 0x20]      ; 1000ef84
        ;   Label: caseD_61
    MOV EDI,dword ptr [ESP + 0x1c]      ; 1000ef88
    MOV EBP,dword ptr [ESP + 0x18]      ; 1000ef8c
    PUSH EBX                            ; 1000ef90
    PUSH EDI                            ; 1000ef91
    MOV EAX,dword ptr [EBP + 0x18]      ; 1000ef92
    MOV ECX,dword ptr [ESI + EAX*0x4]   ; 1000ef95 | PTR_s_Sun_10018160
    PUSH ECX                            ; 1000ef98
    CALL crt_time.c__store_str_FUN_1000f2a0 ; 1000ef99
        ;   XREF to: 1000f2a0 (UNCONDITIONAL_CALL)  ; void crt_time.c__store_str_FUN_1000f2a0(char * src, char * * pbuf, int * pcount)
    ADD ESP,0xc                         ; 1000ef9e
    POP EBP                             ; 1000efa1
    POP EDI                             ; 1000efa2
    POP ESI                             ; 1000efa3
    POP EBX                             ; 1000efa4
    RET                                 ; 1000efa5
    MOV EBX,dword ptr [ESP + 0x20]      ; 1000efa6
        ;   Label: caseD_62
    MOV EDI,dword ptr [ESP + 0x1c]      ; 1000efaa
    MOV EBP,dword ptr [ESP + 0x18]      ; 1000efae
    PUSH EBX                            ; 1000efb2
    PUSH EDI                            ; 1000efb3
    MOV EAX,dword ptr [EBP + 0x10]      ; 1000efb4
    MOV ECX,dword ptr [ESI + EAX*0x4 + 0x38] ; 1000efb7 | PTR_s_Jan_10018198
    PUSH ECX                            ; 1000efbb
    CALL crt_time.c__store_str_FUN_1000f2a0 ; 1000efbc
        ;   XREF to: 1000f2a0 (UNCONDITIONAL_CALL)  ; void crt_time.c__store_str_FUN_1000f2a0(char * src, char * * pbuf, int * pcount)
    ADD ESP,0xc                         ; 1000efc1
    POP EBP                             ; 1000efc4
    POP EDI                             ; 1000efc5
    POP ESI                             ; 1000efc6
    POP EBX                             ; 1000efc7
    RET                                 ; 1000efc8
    CMP dword ptr [0x10018210],0x0      ; 1000efc9 | DAT_10018210
        ;   Label: caseD_63
    JZ 0x1000f023                       ; 1000efd0
        ;   XREF to: 1000f023 (CONDITIONAL_JUMP)  ; LAB_1000f023
    MOV EBX,dword ptr [ESP + 0x20]      ; 1000efd2
    MOV EDI,dword ptr [ESP + 0x1c]      ; 1000efd6
    MOV EBP,dword ptr [ESP + 0x18]      ; 1000efda
    PUSH EBX                            ; 1000efde
    MOV dword ptr [0x10018210],0x0      ; 1000efdf | DAT_10018210
    PUSH EDI                            ; 1000efe9
    MOV EAX,dword ptr [ESI + 0xa4]      ; 1000efea | PTR_s_dddd_MMMM_dd_yyyy_10012d38_10018204
    PUSH EBP                            ; 1000eff0
    PUSH EAX                            ; 1000eff1 | = "dddd, MMMM dd, yyyy"
    CALL crt_time.c__expand_locale_picture_FUN_1000f3c0 ; 1000eff2
        ;   XREF to: 1000f3c0 (UNCONDITIONAL_CALL)  ; void crt_time.c__expand_locale_picture_FUN_1000f3c0(char * picture, uint flags, char * * buf, size_t * count)
    ADD ESP,0x10                        ; 1000eff7
    CMP dword ptr [EBX],0x0             ; 1000effa
    JZ 0x1000f1db                       ; 1000effd
        ;   XREF to: 1000f1db (CONDITIONAL_JUMP)  ; caseD_76
    MOV EAX,dword ptr [EDI]             ; 1000f003
    PUSH EBX                            ; 1000f005
    PUSH EDI                            ; 1000f006
    PUSH EBP                            ; 1000f007
    MOV byte ptr [EAX],0x20             ; 1000f008
    INC dword ptr [EDI]                 ; 1000f00b
    DEC dword ptr [EBX]                 ; 1000f00d
    MOV ECX,dword ptr [ESI + 0xa8]      ; 1000f00f | PTR_s_H_mm_ss_10012d30_10018208
    PUSH ECX                            ; 1000f015 | = "H:mm:ss"
    CALL crt_time.c__expand_locale_picture_FUN_1000f3c0 ; 1000f016
        ;   XREF to: 1000f3c0 (UNCONDITIONAL_CALL)  ; void crt_time.c__expand_locale_picture_FUN_1000f3c0(char * picture, uint flags, char * * buf, size_t * count)
    ADD ESP,0x10                        ; 1000f01b
    POP EBP                             ; 1000f01e
    POP EDI                             ; 1000f01f
    POP ESI                             ; 1000f020
    POP EBX                             ; 1000f021
    RET                                 ; 1000f022
    MOV EBX,dword ptr [ESP + 0x20]      ; 1000f023
        ;   Label: LAB_1000f023
    MOV EDI,dword ptr [ESP + 0x1c]      ; 1000f027
    MOV EBP,dword ptr [ESP + 0x18]      ; 1000f02b
    PUSH EBX                            ; 1000f02f
    PUSH EDI                            ; 1000f030
    MOV EAX,dword ptr [ESI + 0xa0]      ; 1000f031 | PTR_s_M_d_yy_10012d4c_10018200
    PUSH EBP                            ; 1000f037
    PUSH EAX                            ; 1000f038 | = "M/d/yy"
    CALL crt_time.c__expand_locale_picture_FUN_1000f3c0 ; 1000f039
        ;   XREF to: 1000f3c0 (UNCONDITIONAL_CALL)  ; void crt_time.c__expand_locale_picture_FUN_1000f3c0(char * picture, uint flags, char * * buf, size_t * count)
    ADD ESP,0x10                        ; 1000f03e
    CMP dword ptr [EBX],0x0             ; 1000f041
    JZ 0x1000f1db                       ; 1000f044
        ;   XREF to: 1000f1db (CONDITIONAL_JUMP)  ; caseD_76
    MOV EAX,dword ptr [EDI]             ; 1000f04a
    PUSH EBX                            ; 1000f04c
    PUSH EDI                            ; 1000f04d
    PUSH EBP                            ; 1000f04e
    MOV byte ptr [EAX],0x20             ; 1000f04f
    INC dword ptr [EDI]                 ; 1000f052
    DEC dword ptr [EBX]                 ; 1000f054
    MOV ECX,dword ptr [ESI + 0xa8]      ; 1000f056 | PTR_s_H_mm_ss_10012d30_10018208
    PUSH ECX                            ; 1000f05c | = "H:mm:ss"
    CALL crt_time.c__expand_locale_picture_FUN_1000f3c0 ; 1000f05d
        ;   XREF to: 1000f3c0 (UNCONDITIONAL_CALL)  ; void crt_time.c__expand_locale_picture_FUN_1000f3c0(char * picture, uint flags, char * * buf, size_t * count)
    ADD ESP,0x10                        ; 1000f062
    POP EBP                             ; 1000f065
    POP EDI                             ; 1000f066
    POP ESI                             ; 1000f067
    POP EBX                             ; 1000f068
    RET                                 ; 1000f069
    MOV EAX,[0x10018210]                ; 1000f06a | DAT_10018210
        ;   Label: caseD_64
    MOV EBX,dword ptr [ESP + 0x20]      ; 1000f06f
    MOV EDI,dword ptr [ESP + 0x1c]      ; 1000f073
    PUSH EBX                            ; 1000f077
    MOV EBP,dword ptr [ESP + 0x1c]      ; 1000f078
    PUSH EDI                            ; 1000f07c
    PUSH 0x2                            ; 1000f07d
    MOV [0x10018214],EAX                ; 1000f07f | DAT_10018214
    MOV EAX,dword ptr [EBP + 0xc]       ; 1000f084
    PUSH EAX                            ; 1000f087
    CALL crt_time.c__store_number_FUN_1000f2d0 ; 1000f088
        ;   XREF to: 1000f2d0 (UNCONDITIONAL_CALL)  ; void crt_time.c__store_number_FUN_1000f2d0(int value, uint width, char * * buf, size_t * count)
    ADD ESP,0x10                        ; 1000f08d
    POP EBP                             ; 1000f090
    POP EDI                             ; 1000f091
    POP ESI                             ; 1000f092
    POP EBX                             ; 1000f093
    RET                                 ; 1000f094
    MOV EAX,[0x10018210]                ; 1000f095 | DAT_10018210
        ;   Label: caseD_6a
    MOV EBX,dword ptr [ESP + 0x20]      ; 1000f09a
    MOV EDI,dword ptr [ESP + 0x1c]      ; 1000f09e
    PUSH EBX                            ; 1000f0a2
    MOV EBP,dword ptr [ESP + 0x1c]      ; 1000f0a3
    PUSH EDI                            ; 1000f0a7
    PUSH 0x3                            ; 1000f0a8
    MOV [0x10018214],EAX                ; 1000f0aa | DAT_10018214
    MOV EAX,dword ptr [EBP + 0x1c]      ; 1000f0af
    INC EAX                             ; 1000f0b2
    PUSH EAX                            ; 1000f0b3
    CALL crt_time.c__store_number_FUN_1000f2d0 ; 1000f0b4
        ;   XREF to: 1000f2d0 (UNCONDITIONAL_CALL)  ; void crt_time.c__store_number_FUN_1000f2d0(int value, uint width, char * * buf, size_t * count)
    ADD ESP,0x10                        ; 1000f0b9
    POP EBP                             ; 1000f0bc
    POP EDI                             ; 1000f0bd
    POP ESI                             ; 1000f0be
    POP EBX                             ; 1000f0bf
    RET                                 ; 1000f0c0
    MOV EAX,[0x10018210]                ; 1000f0c1 | DAT_10018210
        ;   Label: caseD_6d
    MOV EBX,dword ptr [ESP + 0x20]      ; 1000f0c6
    MOV EDI,dword ptr [ESP + 0x1c]      ; 1000f0ca
    PUSH EBX                            ; 1000f0ce
    MOV EBP,dword ptr [ESP + 0x1c]      ; 1000f0cf
    PUSH EDI                            ; 1000f0d3
    PUSH 0x2                            ; 1000f0d4
    MOV [0x10018214],EAX                ; 1000f0d6 | DAT_10018214
    MOV EAX,dword ptr [EBP + 0x10]      ; 1000f0db
    INC EAX                             ; 1000f0de
    PUSH EAX                            ; 1000f0df
    CALL crt_time.c__store_number_FUN_1000f2d0 ; 1000f0e0
        ;   XREF to: 1000f2d0 (UNCONDITIONAL_CALL)  ; void crt_time.c__store_number_FUN_1000f2d0(int value, uint width, char * * buf, size_t * count)
    ADD ESP,0x10                        ; 1000f0e5
    POP EBP                             ; 1000f0e8
    POP EDI                             ; 1000f0e9
    POP ESI                             ; 1000f0ea
    POP EBX                             ; 1000f0eb
    RET                                 ; 1000f0ec
    MOV EBP,dword ptr [ESP + 0x18]      ; 1000f0ed
        ;   Label: caseD_70
    MOV EBX,dword ptr [ESP + 0x20]      ; 1000f0f1
    MOV EDI,dword ptr [ESP + 0x1c]      ; 1000f0f5
    PUSH EBX                            ; 1000f0f9
    CMP dword ptr [EBP + 0x8],0xb       ; 1000f0fa
    PUSH EDI                            ; 1000f0fe
    JG 0x1000f115                       ; 1000f0ff
        ;   XREF to: 1000f115 (CONDITIONAL_JUMP)  ; LAB_1000f115
    MOV EAX,dword ptr [ESI + 0x98]      ; 1000f101 | PTR_s_AM_100181f8
    PUSH EAX                            ; 1000f107 | = "AM"
    CALL crt_time.c__store_str_FUN_1000f2a0 ; 1000f108
        ;   XREF to: 1000f2a0 (UNCONDITIONAL_CALL)  ; void crt_time.c__store_str_FUN_1000f2a0(char * src, char * * pbuf, int * pcount)
    ADD ESP,0xc                         ; 1000f10d
    POP EBP                             ; 1000f110
    POP EDI                             ; 1000f111
    POP ESI                             ; 1000f112
    POP EBX                             ; 1000f113
    RET                                 ; 1000f114
    MOV EAX,dword ptr [ESI + 0x9c]      ; 1000f115 | PTR_s_PM_100181fc
        ;   Label: LAB_1000f115
    PUSH EAX                            ; 1000f11b | = "PM"
    CALL crt_time.c__store_str_FUN_1000f2a0 ; 1000f11c
        ;   XREF to: 1000f2a0 (UNCONDITIONAL_CALL)  ; void crt_time.c__store_str_FUN_1000f2a0(char * src, char * * pbuf, int * pcount)
    ADD ESP,0xc                         ; 1000f121
    POP EBP                             ; 1000f124
    POP EDI                             ; 1000f125
    POP ESI                             ; 1000f126
    POP EBX                             ; 1000f127
    RET                                 ; 1000f128
    MOV EAX,[0x10018210]                ; 1000f129 | DAT_10018210
        ;   Label: caseD_77
    MOV EBX,dword ptr [ESP + 0x20]      ; 1000f12e
    MOV EDI,dword ptr [ESP + 0x1c]      ; 1000f132
    PUSH EBX                            ; 1000f136
    MOV EBP,dword ptr [ESP + 0x1c]      ; 1000f137
    PUSH EDI                            ; 1000f13b
    PUSH 0x1                            ; 1000f13c
    MOV [0x10018214],EAX                ; 1000f13e | DAT_10018214
    MOV EAX,dword ptr [EBP + 0x18]      ; 1000f143
    PUSH EAX                            ; 1000f146
    CALL crt_time.c__store_number_FUN_1000f2d0 ; 1000f147
        ;   XREF to: 1000f2d0 (UNCONDITIONAL_CALL)  ; void crt_time.c__store_number_FUN_1000f2d0(int value, uint width, char * * buf, size_t * count)
    ADD ESP,0x10                        ; 1000f14c
    POP EBP                             ; 1000f14f
    POP EDI                             ; 1000f150
    POP ESI                             ; 1000f151
    POP EBX                             ; 1000f152
    RET                                 ; 1000f153
    CMP dword ptr [0x10018210],0x0      ; 1000f154 | DAT_10018210
        ;   Label: caseD_78
    JZ 0x1000f18a                       ; 1000f15b
        ;   XREF to: 1000f18a (CONDITIONAL_JUMP)  ; LAB_1000f18a
    MOV EBX,dword ptr [ESP + 0x20]      ; 1000f15d
    MOV EDI,dword ptr [ESP + 0x1c]      ; 1000f161
    MOV EBP,dword ptr [ESP + 0x18]      ; 1000f165
    PUSH EBX                            ; 1000f169
    MOV dword ptr [0x10018210],0x0      ; 1000f16a | DAT_10018210
    PUSH EDI                            ; 1000f174
    MOV EAX,dword ptr [ESI + 0xa4]      ; 1000f175 | PTR_s_dddd_MMMM_dd_yyyy_10012d38_10018204
    PUSH EBP                            ; 1000f17b
    PUSH EAX                            ; 1000f17c | = "dddd, MMMM dd, yyyy"
    CALL crt_time.c__expand_locale_picture_FUN_1000f3c0 ; 1000f17d
        ;   XREF to: 1000f3c0 (UNCONDITIONAL_CALL)  ; void crt_time.c__expand_locale_picture_FUN_1000f3c0(char * picture, uint flags, char * * buf, size_t * count)
    ADD ESP,0x10                        ; 1000f182
    POP EBP                             ; 1000f185
    POP EDI                             ; 1000f186
    POP ESI                             ; 1000f187
    POP EBX                             ; 1000f188
    RET                                 ; 1000f189
    MOV EBX,dword ptr [ESP + 0x20]      ; 1000f18a
        ;   Label: LAB_1000f18a
    MOV EDI,dword ptr [ESP + 0x1c]      ; 1000f18e
    MOV EBP,dword ptr [ESP + 0x18]      ; 1000f192
    PUSH EBX                            ; 1000f196
    PUSH EDI                            ; 1000f197
    MOV EAX,dword ptr [ESI + 0xa0]      ; 1000f198 | PTR_s_M_d_yy_10012d4c_10018200
    PUSH EBP                            ; 1000f19e
    PUSH EAX                            ; 1000f19f | = "M/d/yy"
    CALL crt_time.c__expand_locale_picture_FUN_1000f3c0 ; 1000f1a0
        ;   XREF to: 1000f3c0 (UNCONDITIONAL_CALL)  ; void crt_time.c__expand_locale_picture_FUN_1000f3c0(char * picture, uint flags, char * * buf, size_t * count)
    ADD ESP,0x10                        ; 1000f1a5
    POP EBP                             ; 1000f1a8
    POP EDI                             ; 1000f1a9
    POP ESI                             ; 1000f1aa
    POP EBX                             ; 1000f1ab
    RET                                 ; 1000f1ac
    MOV EAX,[0x10018210]                ; 1000f1ad | DAT_10018210
        ;   Label: caseD_79
    MOV ECX,0x64                        ; 1000f1b2
    MOV EBP,dword ptr [ESP + 0x18]      ; 1000f1b7
    MOV EBX,dword ptr [ESP + 0x20]      ; 1000f1bb
    MOV EDI,dword ptr [ESP + 0x1c]      ; 1000f1bf
    PUSH EBX                            ; 1000f1c3
    PUSH EDI                            ; 1000f1c4
    MOV [0x10018214],EAX                ; 1000f1c5 | DAT_10018214
    MOV EAX,dword ptr [EBP + 0x14]      ; 1000f1ca
    PUSH 0x2                            ; 1000f1cd
    CDQ                                 ; 1000f1cf
    IDIV ECX                            ; 1000f1d0
    PUSH EDX                            ; 1000f1d2
    CALL crt_time.c__store_number_FUN_1000f2d0 ; 1000f1d3
        ;   XREF to: 1000f2d0 (UNCONDITIONAL_CALL)  ; void crt_time.c__store_number_FUN_1000f2d0(int value, uint width, char * * buf, size_t * count)
    ADD ESP,0x10                        ; 1000f1d8
    POP EBP                             ; 1000f1db
        ;   Label: caseD_26
    POP EDI                             ; 1000f1dc
    POP ESI                             ; 1000f1dd
    POP EBX                             ; 1000f1de
    RET                                 ; 1000f1df

