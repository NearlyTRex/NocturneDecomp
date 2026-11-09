; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_FUN_00581310(HWND window_handle)
;
; Parameters:
; HWND             Stack[0x4]:4   window_handle
;
; XREF[4]:
;   core_menu.cpp_FUN_0050aa90 at 0050b2bc
;   engine_special.cpp_FUN_005821c0 at 005821ea
;   engine_special.cpp_FUN_00582ebe at 00582efa
;   wincore_wddvmem.cpp_FUN_005ac040 at 005ac155
;
; Referenced Globals:
;   TerminatedCString s_APIDLLInformation_005f5c4f
;   TerminatedCString s_APIDLLinit_005f5c61
;   TerminatedCString s_APIDLLkill_005f5c6c
;   TerminatedCString s_APIDLLtoggle_005f5c77
;   TerminatedCString s_APIDLLsetVideoMode_005f5c84
;   TerminatedCString s_APIDLLsetVideoMode2_005f5c97
;   TerminatedCString s_APIDLLrestoreVideoMode_005f5cab
;   TerminatedCString s_APIDLLbeginScene_005f5cc2
;   TerminatedCString s_APIDLLendScene_005f5cd3
;   TerminatedCString s_APIDLLlockFrame_005f5ce2
;   TerminatedCString s_APIDLLunlockFrame_005f5cf2
;   TerminatedCString s_APIDLLselectTexture_005f5d04
;   TerminatedCString s_APIDLLupdateTexture_005f5d18
;   TerminatedCString s_APIDLLselectTextureBGRA_005f5d2c
;   TerminatedCString s_APIDLLupdateTextureBGRA_005f5d44
;   ... and 166 more
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;   engine_special.cpp_CExternalRenderer_ctor_FUN_00582d10
;   engine_special.cpp_CExternalRenderer_validate_FUN_00582d60
;   engine_special.cpp_FUN_00580740
;   engine_special.cpp_FUN_00582b10
;   wincore_wddvmem.cpp_FUN_005ad460
;   wincore_wddvmem.cpp_getProcAddress_FUN_005ad470
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00581310
        ;   Label: engine_special.cpp_FUN_00581310
    PUSH ESI                            ; 00581311
    PUSH EDI                            ; 00581312
    PUSH EBP                            ; 00581313
    SUB ESP,0x3c20                      ; 00581314
    MOV EBX,dword ptr [ESP + 0x3c34]    ; 0058131a
    TEST EBX,EBX                        ; 00581321
    JNZ 0x00581341                      ; 00581323
        ;   XREF to: 00581341 (CONDITIONAL_JUMP)  ; LAB_00581341
    MOV EBX,dword ptr [0x02c834c0]      ; 00581325 | DAT_02c834c0
    CMP dword ptr [0x02c83370],0x0      ; 0058132b | DAT_02c83370
        ;   Label: LAB_0058132b
    JNZ 0x00581349                      ; 00581332
        ;   XREF to: 00581349 (CONDITIONAL_JUMP)  ; LAB_00581349
    XOR EAX,EAX                         ; 00581334
    ADD ESP,0x3c20                      ; 00581336
    POP EBP                             ; 0058133c
    POP EDI                             ; 0058133d
    POP ESI                             ; 0058133e
    POP EBX                             ; 0058133f
    RET                                 ; 00581340
    MOV dword ptr [0x02c834c0],EBX      ; 00581341 | DAT_02c834c0
        ;   Label: LAB_00581341
    JMP 0x0058132b                      ; 00581347
        ;   XREF to: 0058132b (UNCONDITIONAL_JUMP)  ; LAB_0058132b
    PUSH 0x6257d0                       ; 00581349 | DAT_006257d0
        ;   Label: LAB_00581349
    CALL wincore_wddvmem.cpp_FUN_005ad460 ; 0058134e
        ;   XREF to: 005ad460 (UNCONDITIONAL_CALL)  ; HMODULE wincore_wddvmem.cpp_FUN_005ad460(LPCSTR lpLibFileName)
    ADD ESP,0x4                         ; 00581353
    MOV [0x02c834b0],EAX                ; 00581356 | DAT_02c834b0
    TEST EAX,EAX                        ; 0058135b
    JNZ 0x00581371                      ; 0058135d
        ;   XREF to: 00581371 (CONDITIONAL_JUMP)  ; LAB_00581371
    MOV [0x02c83370],EAX                ; 0058135f | DAT_02c83370
    XOR EAX,EAX                         ; 00581364
    ADD ESP,0x3c20                      ; 00581366
    POP EBP                             ; 0058136c
    POP EDI                             ; 0058136d
    POP ESI                             ; 0058136e
    POP EBX                             ; 0058136f
    RET                                 ; 00581370
    PUSH 0x5f5c4f                       ; 00581371 | = "APIDLLInformation"
        ;   Label: LAB_00581371
    PUSH EAX                            ; 00581376
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581377
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0058137c
    MOV EDX,EAX                         ; 0058137f
    TEST EAX,EAX                        ; 00581381
    JZ 0x00581cd5                       ; 00581383
        ;   XREF to: 00581cd5 (CONDITIONAL_JUMP)  ; LAB_00581cd5
    MOV EAX,ESP                         ; 00581389
    PUSH EAX                            ; 0058138b
    MOV ECX,dword ptr [0x02c834b0]      ; 0058138c | DAT_02c834b0
    PUSH ECX                            ; 00581392
    CALL EDX                            ; 00581393
    ADD ESP,0x8                         ; 00581395
    LEA EAX,[ESP + 0x1dc8]              ; 00581398
    PUSH EAX                            ; 0058139f
    CALL engine_special.cpp_CExternalRenderer_ctor_FUN_00582d10 ; 005813a0
        ;   XREF to: 00582d10 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_CExternalRenderer_ctor_FUN_00582d10(CExternalRenderer * this_ptr)
    ADD ESP,0x4                         ; 005813a5
    LEA EAX,[ESP + 0x1dc8]              ; 005813a8
    PUSH EAX                            ; 005813af
    LEA EAX,[ESP + 0x4]                 ; 005813b0
    PUSH EAX                            ; 005813b4
    CALL engine_special.cpp_CExternalRenderer_validate_FUN_00582d60 ; 005813b5
        ;   XREF to: 00582d60 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_CExternalRenderer_validate_FUN_00582d60(CExternalRenderer * this_ptr, CExternalRenderer * capabilities)
    ADD ESP,0x8                         ; 005813ba
    TEST EAX,EAX                        ; 005813bd
    JZ 0x00581cef                       ; 005813bf
        ;   XREF to: 00581cef (CONDITIONAL_JUMP)  ; LAB_00581cef
    PUSH 0x5f5c61                       ; 005813c5 | = "APIDLLinit"
    MOV EDI,dword ptr [0x02c834b0]      ; 005813ca | DAT_02c834b0
    XOR ESI,ESI                         ; 005813d0
    PUSH EDI                            ; 005813d2
    MOV dword ptr [0x02c834c8],ESI      ; 005813d3 | DAT_02c834c8
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 005813d9
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005813de
    MOV [0x02c83388],EAX                ; 005813e1 | DAT_02c83388
    TEST EAX,EAX                        ; 005813e6
    JNZ 0x005813f4                      ; 005813e8
        ;   XREF to: 005813f4 (CONDITIONAL_JUMP)  ; LAB_005813f4
    MOV dword ptr [0x02c834c8],0x1      ; 005813ea | DAT_02c834c8
    PUSH 0x5f5c6c                       ; 005813f4 | = "APIDLLkill"
        ;   Label: LAB_005813f4
    MOV EAX,[0x02c834b0]                ; 005813f9 | DAT_02c834b0
    PUSH EAX                            ; 005813fe
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 005813ff
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581404
    MOV [0x02c8338c],EAX                ; 00581407 | DAT_02c8338c
    TEST EAX,EAX                        ; 0058140c
    JNZ 0x0058141a                      ; 0058140e
        ;   XREF to: 0058141a (CONDITIONAL_JUMP)  ; LAB_0058141a
    MOV dword ptr [0x02c834c8],0x1      ; 00581410 | DAT_02c834c8
    PUSH 0x5f5c77                       ; 0058141a | = "APIDLLtoggle"
        ;   Label: LAB_0058141a
    MOV ECX,dword ptr [0x02c834b0]      ; 0058141f | DAT_02c834b0
    PUSH ECX                            ; 00581425
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581426
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0058142b
    MOV [0x02c83390],EAX                ; 0058142e | DAT_02c83390
    TEST EAX,EAX                        ; 00581433
    JNZ 0x00581441                      ; 00581435
        ;   XREF to: 00581441 (CONDITIONAL_JUMP)  ; LAB_00581441
    MOV dword ptr [0x02c834c8],0x1      ; 00581437 | DAT_02c834c8
    PUSH 0x5f5c84                       ; 00581441 | = "APIDLLsetVideoMode"
        ;   Label: LAB_00581441
    MOV EDI,dword ptr [0x02c834b0]      ; 00581446 | DAT_02c834b0
    PUSH EDI                            ; 0058144c
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 0058144d
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581452
    MOV [0x02c83394],EAX                ; 00581455 | DAT_02c83394
    TEST EAX,EAX                        ; 0058145a
    JNZ 0x00581468                      ; 0058145c
        ;   XREF to: 00581468 (CONDITIONAL_JUMP)  ; LAB_00581468
    MOV dword ptr [0x02c834c8],0x1      ; 0058145e | DAT_02c834c8
    PUSH 0x5f5c97                       ; 00581468 | = "APIDLLsetVideoMode2"
        ;   Label: LAB_00581468
    MOV EAX,[0x02c834b0]                ; 0058146d | DAT_02c834b0
    PUSH EAX                            ; 00581472
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581473
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581478
    MOV [0x02c83398],EAX                ; 0058147b | DAT_02c83398
    TEST EAX,EAX                        ; 00581480
    JNZ 0x0058148e                      ; 00581482
        ;   XREF to: 0058148e (CONDITIONAL_JUMP)  ; LAB_0058148e
    MOV dword ptr [0x02c834c8],0x1      ; 00581484 | DAT_02c834c8
    PUSH 0x5f5cab                       ; 0058148e | = "APIDLLrestoreVideoMode"
        ;   Label: LAB_0058148e
    MOV ECX,dword ptr [0x02c834b0]      ; 00581493 | DAT_02c834b0
    PUSH ECX                            ; 00581499
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 0058149a
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0058149f
    MOV [0x02c8339c],EAX                ; 005814a2 | DAT_02c8339c
    TEST EAX,EAX                        ; 005814a7
    JNZ 0x005814b5                      ; 005814a9
        ;   XREF to: 005814b5 (CONDITIONAL_JUMP)  ; LAB_005814b5
    MOV dword ptr [0x02c834c8],0x1      ; 005814ab | DAT_02c834c8
    PUSH 0x5f5cc2                       ; 005814b5 | = "APIDLLbeginScene"
        ;   Label: LAB_005814b5
    MOV EDI,dword ptr [0x02c834b0]      ; 005814ba | DAT_02c834b0
    PUSH EDI                            ; 005814c0
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 005814c1
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005814c6
    MOV [0x02c833a0],EAX                ; 005814c9 | DAT_02c833a0
    TEST EAX,EAX                        ; 005814ce
    JNZ 0x005814dc                      ; 005814d0
        ;   XREF to: 005814dc (CONDITIONAL_JUMP)  ; LAB_005814dc
    MOV dword ptr [0x02c834c8],0x1      ; 005814d2 | DAT_02c834c8
    PUSH 0x5f5cd3                       ; 005814dc | = "APIDLLendScene"
        ;   Label: LAB_005814dc
    MOV EAX,[0x02c834b0]                ; 005814e1 | DAT_02c834b0
    PUSH EAX                            ; 005814e6
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 005814e7
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005814ec
    MOV [0x02c833a4],EAX                ; 005814ef | DAT_02c833a4
    TEST EAX,EAX                        ; 005814f4
    JNZ 0x00581502                      ; 005814f6
        ;   XREF to: 00581502 (CONDITIONAL_JUMP)  ; LAB_00581502
    MOV dword ptr [0x02c834c8],0x1      ; 005814f8 | DAT_02c834c8
    PUSH 0x5f5ce2                       ; 00581502 | = "APIDLLlockFrame"
        ;   Label: LAB_00581502
    MOV ECX,dword ptr [0x02c834b0]      ; 00581507 | DAT_02c834b0
    PUSH ECX                            ; 0058150d
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 0058150e
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581513
    MOV [0x02c833a8],EAX                ; 00581516 | DAT_02c833a8
    TEST EAX,EAX                        ; 0058151b
    JNZ 0x00581529                      ; 0058151d
        ;   XREF to: 00581529 (CONDITIONAL_JUMP)  ; LAB_00581529
    MOV dword ptr [0x02c834c8],0x1      ; 0058151f | DAT_02c834c8
    PUSH 0x5f5cf2                       ; 00581529 | = "APIDLLunlockFrame"
        ;   Label: LAB_00581529
    MOV EDI,dword ptr [0x02c834b0]      ; 0058152e | DAT_02c834b0
    PUSH EDI                            ; 00581534
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581535
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0058153a
    MOV [0x02c833ac],EAX                ; 0058153d | DAT_02c833ac
    TEST EAX,EAX                        ; 00581542
    JNZ 0x00581550                      ; 00581544
        ;   XREF to: 00581550 (CONDITIONAL_JUMP)  ; LAB_00581550
    MOV dword ptr [0x02c834c8],0x1      ; 00581546 | DAT_02c834c8
    PUSH 0x5f5d04                       ; 00581550 | = "APIDLLselectTexture"
        ;   Label: LAB_00581550
    MOV EAX,[0x02c834b0]                ; 00581555 | DAT_02c834b0
    PUSH EAX                            ; 0058155a
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 0058155b
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581560
    MOV [0x02c833b0],EAX                ; 00581563 | DAT_02c833b0
    TEST EAX,EAX                        ; 00581568
    JNZ 0x00581576                      ; 0058156a
        ;   XREF to: 00581576 (CONDITIONAL_JUMP)  ; LAB_00581576
    MOV dword ptr [0x02c834c8],0x1      ; 0058156c | DAT_02c834c8
    PUSH 0x5f5d18                       ; 00581576 | = "APIDLLupdateTexture"
        ;   Label: LAB_00581576
    MOV ECX,dword ptr [0x02c834b0]      ; 0058157b | DAT_02c834b0
    PUSH ECX                            ; 00581581
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581582
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581587
    MOV [0x02c833b4],EAX                ; 0058158a | DAT_02c833b4
    TEST EAX,EAX                        ; 0058158f
    JNZ 0x0058159d                      ; 00581591
        ;   XREF to: 0058159d (CONDITIONAL_JUMP)  ; LAB_0058159d
    MOV dword ptr [0x02c834c8],0x1      ; 00581593 | DAT_02c834c8
    PUSH 0x5f5d2c                       ; 0058159d | = "APIDLLselectTextureBGRA"
        ;   Label: LAB_0058159d
    MOV EDI,dword ptr [0x02c834b0]      ; 005815a2 | DAT_02c834b0
    PUSH EDI                            ; 005815a8
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 005815a9
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005815ae
    PUSH 0x5f5d44                       ; 005815b1 | = "APIDLLupdateTextureBGRA"
    MOV EBP,dword ptr [0x02c834b0]      ; 005815b6 | DAT_02c834b0
    PUSH EBP                            ; 005815bc
    MOV [0x02c833b8],EAX                ; 005815bd | DAT_02c833b8
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 005815c2
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005815c7
    PUSH 0x5f5d5c                       ; 005815ca | = "APIDLLsetMipMapLevel"
    MOV [0x02c833bc],EAX                ; 005815cf | DAT_02c833bc
    MOV EAX,[0x02c834b0]                ; 005815d4 | DAT_02c834b0
    PUSH EAX                            ; 005815d9
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 005815da
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005815df
    MOV [0x02c833c0],EAX                ; 005815e2 | DAT_02c833c0
    TEST EAX,EAX                        ; 005815e7
    JNZ 0x005815f5                      ; 005815e9
        ;   XREF to: 005815f5 (CONDITIONAL_JUMP)  ; LAB_005815f5
    MOV dword ptr [0x02c834c8],0x1      ; 005815eb | DAT_02c834c8
    PUSH 0x5f5d71                       ; 005815f5 | = "APIDLLdrawPolygon"
        ;   Label: LAB_005815f5
    MOV ECX,dword ptr [0x02c834b0]      ; 005815fa | DAT_02c834b0
    PUSH ECX                            ; 00581600
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581601
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581606
    MOV [0x02c833c4],EAX                ; 00581609 | DAT_02c833c4
    TEST EAX,EAX                        ; 0058160e
    JNZ 0x0058161c                      ; 00581610
        ;   XREF to: 0058161c (CONDITIONAL_JUMP)  ; LAB_0058161c
    MOV dword ptr [0x02c834c8],0x1      ; 00581612 | DAT_02c834c8
    PUSH 0x5f5d83                       ; 0058161c | = "APIDLLdrawPolygon2"
        ;   Label: LAB_0058161c
    MOV EDI,dword ptr [0x02c834b0]      ; 00581621 | DAT_02c834b0
    PUSH EDI                            ; 00581627
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581628
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0058162d
    MOV [0x02c833c8],EAX                ; 00581630 | DAT_02c833c8
    TEST EAX,EAX                        ; 00581635
    JNZ 0x00581643                      ; 00581637
        ;   XREF to: 00581643 (CONDITIONAL_JUMP)  ; LAB_00581643
    MOV dword ptr [0x02c834c8],0x1      ; 00581639 | DAT_02c834c8
    PUSH 0x5f5d96                       ; 00581643 | = "APIDLLdrawPolyList"
        ;   Label: LAB_00581643
    MOV EAX,[0x02c834b0]                ; 00581648 | DAT_02c834b0
    PUSH EAX                            ; 0058164d
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 0058164e
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581653
    PUSH 0x5f5da9                       ; 00581656 | = "APIDLLdrawPolyList2"
    MOV EDX,dword ptr [0x02c834b0]      ; 0058165b | DAT_02c834b0
    PUSH EDX                            ; 00581661
    MOV [0x02c833cc],EAX                ; 00581662 | DAT_02c833cc
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581667
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0058166c
    PUSH 0x5f5dbd                       ; 0058166f | = "APIDLLdrawPolyList3"
    MOV ECX,dword ptr [0x02c834b0]      ; 00581674 | DAT_02c834b0
    PUSH ECX                            ; 0058167a
    MOV [0x02c833d0],EAX                ; 0058167b | DAT_02c833d0
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581680
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581685
    PUSH 0x5f5dd1                       ; 00581688 | = "APIDLLaddParticle"
    MOV ESI,dword ptr [0x02c834b0]      ; 0058168d | DAT_02c834b0
    PUSH ESI                            ; 00581693
    MOV [0x02c833d4],EAX                ; 00581694 | DAT_02c833d4
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581699
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0058169e
    MOV [0x02c833d8],EAX                ; 005816a1 | DAT_02c833d8
    TEST EAX,EAX                        ; 005816a6
    JNZ 0x005816b4                      ; 005816a8
        ;   XREF to: 005816b4 (CONDITIONAL_JUMP)  ; LAB_005816b4
    MOV dword ptr [0x02c834c8],0x1      ; 005816aa | DAT_02c834c8
    PUSH 0x5f5de3                       ; 005816b4 | = "APIDLLflushParticleList"
        ;   Label: LAB_005816b4
    MOV EBP,dword ptr [0x02c834b0]      ; 005816b9 | DAT_02c834b0
    PUSH EBP                            ; 005816bf
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 005816c0
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005816c5
    MOV [0x02c833dc],EAX                ; 005816c8 | DAT_02c833dc
    TEST EAX,EAX                        ; 005816cd
    JNZ 0x005816db                      ; 005816cf
        ;   XREF to: 005816db (CONDITIONAL_JUMP)  ; LAB_005816db
    MOV dword ptr [0x02c834c8],0x1      ; 005816d1 | DAT_02c834c8
    PUSH 0x5f5dfb                       ; 005816db | = "APIDLLadd3dLine"
        ;   Label: LAB_005816db
    MOV EDX,dword ptr [0x02c834b0]      ; 005816e0 | DAT_02c834b0
    PUSH EDX                            ; 005816e6
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 005816e7
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005816ec
    MOV [0x02c833e0],EAX                ; 005816ef | DAT_02c833e0
    TEST EAX,EAX                        ; 005816f4
    JNZ 0x00581702                      ; 005816f6
        ;   XREF to: 00581702 (CONDITIONAL_JUMP)  ; LAB_00581702
    MOV dword ptr [0x02c834c8],0x1      ; 005816f8 | DAT_02c834c8
    PUSH 0x5f5e0b                       ; 00581702 | = "APIDLLflushLineList"
        ;   Label: LAB_00581702
    MOV ESI,dword ptr [0x02c834b0]      ; 00581707 | DAT_02c834b0
    PUSH ESI                            ; 0058170d
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 0058170e
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581713
    MOV [0x02c833e4],EAX                ; 00581716 | DAT_02c833e4
    TEST EAX,EAX                        ; 0058171b
    JNZ 0x00581729                      ; 0058171d
        ;   XREF to: 00581729 (CONDITIONAL_JUMP)  ; LAB_00581729
    MOV dword ptr [0x02c834c8],0x1      ; 0058171f | DAT_02c834c8
    PUSH 0x5f5e1f                       ; 00581729 | = "APIDLLclear"
        ;   Label: LAB_00581729
    MOV EBP,dword ptr [0x02c834b0]      ; 0058172e | DAT_02c834b0
    PUSH EBP                            ; 00581734
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581735
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0058173a
    MOV [0x02c833e8],EAX                ; 0058173d | DAT_02c833e8
    TEST EAX,EAX                        ; 00581742
    JNZ 0x00581750                      ; 00581744
        ;   XREF to: 00581750 (CONDITIONAL_JUMP)  ; LAB_00581750
    MOV dword ptr [0x02c834c8],0x1      ; 00581746 | DAT_02c834c8
    PUSH 0x5f5e2b                       ; 00581750 | = "APIDLLsetFogColor"
        ;   Label: LAB_00581750
    MOV EDX,dword ptr [0x02c834b0]      ; 00581755 | DAT_02c834b0
    PUSH EDX                            ; 0058175b
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 0058175c
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581761
    MOV [0x02c833ec],EAX                ; 00581764 | DAT_02c833ec
    TEST EAX,EAX                        ; 00581769
    JNZ 0x00581777                      ; 0058176b
        ;   XREF to: 00581777 (CONDITIONAL_JUMP)  ; LAB_00581777
    MOV dword ptr [0x02c834c8],0x1      ; 0058176d | DAT_02c834c8
    PUSH 0x5f5e3d                       ; 00581777 | = "APIDLLsync"
        ;   Label: LAB_00581777
    MOV ESI,dword ptr [0x02c834b0]      ; 0058177c | DAT_02c834b0
    PUSH ESI                            ; 00581782
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581783
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581788
    MOV [0x02c833f0],EAX                ; 0058178b | DAT_02c833f0
    TEST EAX,EAX                        ; 00581790
    JNZ 0x0058179e                      ; 00581792
        ;   XREF to: 0058179e (CONDITIONAL_JUMP)  ; LAB_0058179e
    MOV dword ptr [0x02c834c8],0x1      ; 00581794 | DAT_02c834c8
    PUSH 0x5f5e48                       ; 0058179e | = "APIDLLclearZBuffer"
        ;   Label: LAB_0058179e
    MOV EBP,dword ptr [0x02c834b0]      ; 005817a3 | DAT_02c834b0
    PUSH EBP                            ; 005817a9
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 005817aa
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005817af
    MOV [0x02c833f4],EAX                ; 005817b2 | DAT_02c833f4
    TEST EAX,EAX                        ; 005817b7
    JNZ 0x005817c5                      ; 005817b9
        ;   XREF to: 005817c5 (CONDITIONAL_JUMP)  ; LAB_005817c5
    MOV dword ptr [0x02c834c8],0x1      ; 005817bb | DAT_02c834c8
    PUSH 0x5f5e5b                       ; 005817c5 | = "APIDLLclearZBox"
        ;   Label: LAB_005817c5
    MOV EDX,dword ptr [0x02c834b0]      ; 005817ca | DAT_02c834b0
    PUSH EDX                            ; 005817d0
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 005817d1
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005817d6
    MOV [0x02c833f8],EAX                ; 005817d9 | DAT_02c833f8
    TEST EAX,EAX                        ; 005817de
    JNZ 0x005817ec                      ; 005817e0
        ;   XREF to: 005817ec (CONDITIONAL_JUMP)  ; LAB_005817ec
    MOV dword ptr [0x02c834c8],0x1      ; 005817e2 | DAT_02c834c8
    PUSH 0x5f5e6b                       ; 005817ec | = "APIDLLsetColorTable16"
        ;   Label: LAB_005817ec
    MOV ESI,dword ptr [0x02c834b0]      ; 005817f1 | DAT_02c834b0
    PUSH ESI                            ; 005817f7
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 005817f8
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005817fd
    MOV [0x02c833fc],EAX                ; 00581800 | DAT_02c833fc
    TEST EAX,EAX                        ; 00581805
    JNZ 0x00581813                      ; 00581807
        ;   XREF to: 00581813 (CONDITIONAL_JUMP)  ; LAB_00581813
    MOV dword ptr [0x02c834c8],0x1      ; 00581809 | DAT_02c834c8
    PUSH 0x5f5e81                       ; 00581813 | = "APIDLLGetDisplayContext"
        ;   Label: LAB_00581813
    MOV EBP,dword ptr [0x02c834b0]      ; 00581818 | DAT_02c834b0
    PUSH EBP                            ; 0058181e
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 0058181f
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581824
    MOV [0x02c83400],EAX                ; 00581827 | DAT_02c83400
    TEST EAX,EAX                        ; 0058182c
    JNZ 0x0058183a                      ; 0058182e
        ;   XREF to: 0058183a (CONDITIONAL_JUMP)  ; LAB_0058183a
    MOV dword ptr [0x02c834c8],0x1      ; 00581830 | DAT_02c834c8
    PUSH 0x5f5e99                       ; 0058183a | = "APIDLLReleaseDisplayContext"
        ;   Label: LAB_0058183a
    MOV EDX,dword ptr [0x02c834b0]      ; 0058183f | DAT_02c834b0
    PUSH EDX                            ; 00581845
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581846
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0058184b
    MOV [0x02c83404],EAX                ; 0058184e | DAT_02c83404
    TEST EAX,EAX                        ; 00581853
    JNZ 0x00581861                      ; 00581855
        ;   XREF to: 00581861 (CONDITIONAL_JUMP)  ; LAB_00581861
    MOV dword ptr [0x02c834c8],0x1      ; 00581857 | DAT_02c834c8
    PUSH 0x5f5eb5                       ; 00581861 | = "APIDLLmasterZBuffer"
        ;   Label: LAB_00581861
    MOV ESI,dword ptr [0x02c834b0]      ; 00581866 | DAT_02c834b0
    PUSH ESI                            ; 0058186c
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 0058186d
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581872
    MOV [0x02c83408],EAX                ; 00581875 | DAT_02c83408
    TEST EAX,EAX                        ; 0058187a
    JNZ 0x00581888                      ; 0058187c
        ;   XREF to: 00581888 (CONDITIONAL_JUMP)  ; LAB_00581888
    MOV dword ptr [0x02c834c8],0x1      ; 0058187e | DAT_02c834c8
    PUSH 0x5f5ec9                       ; 00581888 | = "APIDLLrestoreZBuffer"
        ;   Label: LAB_00581888
    MOV EBP,dword ptr [0x02c834b0]      ; 0058188d | DAT_02c834b0
    PUSH EBP                            ; 00581893
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581894
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581899
    MOV [0x02c8340c],EAX                ; 0058189c | DAT_02c8340c
    TEST EAX,EAX                        ; 005818a1
    JNZ 0x005818af                      ; 005818a3
        ;   XREF to: 005818af (CONDITIONAL_JUMP)  ; LAB_005818af
    MOV dword ptr [0x02c834c8],0x1      ; 005818a5 | DAT_02c834c8
    PUSH 0x5f5ede                       ; 005818af | = "APIDLLgetVideoMemory"
        ;   Label: LAB_005818af
    MOV EDX,dword ptr [0x02c834b0]      ; 005818b4 | DAT_02c834b0
    PUSH EDX                            ; 005818ba
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 005818bb
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005818c0
    MOV [0x02c83410],EAX                ; 005818c3 | DAT_02c83410
    TEST EAX,EAX                        ; 005818c8
    JNZ 0x005818d6                      ; 005818ca
        ;   XREF to: 005818d6 (CONDITIONAL_JUMP)  ; LAB_005818d6
    MOV dword ptr [0x02c834c8],0x1      ; 005818cc | DAT_02c834c8
    PUSH 0x5f5ef3                       ; 005818d6 | = "APIDLLselectCard"
        ;   Label: LAB_005818d6
    MOV ESI,dword ptr [0x02c834b0]      ; 005818db | DAT_02c834b0
    PUSH ESI                            ; 005818e1
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 005818e2
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005818e7
    MOV [0x02c83414],EAX                ; 005818ea | DAT_02c83414
    TEST EAX,EAX                        ; 005818ef
    JNZ 0x005818fd                      ; 005818f1
        ;   XREF to: 005818fd (CONDITIONAL_JUMP)  ; LAB_005818fd
    MOV dword ptr [0x02c834c8],0x1      ; 005818f3 | DAT_02c834c8
    PUSH 0x5f5f04                       ; 005818fd | = "APIDLLbuildCardList"
        ;   Label: LAB_005818fd
    MOV EBP,dword ptr [0x02c834b0]      ; 00581902 | DAT_02c834b0
    PUSH EBP                            ; 00581908
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581909
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0058190e
    MOV [0x02c83418],EAX                ; 00581911 | DAT_02c83418
    TEST EAX,EAX                        ; 00581916
    JNZ 0x00581924                      ; 00581918
        ;   XREF to: 00581924 (CONDITIONAL_JUMP)  ; LAB_00581924
    MOV dword ptr [0x02c834c8],0x1      ; 0058191a | DAT_02c834c8
    PUSH 0x5f5f18                       ; 00581924 | = "APIDLLlockHoldBuffer"
        ;   Label: LAB_00581924
    MOV EDX,dword ptr [0x02c834b0]      ; 00581929 | DAT_02c834b0
    PUSH EDX                            ; 0058192f
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581930
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581935
    PUSH 0x5f5f2d                       ; 00581938 | = "APIDLLunlockHoldBuffer"
    MOV ECX,dword ptr [0x02c834b0]      ; 0058193d | DAT_02c834b0
    PUSH ECX                            ; 00581943
    MOV [0x02c8341c],EAX                ; 00581944 | DAT_02c8341c
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581949
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0058194e
    PUSH 0x5f5f44                       ; 00581951 | = "APIDLLlockTexture"
    MOV ESI,dword ptr [0x02c834b0]      ; 00581956 | DAT_02c834b0
    PUSH ESI                            ; 0058195c
    MOV [0x02c83420],EAX                ; 0058195d | DAT_02c83420
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581962
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581967
    PUSH 0x5f5f56                       ; 0058196a | = "APIDLLunlockTexture"
    MOV EDI,dword ptr [0x02c834b0]      ; 0058196f | DAT_02c834b0
    PUSH EDI                            ; 00581975
    MOV [0x02c83424],EAX                ; 00581976 | DAT_02c83424
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 0058197b
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581980
    PUSH 0x5f5f6a                       ; 00581983 | = "APIDLLgetTextureInfo"
    MOV EBP,dword ptr [0x02c834b0]      ; 00581988 | DAT_02c834b0
    PUSH EBP                            ; 0058198e
    MOV [0x02c83428],EAX                ; 0058198f | DAT_02c83428
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581994
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581999
    MOV [0x02c8342c],EAX                ; 0058199c | DAT_02c8342c
    TEST EAX,EAX                        ; 005819a1
    JNZ 0x005819af                      ; 005819a3
        ;   XREF to: 005819af (CONDITIONAL_JUMP)  ; LAB_005819af
    MOV dword ptr [0x02c834c8],0x1      ; 005819a5 | DAT_02c834c8
    PUSH 0x5f5f7f                       ; 005819af | = "APIDLLsetVideoModeX"
        ;   Label: LAB_005819af
    MOV EDX,dword ptr [0x02c834b0]      ; 005819b4 | DAT_02c834b0
    PUSH EDX                            ; 005819ba
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 005819bb
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005819c0
    PUSH 0x5f5f93                       ; 005819c3 | = "APIDLLrestoreVideoModeX"
    MOV ECX,dword ptr [0x02c834b0]      ; 005819c8 | DAT_02c834b0
    PUSH ECX                            ; 005819ce
    MOV [0x02c83430],EAX                ; 005819cf | DAT_02c83430
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 005819d4
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005819d9
    PUSH 0x5f5fab                       ; 005819dc | = "APIDLLlockFrameX"
    MOV ESI,dword ptr [0x02c834b0]      ; 005819e1 | DAT_02c834b0
    PUSH ESI                            ; 005819e7
    MOV [0x02c83434],EAX                ; 005819e8 | DAT_02c83434
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 005819ed
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005819f2
    PUSH 0x5f5fbc                       ; 005819f5 | = "APIDLLunlockFrameX"
    MOV EDI,dword ptr [0x02c834b0]      ; 005819fa | DAT_02c834b0
    PUSH EDI                            ; 00581a00
    MOV [0x02c83438],EAX                ; 00581a01 | DAT_02c83438
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581a06
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581a0b
    PUSH 0x5f5fcf                       ; 00581a0e | = "APIDLLtoggleX"
    MOV EBP,dword ptr [0x02c834b0]      ; 00581a13 | DAT_02c834b0
    PUSH EBP                            ; 00581a19
    MOV [0x02c8343c],EAX                ; 00581a1a | DAT_02c8343c
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581a1f
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581a24
    PUSH 0x5f5fdd                       ; 00581a27 | = "APIDLLsetViewport"
    MOV [0x02c83440],EAX                ; 00581a2c | DAT_02c83440
    MOV EAX,[0x02c834b0]                ; 00581a31 | DAT_02c834b0
    PUSH EAX                            ; 00581a36
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581a37
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581a3c
    PUSH 0x5f5fef                       ; 00581a3f | = "APIDLLsetLightConstants"
    MOV EDX,dword ptr [0x02c834b0]      ; 00581a44 | DAT_02c834b0
    PUSH EDX                            ; 00581a4a
    MOV [0x02c83444],EAX                ; 00581a4b | DAT_02c83444
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581a50
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581a55
    PUSH 0x5f6007                       ; 00581a58 | = "APIDLLsetLightVector"
    MOV ECX,dword ptr [0x02c834b0]      ; 00581a5d | DAT_02c834b0
    PUSH ECX                            ; 00581a63
    MOV [0x02c83448],EAX                ; 00581a64 | DAT_02c83448
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581a69
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581a6e
    PUSH 0x5f601c                       ; 00581a71 | = "APIDLLsetAmbientLight"
    MOV ESI,dword ptr [0x02c834b0]      ; 00581a76 | DAT_02c834b0
    PUSH ESI                            ; 00581a7c
    MOV [0x02c8344c],EAX                ; 00581a7d | DAT_02c8344c
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581a82
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581a87
    PUSH 0x5f6032                       ; 00581a8a | = "APIDLLsetTransform"
    MOV EDI,dword ptr [0x02c834b0]      ; 00581a8f | DAT_02c834b0
    PUSH EDI                            ; 00581a95
    MOV [0x02c83450],EAX                ; 00581a96 | DAT_02c83450
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581a9b
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581aa0
    PUSH 0x5f6045                       ; 00581aa3 | = "APIDLLpolyList"
    MOV EBP,dword ptr [0x02c834b0]      ; 00581aa8 | DAT_02c834b0
    PUSH EBP                            ; 00581aae
    MOV [0x02c83454],EAX                ; 00581aaf | DAT_02c83454
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581ab4
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581ab9
    PUSH 0x5f6054                       ; 00581abc | = "APIDLLpolyList2"
    MOV [0x02c83458],EAX                ; 00581ac1 | DAT_02c83458
    MOV EAX,[0x02c834b0]                ; 00581ac6 | DAT_02c834b0
    PUSH EAX                            ; 00581acb
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581acc
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581ad1
    PUSH 0x5f6064                       ; 00581ad4 | = "APIDLLpolyListL"
    MOV EDX,dword ptr [0x02c834b0]      ; 00581ad9 | DAT_02c834b0
    PUSH EDX                            ; 00581adf
    MOV [0x02c8345c],EAX                ; 00581ae0 | DAT_02c8345c
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581ae5
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581aea
    MOV [0x02c83460],EAX                ; 00581aed | DAT_02c83460
    PUSH 0x5f6074                       ; 00581af2 | = "APIDLLpolyListD3DL"
    MOV ECX,dword ptr [0x02c834b0]      ; 00581af7 | DAT_02c834b0
    PUSH ECX                            ; 00581afd
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581afe
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581b03
    PUSH 0x5f6087                       ; 00581b06 | = "APIDLLpolyListD3DL2"
    MOV ESI,dword ptr [0x02c834b0]      ; 00581b0b | DAT_02c834b0
    PUSH ESI                            ; 00581b11
    MOV [0x02c83464],EAX                ; 00581b12 | DAT_02c83464
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581b17
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581b1c
    PUSH 0x5f609b                       ; 00581b1f | = "APIDLLpolyListD3DTL"
    MOV EDI,dword ptr [0x02c834b0]      ; 00581b24 | DAT_02c834b0
    PUSH EDI                            ; 00581b2a
    MOV [0x02c83468],EAX                ; 00581b2b | DAT_02c83468
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581b30
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581b35
    PUSH 0x5f60af                       ; 00581b38 | = "APIDLLpolyListTL"
    MOV EBP,dword ptr [0x02c834b0]      ; 00581b3d | DAT_02c834b0
    PUSH EBP                            ; 00581b43
    MOV [0x02c8346c],EAX                ; 00581b44 | DAT_02c8346c
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581b49
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581b4e
    PUSH 0x5f60c0                       ; 00581b51 | = "APIDLLdotListD3DL"
    MOV [0x02c83470],EAX                ; 00581b56 | DAT_02c83470
    MOV EAX,[0x02c834b0]                ; 00581b5b | DAT_02c834b0
    PUSH EAX                            ; 00581b60
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581b61
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581b66
    PUSH 0x5f60d2                       ; 00581b69 | = "APIDLLdotListD3DTL"
    MOV EDX,dword ptr [0x02c834b0]      ; 00581b6e | DAT_02c834b0
    PUSH EDX                            ; 00581b74
    MOV [0x02c83474],EAX                ; 00581b75 | DAT_02c83474
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581b7a
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581b7f
    PUSH 0x5f60e5                       ; 00581b82 | = "APIDLLlineListD3DL"
    MOV ECX,dword ptr [0x02c834b0]      ; 00581b87 | DAT_02c834b0
    PUSH ECX                            ; 00581b8d
    MOV [0x02c83478],EAX                ; 00581b8e | DAT_02c83478
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581b93
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581b98
    PUSH 0x5f60f8                       ; 00581b9b | = "APIDLLlineListD3DTL"
    MOV ESI,dword ptr [0x02c834b0]      ; 00581ba0 | DAT_02c834b0
    PUSH ESI                            ; 00581ba6
    MOV [0x02c8347c],EAX                ; 00581ba7 | DAT_02c8347c
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581bac
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581bb1
    PUSH 0x5f610c                       ; 00581bb4 | = "APIDLLgetTextureHandle"
    MOV EDI,dword ptr [0x02c834b0]      ; 00581bb9 | DAT_02c834b0
    PUSH EDI                            ; 00581bbf
    MOV [0x02c83480],EAX                ; 00581bc0 | DAT_02c83480
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581bc5
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581bca
    PUSH 0x5f6123                       ; 00581bcd | = "APIDLLselectTextureByHandle"
    MOV EBP,dword ptr [0x02c834b0]      ; 00581bd2 | DAT_02c834b0
    PUSH EBP                            ; 00581bd8
    MOV [0x02c83484],EAX                ; 00581bd9 | DAT_02c83484
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581bde
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581be3
    PUSH 0x5f613f                       ; 00581be6 | = "APIDLLresetTextureCache"
    MOV [0x02c83488],EAX                ; 00581beb | DAT_02c83488
    MOV EAX,[0x02c834b0]                ; 00581bf0 | DAT_02c834b0
    PUSH EAX                            ; 00581bf5
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581bf6
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581bfb
    PUSH 0x5f6157                       ; 00581bfe | = "APIDLLenableCulling"
    MOV EDX,dword ptr [0x02c834b0]      ; 00581c03 | DAT_02c834b0
    PUSH EDX                            ; 00581c09
    MOV [0x02c8348c],EAX                ; 00581c0a | DAT_02c8348c
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581c0f
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581c14
    PUSH 0x5f616b                       ; 00581c17 | = "APIDLLenableClipping"
    MOV ECX,dword ptr [0x02c834b0]      ; 00581c1c | DAT_02c834b0
    PUSH ECX                            ; 00581c22
    MOV [0x02c83490],EAX                ; 00581c23 | DAT_02c83490
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581c28
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581c2d
    PUSH 0x5f6180                       ; 00581c30 | = "APIDLLsetTextureClamp"
    MOV ESI,dword ptr [0x02c834b0]      ; 00581c35 | DAT_02c834b0
    PUSH ESI                            ; 00581c3b
    MOV [0x02c83494],EAX                ; 00581c3c | DAT_02c83494
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581c41
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581c46
    PUSH 0x5f6196                       ; 00581c49 | = "APIDLLsetFog"
    MOV EDI,dword ptr [0x02c834b0]      ; 00581c4e | DAT_02c834b0
    PUSH EDI                            ; 00581c54
    MOV [0x02c83498],EAX                ; 00581c55 | DAT_02c83498
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581c5a
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581c5f
    PUSH 0x5f61a3                       ; 00581c62 | = "APIDLLresetDynamicLight"
    MOV EBP,dword ptr [0x02c834b0]      ; 00581c67 | DAT_02c834b0
    PUSH EBP                            ; 00581c6d
    MOV [0x02c8349c],EAX                ; 00581c6e | DAT_02c8349c
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581c73
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581c78
    PUSH 0x5f61bb                       ; 00581c7b | = "APIDLLaddDynamicLight"
    MOV [0x02c834a0],EAX                ; 00581c80 | DAT_02c834a0
    MOV EAX,[0x02c834b0]                ; 00581c85 | DAT_02c834b0
    PUSH EAX                            ; 00581c8a
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581c8b
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00581c90
    PUSH 0x5f61d1                       ; 00581c93 | = "APIDLLdynamicLightHint"
    MOV EDX,dword ptr [0x02c834b0]      ; 00581c98 | DAT_02c834b0
    PUSH EDX                            ; 00581c9e
    MOV [0x02c834a4],EAX                ; 00581c9f | DAT_02c834a4
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ad470 ; 00581ca4
        ;   XREF to: 005ad470 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ad470(HMODULE hModule, LPCSTR lpProcName)
    MOV ECX,dword ptr [0x02c834c8]      ; 00581ca9 | DAT_02c834c8
    ADD ESP,0x8                         ; 00581caf
    MOV [0x02c834a8],EAX                ; 00581cb2 | DAT_02c834a8
    TEST ECX,ECX                        ; 00581cb7
    JZ 0x00581d09                       ; 00581cb9
        ;   XREF to: 00581d09 (CONDITIONAL_JUMP)  ; LAB_00581d09
    XOR EDI,EDI                         ; 00581cbb
    CALL engine_special.cpp_FUN_00580740 ; 00581cbd
        ;   XREF to: 00580740 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580740()
    MOV dword ptr [0x02c83370],EDI      ; 00581cc2 | DAT_02c83370
    XOR EAX,EAX                         ; 00581cc8
    ADD ESP,0x3c20                      ; 00581cca
    POP EBP                             ; 00581cd0
    POP EDI                             ; 00581cd1
    POP ESI                             ; 00581cd2
    POP EBX                             ; 00581cd3
    RET                                 ; 00581cd4
    XOR EBP,EBP                         ; 00581cd5
        ;   Label: LAB_00581cd5
    CALL engine_special.cpp_FUN_00580740 ; 00581cd7
        ;   XREF to: 00580740 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580740()
    MOV dword ptr [0x02c83370],EBP      ; 00581cdc | DAT_02c83370
    XOR EAX,EAX                         ; 00581ce2
    ADD ESP,0x3c20                      ; 00581ce4
    POP EBP                             ; 00581cea
    POP EDI                             ; 00581ceb
    POP ESI                             ; 00581cec
    POP EBX                             ; 00581ced
    RET                                 ; 00581cee
    XOR EBX,EBX                         ; 00581cef
        ;   Label: LAB_00581cef
    CALL engine_special.cpp_FUN_00580740 ; 00581cf1
        ;   XREF to: 00580740 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580740()
    MOV dword ptr [0x02c83370],EBX      ; 00581cf6 | DAT_02c83370
    XOR EAX,EAX                         ; 00581cfc
    ADD ESP,0x3c20                      ; 00581cfe
    POP EBP                             ; 00581d04
    POP EDI                             ; 00581d05
    POP ESI                             ; 00581d06
    POP EBX                             ; 00581d07
    RET                                 ; 00581d08
    PUSH 0x90                           ; 00581d09
        ;   Label: LAB_00581d09
    MOV ESI,0x1                         ; 00581d0e
    LEA EAX,[ESP + 0x3b94]              ; 00581d13
    PUSH ECX                            ; 00581d1a
    MOV EDI,0x1c4e9d4                   ; 00581d1b
    MOV EBP,0x1c4e9d8                   ; 00581d20
    PUSH EAX                            ; 00581d25
    MOV dword ptr [0x02c834ac],ESI      ; 00581d26 | DAT_02c834ac
    MOV ESI,0x1c4e9e8                   ; 00581d2c
    CALL crt_memory.c_memset_FUN_005bfb70 ; 00581d31
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    MOV EAX,0x1c4e9dc                   ; 00581d36
    MOV EDX,0x1c4e9e0                   ; 00581d3b
    ADD ESP,0xc                         ; 00581d40
    MOV ECX,0x1c4e9e4                   ; 00581d43
    MOV dword ptr [ESP + 0x3b90],EDI    ; 00581d48 | DAT_01c4e9d4
    MOV dword ptr [ESP + 0x3b94],EBP    ; 00581d4f | DAT_01c4e9d8
    MOV dword ptr [ESP + 0x3b98],EAX    ; 00581d56 | DAT_01c4e9dc
    MOV dword ptr [ESP + 0x3b9c],EDX    ; 00581d5d | DAT_01c4e9e0
    MOV dword ptr [ESP + 0x3ba0],ECX    ; 00581d64 | DAT_01c4e9e4
    MOV dword ptr [ESP + 0x3ba4],ESI    ; 00581d6b | DAT_01c4e9e8
    MOV EDI,0x1c4e9ec                   ; 00581d72
    MOV EBP,0x1c4e9f0                   ; 00581d77
    MOV EAX,0x1c4e9f4                   ; 00581d7c
    MOV EDX,0x1c51d0c                   ; 00581d81
    MOV ECX,0x1c4f024                   ; 00581d86
    MOV ESI,0x61b4b8                    ; 00581d8b | DAT_0061b4b8
    MOV dword ptr [ESP + 0x3ba8],EDI    ; 00581d90 | DAT_01c4e9ec
    MOV dword ptr [ESP + 0x3bac],EBP    ; 00581d97 | DAT_01c4e9f0
    MOV dword ptr [ESP + 0x3bb0],EAX    ; 00581d9e | DAT_01c4e9f4
    MOV dword ptr [ESP + 0x3bb4],EDX    ; 00581da5 | DAT_01c51d0c
    MOV dword ptr [ESP + 0x3bb8],ECX    ; 00581dac
    MOV dword ptr [ESP + 0x3bbc],ESI    ; 00581db3 | DAT_0061b4b8
    MOV EDI,0x1c4f020                   ; 00581dba
    MOV EBP,0x1c4f008                   ; 00581dbf
    MOV EAX,0x1c4f00c                   ; 00581dc4
    MOV EDX,0x1c4f010                   ; 00581dc9
    MOV ECX,0x1c4f014                   ; 00581dce
    MOV ESI,0x61b4a4                    ; 00581dd3 | DAT_0061b4a4
    MOV dword ptr [ESP + 0x3bc0],EDI    ; 00581dd8 | DAT_01c4f020
    MOV dword ptr [ESP + 0x3bc4],EBP    ; 00581ddf | DAT_01c4f008
    MOV dword ptr [ESP + 0x3bc8],EAX    ; 00581de6 | DAT_01c4f00c
    MOV dword ptr [ESP + 0x3bcc],EDX    ; 00581ded | DAT_01c4f010
    MOV dword ptr [ESP + 0x3bd0],ECX    ; 00581df4 | DAT_01c4f014
    MOV dword ptr [ESP + 0x3bd4],ESI    ; 00581dfb | DAT_0061b4a4
    MOV EDI,0x61b4a8                    ; 00581e02 | DAT_0061b4a8
    MOV EBP,0x1c50940                   ; 00581e07
    MOV EAX,0x6258dc                    ; 00581e0c | DAT_006258dc
    MOV EDX,0x6258d4                    ; 00581e11 | DAT_006258d4
    MOV ECX,0x6258d8                    ; 00581e16 | DAT_006258d8
    MOV ESI,0x2c83378                   ; 00581e1b
    MOV dword ptr [ESP + 0x3bd8],EDI    ; 00581e20 | DAT_0061b4a8
    MOV dword ptr [ESP + 0x3bdc],EBP    ; 00581e27 | DAT_01c50940
    MOV dword ptr [ESP + 0x3be0],EAX    ; 00581e2e | DAT_006258dc
    MOV dword ptr [ESP + 0x3be4],EDX    ; 00581e35 | DAT_006258d4
    MOV dword ptr [ESP + 0x3be8],ECX    ; 00581e3c | DAT_006258d8
    MOV dword ptr [ESP + 0x3bec],ESI    ; 00581e43
    MOV EDI,0x6258d0                    ; 00581e4a | DAT_006258d0
    MOV EBP,0x2c8337c                   ; 00581e4f
    MOV EAX,0x1c51d10                   ; 00581e54
    MOV EDX,0x61b4bc                    ; 00581e59 | DAT_0061b4bc
    MOV ECX,0x30                        ; 00581e5e
    MOV ESI,0x2c                        ; 00581e63
    MOV dword ptr [ESP + 0x3bf0],EDI    ; 00581e68 | DAT_006258d0
    MOV dword ptr [ESP + 0x3bf4],EBP    ; 00581e6f | DAT_02c8337c
    MOV dword ptr [ESP + 0x3bf8],EAX    ; 00581e76 | DAT_01c51d10
    MOV dword ptr [ESP + 0x3bfc],EDX    ; 00581e7d | DAT_0061b4bc
    MOV dword ptr [ESP + 0x3c00],ECX    ; 00581e84
    MOV dword ptr [ESP + 0x3c04],ESI    ; 00581e8b
    MOV EAX,0x24                        ; 00581e92
    MOV dword ptr [ESP + 0x3c18],ESI    ; 00581e97
    MOV dword ptr [ESP + 0x3c14],EAX    ; 00581e9e
    MOV EAX,[0x006258e0]                ; 00581ea5 | DAT_006258e0
    MOV EDI,0xc                         ; 00581eaa
    MOV dword ptr [ESP + 0x3c1c],EAX    ; 00581eaf
    LEA EAX,[ESP + 0x3b90]              ; 00581eb6
    MOV EBP,0x20                        ; 00581ebd
    PUSH EAX                            ; 00581ec2
    MOV EDX,0x28                        ; 00581ec3
    MOV dword ptr [ESP + 0x3c0c],EDI    ; 00581ec8
    PUSH EBX                            ; 00581ecf
    MOV dword ptr [ESP + 0x3c14],EBP    ; 00581ed0
    MOV dword ptr [ESP + 0x3c18],EDX    ; 00581ed7
    CALL dword ptr [0x02c83388]         ; 00581ede | DAT_02c83388
    ADD ESP,0x8                         ; 00581ee4
    TEST EAX,EAX                        ; 00581ee7
    JNZ 0x00581efb                      ; 00581ee9
        ;   XREF to: 00581efb (CONDITIONAL_JUMP)  ; LAB_00581efb
    MOV [0x02c83370],EAX                ; 00581eeb | DAT_02c83370
    ADD ESP,0x3c20                      ; 00581ef0
    POP EBP                             ; 00581ef6
    POP EDI                             ; 00581ef7
    POP ESI                             ; 00581ef8
    POP EBX                             ; 00581ef9
    RET                                 ; 00581efa
    MOV EBX,dword ptr [0x02c83374]      ; 00581efb | DAT_02c83374
        ;   Label: LAB_00581efb
    PUSH EBX                            ; 00581f01
    CALL engine_special.cpp_FUN_00582b10 ; 00581f02
        ;   XREF to: 00582b10 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_FUN_00582b10(int card_index)
    MOV EAX,0x1                         ; 00581f07
    ADD ESP,0x4                         ; 00581f0c
    ADD ESP,0x3c20                      ; 00581f0f
    POP EBP                             ; 00581f15
    POP EDI                             ; 00581f16
    POP ESI                             ; 00581f17
    POP EBX                             ; 00581f18
    RET                                 ; 00581f19

