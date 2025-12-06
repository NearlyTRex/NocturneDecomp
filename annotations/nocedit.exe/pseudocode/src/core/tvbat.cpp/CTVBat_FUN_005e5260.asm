; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_tvbat.cpp_CTVBat_FUN_005e5260(CTVBat * this_ptr)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   double DOUBLE_00656a6a = 4
;   CGame* g_CGamePtr = 02d81a9c
;   CKeys* g_CKeysPtr = 02dcd7d4
;   undefined4 g_CGameInstance.delta_time_float
;   void* g_CKeysPtr
;
; Called Functions:
;   core_charactr.cpp_CCharacter_computePickupInLoop_FUN_0042f800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e5260
        ;   Label: core_tvbat.cpp_CTVBat_FUN_005e5260
    PUSH ESI                            ; 005e5261
    SUB ESP,0x8                         ; 005e5262
    MOV EBX,dword ptr [ESP + 0x14]      ; 005e5265
    CMP dword ptr [EBX + 0xc064],0x0    ; 005e5269
    JNZ 0x005e528f                      ; 005e5270 | LAB_005e528f
        ;   XREF to: 005e528f (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0xc044]              ; 005e5272
    LEA EDX,[EBX + 0x20]                ; 005e5278
    CMP EAX,EDX                         ; 005e527b
    JZ 0x005e528f                       ; 005e527d | LAB_005e528f
        ;   XREF to: 005e528f (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EDX]             ; 005e527f
    MOV dword ptr [EAX],ECX             ; 005e5281
    MOV ECX,dword ptr [EDX + 0x4]       ; 005e5283
    MOV dword ptr [EAX + 0x4],ECX       ; 005e5286
    MOV ECX,dword ptr [EDX + 0x8]       ; 005e5289
    MOV dword ptr [EAX + 0x8],ECX       ; 005e528c
    PUSH 0x1d                           ; 005e528f
        ;   Label: LAB_005e528f
    MOV EAX,[0x0067cf44]                ; 005e5291 | CKeys * g_CKeysPtr
    MOV dword ptr [EBX + 0x243c],0x41200000 ; 005e5296
    PUSH EAX                            ; 005e52a0 | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 005e52a1 | void * g_CKeysPtr
    CALL dword ptr [EDX]                ; 005e52a3
    ADD ESP,0x8                         ; 005e52a5
    TEST EAX,EAX                        ; 005e52a8
    JZ 0x005e53e9                       ; 005e52aa | LAB_005e53e9
        ;   XREF to: 005e53e9 (CONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 005e52b0 | CGame * g_CGamePtr
    PUSH 0x4b                           ; 005e52b5
    FLD float ptr [EAX + 0x264]         ; 005e52b7 | g_CGameInstance.delta_time_float
    MOV EAX,[0x0067cf44]                ; 005e52bd | CKeys * g_CKeysPtr
    FMUL double ptr [0x00656a6a]        ; 005e52c2 | double DOUBLE_00656a6a
    PUSH EAX                            ; 005e52c8 | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 005e52c9 | void * g_CKeysPtr
    FSTP float ptr [ESP + 0xc]          ; 005e52cb
    CALL dword ptr [EDX]                ; 005e52cf
    ADD ESP,0x8                         ; 005e52d1
    TEST EAX,EAX                        ; 005e52d4
    JZ 0x005e52e8                       ; 005e52d6 | LAB_005e52e8
        ;   XREF to: 005e52e8 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0xc050]        ; 005e52d8
    FSUB float ptr [ESP + 0x4]          ; 005e52de
    FSTP float ptr [EBX + 0xc050]       ; 005e52e2
    PUSH 0x4d                           ; 005e52e8
        ;   Label: LAB_005e52e8
    MOV EAX,[0x0067cf44]                ; 005e52ea | CKeys * g_CKeysPtr
    PUSH EAX                            ; 005e52ef | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 005e52f0 | void * g_CKeysPtr
    CALL dword ptr [EDX]                ; 005e52f2
    ADD ESP,0x8                         ; 005e52f4
    TEST EAX,EAX                        ; 005e52f7
    JZ 0x005e530b                       ; 005e52f9 | LAB_005e530b
        ;   XREF to: 005e530b (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0xc050]        ; 005e52fb
    FADD float ptr [ESP + 0x4]          ; 005e5301
    FSTP float ptr [EBX + 0xc050]       ; 005e5305
    PUSH 0x1e                           ; 005e530b
        ;   Label: LAB_005e530b
    MOV EAX,[0x0067cf44]                ; 005e530d | CKeys * g_CKeysPtr
    PUSH EAX                            ; 005e5312 | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 005e5313 | void * g_CKeysPtr
    CALL dword ptr [EDX]                ; 005e5315
    ADD ESP,0x8                         ; 005e5317
    TEST EAX,EAX                        ; 005e531a
    JZ 0x005e532e                       ; 005e531c | LAB_005e532e
        ;   XREF to: 005e532e (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0xc054]        ; 005e531e
    FSUB float ptr [ESP + 0x4]          ; 005e5324
    FSTP float ptr [EBX + 0xc054]       ; 005e5328
    PUSH 0x10                           ; 005e532e
        ;   Label: LAB_005e532e
    MOV EAX,[0x0067cf44]                ; 005e5330 | CKeys * g_CKeysPtr
    PUSH EAX                            ; 005e5335 | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 005e5336 | void * g_CKeysPtr
    CALL dword ptr [EDX]                ; 005e5338
    ADD ESP,0x8                         ; 005e533a
    TEST EAX,EAX                        ; 005e533d
    JZ 0x005e5351                       ; 005e533f | LAB_005e5351
        ;   XREF to: 005e5351 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0xc054]        ; 005e5341
    FADD float ptr [ESP + 0x4]          ; 005e5347
    FSTP float ptr [EBX + 0xc054]       ; 005e534b
    PUSH 0x50                           ; 005e5351
        ;   Label: LAB_005e5351
    MOV EAX,[0x0067cf44]                ; 005e5353 | CKeys * g_CKeysPtr
    PUSH EAX                            ; 005e5358 | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 005e5359 | void * g_CKeysPtr
    CALL dword ptr [EDX]                ; 005e535b
    ADD ESP,0x8                         ; 005e535d
    TEST EAX,EAX                        ; 005e5360
    JZ 0x005e5374                       ; 005e5362 | LAB_005e5374
        ;   XREF to: 005e5374 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0xc050]        ; 005e5364
    FSUB float ptr [ESP + 0x4]          ; 005e536a
    FSTP float ptr [EBX + 0xc050]       ; 005e536e
    PUSH 0x48                           ; 005e5374
        ;   Label: LAB_005e5374
    MOV EAX,[0x0067cf44]                ; 005e5376 | CKeys * g_CKeysPtr
    PUSH EAX                            ; 005e537b | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 005e537c | void * g_CKeysPtr
    CALL dword ptr [EDX]                ; 005e537e
    ADD ESP,0x8                         ; 005e5380
    TEST EAX,EAX                        ; 005e5383
    JZ 0x005e5397                       ; 005e5385 | LAB_005e5397
        ;   XREF to: 005e5397 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0xc050]        ; 005e5387
    FADD float ptr [ESP + 0x4]          ; 005e538d
    FSTP float ptr [EBX + 0xc050]       ; 005e5391
    MOV ECX,0x3f000000                  ; 005e5397
        ;   Label: LAB_005e5397
    MOV ESI,dword ptr [EBX + 0xc050]    ; 005e539c
    MOV dword ptr [ESP],ECX             ; 005e53a2
    CMP ESI,ECX                         ; 005e53a5
    JGE 0x005e53af                      ; 005e53a7 | LAB_005e53af
        ;   XREF to: 005e53af (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0xc050],ECX    ; 005e53a9
    FLD float ptr [EBX + 0xc054]        ; 005e53af
        ;   Label: LAB_005e53af
    FCOMP float ptr [ESP]               ; 005e53b5
    FNSTSW AX                           ; 005e53b8
    SAHF                                ; 005e53ba
    JNC 0x005e53c6                      ; 005e53bb | LAB_005e53c6
        ;   XREF to: 005e53c6 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP]             ; 005e53bd
    MOV dword ptr [EBX + 0xc054],EAX    ; 005e53c0
    FLD float ptr [EBX + 0xc050]        ; 005e53c6
        ;   Label: LAB_005e53c6
    FCOMP float ptr [ESP]               ; 005e53cc
    FNSTSW AX                           ; 005e53cf
    SAHF                                ; 005e53d1
    JC 0x005e53da                       ; 005e53d2 | LAB_005e53da
        ;   XREF to: 005e53da (CONDITIONAL_JUMP)
    ADD ESP,0x8                         ; 005e53d4
    POP ESI                             ; 005e53d7
    POP EBX                             ; 005e53d8
    RET                                 ; 005e53d9
    MOV EAX,dword ptr [ESP]             ; 005e53da
        ;   Label: LAB_005e53da
    MOV dword ptr [EBX + 0xc050],EAX    ; 005e53dd
    ADD ESP,0x8                         ; 005e53e3
    POP ESI                             ; 005e53e6
    POP EBX                             ; 005e53e7
    RET                                 ; 005e53e8
    PUSH EBX                            ; 005e53e9
        ;   Label: LAB_005e53e9
    CALL core_charactr.cpp_CCharacter_computePickupInLoop_FUN_0042f800 ; 005e53ea | void core_charactr.cpp_CCharacter_computePickupInLoop_FUN_0042f800(CCharacter * this_ptr)
        ;   XREF to: 0042f800 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005e53ef
    ADD ESP,0x8                         ; 005e53f2
    POP ESI                             ; 005e53f5
    POP EBX                             ; 005e53f6
    RET                                 ; 005e53f7

