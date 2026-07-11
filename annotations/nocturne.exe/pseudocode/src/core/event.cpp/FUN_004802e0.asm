; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004802e0(int param_1,char *param_2,int param_3)
;
;
; XREF[1]:
;   FUN_0047ac50 at 0047b6d1
;
; Referenced Globals:
;   undefined4 s_..\\core\\event.cpp_00580a05+2
;   string s_Too_many_persistent_events!_00580a19
;   string s_..\\core\\event.cpp_00580a35
;   string s_Event_name_%s_too_long!_00580a47
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_00480810
;   FUN_004c8440
;   FUN_00566170
;   FUN_00566ad0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004802e0
        ;   Label: FUN_004802e0
    PUSH ESI                            ; 004802e1
    PUSH EBP                            ; 004802e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004802e3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004802e7
    TEST ESI,ESI                        ; 004802eb
    JZ 0x004802f4                       ; 004802ed
        ;   XREF to: 004802f4 (CONDITIONAL_JUMP)  ; LAB_004802f4
    CMP byte ptr [ESI],0x0              ; 004802ef
    JNZ 0x004802f8                      ; 004802f2
        ;   XREF to: 004802f8 (CONDITIONAL_JUMP)  ; LAB_004802f8
    POP EBP                             ; 004802f4
        ;   Label: LAB_004802f4
    POP ESI                             ; 004802f5
    POP EBX                             ; 004802f6
    RET                                 ; 004802f7
    PUSH ESI                            ; 004802f8
        ;   Label: LAB_004802f8
    PUSH EBX                            ; 004802f9
    CALL FUN_00480810                   ; 004802fa
        ;   XREF to: 00480810 (UNCONDITIONAL_CALL)  ; undefined FUN_00480810()
    ADD ESP,0x8                         ; 004802ff
    CMP dword ptr [ESP + 0x18],0x0      ; 00480302
    JZ 0x004803cc                       ; 00480307
        ;   XREF to: 004803cc (CONDITIONAL_JUMP)  ; LAB_004803cc
    TEST EAX,EAX                        ; 0048030d
    JGE 0x004802f4                      ; 0048030f
        ;   XREF to: 004802f4 (CONDITIONAL_JUMP)  ; LAB_004802f4
    CMP dword ptr [EBX + 0x258c],0x64   ; 00480311
    JGE 0x004803a5                      ; 00480318
        ;   XREF to: 004803a5 (CONDITIONAL_JUMP)  ; LAB_004803a5
    PUSH EDI                            ; 0048031e
        ;   Label: LAB_0048031e
    MOV EDI,ESI                         ; 0048031f
    SUB ECX,ECX                         ; 00480321
    DEC ECX                             ; 00480323
    XOR EAX,EAX                         ; 00480324
    SCASB.REPNE ES:EDI                  ; 00480326
    NOT ECX                             ; 00480328
    DEC ECX                             ; 0048032a
    CMP ECX,0x20                        ; 0048032b
    JC 0x00480354                       ; 0048032e
        ;   XREF to: 00480354 (CONDITIONAL_JUMP)  ; LAB_00480354
    PUSH ESI                            ; 00480330
    MOV EDX,0x580a35                    ; 00480331 | = "..\\core\\event.cpp"
    MOV ECX,0x9fb                       ; 00480336
    PUSH 0x580a47                       ; 0048033b | = "Event name %s too long!"
    MOV dword ptr [0x01cc4800],EDX      ; 00480340 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00480346 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0048034c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 00480351
    MOV EDI,dword ptr [EBX + 0x258c]    ; 00480354
        ;   Label: LAB_00480354
    LEA EDX,[EBX + 0x2590]              ; 0048035a
    SHL EDI,0x5                         ; 00480360
    ADD EDI,EDX                         ; 00480363
    PUSH EDI                            ; 00480365
    MOV AL,byte ptr [ESI]               ; 00480366
        ;   Label: LAB_00480366
    MOV byte ptr [EDI],AL               ; 00480368
    CMP AL,0x0                          ; 0048036a
    JZ 0x0048037e                       ; 0048036c
        ;   XREF to: 0048037e (CONDITIONAL_JUMP)  ; LAB_0048037e
    MOV AL,byte ptr [ESI + 0x1]         ; 0048036e
    ADD ESI,0x2                         ; 00480371
    MOV byte ptr [EDI + 0x1],AL         ; 00480374
    ADD EDI,0x2                         ; 00480377
    CMP AL,0x0                          ; 0048037a
    JNZ 0x00480366                      ; 0048037c
        ;   XREF to: 00480366 (CONDITIONAL_JUMP)  ; LAB_00480366
    POP EDI                             ; 0048037e
        ;   Label: LAB_0048037e
    MOV EAX,dword ptr [EBX + 0x258c]    ; 0048037f
    SHL EAX,0x5                         ; 00480385
    ADD EDX,EAX                         ; 00480388
    PUSH EDX                            ; 0048038a
    CALL FUN_00566ad0                   ; 0048038b
        ;   XREF to: 00566ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_00566ad0()
    MOV ESI,dword ptr [EBX + 0x258c]    ; 00480390
    INC ESI                             ; 00480396
    ADD ESP,0x4                         ; 00480397
    MOV dword ptr [EBX + 0x258c],ESI    ; 0048039a
    POP EDI                             ; 004803a0
    POP EBP                             ; 004803a1
    POP ESI                             ; 004803a2
    POP EBX                             ; 004803a3
    RET                                 ; 004803a4
    MOV EBP,0x580a07                    ; 004803a5 | s_..\core\event.cpp_00580a05+2
        ;   Label: LAB_004803a5
    MOV EAX,0x9f5                       ; 004803aa
    PUSH 0x580a19                       ; 004803af | = "Too many persistent events!"
    MOV dword ptr [0x01cc4800],EBP      ; 004803b4 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004803ba | DAT_01cc4804
    CALL FUN_004c8440                   ; 004803bf
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004803c4
    JMP 0x0048031e                      ; 004803c7
        ;   XREF to: 0048031e (UNCONDITIONAL_JUMP)  ; LAB_0048031e
    TEST EAX,EAX                        ; 004803cc
        ;   Label: LAB_004803cc
    JL 0x004802f4                       ; 004803ce
        ;   XREF to: 004802f4 (CONDITIONAL_JUMP)  ; LAB_004802f4
    MOV ECX,dword ptr [EBX + 0x258c]    ; 004803d4
    DEC ECX                             ; 004803da
    MOV EDX,ECX                         ; 004803db
    SUB EDX,EAX                         ; 004803dd
    ADD EBX,0x2590                      ; 004803df
    SHL EDX,0x5                         ; 004803e5
    SHL EAX,0x5                         ; 004803e8
    PUSH EDX                            ; 004803eb
    LEA EDX,[EAX + 0x20]                ; 004803ec
    ADD EDX,EBX                         ; 004803ef
    PUSH EDX                            ; 004803f1
    ADD EAX,EBX                         ; 004803f2
    PUSH EAX                            ; 004803f4
    MOV dword ptr [EBX + -0x4],ECX      ; 004803f5
    CALL FUN_00566170                   ; 004803f8
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined FUN_00566170()
    ADD ESP,0xc                         ; 004803fd
    POP EBP                             ; 00480400
    POP ESI                             ; 00480401
    POP EBX                             ; 00480402
    RET                                 ; 00480403

