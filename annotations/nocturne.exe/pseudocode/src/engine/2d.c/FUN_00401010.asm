; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_2d_c_FUN_00401010(void)
;
;
; XREF[1]:
;   core_main.c_FUN_004c85f0 at 004c8745
;
; Referenced Globals:
;   TerminatedCString s_engine_2d_c_00577004
;   TerminatedCString s_No_room_for_frame_buffer_00577013
;   TerminatedCString s_vga_act_0057703f
;   TerminatedCString s_vga_lte_00577047
;   TerminatedCString s_vga_map_0057704f
;   TerminatedCString s_vga_act_00577057
;   TerminatedCString s_rb_0057705f
;   TerminatedCString s_font_ndx_00577062
;   TerminatedCString s_startup_0057706b
;   TerminatedCString s_engine_2d_c_00577073
;   TerminatedCString s_Unable_to_open_font_ndx_00577082
;   TerminatedCString s_d_0057709a
;   TerminatedCString s_font_bin_0057709e
;   TerminatedCString s_startup_005770a7
;   TerminatedCString s_engine_2d_c_005770af
;   ... and 25 more
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_memory.c_malloc_FUN_005635b0
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fread_FUN_005636d0
;   crt_stdio.c_fscanf_FUN_00563350
;   engine_2d.c_FUN_00401990
;   engine_2d.c_FUN_00401bd0
;   engine_2d.c_FUN_00403460
;   engine_2d.c_FUN_00403630
;   engine_dosio.cpp_getFile_FUN_00456a60
;   engine_dosio.cpp_getFileSize_FUN_004568c0
;   wincore_wddvmem.cpp_FUN_00552b40
;   wincore_wddvmem.cpp_setScreenResolution_FUN_00552e00
;   wincore_wddvmem.cpp_setupColorPalette_FUN_005537e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401010
        ;   Label: engine_2d.c_FUN_00401010
    PUSH ESI                            ; 00401011
    PUSH EBP                            ; 00401012
    MOV EBP,dword ptr [0x006afa38]      ; 00401013 | DAT_006afa38
    MOV EDX,dword ptr [0x005b7620]      ; 00401019 | DAT_005b7620
    PUSH EDX                            ; 0040101f
    MOV ECX,dword ptr [0x005b761c]      ; 00401020 | DAT_005b761c
    PUSH ECX                            ; 00401026
    CALL wincore_wddvmem.cpp_FUN_00552b40 ; 00401027
        ;   XREF to: 00552b40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_FUN_00552b40()
    ADD ESP,0x8                         ; 0040102c
    TEST EAX,EAX                        ; 0040102f
    JZ 0x004011fd                       ; 00401031
        ;   XREF to: 004011fd (CONDITIONAL_JUMP)  ; LAB_004011fd
    PUSH EDI                            ; 00401037
        ;   Label: LAB_00401037
    MOV EAX,[0x006af628]                ; 00401038 | DAT_006af628
    PUSH 0x8                            ; 0040103d
    MOV ECX,dword ptr [EAX*0x8 + 0x5aca6c] ; 0040103f | DAT_005aca6c
    MOV EAX,dword ptr [EAX*0x8 + 0x5aca70] ; 00401046 | DAT_005aca70
    PUSH EAX                            ; 0040104d
    PUSH ECX                            ; 0040104e
    CALL wincore_wddvmem.cpp_setScreenResolution_FUN_00552e00 ; 0040104f
        ;   XREF to: 00552e00 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_setScreenResolution_FUN_00552e00()
    ADD ESP,0xc                         ; 00401054
    PUSH 0x57703f                       ; 00401057 | = "vga.act"
    CALL engine_2d.c_FUN_00401bd0       ; 0040105c
        ;   XREF to: 00401bd0 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_FUN_00401bd0()
    ADD ESP,0x4                         ; 00401061
    PUSH 0x577047                       ; 00401064 | = "vga.lte"
    CALL engine_2d.c_FUN_00403460       ; 00401069
        ;   XREF to: 00403460 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_FUN_00403460()
    ADD ESP,0x4                         ; 0040106e
    PUSH 0x57704f                       ; 00401071 | = "vga.map"
    CALL engine_2d.c_FUN_00403630       ; 00401076
        ;   XREF to: 00403630 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_FUN_00403630()
    ADD ESP,0x4                         ; 0040107b
    PUSH 0x577057                       ; 0040107e | = "vga.act"
    CALL engine_2d.c_FUN_00401990       ; 00401083
        ;   XREF to: 00401990 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_FUN_00401990()
    ADD ESP,0x4                         ; 00401088
    CALL wincore_wddvmem.cpp_setupColorPalette_FUN_005537e0 ; 0040108b
        ;   XREF to: 005537e0 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_setupColorPalette_FUN_005537e0()
    PUSH 0x57705f                       ; 00401090 | = "rb"
    PUSH 0x577062                       ; 00401095 | = "font.ndx"
    PUSH 0x57706b                       ; 0040109a | = "startup"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 0040109f
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    ADD ESP,0xc                         ; 004010a4
    MOV ESI,EAX                         ; 004010a7
    TEST EAX,EAX                        ; 004010a9
    JZ 0x00401225                       ; 004010ab
        ;   XREF to: 00401225 (CONDITIONAL_JUMP)  ; LAB_00401225
    MOV EDI,0x6afa3c                    ; 004010b1 | DAT_006afa3c
        ;   Label: LAB_004010b1
    MOV EBX,0x6afa3c                    ; 004010b6 | DAT_006afa3c
    ADD EDI,0x200                       ; 004010bb
    ADD EBX,0x80                        ; 004010c1
    PUSH EBX                            ; 004010c7 | DAT_006afabc | DAT_006afac0
        ;   Label: LAB_004010c7
    PUSH 0x57709a                       ; 004010c8 | = "%d\n"
    PUSH ESI                            ; 004010cd
    ADD EBX,0x4                         ; 004010ce
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004010d1
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 004010d6
    CMP EBX,EDI                         ; 004010d9
    JNZ 0x004010c7                      ; 004010db
        ;   XREF to: 004010c7 (CONDITIONAL_JUMP)  ; LAB_004010c7
    PUSH ESI                            ; 004010dd
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004010de
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 004010e3
    PUSH 0x57709e                       ; 004010e6 | = "font.bin"
    PUSH 0x5770a7                       ; 004010eb | = "startup"
    CALL engine_dosio.cpp_getFileSize_FUN_004568c0 ; 004010f0
        ;   XREF to: 004568c0 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFileSize_FUN_004568c0()
    ADD ESP,0x8                         ; 004010f5
    PUSH EAX                            ; 004010f8
    MOV ESI,EAX                         ; 004010f9
    CALL crt_memory.c_malloc_FUN_005635b0 ; 004010fb
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_malloc_FUN_005635b0()
    ADD ESP,0x4                         ; 00401100
    MOV EBP,EAX                         ; 00401103
    MOV [0x006afa38],EAX                ; 00401105 | DAT_006afa38
    TEST EAX,EAX                        ; 0040110a
    JNZ 0x00401131                      ; 0040110c
        ;   XREF to: 00401131 (CONDITIONAL_JUMP)  ; LAB_00401131
    MOV EDX,0x5770af                    ; 0040110e | = "..\\engine\\2d.c"
    MOV ECX,0xaa                        ; 00401113
    PUSH 0x5770be                       ; 00401118 | = "Unable to malloc font memory"
    MOV dword ptr [0x01cc4800],EDX      ; 0040111d | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00401123 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00401129
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0040112e
    PUSH 0x5770db                       ; 00401131 | = "rb"
        ;   Label: LAB_00401131
    PUSH 0x5770de                       ; 00401136 | = "font.bin"
    PUSH 0x5770e7                       ; 0040113b | = "startup"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 00401140
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    ADD ESP,0xc                         ; 00401145
    MOV EBX,EAX                         ; 00401148
    TEST EAX,EAX                        ; 0040114a
    JZ 0x0040124c                       ; 0040114c
        ;   XREF to: 0040124c (CONDITIONAL_JUMP)  ; LAB_0040124c
    PUSH EBX                            ; 00401152
        ;   Label: LAB_00401152
    PUSH 0x1                            ; 00401153
    PUSH ESI                            ; 00401155
    MOV EBP,dword ptr [0x006afa38]      ; 00401156 | DAT_006afa38
    PUSH EBP                            ; 0040115c
    CALL crt_stdio.c_fread_FUN_005636d0 ; 0040115d
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 00401162
    PUSH EBX                            ; 00401165
    CALL crt_stdio.c_fclose_FUN_00563380 ; 00401166
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    MOV EAX,0x80                        ; 0040116b
    MOV EBP,dword ptr [0x006afa38]      ; 00401170 | DAT_006afa38
    ADD ESP,0x4                         ; 00401176
    XOR EBX,EBX                         ; 00401179
    POP EDI                             ; 0040117b
    LEA ECX,[EBX + EBP*0x1]             ; 0040117c
        ;   Label: LAB_0040117c
    MOV EDX,dword ptr [EAX + 0x6afa3c]  ; 0040117f | DAT_006afabc | DAT_006afac0
    MOV dword ptr [EAX + 0x6afe3c],ECX  ; 00401185 | DAT_006afebc | DAT_006afec0
    IMUL ECX,EDX,0x17                   ; 0040118b
    ADD EAX,0x4                         ; 0040118e
    ADD EBX,ECX                         ; 00401191
    CMP EAX,0x200                       ; 00401193
    JNZ 0x0040117c                      ; 00401198
        ;   XREF to: 0040117c (CONDITIONAL_JUMP)  ; LAB_0040117c
    MOV ECX,0xffffffff                  ; 0040119a
    MOV EBX,0x1                         ; 0040119f
    MOV dword ptr [0x01c00c80],ECX      ; 004011a4 | DAT_01c00c80
    MOV ECX,0x4                         ; 004011aa
    MOV ESI,0xffffffff                  ; 004011af
    MOV dword ptr [0x006afa38],EBP      ; 004011b4 | DAT_006afa38
    MOV EAX,ESI                         ; 004011ba
        ;   Label: LAB_004011ba
    XOR EDX,EDX                         ; 004011bc
    DIV EBX                             ; 004011be
    ADD ECX,0x4                         ; 004011c0
    INC EBX                             ; 004011c3
    MOV dword ptr [ECX + 0x1c00c7c],EAX ; 004011c4 | DAT_01c00c84 | DAT_01c00c88
    CMP EBX,0x640                       ; 004011ca
    JC 0x004011ba                       ; 004011d0
        ;   XREF to: 004011ba (CONDITIONAL_JUMP)  ; LAB_004011ba
    PUSH 0x577116                       ; 004011d2 | = "rb"
    PUSH 0x577119                       ; 004011d7 | = "default.act"
    PUSH 0x577125                       ; 004011dc | = "art"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004011e1
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    MOV EBX,EAX                         ; 004011e6
    ADD ESP,0xc                         ; 004011e8
    TEST EAX,EAX                        ; 004011eb
    JNZ 0x00401273                      ; 004011ed
        ;   XREF to: 00401273 (CONDITIONAL_JUMP)  ; LAB_00401273
    MOV EBP,dword ptr [0x006afa38]      ; 004011f3 | DAT_006afa38
    POP EBP                             ; 004011f9
    POP ESI                             ; 004011fa
    POP EBX                             ; 004011fb
    RET                                 ; 004011fc
    MOV EBX,0x577004                    ; 004011fd | = "..\\engine\\2d.c"
        ;   Label: LAB_004011fd
    MOV ESI,0x84                        ; 00401202
    PUSH 0x577013                       ; 00401207 | = "No room for frame buffer.  Please run..."
    MOV dword ptr [0x01cc4800],EBX      ; 0040120c | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00401212 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00401218
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0040121d
    JMP 0x00401037                      ; 00401220
        ;   XREF to: 00401037 (UNCONDITIONAL_JUMP)  ; LAB_00401037
    MOV EDI,0x577073                    ; 00401225 | = "..\\engine\\2d.c"
        ;   Label: LAB_00401225
    MOV EAX,0xa1                        ; 0040122a
    PUSH 0x577082                       ; 0040122f | = "Unable to open font.ndx"
    MOV dword ptr [0x01cc4800],EDI      ; 00401234 | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 0040123a | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0040123f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00401244
    JMP 0x004010b1                      ; 00401247
        ;   XREF to: 004010b1 (UNCONDITIONAL_JUMP)  ; LAB_004010b1
    MOV EDI,0x5770ef                    ; 0040124c | = "..\\engine\\2d.c"
        ;   Label: LAB_0040124c
    MOV EAX,0xac                        ; 00401251
    PUSH 0x5770fe                       ; 00401256 | = "Unable to open font.bin"
    MOV dword ptr [0x01cc4800],EDI      ; 0040125b | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 00401261 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00401266
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0040126b
    JMP 0x00401152                      ; 0040126e
        ;   XREF to: 00401152 (UNCONDITIONAL_JUMP)  ; LAB_00401152
    PUSH EAX                            ; 00401273
        ;   Label: LAB_00401273
    PUSH 0x1                            ; 00401274
    PUSH 0x300                          ; 00401276
    PUSH 0x1c00948                      ; 0040127b
    CALL crt_stdio.c_fread_FUN_005636d0 ; 00401280
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 00401285
    PUSH EBX                            ; 00401288
    CALL crt_stdio.c_fclose_FUN_00563380 ; 00401289
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 0040128e
    MOV EBP,dword ptr [0x006afa38]      ; 00401291 | DAT_006afa38
    POP EBP                             ; 00401297
    POP ESI                             ; 00401298
    POP EBX                             ; 00401299
    RET                                 ; 0040129a

