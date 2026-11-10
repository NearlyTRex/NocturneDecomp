; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_004b9ab0_cpp_FUN_004ba130(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061d2e0
;   undefined4 DAT_0061d310
;   undefined4 DAT_01cc4470
;   undefined4 DAT_01cc7f1c
;   undefined4 DAT_01cc7f38
;   undefined4 DAT_01cc8000
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220
;   engine_alphabit.cpp_FUN_0040d1c0
;   engine_alphabit.cpp_FUN_0040d970
;   engine_dosio.cpp_splitPath_FUN_00479580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ba130
        ;   Label: unkaddr_004b9ab0.cpp_FUN_004ba130
    PUSH ESI                            ; 004ba131
    PUSH EDI                            ; 004ba132
    PUSH EBP                            ; 004ba133
    SUB ESP,0x508                       ; 004ba134
    PUSH 0x1cc7b94                      ; 004ba13a
    MOV EBX,0x1cc7ba8                   ; 004ba13f
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004ba144
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ba149
    LEA ESI,[EBX + 0x78]                ; 004ba14c
    PUSH EBX                            ; 004ba14f
        ;   Label: LAB_004ba14f
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004ba150
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD EBX,0x14                        ; 004ba155
    ADD ESP,0x4                         ; 004ba158
    CMP EBX,ESI                         ; 004ba15b
    JNZ 0x004ba14f                      ; 004ba15d
        ;   XREF to: 004ba14f (CONDITIONAL_JUMP)  ; LAB_004ba14f
    PUSH 0x1cc7c20                      ; 004ba15f
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004ba164
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ba169
    PUSH 0x1cc7c34                      ; 004ba16c
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004ba171
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ba176
    PUSH 0x1cc7c48                      ; 004ba179
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004ba17e
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ba183
    PUSH 0x1cc7c5c                      ; 004ba186
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004ba18b
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ba190
    PUSH 0x1cc7c84                      ; 004ba193
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004ba198
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ba19d
    PUSH 0x1cc7c98                      ; 004ba1a0
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004ba1a5
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ba1aa
    PUSH 0x1cc7cac                      ; 004ba1ad
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004ba1b2
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ba1b7
    PUSH 0x1cc7cc0                      ; 004ba1ba
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004ba1bf
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ba1c4
    XOR ECX,ECX                         ; 004ba1c7
    XOR AH,AH                           ; 004ba1c9
    PUSH ECX                            ; 004ba1cb
    MOV byte ptr [0x01cc7f38],AH        ; 004ba1cc | DAT_01cc7f38
    LEA EAX,[ESP + 0x4]                 ; 004ba1d2
    PUSH EAX                            ; 004ba1d6
    PUSH ECX                            ; 004ba1d7
    MOV EBX,0xffffffff                  ; 004ba1d8
    MOV EDX,0x1                         ; 004ba1dd
    PUSH ECX                            ; 004ba1e2
    MOV dword ptr [0x0061d310],EBX      ; 004ba1e3 | DAT_0061d310
    MOV dword ptr [0x0061d2e0],EDX      ; 004ba1e9 | DAT_0061d2e0
    PUSH 0x1cc4228                      ; 004ba1ef
    MOV dword ptr [0x01cc7f1c],ECX      ; 004ba1f4 | DAT_01cc7f1c
    MOV dword ptr [0x01cc8000],ECX      ; 004ba1fa | DAT_01cc8000
    CALL engine_dosio.cpp_splitPath_FUN_00479580 ; 004ba200
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00479580(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004ba205
    PUSH 0x1cc4208                      ; 004ba208
    LEA EAX,[ESP + 0x4]                 ; 004ba20d
    PUSH EAX                            ; 004ba211
    PUSH 0x5df825                       ; 004ba212
    LEA EAX,[ESP + 0x10c]               ; 004ba217
    PUSH EAX                            ; 004ba21e
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004ba21f
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 004ba224
    PUSH 0x1e0                          ; 004ba227
    PUSH 0x280                          ; 004ba22c
    LEA EAX,[ESP + 0x108]               ; 004ba231
    PUSH EAX                            ; 004ba238
    PUSH 0x1cc7b94                      ; 004ba239
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004ba23e
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004ba243
    PUSH 0xff                           ; 004ba246
    PUSH 0x1cc7b94                      ; 004ba24b
    MOV EBP,0x9                         ; 004ba250
    XOR EBX,EBX                         ; 004ba255
    CALL engine_alphabit.cpp_FUN_0040d970 ; 004ba257
        ;   XREF to: 0040d970 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_0040d970()
    MOV EDI,dword ptr [0x01cc4470]      ; 004ba25c | DAT_01cc4470
    ADD ESP,0x8                         ; 004ba262
    TEST EDI,EDI                        ; 004ba265
    JLE 0x004ba340                      ; 004ba267
        ;   XREF to: 004ba340 (CONDITIONAL_JUMP)  ; LAB_004ba340
    MOV ESI,0x1cc4474                   ; 004ba26d
    MOV EDI,0x1cc7ba8                   ; 004ba272
    IMUL EAX,EBX,0x2e4                  ; 004ba277
        ;   Label: LAB_004ba277
    PUSH ESI                            ; 004ba27d
    PUSH 0x5df82a                       ; 004ba27e
    MOV dword ptr [ESP + 0x508],EAX     ; 004ba283
    LEA EAX,[ESP + 0x208]               ; 004ba28a
    PUSH EAX                            ; 004ba291
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004ba292
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    IMUL EAX,EBX,0x14                   ; 004ba297
    ADD ESP,0xc                         ; 004ba29a
    PUSH 0x0                            ; 004ba29d
    MOV dword ptr [ESP + 0x508],EAX     ; 004ba29f
    LEA EAX,[ESP + 0x404]               ; 004ba2a6
    PUSH EAX                            ; 004ba2ad
    PUSH 0x0                            ; 004ba2ae
    PUSH 0x0                            ; 004ba2b0
    LEA EAX,[ESP + 0x210]               ; 004ba2b2
    PUSH EAX                            ; 004ba2b9
    CALL engine_dosio.cpp_splitPath_FUN_00479580 ; 004ba2ba
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00479580(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004ba2bf
    PUSH 0x1cc4208                      ; 004ba2c2
    LEA EAX,[ESP + 0x404]               ; 004ba2c7
    PUSH EAX                            ; 004ba2ce
    PUSH 0x5df825                       ; 004ba2cf
    LEA EAX,[ESP + 0x30c]               ; 004ba2d4
    PUSH EAX                            ; 004ba2db
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004ba2dc
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 004ba2e1
    PUSH 0x36                           ; 004ba2e4
    PUSH 0x5a                           ; 004ba2e6
    LEA EAX,[ESP + 0x308]               ; 004ba2e8
    PUSH EAX                            ; 004ba2ef
    PUSH EDI                            ; 004ba2f0
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004ba2f1
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004ba2f6
    MOV EAX,dword ptr [ESP + 0x500]     ; 004ba2f9
    MOV dword ptr [EAX + 0x1cc45bc],0x215 ; 004ba300
    MOV dword ptr [EAX + 0x1cc45c0],EBP ; 004ba30a
    MOV EAX,dword ptr [ESP + 0x504]     ; 004ba310
    ADD ESI,0x2e4                       ; 004ba317
    INC EBX                             ; 004ba31d
    MOV EAX,dword ptr [EAX + 0x1cc7bb8] ; 004ba31e
    MOV ECX,dword ptr [0x01cc4470]      ; 004ba324 | DAT_01cc4470
    ADD EAX,0xa                         ; 004ba32a
    ADD EDI,0x14                        ; 004ba32d
    ADD EBP,EAX                         ; 004ba330
    CMP EBX,ECX                         ; 004ba332
    JL 0x004ba277                       ; 004ba334
        ;   XREF to: 004ba277 (CONDITIONAL_JUMP)  ; LAB_004ba277
    LEA EAX,[EAX]                       ; 004ba33a
    PUSH 0x20                           ; 004ba340
        ;   Label: LAB_004ba340
    PUSH 0x20                           ; 004ba342
    PUSH 0x5df831                       ; 004ba344
    PUSH 0x1cc7c20                      ; 004ba349
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004ba34e
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004ba353
    PUSH 0x20                           ; 004ba356
    PUSH 0x20                           ; 004ba358
    PUSH 0x5df83b                       ; 004ba35a
    PUSH 0x1cc7c34                      ; 004ba35f
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004ba364
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004ba369
    PUSH 0x10                           ; 004ba36c
    PUSH 0x10                           ; 004ba36e
    PUSH 0x5df842                       ; 004ba370
    PUSH 0x1cc7c48                      ; 004ba375
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004ba37a
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004ba37f
    PUSH 0x3f                           ; 004ba382
    PUSH 0x21                           ; 004ba384
    PUSH 0x5df84a                       ; 004ba386
    PUSH 0x1cc7c5c                      ; 004ba38b
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004ba390
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004ba395
    PUSH 0x4a                           ; 004ba398
    PUSH 0x80                           ; 004ba39a
    PUSH 0x5df857                       ; 004ba39f
    PUSH 0x1cc7c70                      ; 004ba3a4
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004ba3a9
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004ba3ae
    PUSH 0x20                           ; 004ba3b1
    PUSH 0x40                           ; 004ba3b3
    PUSH 0x5df860                       ; 004ba3b5
    PUSH 0x1cc7c84                      ; 004ba3ba
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004ba3bf
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004ba3c4
    PUSH 0x20                           ; 004ba3c7
    PUSH 0x40                           ; 004ba3c9
    PUSH 0x5df868                       ; 004ba3cb
    PUSH 0x1cc7c98                      ; 004ba3d0
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004ba3d5
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004ba3da
    PUSH 0x20                           ; 004ba3dd
    PUSH 0x1e                           ; 004ba3df
    PUSH 0x5df870                       ; 004ba3e1
    PUSH 0x1cc7cac                      ; 004ba3e6
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004ba3eb
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004ba3f0
    PUSH 0xff                           ; 004ba3f3
    PUSH 0x1cc7cac                      ; 004ba3f8
    CALL engine_alphabit.cpp_FUN_0040d970 ; 004ba3fd
        ;   XREF to: 0040d970 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_0040d970()
    ADD ESP,0x8                         ; 004ba402
    PUSH 0x8                            ; 004ba405
    PUSH 0x100                          ; 004ba407
    PUSH 0x5df880                       ; 004ba40c
    PUSH 0x1cc7cc0                      ; 004ba411
    XOR EBX,EBX                         ; 004ba416
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004ba418
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004ba41d
    MOV dword ptr [0x0061d2e0],EBX      ; 004ba420 | DAT_0061d2e0
    ADD ESP,0x508                       ; 004ba426
    POP EBP                             ; 004ba42c
    POP EDI                             ; 004ba42d
    POP ESI                             ; 004ba42e
    POP EBX                             ; 004ba42f
    RET                                 ; 004ba430

