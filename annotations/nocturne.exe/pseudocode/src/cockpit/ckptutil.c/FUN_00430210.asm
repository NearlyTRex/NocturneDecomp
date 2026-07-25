; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00430210(undefined4 param_1,int param_2,uint param_3,uint param_4,int param_5,undefined4 param_6)
;
; Local Variables:
; undefined        Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_Unable_to_allocate_u_byt_0057a9e6
;   TerminatedCString s_cockpit_ckptutil_c_0057aa20
;   TerminatedCString s_rb_0057aa36
;   TerminatedCString s_art_0057aa39
;   TerminatedCString s_Unable_to_open_bitmap_fi_0057aa3d
;   TerminatedCString s_cockpit_ckptutil_c_0057aa5e
;   TerminatedCString s_Unable_to_read_bitmap_fi_0057aa74
;   TerminatedCString s_cockpit_ckptutil_c_0057aa95
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   crt_memory.c_malloc_FUN_005635b0
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fgetc_FUN_00564570
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_dosio.cpp_getFile_FUN_00456a60
;   FUN_0042d370
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00430210
        ;   Label: FUN_00430210
    PUSH ESI                            ; 00430211
    PUSH EDI                            ; 00430212
    PUSH EBP                            ; 00430213
    SUB ESP,0x5c                        ; 00430214
    MOV EBP,dword ptr [ESP + 0x7c]      ; 00430217
    MOV EAX,dword ptr [ESP + 0x78]      ; 0043021b
    IMUL EAX,EBP                        ; 0043021f
    MOV EDX,dword ptr [ESP + 0x74]      ; 00430222
    MOV dword ptr [ESP + 0x50],EAX      ; 00430226
    TEST EDX,EDX                        ; 0043022a
    JZ 0x00430311                       ; 0043022c
        ;   XREF to: 00430311 (CONDITIONAL_JUMP)  ; LAB_00430311
    PUSH 0x57aa36                       ; 00430232 | = "rb"
        ;   Label: LAB_00430232
    MOV EDX,dword ptr [ESP + 0x74]      ; 00430237
    PUSH EDX                            ; 0043023b
    PUSH 0x57aa39                       ; 0043023c | = "art"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 00430241
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    ADD ESP,0xc                         ; 00430246
    MOV EDI,EAX                         ; 00430249
    TEST EAX,EAX                        ; 0043024b
    JZ 0x00430367                       ; 0043024d
        ;   XREF to: 00430367 (CONDITIONAL_JUMP)  ; LAB_00430367
    XOR EAX,EAX                         ; 00430253
        ;   Label: LAB_00430253
    MOV dword ptr [ESP + 0x54],EAX      ; 00430255
    TEST EBP,EBP                        ; 00430259
    JBE 0x004302ee                      ; 0043025b
        ;   XREF to: 004302ee (CONDITIONAL_JUMP)  ; LAB_004302ee
    MOV EDX,dword ptr [ESP + 0x54]      ; 00430261
        ;   Label: LAB_00430261
    MOV EAX,EBP                         ; 00430265
    MOV ESI,dword ptr [ESP + 0x74]      ; 00430267
    SUB EAX,EDX                         ; 0043026b
    MOV ECX,dword ptr [ESP + 0x78]      ; 0043026d
    DEC EAX                             ; 00430271
    XOR EBX,EBX                         ; 00430272
    ADD ESI,EAX                         ; 00430274
    TEST ECX,ECX                        ; 00430276
    JBE 0x004302dd                      ; 00430278
        ;   XREF to: 004302dd (CONDITIONAL_JUMP)  ; LAB_004302dd
    PUSH EDI                            ; 0043027a
        ;   Label: LAB_0043027a
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 0043027b
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 00430280
    MOV dword ptr [ESP + 0x58],EAX      ; 00430283
    CMP EAX,-0x1                        ; 00430287
    JNZ 0x004302cc                      ; 0043028a
        ;   XREF to: 004302cc (CONDITIONAL_JUMP)  ; LAB_004302cc
    MOV EDX,dword ptr [ESP + 0x70]      ; 0043028c
    PUSH EDX                            ; 00430290
    PUSH 0x57aa74                       ; 00430291 | = "Unable to read bitmap file (%s)."
    LEA EAX,[ESP + 0x8]                 ; 00430296
    PUSH EAX                            ; 0043029a
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0043029b
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 004302a0
    PUSH EDI                            ; 004302a3
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004302a4
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    MOV EAX,0x7ce                       ; 004302a9
    ADD ESP,0x4                         ; 004302ae
    MOV [0x01cc4804],EAX                ; 004302b1 | DAT_01cc4804
    MOV EAX,ESP                         ; 004302b6
    MOV ECX,0x57aa95                    ; 004302b8 | = "..\\cockpit\\ckptutil.c"
    PUSH EAX                            ; 004302bd
    MOV dword ptr [0x01cc4800],ECX      ; 004302be | DAT_01cc4800
    CALL FUN_004c8440                   ; 004302c4
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004302c9
    MOV AL,byte ptr [ESP + 0x58]        ; 004302cc
        ;   Label: LAB_004302cc
    INC EBX                             ; 004302d0
    MOV byte ptr [ESI],AL               ; 004302d1
    MOV EAX,dword ptr [ESP + 0x78]      ; 004302d3
    ADD ESI,EBP                         ; 004302d7
    CMP EBX,EAX                         ; 004302d9
    JC 0x0043027a                       ; 004302db
        ;   XREF to: 0043027a (CONDITIONAL_JUMP)  ; LAB_0043027a
    MOV EDX,dword ptr [ESP + 0x54]      ; 004302dd
        ;   Label: LAB_004302dd
    INC EDX                             ; 004302e1
    MOV dword ptr [ESP + 0x54],EDX      ; 004302e2
    CMP EBP,EDX                         ; 004302e6
    JA 0x00430261                       ; 004302e8
        ;   XREF to: 00430261 (CONDITIONAL_JUMP)  ; LAB_00430261
    PUSH EDI                            ; 004302ee
        ;   Label: LAB_004302ee
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004302ef
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 004302f4
    CMP dword ptr [ESP + 0x80],0x0      ; 004302f7
    JNZ 0x004303a4                      ; 004302ff
        ;   XREF to: 004303a4 (CONDITIONAL_JUMP)  ; LAB_004303a4
    MOV EAX,dword ptr [ESP + 0x74]      ; 00430305
    ADD ESP,0x5c                        ; 00430309
    POP EBP                             ; 0043030c
    POP EDI                             ; 0043030d
    POP ESI                             ; 0043030e
    POP EBX                             ; 0043030f
    RET                                 ; 00430310
    PUSH EAX                            ; 00430311
        ;   Label: LAB_00430311
    CALL crt_memory.c_malloc_FUN_005635b0 ; 00430312
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_malloc_FUN_005635b0()
    ADD ESP,0x4                         ; 00430317
    MOV dword ptr [ESP + 0x74],EAX      ; 0043031a
    TEST EAX,EAX                        ; 0043031e
    JNZ 0x00430232                      ; 00430320
        ;   XREF to: 00430232 (CONDITIONAL_JUMP)  ; LAB_00430232
    MOV EBX,dword ptr [ESP + 0x70]      ; 00430326
    PUSH EBX                            ; 0043032a
    MOV ESI,dword ptr [ESP + 0x54]      ; 0043032b
    PUSH ESI                            ; 0043032f
    PUSH 0x57a9e6                       ; 00430330 | = "Unable to allocate %u bytes for rotat..."
    LEA EAX,[ESP + 0xc]                 ; 00430335
    PUSH EAX                            ; 00430339
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0043033a
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV EAX,0x7b8                       ; 0043033f
    ADD ESP,0x10                        ; 00430344
    MOV [0x01cc4804],EAX                ; 00430347 | DAT_01cc4804
    MOV EAX,ESP                         ; 0043034c
    MOV EDI,0x57aa20                    ; 0043034e | = "..\\cockpit\\ckptutil.c"
    PUSH EAX                            ; 00430353
    MOV dword ptr [0x01cc4800],EDI      ; 00430354 | DAT_01cc4800
    CALL FUN_004c8440                   ; 0043035a
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0043035f
    JMP 0x00430232                      ; 00430362
        ;   XREF to: 00430232 (UNCONDITIONAL_JUMP)  ; LAB_00430232
    MOV ECX,dword ptr [ESP + 0x70]      ; 00430367
        ;   Label: LAB_00430367
    PUSH ECX                            ; 0043036b
    PUSH 0x57aa3d                       ; 0043036c | = "Unable to open bitmap file (%s)."
    LEA EAX,[ESP + 0x8]                 ; 00430371
    PUSH EAX                            ; 00430375
    MOV EBX,0x57aa5e                    ; 00430376 | = "..\\cockpit\\ckptutil.c"
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0043037b
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 00430380
    MOV EAX,ESP                         ; 00430383
    MOV ESI,0x7c1                       ; 00430385
    PUSH EAX                            ; 0043038a
    MOV dword ptr [0x01cc4800],EBX      ; 0043038b | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00430391 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00430397
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0043039c
    JMP 0x00430253                      ; 0043039f
        ;   XREF to: 00430253 (UNCONDITIONAL_JUMP)  ; LAB_00430253
    MOV ESI,dword ptr [ESP + 0x84]      ; 004303a4
        ;   Label: LAB_004303a4
    PUSH ESI                            ; 004303ab
    MOV EDI,dword ptr [ESP + 0x54]      ; 004303ac
    PUSH EDI                            ; 004303b0
    MOV EBP,dword ptr [ESP + 0x7c]      ; 004303b1
    PUSH EBP                            ; 004303b5
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004303b6
    PUSH EAX                            ; 004303ba
    CALL FUN_0042d370                   ; 004303bb
        ;   XREF to: 0042d370 (UNCONDITIONAL_CALL)  ; undefined FUN_0042d370()
    ADD ESP,0x10                        ; 004303c0
    MOV EAX,dword ptr [ESP + 0x74]      ; 004303c3
    ADD ESP,0x5c                        ; 004303c7
    POP EBP                             ; 004303ca
    POP EDI                             ; 004303cb
    POP ESI                             ; 004303cc
    POP EBX                             ; 004303cd
    RET                                 ; 004303ce

