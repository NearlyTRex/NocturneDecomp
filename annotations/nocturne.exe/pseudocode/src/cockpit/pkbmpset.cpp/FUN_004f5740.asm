; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_pkbmpset_cpp_FUN_004f5740(int *param_1,int param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x148]:1  local_148
; undefined        Stack[-0xe4]:1  local_e4
; undefined        Stack[-0x80]:1  local_80
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   cockpit_pkbmpset.cpp_FUN_004f5a50 at 004f5b0d
;
; Referenced Globals:
;   TerminatedCString s_rb_0058d642
;   TerminatedCString s_art_0058d645
;   TerminatedCString s_Unable_to_open_s_in_CPac_0058d649
;   TerminatedCString s_cockpit_pkbmpset_cpp_0058d680
;   TerminatedCString s_Can_t_allocate_u_bytes_f_0058d698
;   TerminatedCString s_cockpit_pkbmpset_cpp_0058d6e2
;   TerminatedCString s_Error_reading_from_s_in_0058d6fa
;   TerminatedCString s_cockpit_pkbmpset_cpp_0058d733
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_004f4700
;   cockpit_pkbmpset.cpp_FUN_004f5c60
;   core_main.c_FUN_004c8440
;   crt_memory.c_malloc_FUN_005635b0
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fread_FUN_005636d0
;   crt_stdio.c_fseek_FUN_0056582c
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_unknown.c_FUN_005638d0
;   engine_dosio.cpp_getFile_FUN_00456a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f5740
        ;   Label: cockpit_pkbmpset.cpp_FUN_004f5740
    PUSH ESI                            ; 004f5741
    PUSH EDI                            ; 004f5742
    PUSH EBP                            ; 004f5743
    SUB ESP,0x138                       ; 004f5744
    MOV ESI,dword ptr [ESP + 0x14c]     ; 004f574a
    PUSH 0x58d642                       ; 004f5751 | = "rb"
    LEA EBX,[ESI + 0x8]                 ; 004f5756
    PUSH EBX                            ; 004f5759
    PUSH 0x58d645                       ; 004f575a | = "art"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004f575f
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    ADD ESP,0xc                         ; 004f5764
    MOV dword ptr [ESP + 0x134],EAX     ; 004f5767
    TEST EAX,EAX                        ; 004f576e
    JZ 0x004f5845                       ; 004f5770
        ;   XREF to: 004f5845 (CONDITIONAL_JUMP)  ; LAB_004f5845
    MOV EBP,dword ptr [ESI + 0x1c]      ; 004f5776
        ;   Label: LAB_004f5776
    IMUL EBP,dword ptr [ESI + 0x20]     ; 004f5779
    PUSH EBP                            ; 004f577d
    CALL crt_memory.c_malloc_FUN_005635b0 ; 004f577e
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_malloc_FUN_005635b0()
    ADD ESP,0x4                         ; 004f5783
    MOV dword ptr [ESP + 0x130],EAX     ; 004f5786
    TEST EAX,EAX                        ; 004f578d
    JNZ 0x004f57c4                      ; 004f578f
        ;   XREF to: 004f57c4 (CONDITIONAL_JUMP)  ; LAB_004f57c4
    PUSH EBP                            ; 004f5791
    PUSH 0x58d698                       ; 004f5792 | = "Can't allocate %u bytes for RAW buffe..."
    LEA EAX,[ESP + 0x8]                 ; 004f5797
    PUSH EAX                            ; 004f579b
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004f579c
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV EAX,0x114                       ; 004f57a1
    ADD ESP,0xc                         ; 004f57a6
    MOV [0x01cc4804],EAX                ; 004f57a9 | INT_01cc4804
    MOV EAX,ESP                         ; 004f57ae
    MOV EDI,0x58d6e2                    ; 004f57b0 | = "..\\cockpit\\pkbmpset.cpp"
    PUSH EAX                            ; 004f57b5
    MOV dword ptr [0x01cc4800],EDI      ; 004f57b6 | PTR_01cc4800
    CALL core_main.c_FUN_004c8440       ; 004f57bc
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f57c1
    MOV EDX,dword ptr [ESI]             ; 004f57c4
        ;   Label: LAB_004f57c4
    XOR EBX,EBX                         ; 004f57c6
    TEST EDX,EDX                        ; 004f57c8
    JLE 0x004f580c                      ; 004f57ca
        ;   XREF to: 004f580c (CONDITIONAL_JUMP)  ; LAB_004f580c
    LEA EAX,[ESI + 0x8]                 ; 004f57cc
    XOR EDI,EDI                         ; 004f57cf
    MOV dword ptr [ESP + 0x12c],EAX     ; 004f57d1
    MOV EAX,dword ptr [ESP + 0x154]     ; 004f57d8
        ;   Label: LAB_004f57d8
    TEST EAX,EAX                        ; 004f57df
    JL 0x004f5880                       ; 004f57e1
        ;   XREF to: 004f5880 (CONDITIONAL_JUMP)  ; LAB_004f5880
    CMP EBX,EAX                         ; 004f57e7
    JZ 0x004f5880                       ; 004f57e9
        ;   XREF to: 004f5880 (CONDITIONAL_JUMP)  ; LAB_004f5880
    PUSH 0x1                            ; 004f57ef
    PUSH EBP                            ; 004f57f1
    MOV EAX,dword ptr [ESP + 0x13c]     ; 004f57f2
    PUSH EAX                            ; 004f57f9
    CALL crt_stdio.c_fseek_FUN_0056582c ; 004f57fa
        ;   XREF to: 0056582c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_0056582c()
    ADD ESP,0xc                         ; 004f57ff
        ;   Label: LAB_004f57ff
    INC EBX                             ; 004f5802
    MOV ECX,dword ptr [ESI]             ; 004f5803
    ADD EDI,0x24                        ; 004f5805
    CMP EBX,ECX                         ; 004f5808
    JL 0x004f57d8                       ; 004f580a
        ;   XREF to: 004f57d8 (CONDITIONAL_JUMP)  ; LAB_004f57d8
    MOV EBX,dword ptr [ESP + 0x130]     ; 004f580c
        ;   Label: LAB_004f580c
    PUSH EBX                            ; 004f5813
    CALL crt_unknown.c_FUN_005638d0     ; 004f5814
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 004f5819
    MOV EDI,dword ptr [ESP + 0x134]     ; 004f581c
    PUSH EDI                            ; 004f5823
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004f5824
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 004f5829
    CMP dword ptr [ESP + 0x150],0x0     ; 004f582c
    JNZ 0x004f58fe                      ; 004f5834
        ;   XREF to: 004f58fe (CONDITIONAL_JUMP)  ; LAB_004f58fe
    ADD ESP,0x138                       ; 004f583a
    POP EBP                             ; 004f5840
    POP EDI                             ; 004f5841
    POP ESI                             ; 004f5842
    POP EBX                             ; 004f5843
    RET                                 ; 004f5844
    PUSH EBX                            ; 004f5845
        ;   Label: LAB_004f5845
    PUSH 0x58d649                       ; 004f5846 | = "Unable to open %s in CPackedBitmapSet..."
    LEA EAX,[ESP + 0x6c]                ; 004f584b
    PUSH EAX                            ; 004f584f
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004f5850
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV EDX,0x58d680                    ; 004f5855 | = "..\\cockpit\\pkbmpset.cpp"
    ADD ESP,0xc                         ; 004f585a
    LEA EAX,[ESP + 0x64]                ; 004f585d
    MOV ECX,0x107                       ; 004f5861
    PUSH EAX                            ; 004f5866
    MOV dword ptr [0x01cc4800],EDX      ; 004f5867 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004f586d | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f5873
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f5878
    JMP 0x004f5776                      ; 004f587b
        ;   XREF to: 004f5776 (UNCONDITIONAL_JUMP)  ; LAB_004f5776
    MOV ECX,dword ptr [ESP + 0x134]     ; 004f5880
        ;   Label: LAB_004f5880
    PUSH ECX                            ; 004f5887
    PUSH 0x1                            ; 004f5888
    PUSH EBP                            ; 004f588a
    MOV EAX,dword ptr [ESP + 0x13c]     ; 004f588b
    PUSH EAX                            ; 004f5892
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004f5893
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 004f5898
    CMP EAX,0x1                         ; 004f589b
    JZ 0x004f58e2                       ; 004f589e
        ;   XREF to: 004f58e2 (CONDITIONAL_JUMP)  ; LAB_004f58e2
    MOV EDX,dword ptr [ESP + 0x12c]     ; 004f58a0
    PUSH EDX                            ; 004f58a7
    PUSH 0x58d6fa                       ; 004f58a8 | = "Error reading from %s in CPackedBitma..."
    LEA EAX,[ESP + 0xd0]                ; 004f58ad
    PUSH EAX                            ; 004f58b4
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004f58b5
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV EAX,0x127                       ; 004f58ba
    ADD ESP,0xc                         ; 004f58bf
    MOV [0x01cc4804],EAX                ; 004f58c2 | INT_01cc4804
    LEA EAX,[ESP + 0xc8]                ; 004f58c7
    MOV ECX,0x58d733                    ; 004f58ce | = "..\\cockpit\\pkbmpset.cpp"
    PUSH EAX                            ; 004f58d3
    MOV dword ptr [0x01cc4800],ECX      ; 004f58d4 | PTR_01cc4800
    CALL core_main.c_FUN_004c8440       ; 004f58da
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f58df
    MOV EDX,dword ptr [ESI + 0x1c]      ; 004f58e2
        ;   Label: LAB_004f58e2
    PUSH EDX                            ; 004f58e5
    MOV ECX,dword ptr [ESP + 0x134]     ; 004f58e6
    MOV EAX,dword ptr [ESI + 0x4]       ; 004f58ed
    PUSH ECX                            ; 004f58f0
    ADD EAX,EDI                         ; 004f58f1
    PUSH EAX                            ; 004f58f3
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_004f4700 ; 004f58f4
        ;   XREF to: 004f4700 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_004f4700()
    JMP 0x004f57ff                      ; 004f58f9
        ;   XREF to: 004f57ff (UNCONDITIONAL_JUMP)  ; LAB_004f57ff
    PUSH ESI                            ; 004f58fe
        ;   Label: LAB_004f58fe
    CALL cockpit_pkbmpset.cpp_FUN_004f5c60 ; 004f58ff
        ;   XREF to: 004f5c60 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbmpset.cpp_FUN_004f5c60()
    ADD ESP,0x4                         ; 004f5904
    ADD ESP,0x138                       ; 004f5907
    POP EBP                             ; 004f590d
    POP EDI                             ; 004f590e
    POP ESI                             ; 004f590f
    POP EBX                             ; 004f5910
    RET                                 ; 004f5911

