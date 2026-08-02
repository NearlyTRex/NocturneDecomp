; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005740b0(wchar_t *param_1)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_02de54a8
;
; Called Functions:
;   crt_env.c_updateEnvironTable_FUN_00573afc
;   crt_errno.c_convertWindowsErrorToErrno_FUN_0056c6d0
;   crt_memory.c_malloc_FUN_005635b0
;   crt_string.c_wcstombs_FUN_00570bd0
;   crt_unknown.c_FUN_005638d0
;   crt_unknown.c_FUN_005713e0
;   crt_unknown.c_FUN_00571410
;   crt_unknown.c_FUN_00574264
;   crt_unknown.c_FUN_00574540
;   crt_unknown.c_FUN_00574570
;   crt_unknown.c_FUN_00574680
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005740b0
        ;   Label: crt_unknown.c_FUN_005740b0
    PUSH ESI                            ; 005740b1
    PUSH EDI                            ; 005740b2
    PUSH EBP                            ; 005740b3
    SUB ESP,0x14                        ; 005740b4
    MOV EDI,dword ptr [ESP + 0x28]      ; 005740b7
    PUSH 0x3d                           ; 005740bb
    MOV EDX,0x2                         ; 005740bd
    PUSH EDI                            ; 005740c2
    MOV dword ptr [ESP + 0x8],EDX       ; 005740c3
    MOV dword ptr [ESP + 0xc],EDX       ; 005740c7
    CALL crt_unknown.c_FUN_00574540     ; 005740cb
        ;   XREF to: 00574540 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00574540()
    MOV ESI,EAX                         ; 005740d0
    ADD ESP,0x8                         ; 005740d2
    TEST EAX,EAX                        ; 005740d5
    JNZ 0x005740e3                      ; 005740d7
        ;   XREF to: 005740e3 (CONDITIONAL_JUMP)  ; LAB_005740e3
    MOV EAX,0xffffffff                  ; 005740d9
    JMP 0x00574259                      ; 005740de
        ;   XREF to: 00574259 (UNCONDITIONAL_JUMP)  ; LAB_00574259
    CMP EAX,EDI                         ; 005740e3
        ;   Label: LAB_005740e3
    JNZ 0x005740f4                      ; 005740e5
        ;   XREF to: 005740f4 (CONDITIONAL_JUMP)  ; LAB_005740f4
    MOV EAX,0xffffffff                  ; 005740e7
    ADD ESP,0x14                        ; 005740ec
    POP EBP                             ; 005740ef
    POP EDI                             ; 005740f0
    POP ESI                             ; 005740f1
    POP EBX                             ; 005740f2
    RET                                 ; 005740f3
    MOV EBP,EAX                         ; 005740f4
        ;   Label: LAB_005740f4
    SUB EBP,EDI                         ; 005740f6
    SAR EBP,0x1                         ; 005740f8
    ADD EBP,EBP                         ; 005740fa
    LEA EAX,[EBP + 0x2]                 ; 005740fc
    PUSH EAX                            ; 005740ff
    CALL crt_memory.c_malloc_FUN_005635b0 ; 00574100
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    ADD ESP,0x4                         ; 00574105
    MOV EBX,EAX                         ; 00574108
    MOV dword ptr [ESP + 0x8],EAX       ; 0057410a
    TEST EAX,EAX                        ; 0057410e
    JNZ 0x0057411f                      ; 00574110
        ;   XREF to: 0057411f (CONDITIONAL_JUMP)  ; LAB_0057411f
    MOV EAX,0xffffffff                  ; 00574112
    ADD ESP,0x14                        ; 00574117
    POP EBP                             ; 0057411a
    POP EDI                             ; 0057411b
    POP ESI                             ; 0057411c
    POP EBX                             ; 0057411d
    RET                                 ; 0057411e
    PUSH EBP                            ; 0057411f
        ;   Label: LAB_0057411f
    PUSH EDI                            ; 00574120
    PUSH EAX                            ; 00574121
    CALL crt_unknown.c_FUN_00571410     ; 00574122
        ;   XREF to: 00571410 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00571410()
    ADD ESP,0xc                         ; 00574127
    ADD ESI,0x2                         ; 0057412a
    PUSH ESI                            ; 0057412d
    MOV word ptr [EBX + EBP*0x1],0x0    ; 0057412e
    MOV dword ptr [ESP + 0x10],ESI      ; 00574134
    CALL crt_unknown.c_FUN_005713e0     ; 00574138
        ;   XREF to: 005713e0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005713e0()
    ADD ESP,0x4                         ; 0057413d
    TEST EAX,EAX                        ; 00574140
    JZ 0x0057418c                       ; 00574142
        ;   XREF to: 0057418c (CONDITIONAL_JUMP)  ; LAB_0057418c
    ADD EAX,EAX                         ; 00574144
    MOV dword ptr [ESP + 0x10],EAX      ; 00574146
    ADD EAX,0x2                         ; 0057414a
    PUSH EAX                            ; 0057414d
    CALL crt_memory.c_malloc_FUN_005635b0 ; 0057414e
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    MOV ESI,EAX                         ; 00574153
    ADD ESP,0x4                         ; 00574155
    MOV EBP,EAX                         ; 00574158
    TEST EAX,EAX                        ; 0057415a
    JNZ 0x0057416e                      ; 0057415c
        ;   XREF to: 0057416e (CONDITIONAL_JUMP)  ; LAB_0057416e
    PUSH EBX                            ; 0057415e
    CALL crt_unknown.c_FUN_005638d0     ; 0057415f
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    MOV EAX,0xffffffff                  ; 00574164
    JMP 0x00574256                      ; 00574169
        ;   XREF to: 00574256 (UNCONDITIONAL_JUMP)  ; LAB_00574256
    MOV EAX,dword ptr [ESP + 0x10]      ; 0057416e
        ;   Label: LAB_0057416e
    PUSH EAX                            ; 00574172
    MOV EDX,dword ptr [ESP + 0x10]      ; 00574173
    PUSH EDX                            ; 00574177
    PUSH ESI                            ; 00574178
    CALL crt_unknown.c_FUN_00571410     ; 00574179
        ;   XREF to: 00571410 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00571410()
    ADD ESP,0xc                         ; 0057417e
    ADD ESI,dword ptr [ESP + 0x10]      ; 00574181
    MOV word ptr [ESI],0x0              ; 00574185
    JMP 0x0057418e                      ; 0057418a
        ;   XREF to: 0057418e (UNCONDITIONAL_JUMP)  ; LAB_0057418e
    XOR EBP,EBP                         ; 0057418c
        ;   Label: LAB_0057418c
    PUSH EBP                            ; 0057418e
        ;   Label: LAB_0057418e
    MOV ECX,dword ptr [ESP + 0xc]       ; 0057418f
    PUSH ECX                            ; 00574193
    CALL crt_unknown.c_FUN_00574570     ; 00574194
        ;   XREF to: 00574570 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00574570()
    ADD ESP,0x8                         ; 00574199
    MOV ESI,dword ptr [ESP + 0x8]       ; 0057419c
    PUSH ESI                            ; 005741a0
    MOV EBX,EAX                         ; 005741a1
    CALL crt_unknown.c_FUN_005638d0     ; 005741a3
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 005741a8
    PUSH EBP                            ; 005741ab
    CALL crt_unknown.c_FUN_005638d0     ; 005741ac
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 005741b1
    TEST EBX,EBX                        ; 005741b4
    JNZ 0x005741c5                      ; 005741b6
        ;   XREF to: 005741c5 (CONDITIONAL_JUMP)  ; LAB_005741c5
    MOV EAX,0xffffffff                  ; 005741b8
    ADD ESP,0x14                        ; 005741bd
    POP EBP                             ; 005741c0
    POP EDI                             ; 005741c1
    POP ESI                             ; 005741c2
    POP EBX                             ; 005741c3
    RET                                 ; 005741c4
    CMP dword ptr [0x02de54a8],0x0      ; 005741c5 | DAT_02de54a8
        ;   Label: LAB_005741c5
    JNZ 0x005741d3                      ; 005741cc
        ;   XREF to: 005741d3 (CONDITIONAL_JUMP)  ; LAB_005741d3
    CALL crt_unknown.c_FUN_00574680     ; 005741ce
        ;   XREF to: 00574680 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00574680()
    PUSH EDI                            ; 005741d3
        ;   Label: LAB_005741d3
    CALL crt_unknown.c_FUN_00574264     ; 005741d4
        ;   XREF to: 00574264 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00574264()
    ADD ESP,0x4                         ; 005741d9
    TEST EAX,EAX                        ; 005741dc
    JZ 0x005741ed                       ; 005741de
        ;   XREF to: 005741ed (CONDITIONAL_JUMP)  ; LAB_005741ed
    MOV EAX,0xffffffff                  ; 005741e0
    ADD ESP,0x14                        ; 005741e5
    POP EBP                             ; 005741e8
    POP EDI                             ; 005741e9
    POP ESI                             ; 005741ea
    POP EBX                             ; 005741eb
    RET                                 ; 005741ec
    PUSH EDI                            ; 005741ed
        ;   Label: LAB_005741ed
    CALL crt_unknown.c_FUN_005713e0     ; 005741ee
        ;   XREF to: 005713e0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005713e0()
    ADD ESP,0x4                         ; 005741f3
    LEA ESI,[EAX + 0x1]                 ; 005741f6
    MOV EAX,dword ptr [ESP]             ; 005741f9
    IMUL EAX,ESI                        ; 005741fc
    PUSH EAX                            ; 005741ff
    CALL crt_memory.c_malloc_FUN_005635b0 ; 00574200
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    MOV EBX,EAX                         ; 00574205
    ADD ESP,0x4                         ; 00574207
    TEST EAX,EAX                        ; 0057420a
    JNZ 0x00574225                      ; 0057420c
        ;   XREF to: 00574225 (CONDITIONAL_JUMP)  ; LAB_00574225
    PUSH 0x5                            ; 0057420e
    CALL crt_errno.c_convertWindowsErrorToErrno_FUN_0056c6d0 ; 00574210
        ;   XREF to: 0056c6d0 (UNCONDITIONAL_CALL)  ; int crt_errno.c_convertWindowsErrorToErrno_FUN_0056c6d0(DWORD windows_error)
    MOV EAX,0xffffffff                  ; 00574215
    ADD ESP,0x4                         ; 0057421a
    ADD ESP,0x14                        ; 0057421d
    POP EBP                             ; 00574220
    POP EDI                             ; 00574221
    POP ESI                             ; 00574222
    POP EBX                             ; 00574223
    RET                                 ; 00574224
    IMUL ESI,dword ptr [ESP + 0x4]      ; 00574225
        ;   Label: LAB_00574225
    PUSH ESI                            ; 0057422a
    PUSH EDI                            ; 0057422b
    PUSH EBX                            ; 0057422c
    CALL crt_string.c_wcstombs_FUN_00570bd0 ; 0057422d
        ;   XREF to: 00570bd0 (UNCONDITIONAL_CALL)  ; int crt_string.c_wcstombs_FUN_00570bd0(char * dest, wchar_t * src, SIZE_T dest_size)
    ADD ESP,0xc                         ; 00574232
    CMP EAX,-0x1                        ; 00574235
    JNZ 0x00574250                      ; 00574238
        ;   XREF to: 00574250 (CONDITIONAL_JUMP)  ; LAB_00574250
    PUSH EBX                            ; 0057423a
    CALL crt_unknown.c_FUN_005638d0     ; 0057423b
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    MOV EAX,0xffffffff                  ; 00574240
    ADD ESP,0x4                         ; 00574245
    ADD ESP,0x14                        ; 00574248
    POP EBP                             ; 0057424b
    POP EDI                             ; 0057424c
    POP ESI                             ; 0057424d
    POP EBX                             ; 0057424e
    RET                                 ; 0057424f
    PUSH EBX                            ; 00574250
        ;   Label: LAB_00574250
    CALL crt_env.c_updateEnvironTable_FUN_00573afc ; 00574251
        ;   XREF to: 00573afc (UNCONDITIONAL_CALL)  ; int crt_env.c_updateEnvironTable_FUN_00573afc(char * envstr)
    ADD ESP,0x4                         ; 00574256
        ;   Label: LAB_00574256
    ADD ESP,0x14                        ; 00574259
        ;   Label: LAB_00574259
    POP EBP                             ; 0057425c
    POP EDI                             ; 0057425d
    POP ESI                             ; 0057425e
    POP EBX                             ; 0057425f
    RET                                 ; 00574260

