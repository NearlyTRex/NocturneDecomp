; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00468250(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,float *param_6)
;
;
; XREF[1]:
;   FUN_005562c0 at 00556f2b
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_005d96d7
;   TerminatedCString s_Tried_to_call_CKeyFramed_005d96ea
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_00468420
;   FUN_00490a40
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468250
        ;   Label: FUN_00468250
    PUSH ESI                            ; 00468251
    PUSH EDI                            ; 00468252
    PUSH EBP                            ; 00468253
    MOV EDI,dword ptr [ESP + 0x14]      ; 00468254
    MOV ESI,dword ptr [ESP + 0x18]      ; 00468258
    MOV EBP,dword ptr [ESP + 0x28]      ; 0046825c
    MOV EDX,dword ptr [EDI + 0x100]     ; 00468260
    CMP ESI,EDX                         ; 00468266
    JL 0x0046826d                       ; 00468268
        ;   XREF to: 0046826d (CONDITIONAL_JUMP)  ; LAB_0046826d
    LEA ESI,[EDX + -0x1]                ; 0046826a
    TEST ESI,ESI                        ; 0046826d
        ;   Label: LAB_0046826d
    JL 0x00468319                       ; 0046826f
        ;   XREF to: 00468319 (CONDITIONAL_JUMP)  ; LAB_00468319
    CMP dword ptr [EDI + 0x358],0x0     ; 00468275
        ;   Label: LAB_00468275
    JNZ 0x004682a1                      ; 0046827c
        ;   XREF to: 004682a1 (CONDITIONAL_JUMP)  ; LAB_004682a1
    PUSH EDI                            ; 0046827e
    MOV EBX,0x5d96d7                    ; 0046827f | = "..\\core\\dmodel.cpp"
    MOV EAX,0x43e                       ; 00468284
    PUSH 0x5d96ea                       ; 00468289 | = "Tried to call CKeyFramedModel::getFlo..."
    MOV dword ptr [0x01d1d400],EBX      ; 0046828e | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00468294 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00468299
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 0046829e
    LEA EBX,[EDI + 0x364]               ; 004682a1
        ;   Label: LAB_004682a1
    FLD float ptr [EBX]                 ; 004682a7
    FCOMP float ptr [EBP]               ; 004682a9
    FNSTSW AX                           ; 004682ac
    SAHF                                ; 004682ae
    JZ 0x00468320                       ; 004682af
        ;   XREF to: 00468320 (CONDITIONAL_JUMP)  ; LAB_00468320
    PUSH EBP                            ; 004682b1
        ;   Label: LAB_004682b1
    PUSH EDI                            ; 004682b2
    CALL FUN_00468420                   ; 004682b3
        ;   XREF to: 00468420 (UNCONDITIONAL_CALL)  ; undefined FUN_00468420()
    ADD ESP,0x8                         ; 004682b8
    MOV EAX,dword ptr [EDI + 0x354]     ; 004682bb
        ;   Label: LAB_004682bb
    IMUL EAX,ESI                        ; 004682c1
    SHL EAX,0x3                         ; 004682c4
    MOV EDX,dword ptr [EDI + 0x354]     ; 004682c7
    MOV EBX,EAX                         ; 004682cd
    SHL EAX,0x3                         ; 004682cf
    MOV ESI,dword ptr [EDI + 0x358]     ; 004682d2
    SUB EAX,EBX                         ; 004682d8
    XOR EBP,EBP                         ; 004682da
    ADD ESI,EAX                         ; 004682dc
    XOR EBX,EBX                         ; 004682de
    TEST EDX,EDX                        ; 004682e0
    JLE 0x00468312                      ; 004682e2
        ;   XREF to: 00468312 (CONDITIONAL_JUMP)  ; LAB_00468312
    MOV EAX,dword ptr [ESP + 0x24]      ; 004682e4
        ;   Label: LAB_004682e4
    PUSH EAX                            ; 004682e8
    MOV EDX,dword ptr [ESP + 0x20]      ; 004682e9
    PUSH dword ptr [ESP + 0x24]         ; 004682ed
    PUSH EDX                            ; 004682f1
    PUSH ESI                            ; 004682f2
    CALL FUN_00490a40                   ; 004682f3
        ;   XREF to: 00490a40 (UNCONDITIONAL_CALL)  ; undefined FUN_00490a40()
    ADD ESP,0x10                        ; 004682f8
    TEST EAX,EAX                        ; 004682fb
    JZ 0x00468304                       ; 004682fd
        ;   XREF to: 00468304 (CONDITIONAL_JUMP)  ; LAB_00468304
    MOV EBP,0x1                         ; 004682ff
    INC EBX                             ; 00468304
        ;   Label: LAB_00468304
    MOV ECX,dword ptr [EDI + 0x354]     ; 00468305
    ADD ESI,0x38                        ; 0046830b
    CMP EBX,ECX                         ; 0046830e
    JL 0x004682e4                       ; 00468310
        ;   XREF to: 004682e4 (CONDITIONAL_JUMP)  ; LAB_004682e4
    MOV EAX,EBP                         ; 00468312
        ;   Label: LAB_00468312
    POP EBP                             ; 00468314
    POP EDI                             ; 00468315
    POP ESI                             ; 00468316
    POP EBX                             ; 00468317
    RET                                 ; 00468318
    XOR ESI,ESI                         ; 00468319
        ;   Label: LAB_00468319
    JMP 0x00468275                      ; 0046831b
        ;   XREF to: 00468275 (UNCONDITIONAL_JUMP)  ; LAB_00468275
    FLD float ptr [EBX + 0x4]           ; 00468320
        ;   Label: LAB_00468320
    FCOMP float ptr [EBP + 0x4]         ; 00468323
    FNSTSW AX                           ; 00468326
    SAHF                                ; 00468328
    JNZ 0x004682b1                      ; 00468329
        ;   XREF to: 004682b1 (CONDITIONAL_JUMP)  ; LAB_004682b1
    FLD float ptr [EBX + 0x8]           ; 0046832b
    FCOMP float ptr [EBP + 0x8]         ; 0046832e
    FNSTSW AX                           ; 00468331
    SAHF                                ; 00468333
    JZ 0x004682bb                       ; 00468334
        ;   XREF to: 004682bb (CONDITIONAL_JUMP)  ; LAB_004682bb
    JMP 0x004682b1                      ; 00468336
        ;   XREF to: 004682b1 (UNCONDITIONAL_JUMP)  ; LAB_004682b1

