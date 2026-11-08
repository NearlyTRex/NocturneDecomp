; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_00520150(undefined4 param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x60]:1  local_60
;
; XREF[1]:
;   FUN_004fcb40 at 004fcb98
;
; Referenced Globals:
;   undefined4 DAT_005ea11a
;   TerminatedCString s_models_005ea11d
;   TerminatedCString s_Unable_to_open_model_s_005ea124
;   TerminatedCString s_engine_model_c_005ea13d
;   TerminatedCString s_Out_of_partial_model_mem_005ea14f
;   TerminatedCString s_engine_model_c_005ea16d
;   TerminatedCString s_engine_model_c_005ea17f
;   TerminatedCString s_Model_read_hose_005ea191
;   TerminatedCString s_engine_model_c_005ea1a1
;   TerminatedCString s_Bad_model_005ea1b3
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_00479180
;   FUN_005030e0
;   FUN_005bfb40
;   FUN_005c08d0
;   FUN_005c0b10
;   FUN_005c0d10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00520150
        ;   Label: FUN_00520150
    PUSH ESI                            ; 00520151
    PUSH EDI                            ; 00520152
    PUSH EBP                            ; 00520153
    SUB ESP,0x50                        ; 00520154
    MOV EBP,dword ptr [ESP + 0x64]      ; 00520157
    MOV EDI,dword ptr [ESP + 0x68]      ; 0052015b
    PUSH 0x5ea11a                       ; 0052015f | DAT_005ea11a
    PUSH EBP                            ; 00520164
    PUSH 0x5ea11d                       ; 00520165 | = "models"
    CALL FUN_00479180                   ; 0052016a
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; undefined FUN_00479180()
    ADD ESP,0xc                         ; 0052016f
    MOV ESI,EAX                         ; 00520172
    TEST EAX,EAX                        ; 00520174
    JZ 0x0052021d                       ; 00520176
        ;   XREF to: 0052021d (CONDITIONAL_JUMP)  ; LAB_0052021d
    LEA EAX,[EDI + 0x4]                 ; 0052017c
        ;   Label: LAB_0052017c
    PUSH EAX                            ; 0052017f
    CALL FUN_005c08d0                   ; 00520180
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c08d0()
    ADD ESP,0x4                         ; 00520185
    MOV EBX,EAX                         ; 00520188
    TEST EAX,EAX                        ; 0052018a
    JNZ 0x005201c1                      ; 0052018c
        ;   XREF to: 005201c1 (CONDITIONAL_JUMP)  ; LAB_005201c1
    PUSH EBP                            ; 0052018e
    PUSH 0x5ea14f                       ; 0052018f | = "Out of partial model mem : %s"
    LEA EAX,[ESP + 0x8]                 ; 00520194
    PUSH EAX                            ; 00520198
    CALL FUN_005bfb40                   ; 00520199
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    MOV EAX,0x2ef                       ; 0052019e
    ADD ESP,0xc                         ; 005201a3
    MOV [0x01d1d404],EAX                ; 005201a6 | DAT_01d1d404
    MOV EAX,ESP                         ; 005201ab
    MOV EBP,0x5ea16d                    ; 005201ad | = "..\\engine\\model.c"
    PUSH EAX                            ; 005201b2
    MOV dword ptr [0x01d1d400],EBP      ; 005201b3 | DAT_01d1d400
    CALL FUN_005030e0                   ; 005201b9
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 005201be
    PUSH ESI                            ; 005201c1
        ;   Label: LAB_005201c1
    PUSH EDI                            ; 005201c2
    PUSH 0x1                            ; 005201c3
    PUSH EBX                            ; 005201c5
    CALL FUN_005c0b10                   ; 005201c6
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    ADD ESP,0x10                        ; 005201cb
    CMP EAX,EDI                         ; 005201ce
    JZ 0x005201f5                       ; 005201d0
        ;   XREF to: 005201f5 (CONDITIONAL_JUMP)  ; LAB_005201f5
    MOV EDX,0x5ea17f                    ; 005201d2 | = "..\\engine\\model.c"
    MOV ECX,0x2f4                       ; 005201d7
    PUSH 0x5ea191                       ; 005201dc | = "Model read hose"
    MOV dword ptr [0x01d1d400],EDX      ; 005201e1 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 005201e7 | DAT_01d1d404
    CALL FUN_005030e0                   ; 005201ed
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 005201f2
    PUSH ESI                            ; 005201f5
        ;   Label: LAB_005201f5
    CALL FUN_005c0d10                   ; 005201f6
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0d10()
    XOR EAX,EAX                         ; 005201fb
    MOV AL,byte ptr [EBX]               ; 005201fd
    ADD ESP,0x4                         ; 005201ff
    CMP EAX,0x14                        ; 00520202
    JZ 0x0052020c                       ; 00520205
        ;   XREF to: 0052020c (CONDITIONAL_JUMP)  ; LAB_0052020c
    CMP EAX,0x20                        ; 00520207
    JNZ 0x00520256                      ; 0052020a
        ;   XREF to: 00520256 (CONDITIONAL_JUMP)  ; LAB_00520256
    MOV EAX,EBX                         ; 0052020c
        ;   Label: LAB_0052020c
    MOV dword ptr [EDI + EBX*0x1],0x0   ; 0052020e
    ADD ESP,0x50                        ; 00520215
    POP EBP                             ; 00520218
    POP EDI                             ; 00520219
    POP ESI                             ; 0052021a
    POP EBX                             ; 0052021b
    RET                                 ; 0052021c
    PUSH EBP                            ; 0052021d
        ;   Label: LAB_0052021d
    PUSH 0x5ea124                       ; 0052021e | = "Unable to open model: %s"
    LEA EAX,[ESP + 0x8]                 ; 00520223
    PUSH EAX                            ; 00520227
    CALL FUN_005bfb40                   ; 00520228
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    MOV EDX,0x5ea13d                    ; 0052022d | = "..\\engine\\model.c"
    ADD ESP,0xc                         ; 00520232
    MOV EAX,ESP                         ; 00520235
    MOV ECX,0x2e4                       ; 00520237
    PUSH EAX                            ; 0052023c
    MOV dword ptr [0x01d1d400],EDX      ; 0052023d | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00520243 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00520249
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0052024e
    JMP 0x0052017c                      ; 00520251
        ;   XREF to: 0052017c (UNCONDITIONAL_JUMP)  ; LAB_0052017c
    MOV ESI,0x5ea1a1                    ; 00520256 | = "..\\engine\\model.c"
        ;   Label: LAB_00520256
    MOV EBP,0x2f8                       ; 0052025b
    PUSH 0x5ea1b3                       ; 00520260 | = "Bad model!"
    MOV dword ptr [0x01d1d400],ESI      ; 00520265 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 0052026b | DAT_01d1d404
    CALL FUN_005030e0                   ; 00520271
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00520276
    MOV EAX,EBX                         ; 00520279
    MOV dword ptr [EDI + EBX*0x1],0x0   ; 0052027b
    ADD ESP,0x50                        ; 00520282
    POP EBP                             ; 00520285
    POP EDI                             ; 00520286
    POP ESI                             ; 00520287
    POP EBX                             ; 00520288
    RET                                 ; 00520289

