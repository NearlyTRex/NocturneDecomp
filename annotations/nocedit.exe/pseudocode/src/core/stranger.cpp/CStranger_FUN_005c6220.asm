; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_stranger_cpp_CStranger_FUN_005c6220(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_stranger.cpp_CStranger_FUN_005bb960 at 005bc3af
;
; Referenced Globals:
;   TerminatedCString s_Bip01_L_Forearm_00653e84
;   TerminatedCString s_Bip01_L_Forearm_00653e94
;   TerminatedCString s_Bip01_L_Forearm_00653ea4
;   TerminatedCString s_Bip01_L_Forearm_00653eb4
;   TerminatedCString s_Bip01_L_Forearm_00653ec4
;   TerminatedCString s_Bip01_L_Forearm_00653ed4
;   TerminatedCString s_Bip01_R_Forearm_00653ee4
;   TerminatedCString s_Bip01_R_Forearm_00653ef4
;   TerminatedCString s_Bip01_R_Forearm_00653f04
;   TerminatedCString s_Bip01_R_Forearm_00653f14
;   TerminatedCString s_Bip01_R_Forearm_00653f24
;   TerminatedCString s_Bip01_R_Forearm_00653f34
;   TerminatedCString s_Bip01_L_Forearm_00653f44
;   TerminatedCString s_Bip01_L_Forearm_00653f54
;   double DOUBLE_00653f64 = 0.700000000000000
;   ... and 5 more
;
; Called Functions:
;   core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0
;   core_cloth.cpp_FUN_0043e170
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c6220
        ;   Label: core_stranger.cpp_CStranger_FUN_005c6220
    PUSH ESI                            ; 005c6221
    PUSH EDI                            ; 005c6222
    PUSH EBP                            ; 005c6223
    MOV EBP,ESP                         ; 005c6224
    SUB ESP,0x20                        ; 005c6226
    AND ESP,0xfffffff8                  ; 005c6229
    MOV ESI,dword ptr [EBP + 0x14]      ; 005c622c
    CMP dword ptr [ESI + 0x2a94],0x1    ; 005c622f
    JGE 0x005c623f                      ; 005c6236
        ;   XREF to: 005c623f (CONDITIONAL_JUMP)  ; LAB_005c623f
    MOV ESP,EBP                         ; 005c6238
        ;   Label: LAB_005c6238
    POP EBP                             ; 005c623a
    POP EDI                             ; 005c623b
    POP ESI                             ; 005c623c
    POP EBX                             ; 005c623d
    RET                                 ; 005c623e
    PUSH ESI                            ; 005c623f
        ;   Label: LAB_005c623f
    MOV EAX,dword ptr [ESI + 0x154]     ; 005c6240
    XOR EDI,EDI                         ; 005c6246
    CALL dword ptr [EAX + 0x120]        ; 005c6248
    ADD ESP,0x4                         ; 005c624e
    XOR EDX,EDX                         ; 005c6251
    CMP EAX,0x2                         ; 005c6253
    JGE 0x005c6364                      ; 005c6256
        ;   XREF to: 005c6364 (CONDITIONAL_JUMP)  ; LAB_005c6364
    CMP dword ptr [ESI + 0x2a8c],0x0    ; 005c625c
    JNZ 0x005c627b                      ; 005c6263
        ;   XREF to: 005c627b (CONDITIONAL_JUMP)  ; LAB_005c627b
    FLD float ptr [ESI + 0x2a90]        ; 005c6265
    FCOMP double ptr [0x00653f64]       ; 005c626b | DOUBLE_00653f64
    FNSTSW AX                           ; 005c6271
    SAHF                                ; 005c6273
    JBE 0x005c627b                      ; 005c6274
        ;   XREF to: 005c627b (CONDITIONAL_JUMP)  ; LAB_005c627b
    MOV EDX,0x1                         ; 005c6276
    MOV EBX,dword ptr [ESI + 0x2a8c]    ; 005c627b
        ;   Label: LAB_005c627b
    CMP EBX,0x1                         ; 005c6281
    JNZ 0x005c6299                      ; 005c6284
        ;   XREF to: 005c6299 (CONDITIONAL_JUMP)  ; LAB_005c6299
    FLD float ptr [ESI + 0x2a90]        ; 005c6286
    FCOMP double ptr [0x00653f6c]       ; 005c628c | DOUBLE_00653f6c
    FNSTSW AX                           ; 005c6292
    SAHF                                ; 005c6294
    JNC 0x005c6299                      ; 005c6295
        ;   XREF to: 005c6299 (CONDITIONAL_JUMP)  ; LAB_005c6299
    MOV EDX,EBX                         ; 005c6297
    CMP dword ptr [ESI + 0x2a8c],0x2    ; 005c6299
        ;   Label: LAB_005c6299
    JNZ 0x005c62b8                      ; 005c62a0
        ;   XREF to: 005c62b8 (CONDITIONAL_JUMP)  ; LAB_005c62b8
    FLD float ptr [ESI + 0x2a90]        ; 005c62a2
    FCOMP double ptr [0x00653f74]       ; 005c62a8 | DOUBLE_00653f74
    FNSTSW AX                           ; 005c62ae
    SAHF                                ; 005c62b0
    JBE 0x005c62b8                      ; 005c62b1
        ;   XREF to: 005c62b8 (CONDITIONAL_JUMP)  ; LAB_005c62b8
    MOV EDI,0x1                         ; 005c62b3
    CMP dword ptr [ESI + 0x2a8c],0x3    ; 005c62b8
        ;   Label: LAB_005c62b8
    JNZ 0x005c62d7                      ; 005c62bf
        ;   XREF to: 005c62d7 (CONDITIONAL_JUMP)  ; LAB_005c62d7
    FLD float ptr [ESI + 0x2a90]        ; 005c62c1
    FCOMP double ptr [0x00653f74]       ; 005c62c7 | DOUBLE_00653f74
    FNSTSW AX                           ; 005c62cd
    SAHF                                ; 005c62cf
    JNC 0x005c62d7                      ; 005c62d0
        ;   XREF to: 005c62d7 (CONDITIONAL_JUMP)  ; LAB_005c62d7
    MOV EDI,0x1                         ; 005c62d2
    CMP dword ptr [ESI + 0x2a8c],0x4    ; 005c62d7
        ;   Label: LAB_005c62d7
    JNZ 0x005c62f6                      ; 005c62de
        ;   XREF to: 005c62f6 (CONDITIONAL_JUMP)  ; LAB_005c62f6
    FLD float ptr [ESI + 0x2a90]        ; 005c62e0
    FCOMP double ptr [0x00653f7c]       ; 005c62e6 | DOUBLE_00653f7c
    FNSTSW AX                           ; 005c62ec
    SAHF                                ; 005c62ee
    JNC 0x005c62f6                      ; 005c62ef
        ;   XREF to: 005c62f6 (CONDITIONAL_JUMP)  ; LAB_005c62f6
    MOV EDI,0x1                         ; 005c62f1
    CMP dword ptr [ESI + 0x2a8c],0x5    ; 005c62f6
        ;   Label: LAB_005c62f6
    JNZ 0x005c6315                      ; 005c62fd
        ;   XREF to: 005c6315 (CONDITIONAL_JUMP)  ; LAB_005c6315
    FLD float ptr [ESI + 0x2a90]        ; 005c62ff
    FCOMP double ptr [0x00653f84]       ; 005c6305 | DOUBLE_00653f84
    FNSTSW AX                           ; 005c630b
    SAHF                                ; 005c630d
    JBE 0x005c6315                      ; 005c630e
        ;   XREF to: 005c6315 (CONDITIONAL_JUMP)  ; LAB_005c6315
    MOV EDI,0x1                         ; 005c6310
    CMP dword ptr [ESI + 0x2a8c],0x9    ; 005c6315
        ;   Label: LAB_005c6315
    JNZ 0x005c6334                      ; 005c631c
        ;   XREF to: 005c6334 (CONDITIONAL_JUMP)  ; LAB_005c6334
    FLD float ptr [ESI + 0x2a90]        ; 005c631e
    FCOMP double ptr [0x00653f7c]       ; 005c6324 | DOUBLE_00653f7c
    FNSTSW AX                           ; 005c632a
    SAHF                                ; 005c632c
    JNC 0x005c6334                      ; 005c632d
        ;   XREF to: 005c6334 (CONDITIONAL_JUMP)  ; LAB_005c6334
    MOV EDI,0x1                         ; 005c632f
    CMP dword ptr [ESI + 0x2a8c],0xf    ; 005c6334
        ;   Label: LAB_005c6334
    JNZ 0x005c6364                      ; 005c633b
        ;   XREF to: 005c6364 (CONDITIONAL_JUMP)  ; LAB_005c6364
    FLD float ptr [ESI + 0x2a90]        ; 005c633d
    FST double ptr [ESP]                ; 005c6343
    FCOMP double ptr [0x00653f6c]       ; 005c6346 | DOUBLE_00653f6c
    FNSTSW AX                           ; 005c634c
    SAHF                                ; 005c634e
    JBE 0x005c6364                      ; 005c634f
        ;   XREF to: 005c6364 (CONDITIONAL_JUMP)  ; LAB_005c6364
    FLD double ptr [ESP]                ; 005c6351
    FCOMP double ptr [0x00653f8c]       ; 005c6354 | DOUBLE_00653f8c
    FNSTSW AX                           ; 005c635a
    SAHF                                ; 005c635c
    JNC 0x005c6364                      ; 005c635d
        ;   XREF to: 005c6364 (CONDITIONAL_JUMP)  ; LAB_005c6364
    MOV EDI,0x1                         ; 005c635f
    MOV EBX,dword ptr [ESI + 0x2c28]    ; 005c6364
        ;   Label: LAB_005c6364
    TEST EDX,EDX                        ; 005c636a
    JZ 0x005c64ad                       ; 005c636c
        ;   XREF to: 005c64ad (CONDITIONAL_JUMP)  ; LAB_005c64ad
    PUSH 0x32                           ; 005c6372
    PUSH 0x653e84                       ; 005c6374 | = "Bip01 L Forearm"
    PUSH EBX                            ; 005c6379
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0 ; 005c637a
        ;   XREF to: 0043e0d0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0(CCloth * this_ptr)
    ADD ESP,0xc                         ; 005c637f
    PUSH 0x33                           ; 005c6382
    PUSH 0x653e94                       ; 005c6384 | = "Bip01 L Forearm"
    PUSH EBX                            ; 005c6389
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0 ; 005c638a
        ;   XREF to: 0043e0d0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0(CCloth * this_ptr)
    ADD ESP,0xc                         ; 005c638f
    PUSH 0x34                           ; 005c6392
    PUSH 0x653ea4                       ; 005c6394 | = "Bip01 L Forearm"
    PUSH EBX                            ; 005c6399
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0 ; 005c639a
        ;   XREF to: 0043e0d0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0(CCloth * this_ptr)
    ADD ESP,0xc                         ; 005c639f
    PUSH 0x35                           ; 005c63a2
    PUSH 0x653eb4                       ; 005c63a4 | = "Bip01 L Forearm"
    PUSH EBX                            ; 005c63a9
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0 ; 005c63aa
        ;   XREF to: 0043e0d0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0(CCloth * this_ptr)
    ADD ESP,0xc                         ; 005c63af
    PUSH 0x36                           ; 005c63b2
    PUSH 0x653ec4                       ; 005c63b4 | = "Bip01 L Forearm"
    PUSH EBX                            ; 005c63b9
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0 ; 005c63ba
        ;   XREF to: 0043e0d0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0(CCloth * this_ptr)
    ADD ESP,0xc                         ; 005c63bf
    PUSH 0x37                           ; 005c63c2
    PUSH 0x653ed4                       ; 005c63c4 | = "Bip01 L Forearm"
    PUSH EBX                            ; 005c63c9
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0 ; 005c63ca
        ;   XREF to: 0043e0d0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0(CCloth * this_ptr)
    ADD ESP,0xc                         ; 005c63cf
    PUSH 0x20                           ; 005c63d2
    PUSH 0x653ee4                       ; 005c63d4 | = "Bip01 R Forearm"
    PUSH EBX                            ; 005c63d9
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0 ; 005c63da
        ;   XREF to: 0043e0d0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0(CCloth * this_ptr)
    ADD ESP,0xc                         ; 005c63df
    PUSH 0x21                           ; 005c63e2
    PUSH 0x653ef4                       ; 005c63e4 | = "Bip01 R Forearm"
    PUSH EBX                            ; 005c63e9
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0 ; 005c63ea
        ;   XREF to: 0043e0d0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0(CCloth * this_ptr)
    ADD ESP,0xc                         ; 005c63ef
    PUSH 0x22                           ; 005c63f2
    PUSH 0x653f04                       ; 005c63f4 | = "Bip01 R Forearm"
    PUSH EBX                            ; 005c63f9
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0 ; 005c63fa
        ;   XREF to: 0043e0d0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0(CCloth * this_ptr)
    ADD ESP,0xc                         ; 005c63ff
    PUSH 0x23                           ; 005c6402
    PUSH 0x653f14                       ; 005c6404 | = "Bip01 R Forearm"
    PUSH EBX                            ; 005c6409
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0 ; 005c640a
        ;   XREF to: 0043e0d0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0(CCloth * this_ptr)
    ADD ESP,0xc                         ; 005c640f
    PUSH 0x24                           ; 005c6412
    PUSH 0x653f24                       ; 005c6414 | = "Bip01 R Forearm"
    PUSH EBX                            ; 005c6419
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0 ; 005c641a
        ;   XREF to: 0043e0d0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0(CCloth * this_ptr)
    ADD ESP,0xc                         ; 005c641f
    PUSH 0x25                           ; 005c6422
    PUSH 0x653f34                       ; 005c6424 | = "Bip01 R Forearm"
    PUSH EBX                            ; 005c6429
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0 ; 005c642a
        ;   XREF to: 0043e0d0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0(CCloth * this_ptr)
    ADD ESP,0xc                         ; 005c642f
    TEST EDI,EDI                        ; 005c6432
        ;   Label: LAB_005c6432
    JZ 0x005c6536                       ; 005c6434
        ;   XREF to: 005c6536 (CONDITIONAL_JUMP)  ; LAB_005c6536
    PUSH 0x2f                           ; 005c643a
    PUSH 0x653f44                       ; 005c643c | = "Bip01 L Forearm"
    PUSH EBX                            ; 005c6441
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0 ; 005c6442
        ;   XREF to: 0043e0d0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0(CCloth * this_ptr)
    ADD ESP,0xc                         ; 005c6447
    PUSH 0x32                           ; 005c644a
    PUSH 0x653f54                       ; 005c644c | = "Bip01 L Forearm"
    PUSH EBX                            ; 005c6451
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0 ; 005c6452
        ;   XREF to: 0043e0d0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0(CCloth * this_ptr)
    ADD ESP,0xc                         ; 005c6457
    ADD ESI,0x158                       ; 005c645a
        ;   Label: LAB_005c645a
    PUSH ESI                            ; 005c6460
    ADD EBX,0x3fe64                     ; 005c6461
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005c6467
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005c646c
    ADD ESP,0x4                         ; 005c646f
    CMP EAX,0x2a                        ; 005c6472
    JNZ 0x005c6551                      ; 005c6475
        ;   XREF to: 005c6551 (CONDITIONAL_JUMP)  ; LAB_005c6551
    MOV ESI,0xc1a00000                  ; 005c647b
    XOR EDX,EDX                         ; 005c6480
    LEA EAX,[ESP + 0x8]                 ; 005c6482
    MOV dword ptr [ESP + 0xc],EDX       ; 005c6486
    MOV dword ptr [ESP + 0x10],ESI      ; 005c648a
    MOV dword ptr [ESP + 0x8],EDX       ; 005c648e
    CMP EBX,EAX                         ; 005c6492
    JZ 0x005c6238                       ; 005c6494
        ;   XREF to: 005c6238 (CONDITIONAL_JUMP)  ; LAB_005c6238
    MOV dword ptr [EBX + 0x4],EDX       ; 005c649a
    MOV dword ptr [EBX],EDX             ; 005c649d
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c649f
    MOV dword ptr [EBX + 0x8],EAX       ; 005c64a3
    MOV ESP,EBP                         ; 005c64a6
    POP EBP                             ; 005c64a8
    POP EDI                             ; 005c64a9
    POP ESI                             ; 005c64aa
    POP EBX                             ; 005c64ab
    RET                                 ; 005c64ac
    PUSH 0x32                           ; 005c64ad
        ;   Label: LAB_005c64ad
    PUSH EBX                            ; 005c64af
    CALL core_cloth.cpp_FUN_0043e170    ; 005c64b0
        ;   XREF to: 0043e170 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_0043e170()
    ADD ESP,0x8                         ; 005c64b5
    PUSH 0x33                           ; 005c64b8
    PUSH EBX                            ; 005c64ba
    CALL core_cloth.cpp_FUN_0043e170    ; 005c64bb
        ;   XREF to: 0043e170 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_0043e170()
    ADD ESP,0x8                         ; 005c64c0
    PUSH 0x34                           ; 005c64c3
    PUSH EBX                            ; 005c64c5
    CALL core_cloth.cpp_FUN_0043e170    ; 005c64c6
        ;   XREF to: 0043e170 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_0043e170()
    ADD ESP,0x8                         ; 005c64cb
    PUSH 0x35                           ; 005c64ce
    PUSH EBX                            ; 005c64d0
    CALL core_cloth.cpp_FUN_0043e170    ; 005c64d1
        ;   XREF to: 0043e170 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_0043e170()
    ADD ESP,0x8                         ; 005c64d6
    PUSH 0x36                           ; 005c64d9
    PUSH EBX                            ; 005c64db
    CALL core_cloth.cpp_FUN_0043e170    ; 005c64dc
        ;   XREF to: 0043e170 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_0043e170()
    ADD ESP,0x8                         ; 005c64e1
    PUSH 0x37                           ; 005c64e4
    PUSH EBX                            ; 005c64e6
    CALL core_cloth.cpp_FUN_0043e170    ; 005c64e7
        ;   XREF to: 0043e170 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_0043e170()
    ADD ESP,0x8                         ; 005c64ec
    PUSH 0x20                           ; 005c64ef
    PUSH EBX                            ; 005c64f1
    CALL core_cloth.cpp_FUN_0043e170    ; 005c64f2
        ;   XREF to: 0043e170 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_0043e170()
    ADD ESP,0x8                         ; 005c64f7
    PUSH 0x21                           ; 005c64fa
    PUSH EBX                            ; 005c64fc
    CALL core_cloth.cpp_FUN_0043e170    ; 005c64fd
        ;   XREF to: 0043e170 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_0043e170()
    ADD ESP,0x8                         ; 005c6502
    PUSH 0x22                           ; 005c6505
    PUSH EBX                            ; 005c6507
    CALL core_cloth.cpp_FUN_0043e170    ; 005c6508
        ;   XREF to: 0043e170 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_0043e170()
    ADD ESP,0x8                         ; 005c650d
    PUSH 0x23                           ; 005c6510
    PUSH EBX                            ; 005c6512
    CALL core_cloth.cpp_FUN_0043e170    ; 005c6513
        ;   XREF to: 0043e170 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_0043e170()
    ADD ESP,0x8                         ; 005c6518
    PUSH 0x24                           ; 005c651b
    PUSH EBX                            ; 005c651d
    CALL core_cloth.cpp_FUN_0043e170    ; 005c651e
        ;   XREF to: 0043e170 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_0043e170()
    ADD ESP,0x8                         ; 005c6523
    PUSH 0x25                           ; 005c6526
    PUSH EBX                            ; 005c6528
    CALL core_cloth.cpp_FUN_0043e170    ; 005c6529
        ;   XREF to: 0043e170 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_0043e170()
    ADD ESP,0x8                         ; 005c652e
    JMP 0x005c6432                      ; 005c6531
        ;   XREF to: 005c6432 (UNCONDITIONAL_JUMP)  ; LAB_005c6432
    PUSH 0x2f                           ; 005c6536
        ;   Label: LAB_005c6536
    PUSH EBX                            ; 005c6538
    CALL core_cloth.cpp_FUN_0043e170    ; 005c6539
        ;   XREF to: 0043e170 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_0043e170()
    ADD ESP,0x8                         ; 005c653e
    PUSH 0x32                           ; 005c6541
    PUSH EBX                            ; 005c6543
    CALL core_cloth.cpp_FUN_0043e170    ; 005c6544
        ;   XREF to: 0043e170 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_0043e170()
    ADD ESP,0x8                         ; 005c6549
    JMP 0x005c645a                      ; 005c654c
        ;   XREF to: 005c645a (UNCONDITIONAL_JUMP)  ; LAB_005c645a
    CMP EAX,0x2b                        ; 005c6551
        ;   Label: LAB_005c6551
    JNZ 0x005c6238                      ; 005c6554
        ;   XREF to: 005c6238 (CONDITIONAL_JUMP)  ; LAB_005c6238
    XOR ESI,ESI                         ; 005c655a
    MOV EAX,0x41a00000                  ; 005c655c
    MOV dword ptr [ESP + 0x18],ESI      ; 005c6561
    MOV dword ptr [ESP + 0x1c],EAX      ; 005c6565
    LEA EAX,[ESP + 0x14]                ; 005c6569
    MOV dword ptr [ESP + 0x14],ESI      ; 005c656d
    CMP EBX,EAX                         ; 005c6571
    JZ 0x005c6238                       ; 005c6573
        ;   XREF to: 005c6238 (CONDITIONAL_JUMP)  ; LAB_005c6238
    MOV dword ptr [EBX + 0x4],ESI       ; 005c6579
    MOV dword ptr [EBX],ESI             ; 005c657c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005c657e
    MOV dword ptr [EBX + 0x8],EAX       ; 005c6582
    MOV ESP,EBP                         ; 005c6585
    POP EBP                             ; 005c6587
    POP EDI                             ; 005c6588
    POP ESI                             ; 005c6589
    POP EBX                             ; 005c658a
    RET                                 ; 005c658b

