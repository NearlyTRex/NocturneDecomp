; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_00455270(int param_1,float param_2)
;
; Local Variables:
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_doc.cpp_FUN_00450c60 at 004513fd
;
; Referenced Globals:
;   undefined4 DAT_005d01df
;   undefined4 DAT_005d01e7
;   undefined4 DAT_005d01ef
;   undefined4 DAT_005d01f7
;   undefined4 DAT_005d01ff
;   undefined4 DAT_01b4d2a8
;   undefined4 DAT_01b4d2ac
;
; Called Functions:
;   core_motion.cpp_FUN_005038a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00455270
        ;   Label: core_doc.cpp_FUN_00455270
    PUSH ESI                            ; 00455271
    PUSH EDI                            ; 00455272
    PUSH EBP                            ; 00455273
    MOV EBP,ESP                         ; 00455274
    SUB ESP,0x34                        ; 00455276
    AND ESP,0xfffffff8                  ; 00455279
    MOV EBX,dword ptr [EBP + 0x14]      ; 0045527c
    LEA EAX,[EBX + 0x256e0]             ; 0045527f
    MOV dword ptr [EAX + 0x8],0x0       ; 00455285
    PUSH 0x0                            ; 0045528c
    MOV EDX,dword ptr [EAX + 0x8]       ; 0045528e
    MOV dword ptr [EAX + 0x4],EDX       ; 00455291
    MOV EDX,dword ptr [EAX + 0x4]       ; 00455294
    MOV dword ptr [EAX],EDX             ; 00455297
    LEA EAX,[EBX + 0x2b4]               ; 00455299
    PUSH EAX                            ; 0045529f
    CALL core_motion.cpp_FUN_005038a0   ; 004552a0
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0x38],EAX      ; 004552a5
    FLD float ptr [ESP + 0x38]          ; 004552a9
    ADD ESP,0x8                         ; 004552ad
    FLDZ                                ; 004552b0
    FXCH                                ; 004552b2
    FSTP double ptr [ESP + 0x8]         ; 004552b4
    FCOMP double ptr [ESP + 0x8]        ; 004552b8
    FNSTSW AX                           ; 004552bc
    SAHF                                ; 004552be
    JNC 0x00455418                      ; 004552bf
        ;   XREF to: 00455418 (CONDITIONAL_JUMP)  ; LAB_00455418
    FLD float ptr [EBX + 0x256bc]       ; 004552c5
    FLD1                                ; 004552cb
    FCOMPP                              ; 004552cd
    FNSTSW AX                           ; 004552cf
    SAHF                                ; 004552d1
    JBE 0x00455418                      ; 004552d2
        ;   XREF to: 00455418 (CONDITIONAL_JUMP)  ; LAB_00455418
    FLD1                                ; 004552d8
    FCOMP double ptr [ESP + 0x8]        ; 004552da
    FNSTSW AX                           ; 004552de
    SAHF                                ; 004552e0
    JA 0x00455451                       ; 004552e1
        ;   XREF to: 00455451 (CONDITIONAL_JUMP)  ; LAB_00455451
    MOV EAX,[0x01b4d2a8]                ; 004552e7 | DAT_01b4d2a8
        ;   Label: LAB_004552e7
    MOV EDX,dword ptr [EBX + 0x256ec]   ; 004552ec
    MOV dword ptr [EBX + 0x256ec],EAX   ; 004552f2
    FLDZ                                ; 004552f8
    FCOMP float ptr [EBX + 0x256b8]     ; 004552fa
    FNSTSW AX                           ; 00455300
    SAHF                                ; 00455302
    JBE 0x00455310                      ; 00455303
        ;   XREF to: 00455310 (CONDITIONAL_JUMP)  ; LAB_00455310
    MOV EAX,[0x01b4d2ac]                ; 00455305 | DAT_01b4d2ac
    MOV dword ptr [EBX + 0x256ec],EAX   ; 0045530a
    MOV ECX,0x3fcccccd                  ; 00455310
        ;   Label: LAB_00455310
    FLD float ptr [EBX + 0x256bc]       ; 00455315
    MOV dword ptr [ESP + 0x18],ECX      ; 0045531b
    FCOMP double ptr [0x005d01e7]       ; 0045531f | DAT_005d01e7
    FNSTSW AX                           ; 00455325
    SAHF                                ; 00455327
    JBE 0x004554b9                      ; 00455328
        ;   XREF to: 004554b9 (CONDITIONAL_JUMP)  ; LAB_004554b9
    FLD float ptr [EBX + 0x256c4]       ; 0045532e
    FADD float ptr [EBP + 0x18]         ; 00455334
    FSTP float ptr [EBX + 0x256c4]      ; 00455337
    FLD float ptr [EBX + 0x256c0]       ; 0045533d
        ;   Label: LAB_0045533d
    FLDZ                                ; 00455343
    FCOMPP                              ; 00455345
    FNSTSW AX                           ; 00455347
    SAHF                                ; 00455349
    JC 0x00455375                       ; 0045534a
        ;   XREF to: 00455375 (CONDITIONAL_JUMP)  ; LAB_00455375
    FLD float ptr [EBX + 0x256bc]       ; 0045534c
    FCOMP double ptr [0x005d01ef]       ; 00455352 | DAT_005d01ef
    FNSTSW AX                           ; 00455358
    SAHF                                ; 0045535a
    JC 0x004554c8                       ; 0045535b
        ;   XREF to: 004554c8 (CONDITIONAL_JUMP)  ; LAB_004554c8
    FLD float ptr [EBX + 0x256bc]       ; 00455361
        ;   Label: LAB_00455361
    FLD1                                ; 00455367
    FSUBRP                              ; 00455369
    FMUL float ptr [ESP + 0x18]         ; 0045536b
    FSTP float ptr [EBX + 0x256c0]      ; 0045536f
    FLD float ptr [EBX + 0x256c0]       ; 00455375
        ;   Label: LAB_00455375
    FLDZ                                ; 0045537b
    FCOMPP                              ; 0045537d
    FNSTSW AX                           ; 0045537f
    SAHF                                ; 00455381
    JNC 0x00455513                      ; 00455382
        ;   XREF to: 00455513 (CONDITIONAL_JUMP)  ; LAB_00455513
    MOV EAX,dword ptr [EBX + 0x256c0]   ; 00455388
    MOV dword ptr [ESP + 0x28],EAX      ; 0045538e
    FLD float ptr [ESP + 0x28]          ; 00455392
    FSUB float ptr [EBP + 0x18]         ; 00455396
    FST float ptr [EBX + 0x256c0]       ; 00455399
    FLDZ                                ; 0045539f
    FCOMPP                              ; 004553a1
    FNSTSW AX                           ; 004553a3
    SAHF                                ; 004553a5
    JC 0x004554e0                       ; 004553a6
        ;   XREF to: 004554e0 (CONDITIONAL_JUMP)  ; LAB_004554e0
    FLD float ptr [EBX + 0x256bc]       ; 004553ac
    FLD1                                ; 004553b2
    FSUBRP                              ; 004553b4
    MOV dword ptr [EBX + 0x256c0],0x0   ; 004553b6
    FSTP float ptr [ESP + 0x2c]         ; 004553c0
        ;   Label: LAB_004553c0
    MOV EAX,dword ptr [EBX + 0x256bc]   ; 004553c4
    MOV dword ptr [ESP + 0x14],EAX      ; 004553ca
    FLD float ptr [ESP + 0x14]          ; 004553ce
    FADD float ptr [ESP + 0x2c]         ; 004553d2
    FST float ptr [EBX + 0x256bc]       ; 004553d6
    FLD1                                ; 004553dc
    FCOMPP                              ; 004553de
    FNSTSW AX                           ; 004553e0
    SAHF                                ; 004553e2
    JA 0x004554ec                       ; 004553e3
        ;   XREF to: 004554ec (CONDITIONAL_JUMP)  ; LAB_004554ec
    MOV dword ptr [EBX + 0x256b8],0x0   ; 004553e9
    MOV dword ptr [EBX + 0x256c0],0x0   ; 004553f3
    MOV dword ptr [EBX + 0x256c4],0x0   ; 004553fd
    MOV dword ptr [EBX + 0x256bc],0x3f800000 ; 00455407
    MOV ESP,EBP                         ; 00455411
        ;   Label: LAB_00455411
    POP EBP                             ; 00455413
    POP EDI                             ; 00455414
    POP ESI                             ; 00455415
    POP EBX                             ; 00455416
    RET                                 ; 00455417
    MOV dword ptr [EBX + 0x256b8],0x0   ; 00455418
        ;   Label: LAB_00455418
    MOV dword ptr [EBX + 0x256ec],0xffffffff ; 00455422
    MOV dword ptr [EBX + 0x256c0],0x0   ; 0045542c
    MOV dword ptr [EBX + 0x256c4],0x0   ; 00455436
    MOV dword ptr [EBX + 0x256bc],0x0   ; 00455440
    MOV ESP,EBP                         ; 0045544a
    POP EBP                             ; 0045544c
    POP EDI                             ; 0045544d
    POP ESI                             ; 0045544e
    POP EBX                             ; 0045544f
    RET                                 ; 00455450
    FLD float ptr [EBX + 0x256b8]       ; 00455451
        ;   Label: LAB_00455451
    FST double ptr [ESP]                ; 00455457
    FABS                                ; 0045545a
    FLD1                                ; 0045545c
    FSUB double ptr [ESP + 0x8]         ; 0045545e
    FMUL float ptr [EBP + 0x18]         ; 00455462
    FMUL double ptr [0x005d01df]        ; 00455465 | DAT_005d01df
    FST float ptr [ESP + 0x10]          ; 0045546b
    FCOMPP                              ; 0045546f
    FNSTSW AX                           ; 00455471
    SAHF                                ; 00455473
    JBE 0x00455485                      ; 00455474
        ;   XREF to: 00455485 (CONDITIONAL_JUMP)  ; LAB_00455485
    MOV dword ptr [EBX + 0x256b8],0x0   ; 00455476
    JMP 0x004552e7                      ; 00455480
        ;   XREF to: 004552e7 (UNCONDITIONAL_JUMP)  ; LAB_004552e7
    FLDZ                                ; 00455485
        ;   Label: LAB_00455485
    FCOMP double ptr [ESP]              ; 00455487
    FNSTSW AX                           ; 0045548a
    SAHF                                ; 0045548c
    JBE 0x004554a4                      ; 0045548d
        ;   XREF to: 004554a4 (CONDITIONAL_JUMP)  ; LAB_004554a4
    FLD float ptr [EBX + 0x256b8]       ; 0045548f
    FADD float ptr [ESP + 0x10]         ; 00455495
    FSTP float ptr [EBX + 0x256b8]      ; 00455499
    JMP 0x004552e7                      ; 0045549f
        ;   XREF to: 004552e7 (UNCONDITIONAL_JUMP)  ; LAB_004552e7
    FLD float ptr [EBX + 0x256b8]       ; 004554a4
        ;   Label: LAB_004554a4
    FSUB float ptr [ESP + 0x10]         ; 004554aa
    FSTP float ptr [EBX + 0x256b8]      ; 004554ae
    JMP 0x004552e7                      ; 004554b4
        ;   XREF to: 004552e7 (UNCONDITIONAL_JUMP)  ; LAB_004552e7
    MOV dword ptr [EBX + 0x256c4],0x0   ; 004554b9
        ;   Label: LAB_004554b9
    JMP 0x0045533d                      ; 004554c3
        ;   XREF to: 0045533d (UNCONDITIONAL_JUMP)  ; LAB_0045533d
    FLD float ptr [EBX + 0x256c4]       ; 004554c8
        ;   Label: LAB_004554c8
    FLD1                                ; 004554ce
    FCOMPP                              ; 004554d0
    FNSTSW AX                           ; 004554d2
    SAHF                                ; 004554d4
    JC 0x00455361                       ; 004554d5
        ;   XREF to: 00455361 (CONDITIONAL_JUMP)  ; LAB_00455361
    JMP 0x00455375                      ; 004554db
        ;   XREF to: 00455375 (UNCONDITIONAL_JUMP)  ; LAB_00455375
    FLD float ptr [EBP + 0x18]          ; 004554e0
        ;   Label: LAB_004554e0
    FDIV float ptr [ESP + 0x28]         ; 004554e3
    JMP 0x004553c0                      ; 004554e7
        ;   XREF to: 004553c0 (UNCONDITIONAL_JUMP)  ; LAB_004553c0
    FLD float ptr [EBX + 0x256b8]       ; 004554ec
        ;   Label: LAB_004554ec
    FMUL float ptr [ESP + 0x2c]         ; 004554f2
    FLD float ptr [ESP + 0x14]          ; 004554f6
    FLD1                                ; 004554fa
    FSUBRP                              ; 004554fc
    FDIVP                               ; 004554fe
    FSUBR float ptr [EBX + 0x256b8]     ; 00455500
    FSTP float ptr [EBX + 0x256b8]      ; 00455506
    MOV ESP,EBP                         ; 0045550c
    POP EBP                             ; 0045550e
    POP EDI                             ; 0045550f
    POP ESI                             ; 00455510
    POP EBX                             ; 00455511
    RET                                 ; 00455512
    FLD float ptr [EBX + 0x256b8]       ; 00455513
        ;   Label: LAB_00455513
    FMUL float ptr [0x005d01f7]         ; 00455519 | DAT_005d01f7
    FABS                                ; 0045551f
    MOV ESI,dword ptr [EBX + 0x256ec]   ; 00455521
    FSTP float ptr [ESP + 0x1c]         ; 00455527
    CMP EDX,ESI                         ; 0045552b
    JZ 0x00455535                       ; 0045552d
        ;   XREF to: 00455535 (CONDITIONAL_JUMP)  ; LAB_00455535
    XOR EDI,EDI                         ; 0045552f
    MOV dword ptr [ESP + 0x1c],EDI      ; 00455531
    FLD float ptr [ESP + 0x1c]          ; 00455535
        ;   Label: LAB_00455535
    FLD1                                ; 00455539
    FCOMPP                              ; 0045553b
    FNSTSW AX                           ; 0045553d
    SAHF                                ; 0045553f
    JNC 0x0045554a                      ; 00455540
        ;   XREF to: 0045554a (CONDITIONAL_JUMP)  ; LAB_0045554a
    MOV dword ptr [ESP + 0x1c],0x3f800000 ; 00455542
    FLD float ptr [ESP + 0x1c]          ; 0045554a
        ;   Label: LAB_0045554a
    FSUB float ptr [EBX + 0x256bc]      ; 0045554e
    FADD float ptr [EBX + 0x256bc]      ; 00455554
    FST float ptr [EBX + 0x256bc]       ; 0045555a
    FCOMP double ptr [0x005d01ff]       ; 00455560 | DAT_005d01ff
    FNSTSW AX                           ; 00455566
    SAHF                                ; 00455568
    JBE 0x00455411                      ; 00455569
        ;   XREF to: 00455411 (CONDITIONAL_JUMP)  ; LAB_00455411
    MOV dword ptr [EBX + 0x256ec],EDX   ; 0045556f
    MOV ESP,EBP                         ; 00455575
    POP EBP                             ; 00455577
    POP EDI                             ; 00455578
    POP ESI                             ; 00455579
    POP EBX                             ; 0045557a
    RET                                 ; 0045557b

