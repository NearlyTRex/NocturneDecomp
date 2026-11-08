; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a5310(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00489670 at 00489e17
;
; Referenced Globals:
;   void* switchdataD_004a52ec = 004a5361
;   TerminatedCString s_CFieldNotes_enableEntry_005d6326
;   TerminatedCString s_core_fldnotes_cpp_005d6356
;   TerminatedCString s_Field_note_s_has_invalid_005d636b
;   undefined4 DAT_006138e0
;   undefined4 DAT_00616014
;   undefined4 DAT_01cab9f0
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_0047be40
;   FUN_004a35e0
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a5310
        ;   Label: FUN_004a5310
    PUSH ESI                            ; 004a5311
    PUSH EDI                            ; 004a5312
    PUSH EBP                            ; 004a5313
    MOV EDI,dword ptr [ESP + 0x18]      ; 004a5314
    MOV EDX,dword ptr [0x01cab9f0]      ; 004a5318 | DAT_01cab9f0
    XOR EBP,EBP                         ; 004a531e
    XOR EBX,EBX                         ; 004a5320
    TEST EDX,EDX                        ; 004a5322
    JLE 0x004a53ac                      ; 004a5324
        ;   XREF to: 004a53ac (CONDITIONAL_JUMP)  ; LAB_004a53ac
    MOV ESI,0x1cab9f4                   ; 004a532a
    PUSH EDI                            ; 004a532f
        ;   Label: LAB_004a532f
    PUSH ESI                            ; 004a5330
    CALL FUN_004a35e0                   ; 004a5331
        ;   XREF to: 004a35e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a35e0()
    ADD ESP,0x8                         ; 004a5336
    MOV EDX,EAX                         ; 004a5339
    TEST EAX,EAX                        ; 004a533b
    JZ 0x004a539b                       ; 004a533d
        ;   XREF to: 004a539b (CONDITIONAL_JUMP)  ; LAB_004a539b
    TEST EBP,EBP                        ; 004a533f
    JZ 0x004a5346                       ; 004a5341
        ;   XREF to: 004a5346 (CONDITIONAL_JUMP)  ; LAB_004a5346
    MOV dword ptr [EBP],EBX             ; 004a5343
    MOV EAX,EDX                         ; 004a5346
        ;   Label: LAB_004a5346
    MOV EBX,EAX                         ; 004a5348
        ;   Label: LAB_004a5348
    TEST EAX,EAX                        ; 004a534a
    JZ 0x004a53b0                       ; 004a534c
        ;   XREF to: 004a53b0 (CONDITIONAL_JUMP)  ; LAB_004a53b0
    MOV EDX,dword ptr [EAX + 0x140]     ; 004a534e
    INC EDX                             ; 004a5354
    CMP EDX,0x7                         ; 004a5355
    JA 0x004a5361                       ; 004a5358
        ;   XREF to: 004a5361 (CONDITIONAL_JUMP)  ; caseD_ffffffff
    JMP dword ptr [EDX*0x4 + 0x4a52ec]  ; 004a535a | caseD_ffffffff | caseD_0 | caseD_6
        ;   Label: switchD
    MOV EBP,dword ptr [EBX + 0x140]     ; 004a5361
        ;   Label: caseD_ffffffff
    PUSH EBP                            ; 004a5367
    PUSH EBX                            ; 004a5368
    MOV ESI,0x5d6356                    ; 004a5369 | = "..\\core\\fldnotes.cpp"
    MOV EDI,0xa0d                       ; 004a536e
    PUSH 0x5d636b                       ; 004a5373 | = "Field note %s has invalid type %d"
    MOV dword ptr [0x01d046a0],ESI      ; 004a5378 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 004a537e | DAT_01d046a4
    CALL FUN_004e4500                   ; 004a5384
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0xc                         ; 004a5389
    MOV dword ptr [0x00616014],0x1      ; 004a538c | DAT_00616014
        ;   Label: caseD_1
    POP EBP                             ; 004a5396
    POP EDI                             ; 004a5397
    POP ESI                             ; 004a5398
    POP EBX                             ; 004a5399
    RET                                 ; 004a539a
    MOV ECX,dword ptr [0x01cab9f0]      ; 004a539b | DAT_01cab9f0
        ;   Label: LAB_004a539b
    INC EBX                             ; 004a53a1
    ADD ESI,0x2e4                       ; 004a53a2
    CMP EBX,ECX                         ; 004a53a8
    JL 0x004a532f                       ; 004a53aa
        ;   XREF to: 004a532f (CONDITIONAL_JUMP)  ; LAB_004a532f
    XOR EAX,EAX                         ; 004a53ac
        ;   Label: LAB_004a53ac
    JMP 0x004a5348                      ; 004a53ae
        ;   XREF to: 004a5348 (UNCONDITIONAL_JUMP)  ; LAB_004a5348
    MOV EAX,dword ptr [ESP + 0x18]      ; 004a53b0
        ;   Label: LAB_004a53b0
    PUSH EAX                            ; 004a53b4
    PUSH 0x5d6326                       ; 004a53b5 | = "CFieldNotes::enableEntry - entry '%s'..."
    MOV EDX,dword ptr [0x006138e0]      ; 004a53ba | DAT_006138e0
    PUSH EDX                            ; 004a53c0
    CALL FUN_0047be40                   ; 004a53c1
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; undefined FUN_0047be40()
    ADD ESP,0xc                         ; 004a53c6
    MOV dword ptr [0x00616014],0x1      ; 004a53c9 | DAT_00616014
    POP EBP                             ; 004a53d3
    POP EDI                             ; 004a53d4
    POP ESI                             ; 004a53d5
    POP EBX                             ; 004a53d6
    RET                                 ; 004a53d7
    MOV dword ptr [EAX + 0x140],0x1     ; 004a53d8
        ;   Label: caseD_0
    MOV dword ptr [0x00616014],0x1      ; 004a53e2 | DAT_00616014
    POP EBP                             ; 004a53ec
    POP EDI                             ; 004a53ed
    POP ESI                             ; 004a53ee
    POP EBX                             ; 004a53ef
    RET                                 ; 004a53f0
    MOV dword ptr [EAX + 0x140],0x3     ; 004a53f1
        ;   Label: caseD_2
    MOV dword ptr [0x00616014],0x1      ; 004a53fb | DAT_00616014
    POP EBP                             ; 004a5405
    POP EDI                             ; 004a5406
    POP ESI                             ; 004a5407
    POP EBX                             ; 004a5408
    RET                                 ; 004a5409
    MOV dword ptr [EAX + 0x140],0x6     ; 004a540a
        ;   Label: caseD_5
    MOV dword ptr [0x00616014],0x1      ; 004a5414 | DAT_00616014
    POP EBP                             ; 004a541e
    POP EDI                             ; 004a541f
    POP ESI                             ; 004a5420
    POP EBX                             ; 004a5421
    RET                                 ; 004a5422

