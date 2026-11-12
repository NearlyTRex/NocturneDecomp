; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_winrun_cpp_FUN_00581f50(int param_1)
;
;
; XREF[3]:
;   wincore_winrun.cpp_FUN_0058236e at 00582374
;   wincore_winrun.cpp_FUN_00582630 at 00582635
;   wincore_winrun.cpp_FUN_00582640 at 00582653
;
; Referenced Globals:
;   undefined4 DAT_005d7efa
;   undefined4 DAT_02d22c1c
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;   wincore_winrun.cpp_FUN_00581e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00581f50
        ;   Label: wincore_winrun.cpp_FUN_00581f50
    PUSH ESI                            ; 00581f51
    PUSH EDI                            ; 00581f52
    PUSH EBP                            ; 00581f53
    MOV EBP,ESP                         ; 00581f54
    SUB ESP,0x48                        ; 00581f56
    AND ESP,0xfffffff8                  ; 00581f59
    IMUL EBX,dword ptr [EBP + 0x14],0xac ; 00581f5c
    ADD EBX,0x2d22c24                   ; 00581f63
    MOV ECX,dword ptr [EBX]             ; 00581f69
    TEST ECX,ECX                        ; 00581f6b
    JZ 0x00581f74                       ; 00581f6d
        ;   XREF to: 00581f74 (CONDITIONAL_JUMP)  ; LAB_00581f74
    CMP ECX,0x4                         ; 00581f6f
    JNZ 0x00581f81                      ; 00581f72
        ;   XREF to: 00581f81 (CONDITIONAL_JUMP)  ; LAB_00581f81
    MOV ESP,EBP                         ; 00581f74
        ;   Label: LAB_00581f74
    POP EBP                             ; 00581f76
    POP EDI                             ; 00581f77
    POP ESI                             ; 00581f78
    POP EBX                             ; 00581f79
    LEA EAX,[EAX]                       ; 00581f7a
    RET                                 ; 00581f80
    MOV EAX,dword ptr [EBX + 0x58]      ; 00581f81
        ;   Label: LAB_00581f81
    MOV ECX,0x20                        ; 00581f84
    MOV dword ptr [EBX + 0x5c],EAX      ; 00581f89
    LEA ESI,[EBX + 0x68]                ; 00581f8c
    MOV EAX,dword ptr [EBX + 0x60]      ; 00581f8f
    LEA EDI,[EBX + 0x88]                ; 00581f92
    MOV dword ptr [EBX + 0x64],EAX      ; 00581f98
    PUSH EDI                            ; 00581f9b
    MOV EAX,ECX                         ; 00581f9c
    SHR ECX,0x2                         ; 00581f9e
    MOVSD.REP ES:EDI,ESI                ; 00581fa1
    MOV CL,AL                           ; 00581fa3
    AND CL,0x3                          ; 00581fa5
    MOVSB.REP ES:EDI,ESI                ; 00581fa8
    POP EDI                             ; 00581faa
    MOV EDI,dword ptr [0x02d22c1c]      ; 00581fab | DAT_02d22c1c
    TEST EDI,EDI                        ; 00581fb1
    JZ 0x00582233                       ; 00581fb3
        ;   XREF to: 00582233 (CONDITIONAL_JUMP)  ; LAB_00582233
    PUSH 0x34                           ; 00581fb9
    PUSH 0x0                            ; 00581fbb
    LEA EAX,[ESP + 0x8]                 ; 00581fbd
    PUSH EAX                            ; 00581fc1
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00581fc2
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    MOV ECX,0x34                        ; 00581fc7
    ADD ESP,0xc                         ; 00581fcc
    MOV ESI,0x183                       ; 00581fcf
    MOV dword ptr [ESP],ECX             ; 00581fd4
    MOV dword ptr [ESP + 0x4],ESI       ; 00581fd7
    CMP dword ptr [EBX + 0x14],0x0      ; 00581fdb
    JZ 0x00581fe9                       ; 00581fdf
        ;   XREF to: 00581fe9 (CONDITIONAL_JUMP)  ; LAB_00581fe9
    MOV dword ptr [ESP + 0x4],0x187     ; 00581fe1
    CMP dword ptr [EBX + 0x18],0x0      ; 00581fe9
        ;   Label: LAB_00581fe9
    JZ 0x00581ff4                       ; 00581fed
        ;   XREF to: 00581ff4 (CONDITIONAL_JUMP)  ; LAB_00581ff4
    OR byte ptr [ESP + 0x4],0x8         ; 00581fef
    CMP dword ptr [EBX + 0x1c],0x0      ; 00581ff4
        ;   Label: LAB_00581ff4
    JZ 0x00581fff                       ; 00581ff8
        ;   XREF to: 00581fff (CONDITIONAL_JUMP)  ; LAB_00581fff
    OR byte ptr [ESP + 0x4],0x40        ; 00581ffa
    MOV EAX,ESP                         ; 00581fff
        ;   Label: LAB_00581fff
    PUSH EAX                            ; 00582001
    MOV EAX,dword ptr [EBP + 0x14]      ; 00582002
    MOV ESI,dword ptr [EAX*0x4 + 0x2d22ed4] ; 00582005
    PUSH ESI                            ; 0058200c
    CALL dword ptr [0x02d22c1c]         ; 0058200d | DAT_02d22c1c
    TEST EAX,EAX                        ; 00582013
    JNZ 0x00582227                      ; 00582015
        ;   XREF to: 00582227 (CONDITIONAL_JUMP)  ; LAB_00582227
    MOV EDX,dword ptr [EBP + 0x14]      ; 0058201b
    LEA EAX,[EDX*0x4 + 0x0]             ; 0058201e
    PUSH 0x3f800000                     ; 00582025
    SUB EAX,EDX                         ; 0058202a
    MOV ESI,0x2d22ee4                   ; 0058202c
    SHL EAX,0x4                         ; 00582031
    PUSH 0xbf800000                     ; 00582034
    ADD ESI,EAX                         ; 00582039
    MOV dword ptr [EBX + 0x4],0x1       ; 0058203b
    PUSH ESI                            ; 00582042
    MOV EDI,dword ptr [ESP + 0x14]      ; 00582043
    PUSH EDI                            ; 00582047
    CALL wincore_winrun.cpp_FUN_00581e70 ; 00582048
        ;   XREF to: 00581e70 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_00581e70()
    MOV dword ptr [ESP + 0x54],EAX      ; 0058204d
    FLD float ptr [ESP + 0x54]          ; 00582051
    ADD ESP,0x10                        ; 00582055
    PUSH 0x3f800000                     ; 00582058
    LEA EAX,[ESI + 0xc]                 ; 0058205d
    PUSH 0xbf800000                     ; 00582060
    PUSH EAX                            ; 00582065
    FSTP float ptr [EBX + 0x20]         ; 00582066
    MOV EAX,dword ptr [ESP + 0x18]      ; 00582069
    PUSH EAX                            ; 0058206d
    CALL wincore_winrun.cpp_FUN_00581e70 ; 0058206e
        ;   XREF to: 00581e70 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_00581e70()
    MOV dword ptr [ESP + 0x54],EAX      ; 00582073
    MOV EDX,dword ptr [EBX + 0x14]      ; 00582077
    MOV EAX,dword ptr [ESP + 0x54]      ; 0058207a
    MOV dword ptr [EBX + 0x24],EAX      ; 0058207e
    ADD ESP,0x10                        ; 00582081
    TEST EDX,EDX                        ; 00582084
    JZ 0x005820ab                       ; 00582086
        ;   XREF to: 005820ab (CONDITIONAL_JUMP)  ; LAB_005820ab
    PUSH 0x3f800000                     ; 00582088
    ADD ESI,0x18                        ; 0058208d
    PUSH 0x0                            ; 00582090
    PUSH ESI                            ; 00582092
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00582093
    PUSH ECX                            ; 00582097
    CALL wincore_winrun.cpp_FUN_00581e70 ; 00582098
        ;   XREF to: 00581e70 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_00581e70()
    MOV dword ptr [ESP + 0x54],EAX      ; 0058209d
    MOV EAX,dword ptr [ESP + 0x54]      ; 005820a1
    MOV dword ptr [EBX + 0x28],EAX      ; 005820a5
    ADD ESP,0x10                        ; 005820a8
    CMP dword ptr [EBX + 0x18],0x0      ; 005820ab
        ;   Label: LAB_005820ab
    JNZ 0x0058219f                      ; 005820af
        ;   XREF to: 0058219f (CONDITIONAL_JUMP)  ; LAB_0058219f
    MOV EDX,EBX                         ; 005820b5
        ;   Label: LAB_005820b5
    XOR EAX,EAX                         ; 005820b7
    MOV ESI,0x1                         ; 005820b9
        ;   Label: LAB_005820b9
    MOV CL,AL                           ; 005820be
    MOV EDI,dword ptr [ESP + 0x20]      ; 005820c0
    SHL ESI,CL                          ; 005820c4
    TEST ESI,EDI                        ; 005820c6
    SETNZ CL                            ; 005820c8
    ADD EDX,0x4                         ; 005820cb
    AND ECX,0xff                        ; 005820ce
    INC EAX                             ; 005820d4
    MOV dword ptr [EDX + 0x64],ECX      ; 005820d5
    CMP EAX,0x8                         ; 005820d8
    JL 0x005820b9                       ; 005820db
        ;   XREF to: 005820b9 (CONDITIONAL_JUMP)  ; LAB_005820b9
    CMP dword ptr [EBX + 0x1c],0x0      ; 005820dd
    JZ 0x00582110                       ; 005820e1
        ;   XREF to: 00582110 (CONDITIONAL_JUMP)  ; LAB_00582110
    MOV EDX,dword ptr [ESP + 0x28]      ; 005820e3
    CMP EDX,0x4650                      ; 005820e7
    JNC 0x00582202                      ; 005820ed
        ;   XREF to: 00582202 (CONDITIONAL_JUMP)  ; LAB_00582202
    TEST EDX,EDX                        ; 005820f3
    JBE 0x005821de                      ; 005820f5
        ;   XREF to: 005821de (CONDITIONAL_JUMP)  ; LAB_005821de
    CMP EDX,0x2328                      ; 005820fb
    JNZ 0x00582214                      ; 00582101
        ;   XREF to: 00582214 (CONDITIONAL_JUMP)  ; LAB_00582214
    MOV dword ptr [EBX + 0x30],0x1      ; 00582107
    MOV EAX,EAX                         ; 0058210e
    MOV ESI,dword ptr [EBX + 0x5c]      ; 00582110
        ;   Label: LAB_00582110
    MOV EAX,dword ptr [EBX + 0x58]      ; 00582113
    CMP EAX,ESI                         ; 00582116
    JZ 0x0058211d                       ; 00582118
        ;   XREF to: 0058211d (CONDITIONAL_JUMP)  ; LAB_0058211d
    MOV dword ptr [EBX + 0x30],EAX      ; 0058211a
    MOV EDI,dword ptr [EBX + 0x64]      ; 0058211d
        ;   Label: LAB_0058211d
    MOV EAX,dword ptr [EBX + 0x60]      ; 00582120
    CMP EAX,EDI                         ; 00582123
    JNZ 0x00582329                      ; 00582125
        ;   XREF to: 00582329 (CONDITIONAL_JUMP)  ; LAB_00582329
    MOV EAX,EBX                         ; 0058212b
        ;   Label: LAB_0058212b
    LEA ECX,[EBX + 0x20]                ; 0058212d
    MOV ESI,dword ptr [EAX + 0x88]      ; 00582130
        ;   Label: LAB_00582130
    MOV EDX,dword ptr [EAX + 0x68]      ; 00582136
    CMP EDX,ESI                         ; 00582139
    JZ 0x00582140                       ; 0058213b
        ;   XREF to: 00582140 (CONDITIONAL_JUMP)  ; LAB_00582140
    MOV dword ptr [EAX + 0x38],EDX      ; 0058213d
    ADD EAX,0x4                         ; 00582140
        ;   Label: LAB_00582140
    CMP EAX,ECX                         ; 00582143
    JNZ 0x00582130                      ; 00582145
        ;   XREF to: 00582130 (CONDITIONAL_JUMP)  ; LAB_00582130
    CMP dword ptr [EBX + 0x58],0x0      ; 00582147
    JNZ 0x00582331                      ; 0058214b
        ;   XREF to: 00582331 (CONDITIONAL_JUMP)  ; LAB_00582331
    CMP dword ptr [EBX + 0x60],0x0      ; 00582151
    JNZ 0x00582331                      ; 00582155
        ;   XREF to: 00582331 (CONDITIONAL_JUMP)  ; LAB_00582331
    MOV EAX,EBX                         ; 0058215b
    MOV ECX,dword ptr [EBX + 0x68]      ; 0058215d
    XOR EDX,EDX                         ; 00582160
    TEST ECX,ECX                        ; 00582162
    JNZ 0x0058234c                      ; 00582164
        ;   XREF to: 0058234c (CONDITIONAL_JUMP)  ; LAB_0058234c
    INC EDX                             ; 0058216a
        ;   Label: LAB_0058216a
    ADD EAX,0x4                         ; 0058216b
    CMP EDX,0x8                         ; 0058216e
    JL 0x00582342                       ; 00582171
        ;   XREF to: 00582342 (CONDITIONAL_JUMP)  ; LAB_00582342
    MOV ECX,EBX                         ; 00582177
        ;   Label: LAB_00582177
    XOR EDX,EDX                         ; 00582179
    FLD float ptr [ECX + 0x20]          ; 0058217b
        ;   Label: LAB_0058217b
    FABS                                ; 0058217e
    FCOMP double ptr [0x005d7efa]       ; 00582180 | DAT_005d7efa
    FNSTSW AX                           ; 00582186
    SAHF                                ; 00582188
    JA 0x00582331                       ; 00582189
        ;   XREF to: 00582331 (CONDITIONAL_JUMP)  ; LAB_00582331
    INC EDX                             ; 0058218f
    ADD ECX,0x4                         ; 00582190
    CMP EDX,0x4                         ; 00582193
    JL 0x0058217b                       ; 00582196
        ;   XREF to: 0058217b (CONDITIONAL_JUMP)  ; LAB_0058217b
    MOV ESP,EBP                         ; 00582198
    POP EBP                             ; 0058219a
    POP EDI                             ; 0058219b
    POP ESI                             ; 0058219c
    POP EBX                             ; 0058219d
    RET                                 ; 0058219e
    MOV EDX,dword ptr [EBP + 0x14]      ; 0058219f
        ;   Label: LAB_0058219f
    LEA EAX,[EDX*0x4 + 0x0]             ; 005821a2
    SUB EAX,EDX                         ; 005821a9
    SHL EAX,0x4                         ; 005821ab
    ADD EAX,0x2d22ee4                   ; 005821ae
    PUSH 0x3f800000                     ; 005821b3
    ADD EAX,0x24                        ; 005821b8
    PUSH 0xbf800000                     ; 005821bb
    PUSH EAX                            ; 005821c0
    MOV EDI,dword ptr [ESP + 0x20]      ; 005821c1
    PUSH EDI                            ; 005821c5
    CALL wincore_winrun.cpp_FUN_00581e70 ; 005821c6
        ;   XREF to: 00581e70 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_00581e70()
    MOV dword ptr [ESP + 0x54],EAX      ; 005821cb
    MOV EAX,dword ptr [ESP + 0x54]      ; 005821cf
    MOV dword ptr [EBX + 0x2c],EAX      ; 005821d3
    ADD ESP,0x10                        ; 005821d6
    JMP 0x005820b5                      ; 005821d9
        ;   XREF to: 005820b5 (UNCONDITIONAL_JUMP)  ; LAB_005820b5
    MOV dword ptr [EBX + 0x34],0xffffffff ; 005821de
        ;   Label: LAB_005821de
    JMP 0x00582110                      ; 005821e5
        ;   XREF to: 00582110 (UNCONDITIONAL_JUMP)  ; LAB_00582110
    MOV dword ptr [EBX + 0x34],0x1      ; 005821ea
        ;   Label: LAB_005821ea
    JMP 0x00582110                      ; 005821f1
        ;   XREF to: 00582110 (UNCONDITIONAL_JUMP)  ; LAB_00582110
    MOV dword ptr [EBX + 0x30],0xffffffff ; 005821f6
        ;   Label: LAB_005821f6
    JMP 0x00582110                      ; 005821fd
        ;   XREF to: 00582110 (UNCONDITIONAL_JUMP)  ; LAB_00582110
    JBE 0x005821ea                      ; 00582202
        ;   XREF to: 005821ea (CONDITIONAL_JUMP)  ; LAB_005821ea
        ;   Label: LAB_00582202
    CMP EDX,0x6978                      ; 00582204
    JC 0x00582214                       ; 0058220a
        ;   XREF to: 00582214 (CONDITIONAL_JUMP)  ; LAB_00582214
    JBE 0x005821f6                      ; 0058220c
        ;   XREF to: 005821f6 (CONDITIONAL_JUMP)  ; LAB_005821f6
    CMP EDX,0xffff                      ; 0058220e
    MOV dword ptr [EBX + 0x34],0x0      ; 00582214
        ;   Label: LAB_00582214
    MOV dword ptr [EBX + 0x30],0x0      ; 0058221b
    JMP 0x00582110                      ; 00582222
        ;   XREF to: 00582110 (UNCONDITIONAL_JUMP)  ; LAB_00582110
    MOV dword ptr [EBX + 0x4],0x0       ; 00582227
        ;   Label: LAB_00582227
    JMP 0x00582110                      ; 0058222e
        ;   XREF to: 00582110 (UNCONDITIONAL_JUMP)  ; LAB_00582110
    PUSH 0x10                           ; 00582233
        ;   Label: LAB_00582233
    PUSH EDI                            ; 00582235
    LEA EAX,[ESP + 0x3c]                ; 00582236
    PUSH EAX                            ; 0058223a
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0058223b
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00582240
    LEA EAX,[ESP + 0x34]                ; 00582243
    PUSH EAX                            ; 00582247
    MOV EAX,dword ptr [EBP + 0x14]      ; 00582248
    MOV EDX,dword ptr [EAX*0x4 + 0x2d22ed4] ; 0058224b
    PUSH EDX                            ; 00582252
    CALL dword ptr CS:[0x5b3440]        ; 00582253
    TEST EAX,EAX                        ; 0058225a
    JNZ 0x00582321                      ; 0058225c
        ;   XREF to: 00582321 (CONDITIONAL_JUMP)  ; LAB_00582321
    MOV EDX,dword ptr [EBP + 0x14]      ; 00582262
    LEA EAX,[EDX*0x4 + 0x0]             ; 00582265
    PUSH 0x3f800000                     ; 0058226c
    SUB EAX,EDX                         ; 00582271
    MOV ESI,0x2d22ee4                   ; 00582273
    SHL EAX,0x4                         ; 00582278
    PUSH 0xbf800000                     ; 0058227b
    ADD ESI,EAX                         ; 00582280
    MOV dword ptr [EBX + 0x4],0x1       ; 00582282
    PUSH ESI                            ; 00582289
    MOV ECX,dword ptr [ESP + 0x40]      ; 0058228a
    PUSH ECX                            ; 0058228e
    CALL wincore_winrun.cpp_FUN_00581e70 ; 0058228f
        ;   XREF to: 00581e70 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_00581e70()
    MOV dword ptr [ESP + 0x54],EAX      ; 00582294
    FLD float ptr [ESP + 0x54]          ; 00582298
    ADD ESP,0x10                        ; 0058229c
    PUSH 0x3f800000                     ; 0058229f
    LEA EAX,[ESI + 0xc]                 ; 005822a4
    PUSH 0xbf800000                     ; 005822a7
    PUSH EAX                            ; 005822ac
    FSTP float ptr [EBX + 0x20]         ; 005822ad
    MOV EDI,dword ptr [ESP + 0x44]      ; 005822b0
    PUSH EDI                            ; 005822b4
    CALL wincore_winrun.cpp_FUN_00581e70 ; 005822b5
        ;   XREF to: 00581e70 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_00581e70()
    MOV dword ptr [ESP + 0x54],EAX      ; 005822ba
    FLD float ptr [ESP + 0x54]          ; 005822be
    MOV EAX,dword ptr [EBX + 0x14]      ; 005822c2
    FSTP float ptr [EBX + 0x24]         ; 005822c5
    ADD ESP,0x10                        ; 005822c8
    TEST EAX,EAX                        ; 005822cb
    JNZ 0x005822fc                      ; 005822cd
        ;   XREF to: 005822fc (CONDITIONAL_JUMP)  ; LAB_005822fc
    MOV EDX,EBX                         ; 005822cf
        ;   Label: LAB_005822cf
    XOR EAX,EAX                         ; 005822d1
    MOV ESI,0x1                         ; 005822d3
        ;   Label: LAB_005822d3
    MOV CL,AL                           ; 005822d8
    SHL ESI,CL                          ; 005822da
    MOV ECX,ESI                         ; 005822dc
    TEST dword ptr [ESP + 0x40],ECX     ; 005822de
    SETNZ CL                            ; 005822e2
    ADD EDX,0x4                         ; 005822e5
    AND ECX,0xff                        ; 005822e8
    INC EAX                             ; 005822ee
    MOV dword ptr [EDX + 0x64],ECX      ; 005822ef
    CMP EAX,0x8                         ; 005822f2
    JL 0x005822d3                       ; 005822f5
        ;   XREF to: 005822d3 (CONDITIONAL_JUMP)  ; LAB_005822d3
    JMP 0x00582110                      ; 005822f7
        ;   XREF to: 00582110 (UNCONDITIONAL_JUMP)  ; LAB_00582110
    PUSH 0x3f800000                     ; 005822fc
        ;   Label: LAB_005822fc
    ADD ESI,0x18                        ; 00582301
    PUSH 0x0                            ; 00582304
    PUSH ESI                            ; 00582306
    MOV EDX,dword ptr [ESP + 0x48]      ; 00582307
    PUSH EDX                            ; 0058230b
    CALL wincore_winrun.cpp_FUN_00581e70 ; 0058230c
        ;   XREF to: 00581e70 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_00581e70()
    MOV dword ptr [ESP + 0x54],EAX      ; 00582311
    MOV EAX,dword ptr [ESP + 0x54]      ; 00582315
    MOV dword ptr [EBX + 0x28],EAX      ; 00582319
    ADD ESP,0x10                        ; 0058231c
    JMP 0x005822cf                      ; 0058231f
        ;   XREF to: 005822cf (UNCONDITIONAL_JUMP)  ; LAB_005822cf
    MOV dword ptr [EBX + 0x4],EDI       ; 00582321
        ;   Label: LAB_00582321
    JMP 0x00582110                      ; 00582324
        ;   XREF to: 00582110 (UNCONDITIONAL_JUMP)  ; LAB_00582110
    MOV dword ptr [EBX + 0x34],EAX      ; 00582329
        ;   Label: LAB_00582329
    JMP 0x0058212b                      ; 0058232c
        ;   XREF to: 0058212b (UNCONDITIONAL_JUMP)  ; LAB_0058212b
    MOV dword ptr [EBX + 0xa8],0x0      ; 00582331
        ;   Label: LAB_00582331
    MOV ESP,EBP                         ; 0058233b
    POP EBP                             ; 0058233d
    POP EDI                             ; 0058233e
    POP ESI                             ; 0058233f
    POP EBX                             ; 00582340
    RET                                 ; 00582341
    CMP dword ptr [EAX + 0x68],0x0      ; 00582342
        ;   Label: LAB_00582342
    JZ 0x0058216a                       ; 00582346
        ;   XREF to: 0058216a (CONDITIONAL_JUMP)  ; LAB_0058216a
    MOV dword ptr [EBX + 0xa8],0x0      ; 0058234c
        ;   Label: LAB_0058234c
    JMP 0x00582177                      ; 00582356
        ;   XREF to: 00582177 (UNCONDITIONAL_JUMP)  ; LAB_00582177

