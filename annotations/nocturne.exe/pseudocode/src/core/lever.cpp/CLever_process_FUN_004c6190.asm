; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_lever_cpp_CLever_process_FUN_004c6190(int param_1,float param_2)
;
;
; Referenced Globals:
;   double DOUBLE_00587925 = 6
;   double DOUBLE_0058792d = 0.100000000000000
;   double DOUBLE_00587935 = 0.900000000000000
;   undefined4 DAT_005b7650
;   undefined4 DAT_005be368
;   undefined4 DAT_01cc3660
;   undefined4 DAT_01e57284
;   undefined4 DAT_01fa3ff0
;   undefined4 DAT_01fa3ff4
;   undefined4 DAT_01fa3ff8
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_event.cpp_CEventList_executeCommands_FUN_0047ab70
;   core_lever.cpp_CLever_setState_FUN_004c6390
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6190
        ;   Label: core_lever.cpp_CLever_process_FUN_004c6190
    PUSH ESI                            ; 004c6191
    PUSH EDI                            ; 004c6192
    PUSH EBP                            ; 004c6193
    SUB ESP,0x8                         ; 004c6194
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004c6197
    CMP dword ptr [EBX + 0x410],0x0     ; 004c619b
    JZ 0x004c6314                       ; 004c61a2
        ;   XREF to: 004c6314 (CONDITIONAL_JUMP)  ; LAB_004c6314
    FLD float ptr [EBX + 0x2d4]         ; 004c61a8
    FCOMP float ptr [EBX + 0x414]       ; 004c61ae
    FNSTSW AX                           ; 004c61b4
    SAHF                                ; 004c61b6
    JNC 0x004c626d                      ; 004c61b7
        ;   XREF to: 004c626d (CONDITIONAL_JUMP)  ; LAB_004c626d
    FLD float ptr [ESP + 0x20]          ; 004c61bd
    FMUL double ptr [0x00587925]        ; 004c61c1 | DOUBLE_00587925
    FADD float ptr [EBX + 0x2d4]        ; 004c61c7
    FST float ptr [EBX + 0x2d4]         ; 004c61cd
    FCOMP float ptr [EBX + 0x414]       ; 004c61d3
    FNSTSW AX                           ; 004c61d9
    SAHF                                ; 004c61db
    JBE 0x004c6225                      ; 004c61dc
        ;   XREF to: 004c6225 (CONDITIONAL_JUMP)  ; LAB_004c6225
    MOV dword ptr [EBX + 0x410],0x0     ; 004c61de
    FLD float ptr [EBX + 0x414]         ; 004c61e8
    MOV EDI,dword ptr [EBX + 0x404]     ; 004c61ee
    FSTP float ptr [EBX + 0x2d4]        ; 004c61f4
    TEST EDI,EDI                        ; 004c61fa
    JZ 0x004c6225                       ; 004c61fc
        ;   XREF to: 004c6225 (CONDITIONAL_JUMP)  ; LAB_004c6225
    FLD float ptr [EBX + 0x2d4]         ; 004c61fe
    FCOMP double ptr [0x00587935]       ; 004c6204 | DOUBLE_00587935
    FNSTSW AX                           ; 004c620a
    SAHF                                ; 004c620c
    JBE 0x004c6225                      ; 004c620d
        ;   XREF to: 004c6225 (CONDITIONAL_JUMP)  ; LAB_004c6225
    LEA EAX,[EBX + 0x2d8]               ; 004c620f
    PUSH EAX                            ; 004c6215
    MOV EBP,dword ptr [0x005b7650]      ; 004c6216 | DAT_005b7650
    PUSH EBP                            ; 004c621c
    CALL core_event.cpp_CEventList_executeCommands_FUN_0047ab70 ; 004c621d
        ;   XREF to: 0047ab70 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_executeCommands_FUN_0047ab70()
        ;   Label: LAB_004c621d
    ADD ESP,0x8                         ; 004c6222
    MOV EAX,dword ptr [EBX + 0x408]     ; 004c6225
        ;   Label: LAB_004c6225
    TEST EAX,EAX                        ; 004c622b
    JNZ 0x004c62da                      ; 004c622d
        ;   XREF to: 004c62da (CONDITIONAL_JUMP)  ; LAB_004c62da
    XOR ESI,ESI                         ; 004c6233
        ;   Label: LAB_004c6233
    XOR EDI,EDI                         ; 004c6235
    MOV EAX,[0x005be368]                ; 004c6237 | DAT_005be368 | DAT_01e57284
        ;   Label: LAB_004c6237
    CMP EDI,dword ptr [EAX + 0x14cd6c]  ; 004c623c | DAT_01fa3ff0
    JGE 0x004c6314                      ; 004c6242
        ;   XREF to: 004c6314 (CONDITIONAL_JUMP)  ; LAB_004c6314
    MOV EBP,dword ptr [0x01cc3660]      ; 004c6248 | DAT_01cc3660
    PUSH EBP                            ; 004c624e
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x14cd70] ; 004c624f | DAT_01fa3ff4 | DAT_01fa3ff8
    PUSH EDX                            ; 004c6256
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004c6257
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 004c625c
    TEST EAX,EAX                        ; 004c625f
    JNZ 0x004c62ee                      ; 004c6261
        ;   XREF to: 004c62ee (CONDITIONAL_JUMP)  ; LAB_004c62ee
    INC EDI                             ; 004c6267
        ;   Label: LAB_004c6267
    ADD ESI,0x4                         ; 004c6268
    JMP 0x004c6237                      ; 004c626b
        ;   XREF to: 004c6237 (UNCONDITIONAL_JUMP)  ; LAB_004c6237
    FLD float ptr [ESP + 0x20]          ; 004c626d
        ;   Label: LAB_004c626d
    FMUL double ptr [0x00587925]        ; 004c6271 | DOUBLE_00587925
    FSUBR float ptr [EBX + 0x2d4]       ; 004c6277
    FST float ptr [EBX + 0x2d4]         ; 004c627d
    FCOMP float ptr [EBX + 0x414]       ; 004c6283
    FNSTSW AX                           ; 004c6289
    SAHF                                ; 004c628b
    JNC 0x004c6225                      ; 004c628c
        ;   XREF to: 004c6225 (CONDITIONAL_JUMP)  ; LAB_004c6225
    MOV dword ptr [EBX + 0x410],0x0     ; 004c628e
    FLD float ptr [EBX + 0x414]         ; 004c6298
    MOV ECX,dword ptr [EBX + 0x404]     ; 004c629e
    FSTP float ptr [EBX + 0x2d4]        ; 004c62a4
    TEST ECX,ECX                        ; 004c62aa
    JZ 0x004c6225                       ; 004c62ac
        ;   XREF to: 004c6225 (CONDITIONAL_JUMP)  ; LAB_004c6225
    FLD float ptr [EBX + 0x2d4]         ; 004c62b2
    FCOMP double ptr [0x0058792d]       ; 004c62b8 | DOUBLE_0058792d
    FNSTSW AX                           ; 004c62be
    SAHF                                ; 004c62c0
    JNC 0x004c6225                      ; 004c62c1
        ;   XREF to: 004c6225 (CONDITIONAL_JUMP)  ; LAB_004c6225
    LEA EAX,[EBX + 0x33c]               ; 004c62c7
    PUSH EAX                            ; 004c62cd
    MOV ESI,dword ptr [0x005b7650]      ; 004c62ce | DAT_005b7650
    PUSH ESI                            ; 004c62d4
    JMP 0x004c621d                      ; 004c62d5
        ;   XREF to: 004c621d (UNCONDITIONAL_JUMP)  ; LAB_004c621d
    PUSH dword ptr [EBX + 0x2d4]        ; 004c62da
        ;   Label: LAB_004c62da
    PUSH EAX                            ; 004c62e0
    CALL core_lever.cpp_CLever_setState_FUN_004c6390 ; 004c62e1
        ;   XREF to: 004c6390 (UNCONDITIONAL_CALL)  ; undefined core_lever.cpp_CLever_setState_FUN_004c6390()
    ADD ESP,0x8                         ; 004c62e6
    JMP 0x004c6233                      ; 004c62e9
        ;   XREF to: 004c6233 (UNCONDITIONAL_JUMP)  ; LAB_004c6233
    MOV ECX,dword ptr [EAX + 0x408]     ; 004c62ee
        ;   Label: LAB_004c62ee
    CMP EBX,ECX                         ; 004c62f4
    JNZ 0x004c6267                      ; 004c62f6
        ;   XREF to: 004c6267 (CONDITIONAL_JUMP)  ; LAB_004c6267
    PUSH dword ptr [ECX + 0x2d4]        ; 004c62fc
    PUSH EAX                            ; 004c6302
    CALL core_lever.cpp_CLever_setState_FUN_004c6390 ; 004c6303
        ;   XREF to: 004c6390 (UNCONDITIONAL_CALL)  ; undefined core_lever.cpp_CLever_setState_FUN_004c6390()
    ADD ESP,0x8                         ; 004c6308
    INC EDI                             ; 004c630b
    ADD ESI,0x4                         ; 004c630c
    JMP 0x004c6237                      ; 004c630f
        ;   XREF to: 004c6237 (UNCONDITIONAL_JUMP)  ; LAB_004c6237
    CMP dword ptr [EBX + 0x404],0x0     ; 004c6314
        ;   Label: LAB_004c6314
    JNZ 0x004c6367                      ; 004c631b
        ;   XREF to: 004c6367 (CONDITIONAL_JUMP)  ; LAB_004c6367
    FLD float ptr [EBX + 0x2d4]         ; 004c631d
    FCOMP double ptr [0x0058792d]       ; 004c6323 | DOUBLE_0058792d
    FNSTSW AX                           ; 004c6329
    SAHF                                ; 004c632b
    JNC 0x004c634d                      ; 004c632c
        ;   XREF to: 004c634d (CONDITIONAL_JUMP)  ; LAB_004c634d
    CMP byte ptr [EBX + 0x33c],0x0      ; 004c632e
    JZ 0x004c634d                       ; 004c6335
        ;   XREF to: 004c634d (CONDITIONAL_JUMP)  ; LAB_004c634d
    LEA EAX,[EBX + 0x33c]               ; 004c6337
    PUSH EAX                            ; 004c633d
    MOV EDI,dword ptr [0x005b7650]      ; 004c633e | DAT_005b7650
    PUSH EDI                            ; 004c6344
    CALL core_event.cpp_CEventList_executeCommands_FUN_0047ab70 ; 004c6345
        ;   XREF to: 0047ab70 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_executeCommands_FUN_0047ab70()
    ADD ESP,0x8                         ; 004c634a
    FLD float ptr [EBX + 0x2d4]         ; 004c634d
        ;   Label: LAB_004c634d
    FCOMP double ptr [0x00587935]       ; 004c6353 | DOUBLE_00587935
    FNSTSW AX                           ; 004c6359
    SAHF                                ; 004c635b
    JBE 0x004c6367                      ; 004c635c
        ;   XREF to: 004c6367 (CONDITIONAL_JUMP)  ; LAB_004c6367
    CMP byte ptr [EBX + 0x2d8],0x0      ; 004c635e
    JNZ 0x004c636f                      ; 004c6365
        ;   XREF to: 004c636f (CONDITIONAL_JUMP)  ; LAB_004c636f
    ADD ESP,0x8                         ; 004c6367
        ;   Label: LAB_004c6367
    POP EBP                             ; 004c636a
    POP EDI                             ; 004c636b
    POP ESI                             ; 004c636c
    POP EBX                             ; 004c636d
    RET                                 ; 004c636e
    ADD EBX,0x2d8                       ; 004c636f
        ;   Label: LAB_004c636f
    PUSH EBX                            ; 004c6375
    MOV EBP,dword ptr [0x005b7650]      ; 004c6376 | DAT_005b7650
    PUSH EBP                            ; 004c637c
    CALL core_event.cpp_CEventList_executeCommands_FUN_0047ab70 ; 004c637d
        ;   XREF to: 0047ab70 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_executeCommands_FUN_0047ab70()
    ADD ESP,0x8                         ; 004c6382
    ADD ESP,0x8                         ; 004c6385
    POP EBP                             ; 004c6388
    POP EDI                             ; 004c6389
    POP ESI                             ; 004c638a
    POP EBX                             ; 004c638b
    RET                                 ; 004c638c

