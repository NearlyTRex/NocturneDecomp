; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flashlit_cpp_FUN_004a1870(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00616010
;   undefined4 DAT_00616040
;   undefined4 DAT_01cab9f0
;   undefined4 DAT_01caf488
;   undefined4 DAT_01caf4a0
;   undefined4 DAT_01caf568
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0
;   engine_alphabit.cpp_FUN_0040d540
;   engine_alphabit.cpp_FUN_0040dd20
;   engine_dosio.cpp_splitPath_FUN_00461070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1870
        ;   Label: core_flashlit.cpp_FUN_004a1870
    PUSH ESI                            ; 004a1871
    PUSH EDI                            ; 004a1872
    PUSH EBP                            ; 004a1873
    SUB ESP,0x508                       ; 004a1874
    PUSH 0x1caf114                      ; 004a187a
    MOV EBX,0x1caf128                   ; 004a187f
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a1884
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a1889
    LEA ESI,[EBX + 0x78]                ; 004a188c
    PUSH EBX                            ; 004a188f
        ;   Label: LAB_004a188f
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a1890
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD EBX,0x14                        ; 004a1895
    ADD ESP,0x4                         ; 004a1898
    CMP EBX,ESI                         ; 004a189b
    JNZ 0x004a188f                      ; 004a189d
        ;   XREF to: 004a188f (CONDITIONAL_JUMP)  ; LAB_004a188f
    PUSH 0x1caf1a0                      ; 004a189f
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a18a4
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a18a9
    PUSH 0x1caf1b4                      ; 004a18ac
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a18b1
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a18b6
    PUSH 0x1caf1c8                      ; 004a18b9
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a18be
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a18c3
    PUSH 0x1caf1dc                      ; 004a18c6
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a18cb
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a18d0
    PUSH 0x1caf1f0                      ; 004a18d3
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a18d8
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a18dd
    PUSH 0x1caf204                      ; 004a18e0
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a18e5
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a18ea
    PUSH 0x1caf218                      ; 004a18ed
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a18f2
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a18f7
    PUSH 0x1caf22c                      ; 004a18fa
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a18ff
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a1904
    XOR ECX,ECX                         ; 004a1907
    XOR AH,AH                           ; 004a1909
    PUSH ECX                            ; 004a190b
    MOV byte ptr [0x01caf4a0],AH        ; 004a190c | DAT_01caf4a0
    LEA EAX,[ESP + 0x4]                 ; 004a1912
    PUSH EAX                            ; 004a1916
    PUSH ECX                            ; 004a1917
    MOV EBX,0xffffffff                  ; 004a1918
    MOV EDX,0x1                         ; 004a191d
    PUSH ECX                            ; 004a1922
    MOV dword ptr [0x00616040],EBX      ; 004a1923 | DAT_00616040
    MOV dword ptr [0x00616010],EDX      ; 004a1929 | DAT_00616010
    PUSH 0x1cab7a8                      ; 004a192f
    MOV dword ptr [0x01caf488],ECX      ; 004a1934 | DAT_01caf488
    MOV dword ptr [0x01caf568],ECX      ; 004a193a | DAT_01caf568
    CALL engine_dosio.cpp_splitPath_FUN_00461070 ; 004a1940
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00461070(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004a1945
    PUSH 0x1cab788                      ; 004a1948
    LEA EAX,[ESP + 0x4]                 ; 004a194d
    PUSH EAX                            ; 004a1951
    PUSH 0x5d59e3                       ; 004a1952
    LEA EAX,[ESP + 0x10c]               ; 004a1957
    PUSH EAX                            ; 004a195e
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004a195f
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004a1964
    PUSH 0x1e0                          ; 004a1967
    PUSH 0x280                          ; 004a196c
    LEA EAX,[ESP + 0x108]               ; 004a1971
    PUSH EAX                            ; 004a1978
    PUSH 0x1caf114                      ; 004a1979
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004a197e
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004a1983
    PUSH 0xff                           ; 004a1986
    PUSH 0x1caf114                      ; 004a198b
    MOV EBP,0x9                         ; 004a1990
    XOR EBX,EBX                         ; 004a1995
    CALL engine_alphabit.cpp_FUN_0040dd20 ; 004a1997
        ;   XREF to: 0040dd20 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_0040dd20()
    MOV EDI,dword ptr [0x01cab9f0]      ; 004a199c | DAT_01cab9f0
    ADD ESP,0x8                         ; 004a19a2
    TEST EDI,EDI                        ; 004a19a5
    JLE 0x004a1a80                      ; 004a19a7
        ;   XREF to: 004a1a80 (CONDITIONAL_JUMP)  ; LAB_004a1a80
    MOV ESI,0x1cab9f4                   ; 004a19ad
    MOV EDI,0x1caf128                   ; 004a19b2
    IMUL EAX,EBX,0x2e4                  ; 004a19b7
        ;   Label: LAB_004a19b7
    PUSH ESI                            ; 004a19bd
    PUSH 0x5d59e8                       ; 004a19be
    MOV dword ptr [ESP + 0x508],EAX     ; 004a19c3
    LEA EAX,[ESP + 0x208]               ; 004a19ca
    PUSH EAX                            ; 004a19d1
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004a19d2
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    IMUL EAX,EBX,0x14                   ; 004a19d7
    ADD ESP,0xc                         ; 004a19da
    PUSH 0x0                            ; 004a19dd
    MOV dword ptr [ESP + 0x508],EAX     ; 004a19df
    LEA EAX,[ESP + 0x404]               ; 004a19e6
    PUSH EAX                            ; 004a19ed
    PUSH 0x0                            ; 004a19ee
    PUSH 0x0                            ; 004a19f0
    LEA EAX,[ESP + 0x210]               ; 004a19f2
    PUSH EAX                            ; 004a19f9
    CALL engine_dosio.cpp_splitPath_FUN_00461070 ; 004a19fa
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00461070(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004a19ff
    PUSH 0x1cab788                      ; 004a1a02
    LEA EAX,[ESP + 0x404]               ; 004a1a07
    PUSH EAX                            ; 004a1a0e
    PUSH 0x5d59e3                       ; 004a1a0f
    LEA EAX,[ESP + 0x30c]               ; 004a1a14
    PUSH EAX                            ; 004a1a1b
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004a1a1c
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004a1a21
    PUSH 0x36                           ; 004a1a24
    PUSH 0x5a                           ; 004a1a26
    LEA EAX,[ESP + 0x308]               ; 004a1a28
    PUSH EAX                            ; 004a1a2f
    PUSH EDI                            ; 004a1a30
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004a1a31
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004a1a36
    MOV EAX,dword ptr [ESP + 0x500]     ; 004a1a39
    MOV dword ptr [EAX + 0x1cabb3c],0x215 ; 004a1a40
    MOV dword ptr [EAX + 0x1cabb40],EBP ; 004a1a4a
    MOV EAX,dword ptr [ESP + 0x504]     ; 004a1a50
    ADD ESI,0x2e4                       ; 004a1a57
    INC EBX                             ; 004a1a5d
    MOV EAX,dword ptr [EAX + 0x1caf138] ; 004a1a5e
    MOV ECX,dword ptr [0x01cab9f0]      ; 004a1a64 | DAT_01cab9f0
    ADD EAX,0xa                         ; 004a1a6a
    ADD EDI,0x14                        ; 004a1a6d
    ADD EBP,EAX                         ; 004a1a70
    CMP EBX,ECX                         ; 004a1a72
    JL 0x004a19b7                       ; 004a1a74
        ;   XREF to: 004a19b7 (CONDITIONAL_JUMP)  ; LAB_004a19b7
    LEA EAX,[EAX]                       ; 004a1a7a
    PUSH 0x20                           ; 004a1a80
        ;   Label: LAB_004a1a80
    PUSH 0x20                           ; 004a1a82
    PUSH 0x5d59ef                       ; 004a1a84
    PUSH 0x1caf1a0                      ; 004a1a89
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004a1a8e
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004a1a93
    PUSH 0x20                           ; 004a1a96
    PUSH 0x20                           ; 004a1a98
    PUSH 0x5d59f6                       ; 004a1a9a
    PUSH 0x1caf1b4                      ; 004a1a9f
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004a1aa4
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004a1aa9
    PUSH 0x20                           ; 004a1aac
    PUSH 0x20                           ; 004a1aae
    PUSH 0x5d5a00                       ; 004a1ab0
    PUSH 0x1caf1c8                      ; 004a1ab5
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004a1aba
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004a1abf
    PUSH 0x3f                           ; 004a1ac2
    PUSH 0x21                           ; 004a1ac4
    PUSH 0x5d5a08                       ; 004a1ac6
    PUSH 0x1caf1dc                      ; 004a1acb
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004a1ad0
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004a1ad5
    PUSH 0x20                           ; 004a1ad8
    PUSH 0x40                           ; 004a1ada
    PUSH 0x5d5a15                       ; 004a1adc
    PUSH 0x1caf1f0                      ; 004a1ae1
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004a1ae6
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004a1aeb
    PUSH 0x20                           ; 004a1aee
    PUSH 0x40                           ; 004a1af0
    PUSH 0x5d5a1d                       ; 004a1af2
    PUSH 0x1caf204                      ; 004a1af7
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004a1afc
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004a1b01
    PUSH 0x20                           ; 004a1b04
    PUSH 0x1e                           ; 004a1b06
    PUSH 0x5d5a25                       ; 004a1b08
    PUSH 0x1caf218                      ; 004a1b0d
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004a1b12
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004a1b17
    PUSH 0xff                           ; 004a1b1a
    PUSH 0x1caf218                      ; 004a1b1f
    CALL engine_alphabit.cpp_FUN_0040dd20 ; 004a1b24
        ;   XREF to: 0040dd20 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_0040dd20()
    ADD ESP,0x8                         ; 004a1b29
    PUSH 0x8                            ; 004a1b2c
    PUSH 0x100                          ; 004a1b2e
    PUSH 0x5d5a35                       ; 004a1b33
    PUSH 0x1caf22c                      ; 004a1b38
    XOR EBX,EBX                         ; 004a1b3d
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004a1b3f
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004a1b44
    MOV dword ptr [0x00616010],EBX      ; 004a1b47 | DAT_00616010
    ADD ESP,0x508                       ; 004a1b4d
    POP EBP                             ; 004a1b53
    POP EDI                             ; 004a1b54
    POP ESI                             ; 004a1b55
    POP EBX                             ; 004a1b56
    RET                                 ; 004a1b57

