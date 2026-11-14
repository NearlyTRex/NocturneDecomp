; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_pod_cpp_findFilesByExtension_FUN_0051b3c0(CPod *pod,char *extension,char *output_buffer,int max_results,int result_string_length)
;
; Parameters:
; CPod *           Stack[0x4]:4   pod
; char *           Stack[0x8]:4   extension
; char *           Stack[0xc]:4   output_buffer
; int              Stack[0x10]:4   max_results
; int              Stack[0x14]:4   result_string_length
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005b8e40
;   crt_string.c__strcmp_FUN_005b8c30
;   crt_string.c__strncpy_FUN_005b9cf0
;   engine_pod.cpp_CPodFile_findFileIndex_FUN_0051a990
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b3c0
        ;   Label: engine_pod.cpp_findFilesByExtension_FUN_0051b3c0
    PUSH ESI                            ; 0051b3c1
    PUSH EDI                            ; 0051b3c2
    PUSH EBP                            ; 0051b3c3
    SUB ESP,0x40                        ; 0051b3c4
    MOV ESI,dword ptr [ESP + 0x58]      ; 0051b3c7
    MOV EDI,ESI                         ; 0051b3cb
    SUB ECX,ECX                         ; 0051b3cd
    DEC ECX                             ; 0051b3cf
    XOR EAX,EAX                         ; 0051b3d0
    SCASB.REPNE ES:EDI                  ; 0051b3d2
    NOT ECX                             ; 0051b3d4
    DEC ECX                             ; 0051b3d6
    XOR EDX,EDX                         ; 0051b3d7
    XOR EBX,EBX                         ; 0051b3d9
    MOV dword ptr [ESP + 0x2c],ECX      ; 0051b3db
    MOV dword ptr [ESP + 0x3c],EDX      ; 0051b3df
    TEST ECX,ECX                        ; 0051b3e3
    JLE 0x0051b410                      ; 0051b3e5
        ;   XREF to: 0051b410 (CONDITIONAL_JUMP)  ; LAB_0051b410
    XOR EAX,EAX                         ; 0051b3e7
        ;   Label: LAB_0051b3e7
    MOV AL,byte ptr [ESI]               ; 0051b3e9
    PUSH EAX                            ; 0051b3eb
    INC EBX                             ; 0051b3ec
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 0051b3ed
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    ADD ESP,0x4                         ; 0051b3f2
    INC ESI                             ; 0051b3f5
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0051b3f6
    MOV byte ptr [ESP + EBX*0x1 + 0xb],AL ; 0051b3fa
    CMP EBX,ECX                         ; 0051b3fe
    JL 0x0051b3e7                       ; 0051b400
        ;   XREF to: 0051b3e7 (CONDITIONAL_JUMP)  ; LAB_0051b3e7
    LEA EAX,[EAX]                       ; 0051b402
    LEA EDX,[EDX]                       ; 0051b408
    MOV EAX,EAX                         ; 0051b40e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0051b410
        ;   Label: LAB_0051b410
    XOR DL,DL                           ; 0051b414
    MOV byte ptr [ESP + EAX*0x1 + 0xc],DL ; 0051b416
    MOV EAX,dword ptr [ESP + 0x54]      ; 0051b41a
    XOR EBX,EBX                         ; 0051b41e
    MOV ESI,dword ptr [EAX]             ; 0051b420
    MOV dword ptr [ESP + 0x18],EBX      ; 0051b422
    TEST ESI,ESI                        ; 0051b426
    JLE 0x0051b49b                      ; 0051b428
        ;   XREF to: 0051b49b (CONDITIONAL_JUMP)  ; LAB_0051b49b
    MOV EAX,dword ptr [ESP + 0x64]      ; 0051b42a
    DEC EAX                             ; 0051b42e
    MOV dword ptr [ESP + 0x1c],EBX      ; 0051b42f
    MOV dword ptr [ESP + 0x20],EAX      ; 0051b433
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0051b437
        ;   Label: LAB_0051b437
    MOV dword ptr [ESP + 0x24],EAX      ; 0051b43b
    MOV EAX,dword ptr [ESP + 0x64]      ; 0051b43f
    MOV EDI,dword ptr [ESP + 0x64]      ; 0051b443
    MOV dword ptr [ESP + 0x28],EAX      ; 0051b447
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0051b44b
    IMUL EAX,EDI                        ; 0051b44f
    XOR EBX,EBX                         ; 0051b452
    MOV EBP,dword ptr [ESP + 0x5c]      ; 0051b454
    MOV dword ptr [ESP + 0x30],EBX      ; 0051b458
    ADD EAX,EBP                         ; 0051b45c
    MOV dword ptr [ESP + 0x38],EBX      ; 0051b45e
    MOV dword ptr [ESP + 0x34],EAX      ; 0051b462
    MOV EAX,dword ptr [ESP + 0x54]      ; 0051b466
        ;   Label: LAB_0051b466
    ADD EAX,dword ptr [ESP + 0x24]      ; 0051b46a
    MOV EAX,dword ptr [EAX + 0x4]       ; 0051b46e
    MOV ECX,dword ptr [ESP + 0x38]      ; 0051b471
    CMP ECX,dword ptr [EAX + 0x410]     ; 0051b475
    JL 0x0051b4a7                       ; 0051b47b
        ;   XREF to: 0051b4a7 (CONDITIONAL_JUMP)  ; LAB_0051b4a7
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0051b47d
    MOV EBP,dword ptr [ESP + 0x18]      ; 0051b481
    MOV ECX,dword ptr [ESP + 0x54]      ; 0051b485
    ADD EDI,0x4                         ; 0051b489
    INC EBP                             ; 0051b48c
    MOV EDX,dword ptr [ECX]             ; 0051b48d
    MOV dword ptr [ESP + 0x1c],EDI      ; 0051b48f
    MOV dword ptr [ESP + 0x18],EBP      ; 0051b493
    CMP EBP,EDX                         ; 0051b497
    JL 0x0051b437                       ; 0051b499
        ;   XREF to: 0051b437 (CONDITIONAL_JUMP)  ; LAB_0051b437
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0051b49b
        ;   Label: LAB_0051b49b
    ADD ESP,0x40                        ; 0051b49f
    POP EBP                             ; 0051b4a2
    POP EDI                             ; 0051b4a3
    POP ESI                             ; 0051b4a4
    POP EBX                             ; 0051b4a5
    RET                                 ; 0051b4a6
    MOV ESI,dword ptr [ESP + 0x30]      ; 0051b4a7
        ;   Label: LAB_0051b4a7
    MOV EAX,dword ptr [EAX + 0x414]     ; 0051b4ab
    ADD EAX,ESI                         ; 0051b4b1
    MOV EBP,dword ptr [EAX]             ; 0051b4b3
    MOV EDI,EBP                         ; 0051b4b5
    SUB ECX,ECX                         ; 0051b4b7
    DEC ECX                             ; 0051b4b9
    XOR EAX,EAX                         ; 0051b4ba
    SCASB.REPNE ES:EDI                  ; 0051b4bc
    NOT ECX                             ; 0051b4be
    DEC ECX                             ; 0051b4c0
    SUB ECX,dword ptr [ESP + 0x2c]      ; 0051b4c1
    MOV EDI,ESP                         ; 0051b4c5
    LEA ESI,[ECX + EBP*0x1]             ; 0051b4c7
    PUSH EDI                            ; 0051b4ca
    MOV AL,byte ptr [ESI]               ; 0051b4cb
        ;   Label: LAB_0051b4cb
    MOV byte ptr [EDI],AL               ; 0051b4cd
    CMP AL,0x0                          ; 0051b4cf
    JZ 0x0051b4e3                       ; 0051b4d1
        ;   XREF to: 0051b4e3 (CONDITIONAL_JUMP)  ; LAB_0051b4e3
    MOV AL,byte ptr [ESI + 0x1]         ; 0051b4d3
    ADD ESI,0x2                         ; 0051b4d6
    MOV byte ptr [EDI + 0x1],AL         ; 0051b4d9
    ADD EDI,0x2                         ; 0051b4dc
    CMP AL,0x0                          ; 0051b4df
    JNZ 0x0051b4cb                      ; 0051b4e1
        ;   XREF to: 0051b4cb (CONDITIONAL_JUMP)  ; LAB_0051b4cb
    POP EDI                             ; 0051b4e3
        ;   Label: LAB_0051b4e3
    LEA EAX,[ESP + 0xc]                 ; 0051b4e4
    PUSH EAX                            ; 0051b4e8
    LEA EAX,[ESP + 0x4]                 ; 0051b4e9
    PUSH EAX                            ; 0051b4ed
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0051b4ee
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 0051b4f3
    TEST EAX,EAX                        ; 0051b4f6
    JNZ 0x0051b552                      ; 0051b4f8
        ;   XREF to: 0051b552 (CONDITIONAL_JUMP)  ; LAB_0051b552
    MOV EAX,dword ptr [ESP + 0x18]      ; 0051b4fa
    XOR EBX,EBX                         ; 0051b4fe
    TEST EAX,EAX                        ; 0051b500
    JLE 0x0051b519                      ; 0051b502
        ;   XREF to: 0051b519 (CONDITIONAL_JUMP)  ; LAB_0051b519
    MOV ESI,dword ptr [ESP + 0x54]      ; 0051b504
    PUSH EBP                            ; 0051b508
        ;   Label: LAB_0051b508
    MOV ECX,dword ptr [ESI + 0x4]       ; 0051b509
    PUSH ECX                            ; 0051b50c
    CALL engine_pod.cpp_CPodFile_findFileIndex_FUN_0051a990 ; 0051b50d
        ;   XREF to: 0051a990 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_findFileIndex_FUN_0051a990(CPodFile * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0051b512
    TEST EAX,EAX                        ; 0051b515
    JL 0x0051b56b                       ; 0051b517
        ;   XREF to: 0051b56b (CONDITIONAL_JUMP)  ; LAB_0051b56b
    CMP EBX,dword ptr [ESP + 0x18]      ; 0051b519
        ;   Label: LAB_0051b519
    JNZ 0x0051b552                      ; 0051b51d
        ;   XREF to: 0051b552 (CONDITIONAL_JUMP)  ; LAB_0051b552
    MOV EDI,dword ptr [ESP + 0x20]      ; 0051b51f
    PUSH EDI                            ; 0051b523
    PUSH EBP                            ; 0051b524
    MOV EBP,dword ptr [ESP + 0x3c]      ; 0051b525
    PUSH EBP                            ; 0051b529
    CALL crt_string.c__strncpy_FUN_005b9cf0 ; 0051b52a
        ;   XREF to: 005b9cf0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_005b9cf0(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 0051b52f
    MOV EAX,dword ptr [ESP + 0x28]      ; 0051b532
    MOV ECX,dword ptr [ESP + 0x3c]      ; 0051b536
    MOV EBX,dword ptr [ESP + 0x60]      ; 0051b53a
    LEA EDX,[EAX + EBP*0x1]             ; 0051b53e
    INC ECX                             ; 0051b541
    MOV dword ptr [ESP + 0x34],EDX      ; 0051b542
    MOV dword ptr [ESP + 0x3c],ECX      ; 0051b546
    CMP ECX,EBX                         ; 0051b54a
    JGE 0x0051b49b                      ; 0051b54c
        ;   XREF to: 0051b49b (CONDITIONAL_JUMP)  ; LAB_0051b49b
    MOV EDI,dword ptr [ESP + 0x38]      ; 0051b552
        ;   Label: LAB_0051b552
    MOV ESI,dword ptr [ESP + 0x30]      ; 0051b556
    INC EDI                             ; 0051b55a
    ADD ESI,0x14                        ; 0051b55b
    MOV dword ptr [ESP + 0x38],EDI      ; 0051b55e
    MOV dword ptr [ESP + 0x30],ESI      ; 0051b562
    JMP 0x0051b466                      ; 0051b566
        ;   XREF to: 0051b466 (UNCONDITIONAL_JUMP)  ; LAB_0051b466
    MOV EDX,dword ptr [ESP + 0x18]      ; 0051b56b
        ;   Label: LAB_0051b56b
    INC EBX                             ; 0051b56f
    ADD ESI,0x4                         ; 0051b570
    CMP EBX,EDX                         ; 0051b573
    JL 0x0051b508                       ; 0051b575
        ;   XREF to: 0051b508 (CONDITIONAL_JUMP)  ; LAB_0051b508
    JMP 0x0051b519                      ; 0051b577
        ;   XREF to: 0051b519 (UNCONDITIONAL_JUMP)  ; LAB_0051b519

