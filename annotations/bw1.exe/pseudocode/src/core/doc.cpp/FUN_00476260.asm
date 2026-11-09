; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_doc_cpp_FUN_00476260(int param_1,int param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   TerminatedCString s_CDoc_startGettingGrabbed_005da606
;   TerminatedCString s_current_motion_is_s_005da630
;   undefined4 DAT_005da64c
;   undefined4 DAT_005da654
;   CConsole* g_CConsolePtr = 007db5f0
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_hero.cpp_FUN_004eadf0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_FUN_00525020
;   engine_console.cpp_FUN_00445430
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476260
        ;   Label: core_doc.cpp_FUN_00476260
    PUSH ESI                            ; 00476261
    PUSH EDI                            ; 00476262
    PUSH EBP                            ; 00476263
    MOV EBP,ESP                         ; 00476264
    SUB ESP,0x10                        ; 00476266
    AND ESP,0xfffffff8                  ; 00476269
    MOV EBX,dword ptr [EBP + 0x14]      ; 0047626c
    MOV EDI,dword ptr [EBP + 0x18]      ; 0047626f
    TEST EDI,EDI                        ; 00476272
    JNZ 0x0047627f                      ; 00476274
        ;   XREF to: 0047627f (CONDITIONAL_JUMP)  ; LAB_0047627f
    XOR EAX,EAX                         ; 00476276
        ;   Label: LAB_00476276
    MOV ESP,EBP                         ; 00476278
    POP EBP                             ; 0047627a
    POP EDI                             ; 0047627b
    POP ESI                             ; 0047627c
    POP EBX                             ; 0047627d
    RET                                 ; 0047627e
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0047627f
        ;   Label: LAB_0047627f
    PUSH EDX                            ; 00476282
    PUSH EDI                            ; 00476283
    PUSH 0x5da606                       ; 00476284 | = "CDoc::startGettingGrabbed by %s, type..."
    MOV ECX,dword ptr [0x00611100]      ; 00476289 | g_CConsolePtr
    PUSH ECX                            ; 0047628f | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00476290
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x10                        ; 00476295
    LEA ESI,[EBX + 0x158]               ; 00476298
    PUSH ESI                            ; 0047629e
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0047629f
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004762a4
    PUSH EAX                            ; 004762a7
    PUSH 0x5da630                       ; 004762a8 | = "  current motion is %s\n"
    MOV EAX,[0x00611100]                ; 004762ad | g_CConsolePtr
    PUSH EAX                            ; 004762b2 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 004762b3
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    MOV EDX,dword ptr [EBX + 0x1ff78]   ; 004762b8
    ADD ESP,0xc                         ; 004762be
    TEST EDX,EDX                        ; 004762c1
    JNZ 0x00476276                      ; 004762c3
        ;   XREF to: 00476276 (CONDITIONAL_JUMP)  ; LAB_00476276
    CMP dword ptr [EBX + 0x1ff74],0x0   ; 004762c5
    JNZ 0x00476276                      ; 004762cc
        ;   XREF to: 00476276 (CONDITIONAL_JUMP)  ; LAB_00476276
    CMP dword ptr [EBX + 0x1ff80],0x0   ; 004762ce
    JNZ 0x00476276                      ; 004762d5
        ;   XREF to: 00476276 (CONDITIONAL_JUMP)  ; LAB_00476276
    PUSH ESI                            ; 004762d7
    CALL core_motion.cpp_FUN_00525020   ; 004762d8
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [ESP + 0x10],EAX      ; 004762dd
    FLD float ptr [ESP + 0x10]          ; 004762e1
    ADD ESP,0x4                         ; 004762e5
    MOV EDX,dword ptr [EBX + 0x2c98]    ; 004762e8
    FSTP float ptr [ESP + 0x8]          ; 004762ee
    CMP EDX,0xc                         ; 004762f2
    JNZ 0x0047638a                      ; 004762f5
        ;   XREF to: 0047638a (CONDITIONAL_JUMP)  ; LAB_0047638a
    FLD float ptr [ESP + 0x8]           ; 004762fb
        ;   Label: LAB_004762fb
    FST double ptr [ESP]                ; 004762ff
    FCOMP double ptr [0x005da64c]       ; 00476302 | DAT_005da64c
    FNSTSW AX                           ; 00476308
    SAHF                                ; 0047630a
    JBE 0x0047631f                      ; 0047630b
        ;   XREF to: 0047631f (CONDITIONAL_JUMP)  ; LAB_0047631f
    FLD double ptr [ESP]                ; 0047630d
    FCOMP double ptr [0x005da654]       ; 00476310 | DAT_005da654
    FNSTSW AX                           ; 00476316
    SAHF                                ; 00476318
    JC 0x00476276                       ; 00476319
        ;   XREF to: 00476276 (CONDITIONAL_JUMP)  ; LAB_00476276
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0047631f
        ;   Label: LAB_0047631f
    PUSH EDX                            ; 00476322
    PUSH EDI                            ; 00476323
    PUSH EBX                            ; 00476324
    CALL core_hero.cpp_FUN_004eadf0     ; 00476325
        ;   XREF to: 004eadf0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eadf0()
    ADD ESP,0xc                         ; 0047632a
    MOV ESI,EAX                         ; 0047632d
    TEST EAX,EAX                        ; 0047632f
    JZ 0x00476381                       ; 00476331
        ;   XREF to: 00476381 (CONDITIONAL_JUMP)  ; LAB_00476381
    MOV ECX,dword ptr [EBX + 0x20004]   ; 00476333
    CMP ECX,dword ptr [EBX + 0x25b0]    ; 00476339
    JZ 0x00476355                       ; 0047633f
        ;   XREF to: 00476355 (CONDITIONAL_JUMP)  ; LAB_00476355
    PUSH 0x0                            ; 00476341
    PUSH 0x0                            ; 00476343
    MOV EAX,dword ptr [EBX + 0x154]     ; 00476345
    PUSH EBX                            ; 0047634b
    CALL dword ptr [EAX + 0x128]        ; 0047634c
    ADD ESP,0xc                         ; 00476352
    MOV EDI,dword ptr [EBX + 0x20004]   ; 00476355
        ;   Label: LAB_00476355
    CMP EDI,dword ptr [EBX + 0x2628]    ; 0047635b
    JZ 0x00476377                       ; 00476361
        ;   XREF to: 00476377 (CONDITIONAL_JUMP)  ; LAB_00476377
    PUSH 0x0                            ; 00476363
    PUSH 0x1                            ; 00476365
    MOV EAX,dword ptr [EBX + 0x154]     ; 00476367
    PUSH EBX                            ; 0047636d
    CALL dword ptr [EAX + 0x128]        ; 0047636e
    ADD ESP,0xc                         ; 00476374
    MOV dword ptr [EBX + 0x200a8],0x0   ; 00476377
        ;   Label: LAB_00476377
    MOV EAX,ESI                         ; 00476381
        ;   Label: LAB_00476381
    MOV ESP,EBP                         ; 00476383
    POP EBP                             ; 00476385
    POP EDI                             ; 00476386
    POP ESI                             ; 00476387
    POP EBX                             ; 00476388
    RET                                 ; 00476389
    CMP EDX,0xd                         ; 0047638a
        ;   Label: LAB_0047638a
    JZ 0x004762fb                       ; 0047638d
        ;   XREF to: 004762fb (CONDITIONAL_JUMP)  ; LAB_004762fb
    MOV ESI,dword ptr [EBX + 0x1ff5c]   ; 00476393
    CMP ESI,0x3                         ; 00476399
    JZ 0x00476276                       ; 0047639c
        ;   XREF to: 00476276 (CONDITIONAL_JUMP)  ; LAB_00476276
    TEST ESI,ESI                        ; 004763a2
    JZ 0x0047631f                       ; 004763a4
        ;   XREF to: 0047631f (CONDITIONAL_JUMP)  ; LAB_0047631f
    XOR EAX,EAX                         ; 004763aa
    MOV ESP,EBP                         ; 004763ac
    POP EBP                             ; 004763ae
    POP EDI                             ; 004763af
    POP ESI                             ; 004763b0
    POP EBX                             ; 004763b1
    RET                                 ; 004763b2

