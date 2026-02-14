; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_script_cpp_CCmdParse_toString_FUN_005624f0(CCmdParse *this_ptr,char *output_buffer)
;
; Parameters:
; CCmdParse *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   output_buffer
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_script.cpp_CScript_setParameterValue_FUN_00565f70 at 00566013
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005624f0
        ;   Label: core_script.cpp_CCmdParse_toString_FUN_005624f0
    PUSH ESI                            ; 005624f1
    PUSH EDI                            ; 005624f2
    PUSH EBP                            ; 005624f3
    SUB ESP,0x4                         ; 005624f4
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005624f7
    MOV ESI,dword ptr [ESP + 0x18]      ; 005624fb
    MOV EDI,EDX                         ; 005624ff
    ADD ESI,0x4                         ; 00562501
    PUSH EDI                            ; 00562504
    MOV AL,byte ptr [ESI]               ; 00562505
        ;   Label: LAB_00562505
    MOV byte ptr [EDI],AL               ; 00562507
    CMP AL,0x0                          ; 00562509
    JZ 0x0056251d                       ; 0056250b
        ;   XREF to: 0056251d (CONDITIONAL_JUMP)  ; LAB_0056251d
    MOV AL,byte ptr [ESI + 0x1]         ; 0056250d
    ADD ESI,0x2                         ; 00562510
    MOV byte ptr [EDI + 0x1],AL         ; 00562513
    ADD EDI,0x2                         ; 00562516
    CMP AL,0x0                          ; 00562519
    JNZ 0x00562505                      ; 0056251b
        ;   XREF to: 00562505 (CONDITIONAL_JUMP)  ; LAB_00562505
    POP EDI                             ; 0056251d
        ;   Label: LAB_0056251d
    MOV ESI,dword ptr [ESP + 0x18]      ; 0056251e
    ADD ESI,0x68                        ; 00562522
    MOV EBX,dword ptr [ESP + 0x18]      ; 00562525
    PUSH EDI                            ; 00562529
    SUB ECX,ECX                         ; 0056252a
    DEC ECX                             ; 0056252c
    MOV AL,0x0                          ; 0056252d
    SCASB.REPNE ES:EDI                  ; 0056252f
    DEC EDI                             ; 00562531
    MOV AL,byte ptr [ESI]               ; 00562532
        ;   Label: LAB_00562532
    MOV byte ptr [EDI],AL               ; 00562534
    CMP AL,0x0                          ; 00562536
    JZ 0x0056254a                       ; 00562538
        ;   XREF to: 0056254a (CONDITIONAL_JUMP)  ; LAB_0056254a
    MOV AL,byte ptr [ESI + 0x1]         ; 0056253a
    ADD ESI,0x2                         ; 0056253d
    MOV byte ptr [EDI + 0x1],AL         ; 00562540
    ADD EDI,0x2                         ; 00562543
    CMP AL,0x0                          ; 00562546
    JNZ 0x00562532                      ; 00562548
        ;   XREF to: 00562532 (CONDITIONAL_JUMP)  ; LAB_00562532
    POP EDI                             ; 0056254a
        ;   Label: LAB_0056254a
    MOV ECX,dword ptr [EBX + 0xcc]      ; 0056254b
    XOR EBP,EBP                         ; 00562551
    TEST ECX,ECX                        ; 00562553
    JLE 0x005625e0                      ; 00562555
        ;   XREF to: 005625e0 (CONDITIONAL_JUMP)  ; LAB_005625e0
    ADD EBX,0xd0                        ; 0056255b
    MOV dword ptr [ESP],EBX             ; 00562561
    MOV EBX,dword ptr [ESP + 0x18]      ; 00562564
    ADD EBX,0x134                       ; 00562568
    IMUL ESI,EBP,0x328                  ; 0056256e
        ;   Label: LAB_0056256e
    ADD ESI,dword ptr [ESP]             ; 00562574
    MOV EDI,EDX                         ; 00562577
    PUSH EDI                            ; 00562579
    SUB ECX,ECX                         ; 0056257a
    DEC ECX                             ; 0056257c
    MOV AL,0x0                          ; 0056257d
    SCASB.REPNE ES:EDI                  ; 0056257f
    DEC EDI                             ; 00562581
    MOV AL,byte ptr [ESI]               ; 00562582
        ;   Label: LAB_00562582
    MOV byte ptr [EDI],AL               ; 00562584
    CMP AL,0x0                          ; 00562586
    JZ 0x0056259a                       ; 00562588
        ;   XREF to: 0056259a (CONDITIONAL_JUMP)  ; LAB_0056259a
    MOV AL,byte ptr [ESI + 0x1]         ; 0056258a
    ADD ESI,0x2                         ; 0056258d
    MOV byte ptr [EDI + 0x1],AL         ; 00562590
    ADD EDI,0x2                         ; 00562593
    CMP AL,0x0                          ; 00562596
    JNZ 0x00562582                      ; 00562598
        ;   XREF to: 00562582 (CONDITIONAL_JUMP)  ; LAB_00562582
    POP EDI                             ; 0056259a
        ;   Label: LAB_0056259a
    MOV ESI,EBX                         ; 0056259b
    PUSH EDI                            ; 0056259d
    SUB ECX,ECX                         ; 0056259e
    DEC ECX                             ; 005625a0
    MOV AL,0x0                          ; 005625a1
    SCASB.REPNE ES:EDI                  ; 005625a3
    DEC EDI                             ; 005625a5
    MOV AL,byte ptr [ESI]               ; 005625a6
        ;   Label: LAB_005625a6
    MOV byte ptr [EDI],AL               ; 005625a8
    CMP AL,0x0                          ; 005625aa
    JZ 0x005625be                       ; 005625ac
        ;   XREF to: 005625be (CONDITIONAL_JUMP)  ; LAB_005625be
    MOV AL,byte ptr [ESI + 0x1]         ; 005625ae
    ADD ESI,0x2                         ; 005625b1
    MOV byte ptr [EDI + 0x1],AL         ; 005625b4
    ADD EDI,0x2                         ; 005625b7
    CMP AL,0x0                          ; 005625ba
    JNZ 0x005625a6                      ; 005625bc
        ;   XREF to: 005625a6 (CONDITIONAL_JUMP)  ; LAB_005625a6
    POP EDI                             ; 005625be
        ;   Label: LAB_005625be
    MOV ESI,dword ptr [ESP + 0x18]      ; 005625bf
    INC EBP                             ; 005625c3
    MOV EAX,dword ptr [ESI + 0xcc]      ; 005625c4
    ADD EBX,0x328                       ; 005625ca
    CMP EBP,EAX                         ; 005625d0
    JL 0x0056256e                       ; 005625d2
        ;   XREF to: 0056256e (CONDITIONAL_JUMP)  ; LAB_0056256e
    LEA EAX,[EAX]                       ; 005625d4
    LEA EDX,[EDX]                       ; 005625da
    MOV ESI,dword ptr [ESP + 0x18]      ; 005625e0
        ;   Label: LAB_005625e0
    MOV EDI,EDX                         ; 005625e4
    ADD ESI,0x2060                      ; 005625e6
    PUSH EDI                            ; 005625ec
    SUB ECX,ECX                         ; 005625ed
    DEC ECX                             ; 005625ef
    MOV AL,0x0                          ; 005625f0
    SCASB.REPNE ES:EDI                  ; 005625f2
    DEC EDI                             ; 005625f4
    MOV AL,byte ptr [ESI]               ; 005625f5
        ;   Label: LAB_005625f5
    MOV byte ptr [EDI],AL               ; 005625f7
    CMP AL,0x0                          ; 005625f9
    JZ 0x0056260d                       ; 005625fb
        ;   XREF to: 0056260d (CONDITIONAL_JUMP)  ; LAB_0056260d
    MOV AL,byte ptr [ESI + 0x1]         ; 005625fd
    ADD ESI,0x2                         ; 00562600
    MOV byte ptr [EDI + 0x1],AL         ; 00562603
    ADD EDI,0x2                         ; 00562606
    CMP AL,0x0                          ; 00562609
    JNZ 0x005625f5                      ; 0056260b
        ;   XREF to: 005625f5 (CONDITIONAL_JUMP)  ; LAB_005625f5
    POP EDI                             ; 0056260d
        ;   Label: LAB_0056260d
    ADD ESP,0x4                         ; 0056260e
    POP EBP                             ; 00562611
    POP EDI                             ; 00562612
    POP ESI                             ; 00562613
    POP EBX                             ; 00562614
    RET                                 ; 00562615

