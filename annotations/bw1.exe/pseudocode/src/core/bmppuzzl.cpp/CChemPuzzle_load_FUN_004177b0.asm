; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bmppuzzl_cpp_CChemPuzzle_load_FUN_004177b0(CChemPuzzle *this_ptr,int activate)
;
; Parameters:
; CChemPuzzle *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   activate
;
; Referenced Globals:
;   undefined4 DAT_007c397c
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cc60
;   engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004177b0
        ;   Label: core_bmppuzzl.cpp_CChemPuzzle_load_FUN_004177b0
    PUSH ESI                            ; 004177b1
    PUSH EDI                            ; 004177b2
    PUSH EBP                            ; 004177b3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004177b4
    MOV EDX,dword ptr [ESP + 0x18]      ; 004177b8
    LEA ESI,[EBX + 0x10]                ; 004177bc
    TEST EDX,EDX                        ; 004177bf
    JZ 0x00417fa2                       ; 004177c1
        ;   XREF to: 00417fa2 (CONDITIONAL_JUMP)  ; LAB_00417fa2
    MOV dword ptr [EBX + 0x91c],0x1d    ; 004177c7
    MOV dword ptr [EBX + 0x90c],0x1e    ; 004177d1
    MOV dword ptr [EBX + 0x920],0x1d    ; 004177db
    MOV dword ptr [EBX + 0x910],0x1e    ; 004177e5
    MOV dword ptr [EBX + 0x924],0x1d    ; 004177ef
    MOV dword ptr [EBX + 0x914],0x1e    ; 004177f9
    MOV dword ptr [EBX + 0x928],0x1d    ; 00417803
    MOV dword ptr [EBX + 0x918],0x1e    ; 0041780d
    MOV dword ptr [EBX + 0x92c],0x1d    ; 00417817
    MOV dword ptr [EBX + 0x18],0x0      ; 00417821
    MOV dword ptr [EBX + 0x1c],0x0      ; 00417828
    MOV dword ptr [EBX + 0x20],0x0      ; 0041782f
    MOV dword ptr [EBX + 0x28],0x0      ; 00417836
    MOV dword ptr [EBX + 0x2c],0x0      ; 0041783d
    MOV dword ptr [EBX + 0x30],0x0      ; 00417844
    MOV dword ptr [EBX + 0x54],0x0      ; 0041784b
    MOV dword ptr [EBX + 0x24],0x0      ; 00417852
    MOV ECX,0xffffffff                  ; 00417859
    MOV dword ptr [EBX + 0x34],0x0      ; 0041785e
    MOV EAX,EBX                         ; 00417865
    MOV dword ptr [EBX + 0x908],0x1e    ; 00417867
    MOV dword ptr [0x007c397c],ECX      ; 00417871 | DAT_007c397c
    MOV dword ptr [EBX + 0x930],ECX     ; 00417877
    ADD EAX,0x4                         ; 0041787d
        ;   Label: LAB_0041787d
    MOV dword ptr [EAX + 0x930],0x0     ; 00417880
    CMP EAX,ESI                         ; 0041788a
    JNZ 0x0041787d                      ; 0041788c
        ;   XREF to: 0041787d (CONDITIONAL_JUMP)  ; LAB_0041787d
    MOV EAX,EBX                         ; 0041788e
    LEA ESI,[EBX + 0xc]                 ; 00417890
    ADD EAX,0x4                         ; 00417893
        ;   Label: LAB_00417893
    MOV dword ptr [EAX + 0x34],0xffffffff ; 00417896
    CMP EAX,ESI                         ; 0041789d
    JNZ 0x00417893                      ; 0041789f
        ;   XREF to: 00417893 (CONDITIONAL_JUMP)  ; LAB_00417893
    MOV EAX,EBX                         ; 004178a1
    LEA ESI,[EBX + 0xc]                 ; 004178a3
    ADD EAX,0x4                         ; 004178a6
        ;   Label: LAB_004178a6
    MOV dword ptr [EAX + 0x40],0x0      ; 004178a9
    CMP EAX,ESI                         ; 004178b0
    JNZ 0x004178a6                      ; 004178b2
        ;   XREF to: 004178a6 (CONDITIONAL_JUMP)  ; LAB_004178a6
    MOV EAX,EBX                         ; 004178b4
    LEA ESI,[EBX + 0x18]                ; 004178b6
    ADD EAX,0x4                         ; 004178b9
        ;   Label: LAB_004178b9
    MOV dword ptr [EAX + 0x54],0x0      ; 004178bc
    CMP EAX,ESI                         ; 004178c3
    JNZ 0x004178b9                      ; 004178c5
        ;   XREF to: 004178b9 (CONDITIONAL_JUMP)  ; LAB_004178b9
    PUSH 0x1e0                          ; 004178c7
    PUSH 0x280                          ; 004178cc
    PUSH 0x5d4047                       ; 004178d1
    LEA EAX,[EBX + 0x4]                 ; 004178d6
    PUSH EAX                            ; 004178d9
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004178da
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004178df
    PUSH 0x20                           ; 004178e2
    PUSH 0x20                           ; 004178e4
    PUSH 0x5d4056                       ; 004178e6
    PUSH 0x7c39d4                       ; 004178eb
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004178f0
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004178f5
    PUSH 0x20                           ; 004178f8
    PUSH 0x20                           ; 004178fa
    PUSH 0x5d4063                       ; 004178fc
    PUSH 0x7c39e8                       ; 00417901
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 00417906
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 0041790b
    PUSH 0x20                           ; 0041790e
    PUSH 0x20                           ; 00417910
    PUSH 0x5d406e                       ; 00417912
    PUSH 0x7c39fc                       ; 00417917
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 0041791c
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 00417921
    PUSH 0x20                           ; 00417924
    PUSH 0x20                           ; 00417926
    PUSH 0x5d4079                       ; 00417928
    PUSH 0x7c3a10                       ; 0041792d
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 00417932
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 00417937
    PUSH 0x20                           ; 0041793a
    PUSH 0x20                           ; 0041793c
    PUSH 0x5d4085                       ; 0041793e
    PUSH 0x7c3a24                       ; 00417943
    XOR ESI,ESI                         ; 00417948
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 0041794a
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    MOV EDX,dword ptr [EBX + 0x20]      ; 0041794f
    ADD ESP,0x10                        ; 00417952
    TEST EDX,EDX                        ; 00417955
    JLE 0x00417970                      ; 00417957
        ;   XREF to: 00417970 (CONDITIONAL_JUMP)  ; LAB_00417970
    LEA EDI,[EBX + 0x70]                ; 00417959
    PUSH EDI                            ; 0041795c
        ;   Label: LAB_0041795c
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 0041795d
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    INC ESI                             ; 00417962
    ADD ESP,0x4                         ; 00417963
    MOV ECX,dword ptr [EBX + 0x20]      ; 00417966
    ADD EDI,0x2c                        ; 00417969
    CMP ESI,ECX                         ; 0041796c
    JL 0x0041795c                       ; 0041796e
        ;   XREF to: 0041795c (CONDITIONAL_JUMP)  ; LAB_0041795c
    PUSH 0x0                            ; 00417970
        ;   Label: LAB_00417970
    PUSH 0x157                          ; 00417972
    PUSH 0x9d                           ; 00417977
    PUSH 0x1                            ; 0041797c
    PUSH 0x72                           ; 0041797e
    PUSH 0x7a                           ; 00417980
    PUSH 0x5d4096                       ; 00417982
    PUSH 0x1                            ; 00417987
    MOV EAX,dword ptr [EBX]             ; 00417989
    PUSH EBX                            ; 0041798b
    CALL dword ptr [EAX + 0x28]         ; 0041798c
    ADD ESP,0x24                        ; 0041798f
    PUSH 0x0                            ; 00417992
    PUSH 0x157                          ; 00417994
    PUSH 0x9d                           ; 00417999
    PUSH 0x1                            ; 0041799e
    PUSH 0x72                           ; 004179a0
    PUSH 0x7a                           ; 004179a2
    PUSH 0x5d409e                       ; 004179a4
    PUSH 0x2                            ; 004179a9
    MOV EAX,dword ptr [EBX]             ; 004179ab
    PUSH EBX                            ; 004179ad
    CALL dword ptr [EAX + 0x28]         ; 004179ae
    ADD ESP,0x24                        ; 004179b1
    PUSH 0x0                            ; 004179b4
    PUSH 0x157                          ; 004179b6
    PUSH 0x9d                           ; 004179bb
    PUSH 0x1                            ; 004179c0
    PUSH 0x72                           ; 004179c2
    PUSH 0x7a                           ; 004179c4
    PUSH 0x5d40a9                       ; 004179c6
    PUSH 0x3                            ; 004179cb
    MOV EAX,dword ptr [EBX]             ; 004179cd
    PUSH EBX                            ; 004179cf
    CALL dword ptr [EAX + 0x28]         ; 004179d0
    ADD ESP,0x24                        ; 004179d3
    PUSH 0x0                            ; 004179d6
    PUSH 0x157                          ; 004179d8
    PUSH 0x9d                           ; 004179dd
    PUSH 0x1                            ; 004179e2
    PUSH 0x72                           ; 004179e4
    PUSH 0x7a                           ; 004179e6
    PUSH 0x5d40b4                       ; 004179e8
    PUSH 0x4                            ; 004179ed
    MOV EAX,dword ptr [EBX]             ; 004179ef
    PUSH EBX                            ; 004179f1
    CALL dword ptr [EAX + 0x28]         ; 004179f2
    ADD ESP,0x24                        ; 004179f5
    PUSH 0x0                            ; 004179f8
    PUSH 0x157                          ; 004179fa
    PUSH 0x9d                           ; 004179ff
    PUSH 0x1                            ; 00417a04
    PUSH 0x72                           ; 00417a06
    PUSH 0x7a                           ; 00417a08
    PUSH 0x5d40bc                       ; 00417a0a
    PUSH 0x5                            ; 00417a0f
    MOV EAX,dword ptr [EBX]             ; 00417a11
    PUSH EBX                            ; 00417a13
    CALL dword ptr [EAX + 0x28]         ; 00417a14
    ADD ESP,0x24                        ; 00417a17
    PUSH 0x0                            ; 00417a1a
    PUSH 0x157                          ; 00417a1c
    PUSH 0x9d                           ; 00417a21
    PUSH 0x1                            ; 00417a26
    PUSH 0x72                           ; 00417a28
    PUSH 0x7a                           ; 00417a2a
    PUSH 0x5d40c7                       ; 00417a2c
    PUSH 0x6                            ; 00417a31
    MOV EAX,dword ptr [EBX]             ; 00417a33
    PUSH EBX                            ; 00417a35
    CALL dword ptr [EAX + 0x28]         ; 00417a36
    ADD ESP,0x24                        ; 00417a39
    PUSH 0x0                            ; 00417a3c
    PUSH 0x157                          ; 00417a3e
    PUSH 0x9d                           ; 00417a43
    PUSH 0x1                            ; 00417a48
    PUSH 0x72                           ; 00417a4a
    PUSH 0x7a                           ; 00417a4c
    PUSH 0x5d40d2                       ; 00417a4e
    PUSH 0x7                            ; 00417a53
    MOV EAX,dword ptr [EBX]             ; 00417a55
    PUSH EBX                            ; 00417a57
    CALL dword ptr [EAX + 0x28]         ; 00417a58
    ADD ESP,0x24                        ; 00417a5b
    PUSH 0x0                            ; 00417a5e
    PUSH 0x157                          ; 00417a60
    PUSH 0x9d                           ; 00417a65
    PUSH 0x1                            ; 00417a6a
    PUSH 0x72                           ; 00417a6c
    PUSH 0x7a                           ; 00417a6e
    PUSH 0x5d40da                       ; 00417a70
    PUSH 0x8                            ; 00417a75
    MOV EAX,dword ptr [EBX]             ; 00417a77
    PUSH EBX                            ; 00417a79
    CALL dword ptr [EAX + 0x28]         ; 00417a7a
    ADD ESP,0x24                        ; 00417a7d
    PUSH 0x0                            ; 00417a80
    PUSH 0x157                          ; 00417a82
    PUSH 0x9d                           ; 00417a87
    PUSH 0x1                            ; 00417a8c
    PUSH 0x72                           ; 00417a8e
    PUSH 0x7a                           ; 00417a90
    PUSH 0x5d40e5                       ; 00417a92
    PUSH 0x9                            ; 00417a97
    MOV EAX,dword ptr [EBX]             ; 00417a99
    PUSH EBX                            ; 00417a9b
    CALL dword ptr [EAX + 0x28]         ; 00417a9c
    ADD ESP,0x24                        ; 00417a9f
    PUSH 0x0                            ; 00417aa2
    PUSH 0xde                           ; 00417aa4
    PUSH 0x165                          ; 00417aa9
    PUSH 0x1                            ; 00417aae
    PUSH 0x6c                           ; 00417ab0
    PUSH 0x75                           ; 00417ab2
    PUSH 0x5d40f0                       ; 00417ab4
    PUSH 0xa                            ; 00417ab9
    MOV EAX,dword ptr [EBX]             ; 00417abb
    PUSH EBX                            ; 00417abd
    CALL dword ptr [EAX + 0x28]         ; 00417abe
    ADD ESP,0x24                        ; 00417ac1
    PUSH 0x0                            ; 00417ac4
    PUSH 0xde                           ; 00417ac6
    PUSH 0x165                          ; 00417acb
    PUSH 0x1                            ; 00417ad0
    PUSH 0x6c                           ; 00417ad2
    PUSH 0x75                           ; 00417ad4
    PUSH 0x5d40f8                       ; 00417ad6
    PUSH 0xb                            ; 00417adb
    MOV EAX,dword ptr [EBX]             ; 00417add
    PUSH EBX                            ; 00417adf
    CALL dword ptr [EAX + 0x28]         ; 00417ae0
    ADD ESP,0x24                        ; 00417ae3
    PUSH 0x0                            ; 00417ae6
    PUSH 0xde                           ; 00417ae8
    PUSH 0x165                          ; 00417aed
    PUSH 0x1                            ; 00417af2
    PUSH 0x6c                           ; 00417af4
    PUSH 0x75                           ; 00417af6
    PUSH 0x5d4103                       ; 00417af8
    PUSH 0xc                            ; 00417afd
    MOV EAX,dword ptr [EBX]             ; 00417aff
    PUSH EBX                            ; 00417b01
    CALL dword ptr [EAX + 0x28]         ; 00417b02
    ADD ESP,0x24                        ; 00417b05
    PUSH 0x0                            ; 00417b08
    PUSH 0xde                           ; 00417b0a
    PUSH 0x165                          ; 00417b0f
    PUSH 0x1                            ; 00417b14
    PUSH 0x6c                           ; 00417b16
    PUSH 0x75                           ; 00417b18
    PUSH 0x5d410e                       ; 00417b1a
    PUSH 0xd                            ; 00417b1f
    MOV EAX,dword ptr [EBX]             ; 00417b21
    PUSH EBX                            ; 00417b23
    CALL dword ptr [EAX + 0x28]         ; 00417b24
    ADD ESP,0x24                        ; 00417b27
    PUSH 0x0                            ; 00417b2a
    PUSH 0xde                           ; 00417b2c
    PUSH 0x165                          ; 00417b31
    PUSH 0x1                            ; 00417b36
    PUSH 0x6c                           ; 00417b38
    PUSH 0x75                           ; 00417b3a
    PUSH 0x5d4116                       ; 00417b3c
    PUSH 0xe                            ; 00417b41
    MOV EAX,dword ptr [EBX]             ; 00417b43
    PUSH EBX                            ; 00417b45
    CALL dword ptr [EAX + 0x28]         ; 00417b46
    ADD ESP,0x24                        ; 00417b49
    PUSH 0x0                            ; 00417b4c
    PUSH 0xde                           ; 00417b4e
    PUSH 0x165                          ; 00417b53
    PUSH 0x1                            ; 00417b58
    PUSH 0x6c                           ; 00417b5a
    PUSH 0x75                           ; 00417b5c
    PUSH 0x5d4121                       ; 00417b5e
    PUSH 0xf                            ; 00417b63
    MOV EAX,dword ptr [EBX]             ; 00417b65
    PUSH EBX                            ; 00417b67
    CALL dword ptr [EAX + 0x28]         ; 00417b68
    ADD ESP,0x24                        ; 00417b6b
    PUSH 0x0                            ; 00417b6e
    PUSH 0xde                           ; 00417b70
    PUSH 0x165                          ; 00417b75
    PUSH 0x1                            ; 00417b7a
    PUSH 0x6c                           ; 00417b7c
    PUSH 0x75                           ; 00417b7e
    PUSH 0x5d412c                       ; 00417b80
    PUSH 0x10                           ; 00417b85
    MOV EAX,dword ptr [EBX]             ; 00417b87
    PUSH EBX                            ; 00417b89
    CALL dword ptr [EAX + 0x28]         ; 00417b8a
    ADD ESP,0x24                        ; 00417b8d
    PUSH 0x0                            ; 00417b90
    PUSH 0xde                           ; 00417b92
    PUSH 0x165                          ; 00417b97
    PUSH 0x1                            ; 00417b9c
    PUSH 0x6c                           ; 00417b9e
    PUSH 0x75                           ; 00417ba0
    PUSH 0x5d4134                       ; 00417ba2
    PUSH 0x11                           ; 00417ba7
    MOV EAX,dword ptr [EBX]             ; 00417ba9
    PUSH EBX                            ; 00417bab
    CALL dword ptr [EAX + 0x28]         ; 00417bac
    ADD ESP,0x24                        ; 00417baf
    PUSH 0x0                            ; 00417bb2
    PUSH 0xde                           ; 00417bb4
    PUSH 0x165                          ; 00417bb9
    PUSH 0x1                            ; 00417bbe
    PUSH 0x6c                           ; 00417bc0
    PUSH 0x75                           ; 00417bc2
    PUSH 0x5d413f                       ; 00417bc4
    PUSH 0x12                           ; 00417bc9
    MOV EAX,dword ptr [EBX]             ; 00417bcb
    PUSH EBX                            ; 00417bcd
    CALL dword ptr [EAX + 0x28]         ; 00417bce
    ADD ESP,0x24                        ; 00417bd1
    PUSH 0x0                            ; 00417bd4
    PUSH 0x14b                          ; 00417bd6
    PUSH 0x1cd                          ; 00417bdb
    PUSH 0x1                            ; 00417be0
    PUSH 0x78                           ; 00417be2
    PUSH 0x7e                           ; 00417be4
    PUSH 0x5d414a                       ; 00417be6
    PUSH 0x13                           ; 00417beb
    MOV EAX,dword ptr [EBX]             ; 00417bed
    PUSH EBX                            ; 00417bef
    CALL dword ptr [EAX + 0x28]         ; 00417bf0
    ADD ESP,0x24                        ; 00417bf3
    PUSH 0x0                            ; 00417bf6
    PUSH 0x14b                          ; 00417bf8
    PUSH 0x1cd                          ; 00417bfd
    PUSH 0x1                            ; 00417c02
    PUSH 0x78                           ; 00417c04
    PUSH 0x7e                           ; 00417c06
    PUSH 0x5d4152                       ; 00417c08
    PUSH 0x14                           ; 00417c0d
    MOV EAX,dword ptr [EBX]             ; 00417c0f
    PUSH EBX                            ; 00417c11
    CALL dword ptr [EAX + 0x28]         ; 00417c12
    ADD ESP,0x24                        ; 00417c15
    PUSH 0x0                            ; 00417c18
    PUSH 0x14b                          ; 00417c1a
    PUSH 0x1cd                          ; 00417c1f
    PUSH 0x1                            ; 00417c24
    PUSH 0x78                           ; 00417c26
    PUSH 0x7e                           ; 00417c28
    PUSH 0x5d415d                       ; 00417c2a
    PUSH 0x15                           ; 00417c2f
    MOV EAX,dword ptr [EBX]             ; 00417c31
    PUSH EBX                            ; 00417c33
    CALL dword ptr [EAX + 0x28]         ; 00417c34
    ADD ESP,0x24                        ; 00417c37
    PUSH 0x0                            ; 00417c3a
    PUSH 0x14b                          ; 00417c3c
    PUSH 0x1cd                          ; 00417c41
    PUSH 0x1                            ; 00417c46
    PUSH 0x78                           ; 00417c48
    PUSH 0x7e                           ; 00417c4a
    PUSH 0x5d4168                       ; 00417c4c
    PUSH 0x16                           ; 00417c51
    MOV EAX,dword ptr [EBX]             ; 00417c53
    PUSH EBX                            ; 00417c55
    CALL dword ptr [EAX + 0x28]         ; 00417c56
    ADD ESP,0x24                        ; 00417c59
    PUSH 0x0                            ; 00417c5c
    PUSH 0x14b                          ; 00417c5e
    PUSH 0x1cd                          ; 00417c63
    PUSH 0x1                            ; 00417c68
    PUSH 0x78                           ; 00417c6a
    PUSH 0x7e                           ; 00417c6c
    PUSH 0x5d4170                       ; 00417c6e
    PUSH 0x17                           ; 00417c73
    MOV EAX,dword ptr [EBX]             ; 00417c75
    PUSH EBX                            ; 00417c77
    CALL dword ptr [EAX + 0x28]         ; 00417c78
    ADD ESP,0x24                        ; 00417c7b
    PUSH 0x0                            ; 00417c7e
    PUSH 0x14b                          ; 00417c80
    PUSH 0x1cd                          ; 00417c85
    PUSH 0x1                            ; 00417c8a
    PUSH 0x78                           ; 00417c8c
    PUSH 0x7e                           ; 00417c8e
    PUSH 0x5d417b                       ; 00417c90
    PUSH 0x18                           ; 00417c95
    MOV EAX,dword ptr [EBX]             ; 00417c97
    PUSH EBX                            ; 00417c99
    CALL dword ptr [EAX + 0x28]         ; 00417c9a
    ADD ESP,0x24                        ; 00417c9d
    PUSH 0x0                            ; 00417ca0
    PUSH 0x14b                          ; 00417ca2
    PUSH 0x1cd                          ; 00417ca7
    PUSH 0x1                            ; 00417cac
    PUSH 0x78                           ; 00417cae
    PUSH 0x7e                           ; 00417cb0
    PUSH 0x5d4186                       ; 00417cb2
    PUSH 0x19                           ; 00417cb7
    MOV EAX,dword ptr [EBX]             ; 00417cb9
    PUSH EBX                            ; 00417cbb
    CALL dword ptr [EAX + 0x28]         ; 00417cbc
    ADD ESP,0x24                        ; 00417cbf
    PUSH 0x0                            ; 00417cc2
    PUSH 0x14b                          ; 00417cc4
    PUSH 0x1cd                          ; 00417cc9
    PUSH 0x1                            ; 00417cce
    PUSH 0x78                           ; 00417cd0
    PUSH 0x7e                           ; 00417cd2
    PUSH 0x5d418e                       ; 00417cd4
    PUSH 0x1a                           ; 00417cd9
    MOV EAX,dword ptr [EBX]             ; 00417cdb
    PUSH EBX                            ; 00417cdd
    CALL dword ptr [EAX + 0x28]         ; 00417cde
    ADD ESP,0x24                        ; 00417ce1
    PUSH 0x0                            ; 00417ce4
    PUSH 0x14b                          ; 00417ce6
    PUSH 0x1cd                          ; 00417ceb
    PUSH 0x1                            ; 00417cf0
    PUSH 0x78                           ; 00417cf2
    PUSH 0x7e                           ; 00417cf4
    PUSH 0x5d4199                       ; 00417cf6
    PUSH 0x1b                           ; 00417cfb
    MOV EAX,dword ptr [EBX]             ; 00417cfd
    PUSH EBX                            ; 00417cff
    CALL dword ptr [EAX + 0x28]         ; 00417d00
    ADD ESP,0x24                        ; 00417d03
    PUSH 0x0                            ; 00417d06
    PUSH 0x164                          ; 00417d08
    PUSH 0x144                          ; 00417d0d
    PUSH 0x1                            ; 00417d12
    PUSH 0x76                           ; 00417d14
    PUSH 0x80                           ; 00417d16
    PUSH 0x5d41a4                       ; 00417d1b
    PUSH 0x1c                           ; 00417d20
    MOV EAX,dword ptr [EBX]             ; 00417d22
    PUSH EBX                            ; 00417d24
    CALL dword ptr [EAX + 0x28]         ; 00417d25
    ADD ESP,0x24                        ; 00417d28
    PUSH 0x0                            ; 00417d2b
    PUSH 0x164                          ; 00417d2d
    PUSH 0x144                          ; 00417d32
    PUSH 0x1                            ; 00417d37
    PUSH 0x76                           ; 00417d39
    PUSH 0x80                           ; 00417d3b
    PUSH 0x5d41ab                       ; 00417d40
    PUSH 0x1d                           ; 00417d45
    MOV EAX,dword ptr [EBX]             ; 00417d47
    PUSH EBX                            ; 00417d49
    CALL dword ptr [EAX + 0x28]         ; 00417d4a
    ADD ESP,0x24                        ; 00417d4d
    PUSH 0x0                            ; 00417d50
    PUSH 0x164                          ; 00417d52
    PUSH 0x144                          ; 00417d57
    PUSH 0x1                            ; 00417d5c
    PUSH 0x76                           ; 00417d5e
    PUSH 0x80                           ; 00417d60
    PUSH 0x5d41b5                       ; 00417d65
    PUSH 0x1e                           ; 00417d6a
    MOV EAX,dword ptr [EBX]             ; 00417d6c
    PUSH EBX                            ; 00417d6e
    CALL dword ptr [EAX + 0x28]         ; 00417d6f
    ADD ESP,0x24                        ; 00417d72
    PUSH 0x0                            ; 00417d75
    PUSH 0x164                          ; 00417d77
    PUSH 0x144                          ; 00417d7c
    PUSH 0x1                            ; 00417d81
    PUSH 0x76                           ; 00417d83
    PUSH 0x80                           ; 00417d85
    PUSH 0x5d41bf                       ; 00417d8a
    PUSH 0x1f                           ; 00417d8f
    MOV EAX,dword ptr [EBX]             ; 00417d91
    PUSH EBX                            ; 00417d93
    CALL dword ptr [EAX + 0x28]         ; 00417d94
    ADD ESP,0x24                        ; 00417d97
    PUSH 0x0                            ; 00417d9a
    PUSH 0x164                          ; 00417d9c
    PUSH 0x144                          ; 00417da1
    PUSH 0x1                            ; 00417da6
    PUSH 0x76                           ; 00417da8
    PUSH 0x80                           ; 00417daa
    PUSH 0x5d41c6                       ; 00417daf
    PUSH 0x20                           ; 00417db4
    MOV EAX,dword ptr [EBX]             ; 00417db6
    PUSH EBX                            ; 00417db8
    CALL dword ptr [EAX + 0x28]         ; 00417db9
    ADD ESP,0x24                        ; 00417dbc
    PUSH 0x0                            ; 00417dbf
    PUSH 0x164                          ; 00417dc1
    PUSH 0x144                          ; 00417dc6
    PUSH 0x1                            ; 00417dcb
    PUSH 0x76                           ; 00417dcd
    PUSH 0x80                           ; 00417dcf
    PUSH 0x5d41d0                       ; 00417dd4
    PUSH 0x21                           ; 00417dd9
    MOV EAX,dword ptr [EBX]             ; 00417ddb
    PUSH EBX                            ; 00417ddd
    CALL dword ptr [EAX + 0x28]         ; 00417dde
    ADD ESP,0x24                        ; 00417de1
    PUSH 0x0                            ; 00417de4
    PUSH 0x164                          ; 00417de6
    PUSH 0x144                          ; 00417deb
    PUSH 0x1                            ; 00417df0
    PUSH 0x76                           ; 00417df2
    PUSH 0x80                           ; 00417df4
    PUSH 0x5d41da                       ; 00417df9
    PUSH 0x22                           ; 00417dfe
    MOV EAX,dword ptr [EBX]             ; 00417e00
    PUSH EBX                            ; 00417e02
    CALL dword ptr [EAX + 0x28]         ; 00417e03
    ADD ESP,0x24                        ; 00417e06
    PUSH 0x0                            ; 00417e09
    PUSH 0x164                          ; 00417e0b
    PUSH 0x144                          ; 00417e10
    PUSH 0x1                            ; 00417e15
    PUSH 0x76                           ; 00417e17
    PUSH 0x80                           ; 00417e19
    PUSH 0x5d41e1                       ; 00417e1e
    PUSH 0x23                           ; 00417e23
    MOV EAX,dword ptr [EBX]             ; 00417e25
    PUSH EBX                            ; 00417e27
    CALL dword ptr [EAX + 0x28]         ; 00417e28
    ADD ESP,0x24                        ; 00417e2b
    PUSH 0x0                            ; 00417e2e
    PUSH 0x164                          ; 00417e30
    PUSH 0x144                          ; 00417e35
    PUSH 0x1                            ; 00417e3a
    PUSH 0x76                           ; 00417e3c
    PUSH 0x80                           ; 00417e3e
    PUSH 0x5d41eb                       ; 00417e43
    PUSH 0x24                           ; 00417e48
    MOV EAX,dword ptr [EBX]             ; 00417e4a
    PUSH EBX                            ; 00417e4c
    CALL dword ptr [EAX + 0x28]         ; 00417e4d
    ADD ESP,0x24                        ; 00417e50
    PUSH 0x1                            ; 00417e53
    PUSH 0xa0                           ; 00417e55
    PUSH 0x8                            ; 00417e5a
    PUSH 0x1                            ; 00417e5c
    PUSH 0x19                           ; 00417e5e
    PUSH 0x30                           ; 00417e60
    PUSH 0x5d41f5                       ; 00417e62
    PUSH 0x25                           ; 00417e67
    MOV EAX,dword ptr [EBX]             ; 00417e69
    PUSH EBX                            ; 00417e6b
    CALL dword ptr [EAX + 0x28]         ; 00417e6c
    ADD ESP,0x24                        ; 00417e6f
    PUSH 0x1                            ; 00417e72
    PUSH 0x82                           ; 00417e74
    PUSH 0x4f                           ; 00417e79
    PUSH 0x1                            ; 00417e7b
    PUSH 0x19                           ; 00417e7d
    PUSH 0x30                           ; 00417e7f
    PUSH 0x5d41fc                       ; 00417e81
    PUSH 0x26                           ; 00417e86
    MOV EAX,dword ptr [EBX]             ; 00417e88
    PUSH EBX                            ; 00417e8a
    CALL dword ptr [EAX + 0x28]         ; 00417e8b
    ADD ESP,0x24                        ; 00417e8e
    PUSH 0x1                            ; 00417e91
    PUSH 0x63                           ; 00417e93
    PUSH 0x95                           ; 00417e95
    PUSH 0x1                            ; 00417e9a
    PUSH 0x19                           ; 00417e9c
    PUSH 0x30                           ; 00417e9e
    PUSH 0x5d4203                       ; 00417ea0
    PUSH 0x27                           ; 00417ea5
    MOV EAX,dword ptr [EBX]             ; 00417ea7
    PUSH EBX                            ; 00417ea9
    CALL dword ptr [EAX + 0x28]         ; 00417eaa
    ADD ESP,0x24                        ; 00417ead
    PUSH 0x1                            ; 00417eb0
    PUSH 0x44                           ; 00417eb2
    PUSH 0xd7                           ; 00417eb4
    PUSH 0x1                            ; 00417eb9
    PUSH 0x19                           ; 00417ebb
    PUSH 0x30                           ; 00417ebd
    PUSH 0x5d420a                       ; 00417ebf
    PUSH 0x28                           ; 00417ec4
    MOV EAX,dword ptr [EBX]             ; 00417ec6
    PUSH EBX                            ; 00417ec8
    CALL dword ptr [EAX + 0x28]         ; 00417ec9
    ADD ESP,0x24                        ; 00417ecc
    PUSH 0x1                            ; 00417ecf
    PUSH 0x27                           ; 00417ed1
    PUSH 0x117                          ; 00417ed3
    PUSH 0x1                            ; 00417ed8
    PUSH 0x19                           ; 00417eda
    PUSH 0x30                           ; 00417edc
    PUSH 0x5d4211                       ; 00417ede
    PUSH 0x29                           ; 00417ee3
    MOV EAX,dword ptr [EBX]             ; 00417ee5
    PUSH EBX                            ; 00417ee7
    CALL dword ptr [EAX + 0x28]         ; 00417ee8
    ADD ESP,0x24                        ; 00417eeb
    PUSH 0x1                            ; 00417eee
    PUSH 0xd                            ; 00417ef0
    PUSH 0x156                          ; 00417ef2
    PUSH 0x1                            ; 00417ef7
    PUSH 0x19                           ; 00417ef9
    PUSH 0x30                           ; 00417efb
    PUSH 0x5d4218                       ; 00417efd
    PUSH 0x2a                           ; 00417f02
    MOV EAX,dword ptr [EBX]             ; 00417f04
    PUSH EBX                            ; 00417f06
    CALL dword ptr [EAX + 0x28]         ; 00417f07
    ADD ESP,0x24                        ; 00417f0a
    PUSH 0x1                            ; 00417f0d
    PUSH 0x1b8                          ; 00417f0f
    PUSH 0x262                          ; 00417f14
    PUSH 0x1                            ; 00417f19
    PUSH 0x20                           ; 00417f1b
    PUSH 0x1e                           ; 00417f1d
    PUSH 0x5d421f                       ; 00417f1f
    PUSH 0x2b                           ; 00417f24
    MOV EAX,dword ptr [EBX]             ; 00417f26
    PUSH EBX                            ; 00417f28
    CALL dword ptr [EAX + 0x28]         ; 00417f29
    ADD ESP,0x24                        ; 00417f2c
    PUSH 0x1                            ; 00417f2f
    PUSH 0xa                            ; 00417f31
    PUSH 0x262                          ; 00417f33
    PUSH 0x1                            ; 00417f38
    PUSH 0x20                           ; 00417f3a
    PUSH 0x1e                           ; 00417f3c
    PUSH 0x5d4229                       ; 00417f3e
    PUSH 0x2c                           ; 00417f43
    MOV EAX,dword ptr [EBX]             ; 00417f45
    PUSH EBX                            ; 00417f47
    CALL dword ptr [EAX + 0x28]         ; 00417f48
    ADD ESP,0x24                        ; 00417f4b
    PUSH 0x2                            ; 00417f4e
    PUSH 0x0                            ; 00417f50
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 00417f52
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 00417f57
    PUSH 0x2                            ; 00417f5a
    PUSH 0x0                            ; 00417f5c
    MOV dword ptr [EBX + 0x44],EAX      ; 00417f5e
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 00417f61
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 00417f66
    PUSH 0x2                            ; 00417f69
    PUSH 0x0                            ; 00417f6b
    MOV dword ptr [EBX + 0x48],EAX      ; 00417f6d
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 00417f70
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 00417f75
    PUSH 0x2                            ; 00417f78
    PUSH 0x0                            ; 00417f7a
    MOV dword ptr [EBX + 0x4c],EAX      ; 00417f7c
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 00417f7f
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 00417f84
    MOV dword ptr [EBX + 0x50],EAX      ; 00417f87
    MOV EAX,EBX                         ; 00417f8a
    ADD EBX,0x18                        ; 00417f8c
    ADD EAX,0x4                         ; 00417f8f
        ;   Label: LAB_00417f8f
    MOV dword ptr [EAX + 0x54],0x0      ; 00417f92
    CMP EAX,EBX                         ; 00417f99
    JNZ 0x00417f8f                      ; 00417f9b
        ;   XREF to: 00417f8f (CONDITIONAL_JUMP)  ; LAB_00417f8f
    POP EBP                             ; 00417f9d
    POP EDI                             ; 00417f9e
    POP ESI                             ; 00417f9f
    POP EBX                             ; 00417fa0
    RET                                 ; 00417fa1
    LEA EAX,[EBX + 0x4]                 ; 00417fa2
        ;   Label: LAB_00417fa2
    PUSH EAX                            ; 00417fa5
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 00417fa6
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00417fab
    PUSH 0x7c39d4                       ; 00417fae
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 00417fb3
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00417fb8
    PUSH 0x7c39e8                       ; 00417fbb
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 00417fc0
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00417fc5
    PUSH 0x7c39fc                       ; 00417fc8
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 00417fcd
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00417fd2
    PUSH 0x7c3a10                       ; 00417fd5
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 00417fda
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00417fdf
    PUSH 0x7c3a24                       ; 00417fe2
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 00417fe7
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00417fec
    MOV EAX,EBX                         ; 00417fef
    ADD EAX,0x4                         ; 00417ff1
        ;   Label: LAB_00417ff1
    MOV dword ptr [EAX + 0x930],0x0     ; 00417ff4
    CMP EAX,ESI                         ; 00417ffe
    JNZ 0x00417ff1                      ; 00418000
        ;   XREF to: 00417ff1 (CONDITIONAL_JUMP)  ; LAB_00417ff1
    MOV EAX,EBX                         ; 00418002
    LEA ESI,[EBX + 0xc]                 ; 00418004
    ADD EAX,0x4                         ; 00418007
        ;   Label: LAB_00418007
    MOV dword ptr [EAX + 0x34],0xffffffff ; 0041800a
    CMP EAX,ESI                         ; 00418011
    JNZ 0x00418007                      ; 00418013
        ;   XREF to: 00418007 (CONDITIONAL_JUMP)  ; LAB_00418007
    MOV EAX,EBX                         ; 00418015
    LEA ESI,[EBX + 0xc]                 ; 00418017
    ADD EAX,0x4                         ; 0041801a
        ;   Label: LAB_0041801a
    MOV dword ptr [EAX + 0x40],0x0      ; 0041801d
    CMP EAX,ESI                         ; 00418024
    JNZ 0x0041801a                      ; 00418026
        ;   XREF to: 0041801a (CONDITIONAL_JUMP)  ; LAB_0041801a
    MOV ESI,dword ptr [EBX + 0x20]      ; 00418028
    XOR EDI,EDI                         ; 0041802b
    TEST ESI,ESI                        ; 0041802d
    JLE 0x00418050                      ; 0041802f
        ;   XREF to: 00418050 (CONDITIONAL_JUMP)  ; LAB_00418050
    LEA ESI,[EBX + 0x70]                ; 00418031
    PUSH ESI                            ; 00418034
        ;   Label: LAB_00418034
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 00418035
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    INC EDI                             ; 0041803a
    ADD ESP,0x4                         ; 0041803b
    MOV EBP,dword ptr [EBX + 0x20]      ; 0041803e
    ADD ESI,0x2c                        ; 00418041
    CMP EDI,EBP                         ; 00418044
    JL 0x00418034                       ; 00418046
        ;   XREF to: 00418034 (CONDITIONAL_JUMP)  ; LAB_00418034
    LEA EAX,[EAX]                       ; 00418048
    MOV EDX,EDX                         ; 0041804e
    MOV EAX,EBX                         ; 00418050
        ;   Label: LAB_00418050
    LEA ESI,[EBX + 0x18]                ; 00418052
    ADD EAX,0x4                         ; 00418055
        ;   Label: LAB_00418055
    MOV dword ptr [EAX + 0x54],0x0      ; 00418058
    CMP EAX,ESI                         ; 0041805f
    JNZ 0x00418055                      ; 00418061
        ;   XREF to: 00418055 (CONDITIONAL_JUMP)  ; LAB_00418055
    MOV dword ptr [EBX + 0x1c],0x0      ; 00418063
    MOV dword ptr [EBX + 0x20],0x0      ; 0041806a
    MOV dword ptr [EBX + 0x28],0x0      ; 00418071
    MOV dword ptr [EBX + 0x2c],0x0      ; 00418078
    MOV dword ptr [EBX + 0x30],0x0      ; 0041807f
    MOV dword ptr [EBX + 0x54],0x0      ; 00418086
    MOV dword ptr [EBX + 0x24],0x0      ; 0041808d
    MOV dword ptr [EBX + 0x34],0x0      ; 00418094
    MOV EAX,0xffffffff                  ; 0041809b
    MOV dword ptr [EBX + 0x18],0x0      ; 004180a0
    MOV [0x007c397c],EAX                ; 004180a7 | DAT_007c397c
    MOV dword ptr [EBX + 0x930],EAX     ; 004180ac
    POP EBP                             ; 004180b2
    POP EDI                             ; 004180b3
    POP ESI                             ; 004180b4
    POP EBX                             ; 004180b5
    RET                                 ; 004180b6

