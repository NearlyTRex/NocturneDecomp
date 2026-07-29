; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_loadState_FUN_00480f70(CEventList *this_ptr,_FILE *file_handle)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined        Stack[-0x120]:1  local_120
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004a4170 at 004a48e3
;
; Referenced Globals:
;   TerminatedCString s_d_00580cc1
;   TerminatedCString s_core_event_cpp_00580cc5
;   TerminatedCString s_CEventList_loadState_fil_00580cd7
;   TerminatedCString s_d_00580d3a
;   TerminatedCString s_anon_00580d3e
;   TerminatedCString s_d_00580d45
;   TerminatedCString s_anon_00580d49
;   TerminatedCString s_d_00580d50
;   TerminatedCString s_anon_00580d54
;   TerminatedCString s_d_00580d5b
;   TerminatedCString s_f_00580d5f
;   TerminatedCString s_d_00580d6a
;   TerminatedCString s_d_00580d6e
;   TerminatedCString s_d_00580d79
;   TerminatedCString s_anon_00580d7d
;   ... and 4 more
;
; Called Functions:
;   core_event.cpp_CEventList_reset_FUN_0047aa00
;   core_main.c_FUN_004c8440
;   crt_stdio.c_fgets_FUN_00564b20
;   crt_stdio.c_fscanf_FUN_00563350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480f70
        ;   Label: core_event.cpp_CEventList_loadState_FUN_00480f70
    PUSH ESI                            ; 00480f71
    PUSH EDI                            ; 00480f72
    PUSH EBP                            ; 00480f73
    SUB ESP,0x110                       ; 00480f74
    MOV EBX,dword ptr [ESP + 0x124]     ; 00480f7a
    MOV ESI,dword ptr [ESP + 0x128]     ; 00480f81
    PUSH EBX                            ; 00480f88
    CALL core_event.cpp_CEventList_reset_FUN_0047aa00 ; 00480f89
        ;   XREF to: 0047aa00 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_reset_FUN_0047aa00(CEventList * this_ptr)
    ADD ESP,0x4                         ; 00480f8e
    PUSH ESI                            ; 00480f91
    PUSH 0xff                           ; 00480f92
    LEA EAX,[ESP + 0x8]                 ; 00480f97
    PUSH EAX                            ; 00480f9b
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00480f9c
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00480fa1
    LEA EAX,[ESP + 0x100]               ; 00480fa4
    PUSH EAX                            ; 00480fab
    PUSH 0x580cc1                       ; 00480fac | = "%d\n"
    PUSH ESI                            ; 00480fb1
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00480fb2
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00480fb7
    MOV EDX,dword ptr [ESP + 0x100]     ; 00480fba
    CMP EDX,0x5                         ; 00480fc1
    JG 0x0048129b                       ; 00480fc4
        ;   XREF to: 0048129b (CONDITIONAL_JUMP)  ; LAB_0048129b
    PUSH ESI                            ; 00480fca
        ;   Label: LAB_00480fca
    PUSH 0xff                           ; 00480fcb
    LEA EAX,[ESP + 0x8]                 ; 00480fd0
    PUSH EAX                            ; 00480fd4
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00480fd5
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00480fda
    PUSH EBX                            ; 00480fdd
    PUSH 0x580d3a                       ; 00480fde | = "%d\n"
    PUSH ESI                            ; 00480fe3
    XOR EBP,EBP                         ; 00480fe4
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00480fe6
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    MOV EAX,dword ptr [EBX]             ; 00480feb
    ADD ESP,0xc                         ; 00480fed
    TEST EAX,EAX                        ; 00480ff0
    JLE 0x00481010                      ; 00480ff2
        ;   XREF to: 00481010 (CONDITIONAL_JUMP)  ; LAB_00481010
    LEA EDI,[EBX + 0x4]                 ; 00480ff4
    PUSH EDI                            ; 00480ff7
        ;   Label: LAB_00480ff7
    PUSH 0x580d3e                       ; 00480ff8 | = "%[^\n]\n"
    PUSH ESI                            ; 00480ffd
    INC EBP                             ; 00480ffe
    ADD EDI,0x20                        ; 00480fff
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00481002
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    MOV EDX,dword ptr [EBX]             ; 00481007
    ADD ESP,0xc                         ; 00481009
    CMP EBP,EDX                         ; 0048100c
    JL 0x00480ff7                       ; 0048100e
        ;   XREF to: 00480ff7 (CONDITIONAL_JUMP)  ; LAB_00480ff7
    PUSH ESI                            ; 00481010
        ;   Label: LAB_00481010
    PUSH 0xff                           ; 00481011
    LEA EDI,[ESP + 0x8]                 ; 00481016
    PUSH EDI                            ; 0048101a
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 0048101b
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00481020
    LEA EDI,[EBX + 0xc84]               ; 00481023
    PUSH EDI                            ; 00481029
    PUSH 0x580d45                       ; 0048102a | = "%d\n"
    PUSH ESI                            ; 0048102f
    XOR EBP,EBP                         ; 00481030
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00481032
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    MOV ECX,dword ptr [EBX + 0xc84]     ; 00481037
    ADD ESP,0xc                         ; 0048103d
    TEST ECX,ECX                        ; 00481040
    JLE 0x00481070                      ; 00481042
        ;   XREF to: 00481070 (CONDITIONAL_JUMP)  ; LAB_00481070
    LEA EDI,[EBX + 0xc88]               ; 00481044
    PUSH EDI                            ; 0048104a
        ;   Label: LAB_0048104a
    PUSH 0x580d49                       ; 0048104b | = "%[^\n]\n"
    PUSH ESI                            ; 00481050
    INC EBP                             ; 00481051
    ADD EDI,0x20                        ; 00481052
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00481055
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    MOV EAX,dword ptr [EBX + 0xc84]     ; 0048105a
    ADD ESP,0xc                         ; 00481060
    CMP EBP,EAX                         ; 00481063
    JL 0x0048104a                       ; 00481065
        ;   XREF to: 0048104a (CONDITIONAL_JUMP)  ; LAB_0048104a
    LEA EAX,[EAX]                       ; 00481067
    LEA EDX,[EDX]                       ; 0048106d
    PUSH ESI                            ; 00481070
        ;   Label: LAB_00481070
    PUSH 0xff                           ; 00481071
    LEA EDI,[ESP + 0x8]                 ; 00481076
    PUSH EDI                            ; 0048107a
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 0048107b
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00481080
    LEA EDI,[EBX + 0x258c]              ; 00481083
    PUSH EDI                            ; 00481089
    PUSH 0x580d50                       ; 0048108a | = "%d\n"
    PUSH ESI                            ; 0048108f
    XOR EBP,EBP                         ; 00481090
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00481092
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    MOV EDX,dword ptr [EBX + 0x258c]    ; 00481097
    ADD ESP,0xc                         ; 0048109d
    TEST EDX,EDX                        ; 004810a0
    JLE 0x004810d0                      ; 004810a2
        ;   XREF to: 004810d0 (CONDITIONAL_JUMP)  ; LAB_004810d0
    LEA EDI,[EBX + 0x2590]              ; 004810a4
    PUSH EDI                            ; 004810aa
        ;   Label: LAB_004810aa
    PUSH 0x580d54                       ; 004810ab | = "%[^\n]\n"
    PUSH ESI                            ; 004810b0
    INC EBP                             ; 004810b1
    ADD EDI,0x20                        ; 004810b2
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004810b5
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    MOV ECX,dword ptr [EBX + 0x258c]    ; 004810ba
    ADD ESP,0xc                         ; 004810c0
    CMP EBP,ECX                         ; 004810c3
    JL 0x004810aa                       ; 004810c5
        ;   XREF to: 004810aa (CONDITIONAL_JUMP)  ; LAB_004810aa
    LEA EAX,[EAX]                       ; 004810c7
    LEA EDX,[EDX]                       ; 004810cd
    CMP dword ptr [ESP + 0x100],0x2     ; 004810d0
        ;   Label: LAB_004810d0
    JL 0x00481160                       ; 004810d8
        ;   XREF to: 00481160 (CONDITIONAL_JUMP)  ; LAB_00481160
    PUSH ESI                            ; 004810de
    PUSH 0xff                           ; 004810df
    LEA EDI,[ESP + 0x8]                 ; 004810e4
    PUSH EDI                            ; 004810e8
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 004810e9
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004810ee
    LEA EDI,[EBX + 0x3210]              ; 004810f1
    PUSH EDI                            ; 004810f7
    PUSH 0x580d5b                       ; 004810f8 | = "%d\n"
    PUSH ESI                            ; 004810fd
    XOR EBP,EBP                         ; 004810fe
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00481100
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00481105
    MOV EAX,dword ptr [EBX + 0x3210]    ; 00481108
    MOV dword ptr [ESP + 0x10c],EBP     ; 0048110e
    TEST EAX,EAX                        ; 00481115
    JLE 0x00481160                      ; 00481117
        ;   XREF to: 00481160 (CONDITIONAL_JUMP)  ; LAB_00481160
    LEA EDI,[EBX + 0x3214]              ; 00481119
    LEA EBP,[EBX + 0x3354]              ; 0048111f
    PUSH EDI                            ; 00481125
        ;   Label: LAB_00481125
    PUSH EBP                            ; 00481126
    PUSH 0x580d5f                       ; 00481127 | = "%f, %[^\n]\n"
    PUSH ESI                            ; 0048112c
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0048112d
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0x10                        ; 00481132
    ADD EDI,0x20                        ; 00481135
    MOV EDX,dword ptr [ESP + 0x10c]     ; 00481138
    ADD EBP,0x4                         ; 0048113f
    INC EDX                             ; 00481142
    MOV ECX,dword ptr [EBX + 0x3210]    ; 00481143
    MOV dword ptr [ESP + 0x10c],EDX     ; 00481149
    CMP EDX,ECX                         ; 00481150
    JL 0x00481125                       ; 00481152
        ;   XREF to: 00481125 (CONDITIONAL_JUMP)  ; LAB_00481125
    LEA EAX,[EAX]                       ; 00481154
    LEA EDX,[EDX]                       ; 0048115a
    CMP dword ptr [ESP + 0x100],0x3     ; 00481160
        ;   Label: LAB_00481160
    JL 0x004811f0                       ; 00481168
        ;   XREF to: 004811f0 (CONDITIONAL_JUMP)  ; LAB_004811f0
    PUSH ESI                            ; 0048116e
    PUSH 0xff                           ; 0048116f
    LEA EDI,[ESP + 0x8]                 ; 00481174
    PUSH EDI                            ; 00481178
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00481179
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0048117e
    LEA EDI,[EBX + 0x337c]              ; 00481181
    PUSH EDI                            ; 00481187
    PUSH 0x580d6a                       ; 00481188 | = "%d\n"
    PUSH ESI                            ; 0048118d
    XOR EBP,EBP                         ; 0048118e
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00481190
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    MOV EAX,dword ptr [EBX + 0x337c]    ; 00481195
    ADD ESP,0xc                         ; 0048119b
    TEST EAX,EAX                        ; 0048119e
    JLE 0x004811f0                      ; 004811a0
        ;   XREF to: 004811f0 (CONDITIONAL_JUMP)  ; LAB_004811f0
    LEA EAX,[EBX + 0x3380]              ; 004811a2
    LEA EDI,[EBX + 0x34c0]              ; 004811a8
    MOV dword ptr [ESP + 0x108],EAX     ; 004811ae
    MOV EDX,dword ptr [ESP + 0x108]     ; 004811b5
        ;   Label: LAB_004811b5
    PUSH EDX                            ; 004811bc
    PUSH EDI                            ; 004811bd
    PUSH 0x580d6e                       ; 004811be | = "%d, %[^\n]\n"
    PUSH ESI                            ; 004811c3
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004811c4
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0x10                        ; 004811c9
    INC EBP                             ; 004811cc
    MOV ECX,dword ptr [ESP + 0x108]     ; 004811cd
    ADD EDI,0x4                         ; 004811d4
    ADD ECX,0x20                        ; 004811d7
    MOV EAX,dword ptr [EBX + 0x337c]    ; 004811da
    MOV dword ptr [ESP + 0x108],ECX     ; 004811e0
    CMP EBP,EAX                         ; 004811e7
    JL 0x004811b5                       ; 004811e9
        ;   XREF to: 004811b5 (CONDITIONAL_JUMP)  ; LAB_004811b5
    LEA EAX,[EAX]                       ; 004811eb
    MOV ECX,ECX                         ; 004811ee
    CMP dword ptr [ESP + 0x100],0x4     ; 004811f0
        ;   Label: LAB_004811f0
    JL 0x00481280                       ; 004811f8
        ;   XREF to: 00481280 (CONDITIONAL_JUMP)  ; LAB_00481280
    PUSH ESI                            ; 004811fe
    PUSH 0xff                           ; 004811ff
    LEA EDI,[ESP + 0x8]                 ; 00481204
    PUSH EDI                            ; 00481208
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00481209
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0048120e
    LEA EDI,[EBX + 0x34e8]              ; 00481211
    PUSH EDI                            ; 00481217
    PUSH 0x580d79                       ; 00481218 | = "%d\n"
    PUSH ESI                            ; 0048121d
    XOR EBP,EBP                         ; 0048121e
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00481220
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    MOV ECX,dword ptr [EBX + 0x34e8]    ; 00481225
    ADD ESP,0xc                         ; 0048122b
    TEST ECX,ECX                        ; 0048122e
    JLE 0x00481280                      ; 00481230
        ;   XREF to: 00481280 (CONDITIONAL_JUMP)  ; LAB_00481280
    LEA EAX,[EBX + 0x37da]              ; 00481232
    LEA EDI,[EBX + 0x34ec]              ; 00481238
    MOV dword ptr [ESP + 0x104],EAX     ; 0048123e
    MOV EAX,dword ptr [ESP + 0x104]     ; 00481245
        ;   Label: LAB_00481245
    PUSH EAX                            ; 0048124c
    PUSH EDI                            ; 0048124d
    PUSH 0x580d7d                       ; 0048124e | = "\"%[^\"]\" , \"%[^\"]\"\n"
    PUSH ESI                            ; 00481253
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00481254
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0x10                        ; 00481259
    INC EBP                             ; 0048125c
    MOV EDX,dword ptr [ESP + 0x104]     ; 0048125d
    ADD EDI,0x1e                        ; 00481264
    ADD EDX,0x1e                        ; 00481267
    MOV ECX,dword ptr [EBX + 0x34e8]    ; 0048126a
    MOV dword ptr [ESP + 0x104],EDX     ; 00481270
    CMP EBP,ECX                         ; 00481277
    JL 0x00481245                       ; 00481279
        ;   XREF to: 00481245 (CONDITIONAL_JUMP)  ; LAB_00481245
    LEA EAX,[EAX]                       ; 0048127b
    MOV ECX,ECX                         ; 0048127e
    CMP dword ptr [ESP + 0x100],0x5     ; 00481280
        ;   Label: LAB_00481280
    JGE 0x004812c6                      ; 00481288
        ;   XREF to: 004812c6 (CONDITIONAL_JUMP)  ; LAB_004812c6
    LEA EAX,[EAX]                       ; 0048128a
    ADD ESP,0x110                       ; 00481290
        ;   Label: LAB_00481290
    POP EBP                             ; 00481296
    POP EDI                             ; 00481297
    POP ESI                             ; 00481298
    POP EBX                             ; 00481299
    RET                                 ; 0048129a
    PUSH 0x5                            ; 0048129b
        ;   Label: LAB_0048129b
    PUSH EDX                            ; 0048129d
    MOV ECX,0x580cc5                    ; 0048129e | = "..\\core\\event.cpp"
    MOV EDI,0xc2c                       ; 004812a3
    PUSH 0x580cd7                       ; 004812a8 | = "CEventList::loadState - file version ..."
    MOV dword ptr [0x01cc4800],ECX      ; 004812ad | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004812b3 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004812b9
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0xc                         ; 004812be
    JMP 0x00480fca                      ; 004812c1
        ;   XREF to: 00480fca (UNCONDITIONAL_JUMP)  ; LAB_00480fca
    PUSH ESI                            ; 004812c6
        ;   Label: LAB_004812c6
    PUSH 0xff                           ; 004812c7
    LEA EDI,[ESP + 0x8]                 ; 004812cc
    PUSH EDI                            ; 004812d0
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 004812d1
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004812d6
    LEA EDI,[EBX + 0x1908]              ; 004812d9
    PUSH EDI                            ; 004812df
    PUSH 0x580d90                       ; 004812e0 | = "%d\n"
    PUSH ESI                            ; 004812e5
    XOR EDI,EDI                         ; 004812e6
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004812e8
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    MOV EBP,dword ptr [EBX + 0x1908]    ; 004812ed
    ADD ESP,0xc                         ; 004812f3
    TEST EBP,EBP                        ; 004812f6
    JLE 0x00481290                      ; 004812f8
        ;   XREF to: 00481290 (CONDITIONAL_JUMP)  ; LAB_00481290
    LEA EBP,[EBX + 0x190c]              ; 004812fa
    PUSH EBP                            ; 00481300
        ;   Label: LAB_00481300
    PUSH 0x580d94                       ; 00481301 | = "%[^\n]\n"
    PUSH ESI                            ; 00481306
    INC EDI                             ; 00481307
    ADD EBP,0x20                        ; 00481308
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0048130b
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    MOV EAX,dword ptr [EBX + 0x1908]    ; 00481310
    ADD ESP,0xc                         ; 00481316
    CMP EDI,EAX                         ; 00481319
    JL 0x00481300                       ; 0048131b
        ;   XREF to: 00481300 (CONDITIONAL_JUMP)  ; LAB_00481300
    ADD ESP,0x110                       ; 0048131d
    POP EBP                             ; 00481323
    POP EDI                             ; 00481324
    POP ESI                             ; 00481325
    POP EBX                             ; 00481326
    RET                                 ; 00481327

