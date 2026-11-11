; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_004a1200_cpp_FUN_004a1390(char *param_1)
;
;
; XREF[3]:
;   core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004a41b0 at 004a447d
;   core_fldnotes.cpp_STextView_layoutChunk_FUN_004a28b0 at 004a29c5
;   unkaddr_004a1200.cpp_FUN_004a1420 at 004a143e
;
; Referenced Globals:
;   undefined4 DAT_0061ed94
;
; Called Functions:
;   crt_string.c_memmove_FUN_005ba1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1390
        ;   Label: unkaddr_004a1200.cpp_FUN_004a1390
    PUSH ESI                            ; 004a1391
    PUSH EDI                            ; 004a1392
    MOV ESI,dword ptr [ESP + 0x10]      ; 004a1393
    MOV EDI,ESI                         ; 004a1397
    SUB ECX,ECX                         ; 004a1399
    DEC ECX                             ; 004a139b
    XOR EAX,EAX                         ; 004a139c
    SCASB.REPNE ES:EDI                  ; 004a139e
    NOT ECX                             ; 004a13a0
    DEC ECX                             ; 004a13a2
    MOV EBX,ECX                         ; 004a13a3
    TEST ECX,ECX                        ; 004a13a5
    JLE 0x004a13c0                      ; 004a13a7
        ;   XREF to: 004a13c0 (CONDITIONAL_JUMP)  ; LAB_004a13c0
    LEA EAX,[ECX + ESI*0x1]             ; 004a13a9
    MOV DL,byte ptr [EAX + -0x1]        ; 004a13ac
        ;   Label: LAB_004a13ac
    INC DL                              ; 004a13af
    AND EDX,0xff                        ; 004a13b1
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 004a13b7 | DAT_0061ed94
    JNZ 0x004a13e9                      ; 004a13be
        ;   XREF to: 004a13e9 (CONDITIONAL_JUMP)  ; LAB_004a13e9
    LEA EAX,[ESI + EBX*0x1]             ; 004a13c0
        ;   Label: LAB_004a13c0
    LEA EDI,[ESI + 0x1]                 ; 004a13c3
    MOV byte ptr [EAX],0x0              ; 004a13c6
    MOV AL,byte ptr [ESI]               ; 004a13c9
        ;   Label: LAB_004a13c9
    INC AL                              ; 004a13cb
    AND EAX,0xff                        ; 004a13cd
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 004a13d2 | DAT_0061ed94
    JZ 0x004a13f1                       ; 004a13d9
        ;   XREF to: 004a13f1 (CONDITIONAL_JUMP)  ; LAB_004a13f1
    PUSH EBX                            ; 004a13db
    PUSH EDI                            ; 004a13dc
    PUSH ESI                            ; 004a13dd
    DEC EBX                             ; 004a13de
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 004a13df
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004a13e4
    JMP 0x004a13c9                      ; 004a13e7
        ;   XREF to: 004a13c9 (UNCONDITIONAL_JUMP)  ; LAB_004a13c9
    DEC EBX                             ; 004a13e9
        ;   Label: LAB_004a13e9
    DEC EAX                             ; 004a13ea
    TEST EBX,EBX                        ; 004a13eb
    JG 0x004a13ac                       ; 004a13ed
        ;   XREF to: 004a13ac (CONDITIONAL_JUMP)  ; LAB_004a13ac
    JMP 0x004a13c0                      ; 004a13ef
        ;   XREF to: 004a13c0 (UNCONDITIONAL_JUMP)  ; LAB_004a13c0
    XOR EDX,EDX                         ; 004a13f1
        ;   Label: LAB_004a13f1
    TEST EBX,EBX                        ; 004a13f3
    JLE 0x004a140f                      ; 004a13f5
        ;   XREF to: 004a140f (CONDITIONAL_JUMP)  ; LAB_004a140f
    MOV EAX,ESI                         ; 004a13f7
    MOV CL,byte ptr [EAX]               ; 004a13f9
        ;   Label: LAB_004a13f9
    INC CL                              ; 004a13fb
    MOVZX ESI,CL                        ; 004a13fd
    TEST byte ptr [ESI + 0x61ed94],0x2  ; 004a1400 | DAT_0061ed94
    JNZ 0x004a1413                      ; 004a1407
        ;   XREF to: 004a1413 (CONDITIONAL_JUMP)  ; LAB_004a1413
    INC EDX                             ; 004a1409
    INC EAX                             ; 004a140a
    CMP EDX,EBX                         ; 004a140b
    JL 0x004a13f9                       ; 004a140d
        ;   XREF to: 004a13f9 (CONDITIONAL_JUMP)  ; LAB_004a13f9
    POP EDI                             ; 004a140f
        ;   Label: LAB_004a140f
    POP ESI                             ; 004a1410
    POP EBX                             ; 004a1411
    RET                                 ; 004a1412
    MOV byte ptr [EAX],0x20             ; 004a1413
        ;   Label: LAB_004a1413
    INC EDX                             ; 004a1416
    INC EAX                             ; 004a1417
    CMP EDX,EBX                         ; 004a1418
    JL 0x004a13f9                       ; 004a141a
        ;   XREF to: 004a13f9 (CONDITIONAL_JUMP)  ; LAB_004a13f9
    POP EDI                             ; 004a141c
    POP ESI                             ; 004a141d
    POP EBX                             ; 004a141e
    RET                                 ; 004a141f

