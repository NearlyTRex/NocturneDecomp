; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_locale_c___crtCompareStringA_FUN_10011040(LCID lcid,DWORD flags,LPCSTR str1,int cch1,LPCSTR str2,int cch2,int code_page)
;
; Parameters:
; LCID             Stack[0x4]:4   lcid
; DWORD            Stack[0x8]:4   flags
; LPCSTR           Stack[0xc]:4   str1
; int              Stack[0x10]:4   cch1
; LPCSTR           Stack[0x14]:4   str2
; int              Stack[0x18]:4   cch2
; int              Stack[0x1c]:4   code_page
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined1       Stack[-0xe]:1  local_e
; undefined1       Stack[-0xd]:1  local_d
; undefined1       Stack[-0xc]:1  local_c
;
; XREF[1]:
;   crt_env.c___env_compare_FUN_10010cf0 at 10010d15
;
; Referenced Globals:
;   undefined4 DAT_1001276c
;   undefined4 DAT_10012770
;   undefined4 DAT_10017770
;   undefined4 DAT_10018650
;   void* PTR_GetCPInfo_10242190 = 0024253e
;   void* PTR_CompareStringW_1024219c = 00242782
;   void* PTR_CompareStringA_10242210 = 00242770
;   void* PTR_MultiByteToWideChar_10242220 = 0024257a
;
; Called Functions:
;   CompareStringA
;   CompareStringW
;   crt_heap.c_free_FUN_10005b30
;   crt_heap.c_malloc_FUN_10008830
;   crt_string.c_strncnt_FUN_10011330
;   GetCPInfo
;   MultiByteToWideChar
;
; *****************************************************************************

section .text

    SUB ESP,0x20                        ; 10011040
        ;   Label: crt_locale.c___crtCompareStringA_FUN_10011040
    CMP dword ptr [0x10018650],0x0      ; 10011043 | DAT_10018650
    PUSH EBX                            ; 1001104a
    PUSH ESI                            ; 1001104b
    PUSH EDI                            ; 1001104c
    PUSH EBP                            ; 1001104d
    JNZ 0x10011076                      ; 1001104e
        ;   XREF to: 10011076 (CONDITIONAL_JUMP)  ; LAB_10011076
    PUSH 0x1                            ; 10011050
    PUSH 0x1001276c                     ; 10011052 | DAT_1001276c
    PUSH 0x1                            ; 10011057
    PUSH 0x1001276c                     ; 10011059 | DAT_1001276c
    PUSH 0x0                            ; 1001105e
    PUSH 0x0                            ; 10011060
    CALL dword ptr [0x10242210]         ; 10011062 | PTR_CompareStringA_10242210
    TEST EAX,EAX                        ; 10011068
    JZ 0x10011090                       ; 1001106a
        ;   XREF to: 10011090 (CONDITIONAL_JUMP)  ; LAB_10011090
    MOV dword ptr [0x10018650],0x2      ; 1001106c | DAT_10018650
    MOV EBP,dword ptr [ESP + 0x40]      ; 10011076
        ;   Label: LAB_10011076
    TEST EBP,EBP                        ; 1001107a
    JLE 0x100110c2                      ; 1001107c
        ;   XREF to: 100110c2 (CONDITIONAL_JUMP)  ; LAB_100110c2
    MOV ESI,dword ptr [ESP + 0x3c]      ; 1001107e
    PUSH EBP                            ; 10011082
    PUSH ESI                            ; 10011083
    CALL crt_string.c_strncnt_FUN_10011330 ; 10011084
        ;   XREF to: 10011330 (UNCONDITIONAL_CALL)  ; int crt_string.c_strncnt_FUN_10011330(char * str, int count)
    ADD ESP,0x8                         ; 10011089
    MOV EBP,EAX                         ; 1001108c
    JMP 0x100110c6                      ; 1001108e
        ;   XREF to: 100110c6 (UNCONDITIONAL_JUMP)  ; LAB_100110c6
    PUSH 0x1                            ; 10011090
        ;   Label: LAB_10011090
    PUSH 0x10012770                     ; 10011092 | DAT_10012770
    PUSH 0x1                            ; 10011097
    PUSH 0x10012770                     ; 10011099 | DAT_10012770
    PUSH 0x0                            ; 1001109e
    PUSH 0x0                            ; 100110a0
    CALL dword ptr [0x1024219c]         ; 100110a2 | PTR_CompareStringW_1024219c
    TEST EAX,EAX                        ; 100110a8
    JZ 0x100110b8                       ; 100110aa
        ;   XREF to: 100110b8 (CONDITIONAL_JUMP)  ; LAB_100110b8
    MOV dword ptr [0x10018650],0x1      ; 100110ac | DAT_10018650
    JMP 0x10011076                      ; 100110b6
        ;   XREF to: 10011076 (UNCONDITIONAL_JUMP)  ; LAB_10011076
    XOR EAX,EAX                         ; 100110b8
        ;   Label: LAB_100110b8
    POP EBP                             ; 100110ba
    POP EDI                             ; 100110bb
    POP ESI                             ; 100110bc
    POP EBX                             ; 100110bd
    ADD ESP,0x20                        ; 100110be
    RET                                 ; 100110c1
    MOV ESI,dword ptr [ESP + 0x3c]      ; 100110c2
        ;   Label: LAB_100110c2
    MOV EBX,dword ptr [ESP + 0x48]      ; 100110c6
        ;   Label: LAB_100110c6
    TEST EBX,EBX                        ; 100110ca
    JLE 0x100110e0                      ; 100110cc
        ;   XREF to: 100110e0 (CONDITIONAL_JUMP)  ; LAB_100110e0
    MOV EDI,dword ptr [ESP + 0x44]      ; 100110ce
    PUSH EBX                            ; 100110d2
    PUSH EDI                            ; 100110d3
    CALL crt_string.c_strncnt_FUN_10011330 ; 100110d4
        ;   XREF to: 10011330 (UNCONDITIONAL_CALL)  ; int crt_string.c_strncnt_FUN_10011330(char * str, int count)
    ADD ESP,0x8                         ; 100110d9
    MOV EBX,EAX                         ; 100110dc
    JMP 0x100110e4                      ; 100110de
        ;   XREF to: 100110e4 (UNCONDITIONAL_JUMP)  ; LAB_100110e4
    MOV EDI,dword ptr [ESP + 0x44]      ; 100110e0
        ;   Label: LAB_100110e0
    CMP dword ptr [0x10018650],0x2      ; 100110e4 | DAT_10018650
        ;   Label: LAB_100110e4
    JNZ 0x10011109                      ; 100110eb
        ;   XREF to: 10011109 (CONDITIONAL_JUMP)  ; LAB_10011109
    MOV EAX,dword ptr [ESP + 0x38]      ; 100110ed
    PUSH EBX                            ; 100110f1
    MOV ECX,dword ptr [ESP + 0x38]      ; 100110f2
    PUSH EDI                            ; 100110f6
    PUSH EBP                            ; 100110f7
    PUSH ESI                            ; 100110f8
    PUSH EAX                            ; 100110f9
    PUSH ECX                            ; 100110fa
    CALL dword ptr [0x10242210]         ; 100110fb | PTR_CompareStringA_10242210
    POP EBP                             ; 10011101
    POP EDI                             ; 10011102
    POP ESI                             ; 10011103
    POP EBX                             ; 10011104
    ADD ESP,0x20                        ; 10011105
    RET                                 ; 10011108
    CMP dword ptr [0x10018650],0x1      ; 10011109 | DAT_10018650
        ;   Label: LAB_10011109
    JNZ 0x10011325                      ; 10011110
        ;   XREF to: 10011325 (CONDITIONAL_JUMP)  ; LAB_10011325
    XOR EAX,EAX                         ; 10011116
    MOV dword ptr [ESP + 0x18],EAX      ; 10011118
    MOV dword ptr [ESP + 0x10],EAX      ; 1001111c
    CMP dword ptr [ESP + 0x4c],EAX      ; 10011120
    JNZ 0x1001112f                      ; 10011124
        ;   XREF to: 1001112f (CONDITIONAL_JUMP)  ; LAB_1001112f
    MOV EAX,[0x10017770]                ; 10011126 | DAT_10017770
    MOV dword ptr [ESP + 0x4c],EAX      ; 1001112b
    TEST EBP,EBP                        ; 1001112f
        ;   Label: LAB_1001112f
    JZ 0x1001113b                       ; 10011131
        ;   XREF to: 1001113b (CONDITIONAL_JUMP)  ; LAB_1001113b
    TEST EBX,EBX                        ; 10011133
    JNZ 0x1001123a                      ; 10011135
        ;   XREF to: 1001123a (CONDITIONAL_JUMP)  ; LAB_1001123a
    CMP EBX,EBP                         ; 1001113b
        ;   Label: LAB_1001113b
    JNZ 0x1001114c                      ; 1001113d
        ;   XREF to: 1001114c (CONDITIONAL_JUMP)  ; LAB_1001114c
    MOV EAX,0x2                         ; 1001113f
    POP EBP                             ; 10011144
    POP EDI                             ; 10011145
    POP ESI                             ; 10011146
    POP EBX                             ; 10011147
    ADD ESP,0x20                        ; 10011148
    RET                                 ; 1001114b
    CMP EBX,0x1                         ; 1001114c
        ;   Label: LAB_1001114c
    JLE 0x1001115e                      ; 1001114f
        ;   XREF to: 1001115e (CONDITIONAL_JUMP)  ; LAB_1001115e
    MOV EAX,0x1                         ; 10011151
    POP EBP                             ; 10011156
    POP EDI                             ; 10011157
    POP ESI                             ; 10011158
    POP EBX                             ; 10011159
    ADD ESP,0x20                        ; 1001115a
    RET                                 ; 1001115d
    CMP EBP,0x1                         ; 1001115e
        ;   Label: LAB_1001115e
    JLE 0x10011170                      ; 10011161
        ;   XREF to: 10011170 (CONDITIONAL_JUMP)  ; LAB_10011170
    MOV EAX,0x3                         ; 10011163
    POP EBP                             ; 10011168
    POP EDI                             ; 10011169
    POP ESI                             ; 1001116a
    POP EBX                             ; 1001116b
    ADD ESP,0x20                        ; 1001116c
    RET                                 ; 1001116f
    LEA EAX,[ESP + 0x1c]                ; 10011170
        ;   Label: LAB_10011170
    MOV ECX,dword ptr [ESP + 0x4c]      ; 10011174
    PUSH EAX                            ; 10011178
    PUSH ECX                            ; 10011179
    CALL dword ptr [0x10242190]         ; 1001117a | PTR_GetCPInfo_10242190
    TEST EAX,EAX                        ; 10011180
    JNZ 0x1001118e                      ; 10011182
        ;   XREF to: 1001118e (CONDITIONAL_JUMP)  ; LAB_1001118e
    XOR EAX,EAX                         ; 10011184
    POP EBP                             ; 10011186
    POP EDI                             ; 10011187
    POP ESI                             ; 10011188
    POP EBX                             ; 10011189
    ADD ESP,0x20                        ; 1001118a
    RET                                 ; 1001118d
    TEST EBP,EBP                        ; 1001118e
        ;   Label: LAB_1001118e
    JLE 0x100111e4                      ; 10011190
        ;   XREF to: 100111e4 (CONDITIONAL_JUMP)  ; LAB_100111e4
    CMP dword ptr [ESP + 0x1c],0x2      ; 10011192
    JNC 0x100111a6                      ; 10011197
        ;   XREF to: 100111a6 (CONDITIONAL_JUMP)  ; LAB_100111a6
    MOV EAX,0x3                         ; 10011199
    POP EBP                             ; 1001119e
    POP EDI                             ; 1001119f
    POP ESI                             ; 100111a0
    POP EBX                             ; 100111a1
    ADD ESP,0x20                        ; 100111a2
    RET                                 ; 100111a5
    CMP byte ptr [ESP + 0x22],0x0       ; 100111a6
        ;   Label: LAB_100111a6
    LEA EAX,[ESP + 0x22]                ; 100111ab
    JZ 0x100111ca                       ; 100111af
        ;   XREF to: 100111ca (CONDITIONAL_JUMP)  ; LAB_100111ca
    MOV DL,byte ptr [EAX + 0x1]         ; 100111b1
        ;   Label: LAB_100111b1
    TEST DL,DL                          ; 100111b4
    JZ 0x100111ca                       ; 100111b6
        ;   XREF to: 100111ca (CONDITIONAL_JUMP)  ; LAB_100111ca
    MOV CL,byte ptr [ESI]               ; 100111b8
    CMP byte ptr [EAX],CL               ; 100111ba
    JA 0x100111c2                       ; 100111bc
        ;   XREF to: 100111c2 (CONDITIONAL_JUMP)  ; LAB_100111c2
    CMP DL,CL                           ; 100111be
    JNC 0x100111d7                      ; 100111c0
        ;   XREF to: 100111d7 (CONDITIONAL_JUMP)  ; LAB_100111d7
    ADD EAX,0x2                         ; 100111c2
        ;   Label: LAB_100111c2
    CMP byte ptr [EAX],0x0              ; 100111c5
    JNZ 0x100111b1                      ; 100111c8
        ;   XREF to: 100111b1 (CONDITIONAL_JUMP)  ; LAB_100111b1
    MOV EAX,0x3                         ; 100111ca
        ;   Label: LAB_100111ca
    POP EBP                             ; 100111cf
    POP EDI                             ; 100111d0
    POP ESI                             ; 100111d1
    POP EBX                             ; 100111d2
    ADD ESP,0x20                        ; 100111d3
    RET                                 ; 100111d6
    MOV EAX,0x2                         ; 100111d7
        ;   Label: LAB_100111d7
    POP EBP                             ; 100111dc
    POP EDI                             ; 100111dd
    POP ESI                             ; 100111de
    POP EBX                             ; 100111df
    ADD ESP,0x20                        ; 100111e0
    RET                                 ; 100111e3
    TEST EBX,EBX                        ; 100111e4
        ;   Label: LAB_100111e4
    JLE 0x1001123a                      ; 100111e6
        ;   XREF to: 1001123a (CONDITIONAL_JUMP)  ; LAB_1001123a
    CMP dword ptr [ESP + 0x1c],0x2      ; 100111e8
    JNC 0x100111fc                      ; 100111ed
        ;   XREF to: 100111fc (CONDITIONAL_JUMP)  ; LAB_100111fc
    MOV EAX,0x1                         ; 100111ef
    POP EBP                             ; 100111f4
    POP EDI                             ; 100111f5
    POP ESI                             ; 100111f6
    POP EBX                             ; 100111f7
    ADD ESP,0x20                        ; 100111f8
    RET                                 ; 100111fb
    CMP byte ptr [ESP + 0x22],0x0       ; 100111fc
        ;   Label: LAB_100111fc
    LEA EAX,[ESP + 0x22]                ; 10011201
    JZ 0x10011220                       ; 10011205
        ;   XREF to: 10011220 (CONDITIONAL_JUMP)  ; LAB_10011220
    MOV DL,byte ptr [EAX + 0x1]         ; 10011207
        ;   Label: LAB_10011207
    TEST DL,DL                          ; 1001120a
    JZ 0x10011220                       ; 1001120c
        ;   XREF to: 10011220 (CONDITIONAL_JUMP)  ; LAB_10011220
    MOV CL,byte ptr [EDI]               ; 1001120e
    CMP byte ptr [EAX],CL               ; 10011210
    JA 0x10011218                       ; 10011212
        ;   XREF to: 10011218 (CONDITIONAL_JUMP)  ; LAB_10011218
    CMP DL,CL                           ; 10011214
    JNC 0x1001122d                      ; 10011216
        ;   XREF to: 1001122d (CONDITIONAL_JUMP)  ; LAB_1001122d
    ADD EAX,0x2                         ; 10011218
        ;   Label: LAB_10011218
    CMP byte ptr [EAX],0x0              ; 1001121b
    JNZ 0x10011207                      ; 1001121e
        ;   XREF to: 10011207 (CONDITIONAL_JUMP)  ; LAB_10011207
    MOV EAX,0x1                         ; 10011220
        ;   Label: LAB_10011220
    POP EBP                             ; 10011225
    POP EDI                             ; 10011226
    POP ESI                             ; 10011227
    POP EBX                             ; 10011228
    ADD ESP,0x20                        ; 10011229
    RET                                 ; 1001122c
    MOV EAX,0x2                         ; 1001122d
        ;   Label: LAB_1001122d
    POP EBP                             ; 10011232
    POP EDI                             ; 10011233
    POP ESI                             ; 10011234
    POP EBX                             ; 10011235
    ADD ESP,0x20                        ; 10011236
    RET                                 ; 10011239
    MOV EAX,dword ptr [ESP + 0x4c]      ; 1001123a
        ;   Label: LAB_1001123a
    PUSH 0x0                            ; 1001123e
    PUSH 0x0                            ; 10011240
    PUSH EBP                            ; 10011242
    PUSH ESI                            ; 10011243
    PUSH 0x9                            ; 10011244
    PUSH EAX                            ; 10011246
    CALL dword ptr [0x10242220]         ; 10011247 | PTR_MultiByteToWideChar_10242220
    MOV dword ptr [ESP + 0x1c],EAX      ; 1001124d
    TEST EAX,EAX                        ; 10011251
    JNZ 0x1001125f                      ; 10011253
        ;   XREF to: 1001125f (CONDITIONAL_JUMP)  ; LAB_1001125f
    XOR EAX,EAX                         ; 10011255
    POP EBP                             ; 10011257
    POP EDI                             ; 10011258
    POP ESI                             ; 10011259
    POP EBX                             ; 1001125a
    ADD ESP,0x20                        ; 1001125b
    RET                                 ; 1001125e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 1001125f
        ;   Label: LAB_1001125f
    ADD EAX,EAX                         ; 10011263
    PUSH EAX                            ; 10011265
    CALL crt_heap.c_malloc_FUN_10008830 ; 10011266
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_malloc_FUN_10008830(size_t size)
    MOV dword ptr [ESP + 0x18],EAX      ; 1001126b
    ADD ESP,0x4                         ; 1001126f
    TEST EAX,EAX                        ; 10011272
    JNZ 0x10011280                      ; 10011274
        ;   XREF to: 10011280 (CONDITIONAL_JUMP)  ; LAB_10011280
    XOR EAX,EAX                         ; 10011276
    POP EBP                             ; 10011278
    POP EDI                             ; 10011279
    POP ESI                             ; 1001127a
    POP EBX                             ; 1001127b
    ADD ESP,0x20                        ; 1001127c
    RET                                 ; 1001127f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 10011280
        ;   Label: LAB_10011280
    MOV ECX,dword ptr [ESP + 0x14]      ; 10011284
    MOV EDX,dword ptr [ESP + 0x4c]      ; 10011288
    PUSH EAX                            ; 1001128c
    PUSH ECX                            ; 1001128d
    PUSH EBP                            ; 1001128e
    PUSH ESI                            ; 1001128f
    PUSH 0x1                            ; 10011290
    PUSH EDX                            ; 10011292
    CALL dword ptr [0x10242220]         ; 10011293 | PTR_MultiByteToWideChar_10242220
    TEST EAX,EAX                        ; 10011299
    JZ 0x10011307                       ; 1001129b
        ;   XREF to: 10011307 (CONDITIONAL_JUMP)  ; LAB_10011307
    MOV EAX,dword ptr [ESP + 0x4c]      ; 1001129d
    PUSH 0x0                            ; 100112a1
    PUSH 0x0                            ; 100112a3
    PUSH EBX                            ; 100112a5
    PUSH EDI                            ; 100112a6
    PUSH 0x9                            ; 100112a7
    PUSH EAX                            ; 100112a9
    CALL dword ptr [0x10242220]         ; 100112aa | PTR_MultiByteToWideChar_10242220
    MOV ESI,EAX                         ; 100112b0
    TEST ESI,ESI                        ; 100112b2
    JZ 0x10011307                       ; 100112b4
        ;   XREF to: 10011307 (CONDITIONAL_JUMP)  ; LAB_10011307
    LEA EAX,[ESI*0x2 + 0x0]             ; 100112b6
    PUSH EAX                            ; 100112bd
    CALL crt_heap.c_malloc_FUN_10008830 ; 100112be
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_malloc_FUN_10008830(size_t size)
    MOV dword ptr [ESP + 0x14],EAX      ; 100112c3
    ADD ESP,0x4                         ; 100112c7
    TEST EAX,EAX                        ; 100112ca
    JZ 0x10011307                       ; 100112cc
        ;   XREF to: 10011307 (CONDITIONAL_JUMP)  ; LAB_10011307
    MOV ECX,dword ptr [ESP + 0x4c]      ; 100112ce
    PUSH ESI                            ; 100112d2
    PUSH EAX                            ; 100112d3
    PUSH EBX                            ; 100112d4
    PUSH EDI                            ; 100112d5
    PUSH 0x1                            ; 100112d6
    PUSH ECX                            ; 100112d8
    CALL dword ptr [0x10242220]         ; 100112d9 | PTR_MultiByteToWideChar_10242220
    TEST EAX,EAX                        ; 100112df
    JZ 0x10011307                       ; 100112e1
        ;   XREF to: 10011307 (CONDITIONAL_JUMP)  ; LAB_10011307
    MOV EAX,dword ptr [ESP + 0x10]      ; 100112e3
    PUSH ESI                            ; 100112e7
    MOV ECX,dword ptr [ESP + 0x20]      ; 100112e8
    PUSH EAX                            ; 100112ec
    MOV EDX,dword ptr [ESP + 0x1c]      ; 100112ed
    PUSH ECX                            ; 100112f1
    MOV EAX,dword ptr [ESP + 0x44]      ; 100112f2
    PUSH EDX                            ; 100112f6
    MOV ECX,dword ptr [ESP + 0x44]      ; 100112f7
    PUSH EAX                            ; 100112fb
    PUSH ECX                            ; 100112fc
    CALL dword ptr [0x1024219c]         ; 100112fd | PTR_CompareStringW_1024219c
    MOV dword ptr [ESP + 0x18],EAX      ; 10011303
    MOV EAX,dword ptr [ESP + 0x14]      ; 10011307
        ;   Label: LAB_10011307
    PUSH EAX                            ; 1001130b
    CALL crt_heap.c_free_FUN_10005b30   ; 1001130c
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    MOV EAX,dword ptr [ESP + 0x14]      ; 10011311
    ADD ESP,0x4                         ; 10011315
    PUSH EAX                            ; 10011318
    CALL crt_heap.c_free_FUN_10005b30   ; 10011319
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    MOV EAX,dword ptr [ESP + 0x1c]      ; 1001131e
    ADD ESP,0x4                         ; 10011322
    POP EBP                             ; 10011325
        ;   Label: LAB_10011325
    POP EDI                             ; 10011326
    POP ESI                             ; 10011327
    POP EBX                             ; 10011328
    ADD ESP,0x20                        ; 10011329
    RET                                 ; 1001132c

