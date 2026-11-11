; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_fldnotes_cpp_SNotesEntry_layout_FUN_004a32e0(SNotesEntry *this_ptr,int param_2)
;
; Parameters:
; SNotesEntry *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fldnotes.cpp_SNotesSection_layout_FUN_004a3740 at 004a376b
;
; Referenced Globals:
;   TerminatedCString s_image_box_32_32_005d5cc2
;   TerminatedCString s_image_check_32_32_005d5cd4
;   undefined4 DAT_005d5ce8
;   TerminatedCString s_cont_005d5ced
;   TerminatedCString s_ul_br_005d5cf5
;   TerminatedCString s_ERROR_item_won_t_fit_br_005d5cff
;   undefined4 DAT_005d5d19
;   undefined4 DAT_005d5d1e
;   undefined4 DAT_01cab7e8
;
; Called Functions:
;   core_fldnotes.cpp_SNotesMap_paginate_FUN_004a4070
;   core_fldnotes.cpp_STextView_layoutChunk_FUN_004a28b0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00481240
;   support_newmsg.cpp_getLocalizedString_FUN_0050fe80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a32e0
        ;   Label: core_fldnotes.cpp_SNotesEntry_layout_FUN_004a32e0
    PUSH ESI                            ; 004a32e1
    PUSH EDI                            ; 004a32e2
    PUSH EBP                            ; 004a32e3
    SUB ESP,0xc                         ; 004a32e4
    MOV EBX,dword ptr [ESP + 0x24]      ; 004a32e7
    MOV ESI,dword ptr [ESP + 0x20]      ; 004a32eb
    MOV EAX,dword ptr [EBX + 0x10]      ; 004a32ef
    MOV EDX,dword ptr [0x01cab7e8]      ; 004a32f2 | DAT_01cab7e8
    MOV dword ptr [ESI + 0x144],EAX     ; 004a32f8
    TEST EDX,EDX                        ; 004a32fe
    JZ 0x004a33b7                       ; 004a3300
        ;   XREF to: 004a33b7 (CONDITIONAL_JUMP)  ; LAB_004a33b7
    MOV EAX,dword ptr [ESP + 0x20]      ; 004a3306
        ;   Label: LAB_004a3306
    MOV EBP,dword ptr [EAX + 0x140]     ; 004a330a
    CMP EBP,0x3                         ; 004a3310
    JZ 0x004a33dc                       ; 004a3313
        ;   XREF to: 004a33dc (CONDITIONAL_JUMP)  ; LAB_004a33dc
    CMP EBP,0x4                         ; 004a3319
    JZ 0x004a33fc                       ; 004a331c
        ;   XREF to: 004a33fc (CONDITIONAL_JUMP)  ; LAB_004a33fc
    MOV EAX,dword ptr [ESP + 0x20]      ; 004a3322
        ;   Label: LAB_004a3322
    MOV ECX,dword ptr [EAX + 0x158]     ; 004a3326
    TEST ECX,ECX                        ; 004a332c
    JGE 0x004a341c                      ; 004a332e
        ;   XREF to: 004a341c (CONDITIONAL_JUMP)  ; LAB_004a341c
    MOV EAX,dword ptr [ESP + 0x20]      ; 004a3334
        ;   Label: LAB_004a3334
    ADD EAX,0x40                        ; 004a3338
    MOV EBP,0xffffffff                  ; 004a333b
    MOV dword ptr [ESP + 0x8],EAX       ; 004a3340
    MOV EAX,dword ptr [ESP + 0x20]      ; 004a3344
    XOR EDI,EDI                         ; 004a3348
    ADD EAX,0x148                       ; 004a334a
    MOV dword ptr [ESP],EDI             ; 004a334f
    MOV dword ptr [ESP + 0x4],EAX       ; 004a3352
    MOV EAX,dword ptr [ESP + 0x4]       ; 004a3356
        ;   Label: LAB_004a3356
    MOV EDX,dword ptr [ESP]             ; 004a335a
    CMP EDX,dword ptr [EAX]             ; 004a335d
    JGE 0x004a34d9                      ; 004a335f
        ;   XREF to: 004a34d9 (CONDITIONAL_JUMP)  ; LAB_004a34d9
    PUSH EDX                            ; 004a3365
    MOV ESI,dword ptr [ESP + 0x8]       ; 004a3366
    PUSH ESI                            ; 004a336a
    XOR EDI,EDI                         ; 004a336b
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00481240 ; 004a336d
        ;   XREF to: 00481240 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00481240(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004a3372
    MOV DL,byte ptr [EAX]               ; 004a3375
    MOV ESI,EAX                         ; 004a3377
    TEST DL,DL                          ; 004a3379
    JZ 0x004a33b2                       ; 004a337b
        ;   XREF to: 004a33b2 (CONDITIONAL_JUMP)  ; LAB_004a33b2
    CMP EBP,dword ptr [EBX + 0x10]      ; 004a337d
        ;   Label: LAB_004a337d
    JZ 0x004a3393                       ; 004a3380
        ;   XREF to: 004a3393 (CONDITIONAL_JUMP)  ; LAB_004a3393
    MOV EAX,dword ptr [ESP + 0x20]      ; 004a3382
    CMP byte ptr [EAX + 0x40],0x0       ; 004a3386
    JNZ 0x004a3441                      ; 004a338a
        ;   XREF to: 004a3441 (CONDITIONAL_JUMP)  ; LAB_004a3441
    MOV EBP,dword ptr [EBX + 0x10]      ; 004a3390
        ;   Label: LAB_004a3390
    PUSH ESI                            ; 004a3393
        ;   Label: LAB_004a3393
    PUSH EBX                            ; 004a3394
    CALL core_fldnotes.cpp_STextView_layoutChunk_FUN_004a28b0 ; 004a3395
        ;   XREF to: 004a28b0 (UNCONDITIONAL_CALL)  ; int core_fldnotes.cpp_STextView_layoutChunk_FUN_004a28b0(STextView * this_ptr, char * param_2)
    ADD ESP,0x8                         ; 004a339a
    TEST EAX,EAX                        ; 004a339d
    JL 0x004a34af                       ; 004a339f
        ;   XREF to: 004a34af (CONDITIONAL_JUMP)  ; LAB_004a34af
    JLE 0x004a34b9                      ; 004a33a5
        ;   XREF to: 004a34b9 (CONDITIONAL_JUMP)  ; LAB_004a34b9
    ADD ESI,EAX                         ; 004a33ab
    CMP byte ptr [ESI],0x0              ; 004a33ad
        ;   Label: LAB_004a33ad
    JNZ 0x004a337d                      ; 004a33b0
        ;   XREF to: 004a337d (CONDITIONAL_JUMP)  ; LAB_004a337d
    INC dword ptr [ESP]                 ; 004a33b2
        ;   Label: LAB_004a33b2
    JMP 0x004a3356                      ; 004a33b5
        ;   XREF to: 004a3356 (UNCONDITIONAL_JUMP)  ; LAB_004a3356
    MOV ECX,dword ptr [ESI + 0x140]     ; 004a33b7
        ;   Label: LAB_004a33b7
    TEST ECX,ECX                        ; 004a33bd
    JZ 0x004a33cf                       ; 004a33bf
        ;   XREF to: 004a33cf (CONDITIONAL_JUMP)  ; LAB_004a33cf
    CMP ECX,0x2                         ; 004a33c1
    JZ 0x004a33cf                       ; 004a33c4
        ;   XREF to: 004a33cf (CONDITIONAL_JUMP)  ; LAB_004a33cf
    CMP ECX,0x5                         ; 004a33c6
    JNZ 0x004a3306                      ; 004a33c9
        ;   XREF to: 004a3306 (CONDITIONAL_JUMP)  ; LAB_004a3306
    MOV EAX,0x1                         ; 004a33cf
        ;   Label: LAB_004a33cf
    ADD ESP,0xc                         ; 004a33d4
    POP EBP                             ; 004a33d7
    POP EDI                             ; 004a33d8
    POP ESI                             ; 004a33d9
    POP EBX                             ; 004a33da
    RET                                 ; 004a33db
    PUSH 0x5d5cc2                       ; 004a33dc | = "<image box 32 32>"
        ;   Label: LAB_004a33dc
    PUSH EBX                            ; 004a33e1
    CALL core_fldnotes.cpp_STextView_layoutChunk_FUN_004a28b0 ; 004a33e2
        ;   XREF to: 004a28b0 (UNCONDITIONAL_CALL)  ; int core_fldnotes.cpp_STextView_layoutChunk_FUN_004a28b0(STextView * this_ptr, char * param_2)
    ADD ESP,0x8                         ; 004a33e7
    TEST EAX,EAX                        ; 004a33ea
    JG 0x004a3322                       ; 004a33ec
        ;   XREF to: 004a3322 (CONDITIONAL_JUMP)  ; LAB_004a3322
    XOR EAX,EAX                         ; 004a33f2
    ADD ESP,0xc                         ; 004a33f4
    POP EBP                             ; 004a33f7
    POP EDI                             ; 004a33f8
    POP ESI                             ; 004a33f9
    POP EBX                             ; 004a33fa
    RET                                 ; 004a33fb
    PUSH 0x5d5cd4                       ; 004a33fc | = "<image check 32 32>"
        ;   Label: LAB_004a33fc
    PUSH EBX                            ; 004a3401
    CALL core_fldnotes.cpp_STextView_layoutChunk_FUN_004a28b0 ; 004a3402
        ;   XREF to: 004a28b0 (UNCONDITIONAL_CALL)  ; int core_fldnotes.cpp_STextView_layoutChunk_FUN_004a28b0(STextView * this_ptr, char * param_2)
    ADD ESP,0x8                         ; 004a3407
    TEST EAX,EAX                        ; 004a340a
    JG 0x004a3322                       ; 004a340c
        ;   XREF to: 004a3322 (CONDITIONAL_JUMP)  ; LAB_004a3322
    XOR EAX,EAX                         ; 004a3412
    ADD ESP,0xc                         ; 004a3414
    POP EBP                             ; 004a3417
    POP EDI                             ; 004a3418
    POP ESI                             ; 004a3419
    POP EBX                             ; 004a341a
    RET                                 ; 004a341b
    IMUL EAX,ECX,0x970                  ; 004a341c
        ;   Label: LAB_004a341c
    PUSH EBX                            ; 004a3422
    ADD EAX,0x1cacb50                   ; 004a3423
    PUSH EAX                            ; 004a3428
    CALL core_fldnotes.cpp_SNotesMap_paginate_FUN_004a4070 ; 004a3429
        ;   XREF to: 004a4070 (UNCONDITIONAL_CALL)  ; undefined4 core_fldnotes.cpp_SNotesMap_paginate_FUN_004a4070(SNotesMap * this_ptr, undefined4 param_2)
    ADD ESP,0x8                         ; 004a342e
    TEST EAX,EAX                        ; 004a3431
    JNZ 0x004a3334                      ; 004a3433
        ;   XREF to: 004a3334 (CONDITIONAL_JUMP)  ; LAB_004a3334
    ADD ESP,0xc                         ; 004a3439
    POP EBP                             ; 004a343c
    POP EDI                             ; 004a343d
    POP ESI                             ; 004a343e
    POP EBX                             ; 004a343f
    RET                                 ; 004a3440
    PUSH 0x5d5ce8                       ; 004a3441 | DAT_005d5ce8
        ;   Label: LAB_004a3441
    PUSH EBX                            ; 004a3446
    CALL core_fldnotes.cpp_STextView_layoutChunk_FUN_004a28b0 ; 004a3447
        ;   XREF to: 004a28b0 (UNCONDITIONAL_CALL)  ; int core_fldnotes.cpp_STextView_layoutChunk_FUN_004a28b0(STextView * this_ptr, char * param_2)
    ADD ESP,0x8                         ; 004a344c
    TEST EAX,EAX                        ; 004a344f
    JG 0x004a345d                       ; 004a3451
        ;   XREF to: 004a345d (CONDITIONAL_JUMP)  ; LAB_004a345d
    XOR EAX,EAX                         ; 004a3453
    ADD ESP,0xc                         ; 004a3455
    POP EBP                             ; 004a3458
    POP EDI                             ; 004a3459
    POP ESI                             ; 004a345a
    POP EBX                             ; 004a345b
    RET                                 ; 004a345c
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a345d
        ;   Label: LAB_004a345d
    PUSH EDX                            ; 004a3461
    PUSH EBX                            ; 004a3462
    CALL core_fldnotes.cpp_STextView_layoutChunk_FUN_004a28b0 ; 004a3463
        ;   XREF to: 004a28b0 (UNCONDITIONAL_CALL)  ; int core_fldnotes.cpp_STextView_layoutChunk_FUN_004a28b0(STextView * this_ptr, char * param_2)
    ADD ESP,0x8                         ; 004a3468
    TEST EAX,EAX                        ; 004a346b
    JLE 0x004a348f                      ; 004a346d
        ;   XREF to: 004a348f (CONDITIONAL_JUMP)  ; LAB_004a348f
    CMP EBP,-0x1                        ; 004a346f
    JZ 0x004a3499                       ; 004a3472
        ;   XREF to: 004a3499 (CONDITIONAL_JUMP)  ; LAB_004a3499
    PUSH 0x5d5ced                       ; 004a3474 | = "(cont.)"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004a3479
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004a347e
    PUSH EAX                            ; 004a3481
    PUSH EBX                            ; 004a3482
    CALL core_fldnotes.cpp_STextView_layoutChunk_FUN_004a28b0 ; 004a3483
        ;   XREF to: 004a28b0 (UNCONDITIONAL_CALL)  ; int core_fldnotes.cpp_STextView_layoutChunk_FUN_004a28b0(STextView * this_ptr, char * param_2)
    ADD ESP,0x8                         ; 004a3488
    TEST EAX,EAX                        ; 004a348b
    JG 0x004a3499                       ; 004a348d
        ;   XREF to: 004a3499 (CONDITIONAL_JUMP)  ; LAB_004a3499
    XOR EAX,EAX                         ; 004a348f
        ;   Label: LAB_004a348f
    ADD ESP,0xc                         ; 004a3491
    POP EBP                             ; 004a3494
    POP EDI                             ; 004a3495
    POP ESI                             ; 004a3496
    POP EBX                             ; 004a3497
    RET                                 ; 004a3498
    PUSH 0x5d5cf5                       ; 004a3499 | = "</ul><br>"
        ;   Label: LAB_004a3499
    PUSH EBX                            ; 004a349e
    CALL core_fldnotes.cpp_STextView_layoutChunk_FUN_004a28b0 ; 004a349f
        ;   XREF to: 004a28b0 (UNCONDITIONAL_CALL)  ; int core_fldnotes.cpp_STextView_layoutChunk_FUN_004a28b0(STextView * this_ptr, char * param_2)
    ADD ESP,0x8                         ; 004a34a4
    TEST EAX,EAX                        ; 004a34a7
    JG 0x004a3390                       ; 004a34a9
        ;   XREF to: 004a3390 (CONDITIONAL_JUMP)  ; LAB_004a3390
    XOR EAX,EAX                         ; 004a34af
        ;   Label: LAB_004a34af
    ADD ESP,0xc                         ; 004a34b1
    POP EBP                             ; 004a34b4
    POP EDI                             ; 004a34b5
    POP ESI                             ; 004a34b6
    POP EBX                             ; 004a34b7
    RET                                 ; 004a34b8
    INC EDI                             ; 004a34b9
        ;   Label: LAB_004a34b9
    CMP EDI,0x1                         ; 004a34ba
    JLE 0x004a33ad                      ; 004a34bd
        ;   XREF to: 004a33ad (CONDITIONAL_JUMP)  ; LAB_004a33ad
    PUSH 0x5d5cff                       ; 004a34c3 | = "ERROR: item won't fit<br>"
    PUSH EBX                            ; 004a34c8
    CALL core_fldnotes.cpp_STextView_layoutChunk_FUN_004a28b0 ; 004a34c9
        ;   XREF to: 004a28b0 (UNCONDITIONAL_CALL)  ; int core_fldnotes.cpp_STextView_layoutChunk_FUN_004a28b0(STextView * this_ptr, char * param_2)
    ADD ESP,0x8                         ; 004a34ce
    INC dword ptr [ESP]                 ; 004a34d1
    JMP 0x004a3356                      ; 004a34d4
        ;   XREF to: 004a3356 (UNCONDITIONAL_JUMP)  ; LAB_004a3356
    PUSH 0x5d5d19                       ; 004a34d9 | DAT_005d5d19
        ;   Label: LAB_004a34d9
    PUSH EBX                            ; 004a34de
    CALL core_fldnotes.cpp_STextView_layoutChunk_FUN_004a28b0 ; 004a34df
        ;   XREF to: 004a28b0 (UNCONDITIONAL_CALL)  ; int core_fldnotes.cpp_STextView_layoutChunk_FUN_004a28b0(STextView * this_ptr, char * param_2)
    ADD ESP,0x8                         ; 004a34e4
    TEST EAX,EAX                        ; 004a34e7
    JG 0x004a34f5                       ; 004a34e9
        ;   XREF to: 004a34f5 (CONDITIONAL_JUMP)  ; LAB_004a34f5
    XOR EAX,EAX                         ; 004a34eb
    ADD ESP,0xc                         ; 004a34ed
    POP EBP                             ; 004a34f0
    POP EDI                             ; 004a34f1
    POP ESI                             ; 004a34f2
    POP EBX                             ; 004a34f3
    RET                                 ; 004a34f4
    PUSH 0x5d5d1e                       ; 004a34f5 | DAT_005d5d1e
        ;   Label: LAB_004a34f5
    PUSH EBX                            ; 004a34fa
    CALL core_fldnotes.cpp_STextView_layoutChunk_FUN_004a28b0 ; 004a34fb
        ;   XREF to: 004a28b0 (UNCONDITIONAL_CALL)  ; int core_fldnotes.cpp_STextView_layoutChunk_FUN_004a28b0(STextView * this_ptr, char * param_2)
    ADD ESP,0x8                         ; 004a3500
    TEST EAX,EAX                        ; 004a3503
    JG 0x004a33cf                       ; 004a3505
        ;   XREF to: 004a33cf (CONDITIONAL_JUMP)  ; LAB_004a33cf
    XOR EAX,EAX                         ; 004a350b
    ADD ESP,0xc                         ; 004a350d
    POP EBP                             ; 004a3510
    POP EDI                             ; 004a3511
    POP ESI                             ; 004a3512
    POP EBX                             ; 004a3513
    RET                                 ; 004a3514

