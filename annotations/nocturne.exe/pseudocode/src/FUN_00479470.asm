; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00479470(undefined4 *param_1,undefined4 *param_2)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479470
        ;   Label: FUN_00479470
    MOV EAX,dword ptr [ESP + 0x8]       ; 00479471
    MOV EDX,dword ptr [ESP + 0xc]       ; 00479475
    MOV ECX,dword ptr [EDX]             ; 00479479
    MOV dword ptr [EAX],ECX             ; 0047947b
    MOV ECX,dword ptr [EDX + 0x4]       ; 0047947d
    MOV dword ptr [EAX + 0x4],ECX       ; 00479480
    MOV ECX,dword ptr [EDX + 0x8]       ; 00479483
    MOV dword ptr [EAX + 0x8],ECX       ; 00479486
    MOV ECX,dword ptr [EDX + 0xc]       ; 00479489
    MOV dword ptr [EAX + 0xc],ECX       ; 0047948c
    MOV ECX,dword ptr [EDX + 0x10]      ; 0047948f
    MOV dword ptr [EAX + 0x10],ECX      ; 00479492
    MOV ECX,dword ptr [EDX + 0x14]      ; 00479495
    MOV dword ptr [EAX + 0x14],ECX      ; 00479498
    MOV ECX,dword ptr [EDX + 0x18]      ; 0047949b
    MOV dword ptr [EAX + 0x18],ECX      ; 0047949e
    MOV ECX,dword ptr [EDX + 0x1c]      ; 004794a1
    MOV dword ptr [EAX + 0x1c],ECX      ; 004794a4
    LEA ECX,[EAX + 0x20]                ; 004794a7
    LEA EAX,[EDX + 0x20]                ; 004794aa
    MOV EBX,dword ptr [EAX]             ; 004794ad
    MOV dword ptr [ECX],EBX             ; 004794af
    LEA EBX,[EAX + 0x4]                 ; 004794b1
    ADD ECX,0x4                         ; 004794b4
    MOV EBX,dword ptr [EBX]             ; 004794b7
    MOV dword ptr [ECX],EBX             ; 004794b9
    ADD ECX,0x4                         ; 004794bb
    MOV EAX,dword ptr [EAX + 0x8]       ; 004794be
    MOV dword ptr [ECX],EAX             ; 004794c1
    LEA EAX,[EDX + 0x2c]                ; 004794c3
    ADD ECX,0x4                         ; 004794c6
    MOV EBX,dword ptr [EAX]             ; 004794c9
    MOV dword ptr [ECX],EBX             ; 004794cb
    LEA EBX,[EAX + 0x4]                 ; 004794cd
    ADD ECX,0x4                         ; 004794d0
    MOV EBX,dword ptr [EBX]             ; 004794d3
    MOV dword ptr [ECX],EBX             ; 004794d5
    ADD ECX,0x4                         ; 004794d7
    MOV EAX,dword ptr [EAX + 0x8]       ; 004794da
    MOV dword ptr [ECX],EAX             ; 004794dd
    LEA EAX,[EDX + 0x38]                ; 004794df
    ADD ECX,0x4                         ; 004794e2
    MOV EBX,dword ptr [EAX]             ; 004794e5
    MOV dword ptr [ECX],EBX             ; 004794e7
    LEA EBX,[EAX + 0x4]                 ; 004794e9
    ADD ECX,0x4                         ; 004794ec
    MOV EBX,dword ptr [EBX]             ; 004794ef
    MOV dword ptr [ECX],EBX             ; 004794f1
    ADD ECX,0x4                         ; 004794f3
    MOV EAX,dword ptr [EAX + 0x8]       ; 004794f6
    MOV dword ptr [ECX],EAX             ; 004794f9
    LEA EAX,[ECX + -0x40]               ; 004794fb
    MOV ECX,dword ptr [EDX + 0x44]      ; 004794fe
    MOV dword ptr [EAX + 0x44],ECX      ; 00479501
    MOV ECX,dword ptr [EDX + 0x48]      ; 00479504
    MOV dword ptr [EAX + 0x48],ECX      ; 00479507
    MOV ECX,dword ptr [EDX + 0x4c]      ; 0047950a
    MOV dword ptr [EAX + 0x4c],ECX      ; 0047950d
    MOV ECX,dword ptr [EDX + 0x50]      ; 00479510
    MOV dword ptr [EAX + 0x50],ECX      ; 00479513
    POP EBX                             ; 00479516
    RET                                 ; 00479517

