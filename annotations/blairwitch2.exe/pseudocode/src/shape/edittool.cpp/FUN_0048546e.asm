; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0048546e(CEdCheck *param_1,int param_2,int param_3,char *param_4)
;
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 0048546e
        ;   Label: shape_edittool.cpp_FUN_0048546e
    PUSH EBX                            ; 00485470
    PUSH ESI                            ; 00485471
    PUSH EDI                            ; 00485472
    PUSH EBP                            ; 00485473
    MOV EBX,dword ptr [ESP + 0x14]      ; 00485474
    MOV ESI,dword ptr [ESP + 0x20]      ; 00485478
    TEST ESI,ESI                        ; 0048547c
    JNZ 0x00485485                      ; 0048547e
        ;   XREF to: 00485485 (CONDITIONAL_JUMP)  ; LAB_00485485
    MOV ESI,0x5d2b05                    ; 00485480
    MOV EAX,dword ptr [ESP + 0x18]      ; 00485485
        ;   Label: LAB_00485485
    MOV dword ptr [EBX + 0x10],EAX      ; 00485489
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048548c
    LEA EDI,[EBX + 0x24]                ; 00485490
    MOV dword ptr [EBX + 0x14],EAX      ; 00485493
    PUSH EDI                            ; 00485496
    MOV AL,byte ptr [ESI]               ; 00485497
        ;   Label: LAB_00485497
    MOV byte ptr [EDI],AL               ; 00485499
    CMP AL,0x0                          ; 0048549b
    JZ 0x004854af                       ; 0048549d
        ;   XREF to: 004854af (CONDITIONAL_JUMP)  ; LAB_004854af
    MOV AL,byte ptr [ESI + 0x1]         ; 0048549f
    ADD ESI,0x2                         ; 004854a2
    MOV byte ptr [EDI + 0x1],AL         ; 004854a5
    ADD EDI,0x2                         ; 004854a8
    CMP AL,0x0                          ; 004854ab
    JNZ 0x00485497                      ; 004854ad
        ;   XREF to: 00485497 (CONDITIONAL_JUMP)  ; LAB_00485497
    POP EDI                             ; 004854af
        ;   Label: LAB_004854af

