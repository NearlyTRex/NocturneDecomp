; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_dosio_cpp_FUN_00479770(char *param_1,char *param_2,char *param_3)
;
;
; XREF[1]:
;   shape_edittool.cpp_FUN_0049a300 at 0049a334
;
; Called Functions:
;   engine_dosio.cpp_FUN_004795e0
;   engine_dosio.cpp_makePath_FUN_004795b0
;   engine_dosio.cpp_splitPath_FUN_00479580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479770
        ;   Label: unkafter_dosio.cpp_FUN_00479770
    PUSH ESI                            ; 00479771
    PUSH EDI                            ; 00479772
    SUB ESP,0x508                       ; 00479773
    MOV EDI,dword ptr [ESP + 0x51c]     ; 00479779
    MOV EBX,dword ptr [ESP + 0x520]     ; 00479780
    LEA ESI,[ESP + 0x200]               ; 00479787
    PUSH ESI                            ; 0047978e
    LEA ESI,[ESP + 0x304]               ; 0047978f
    PUSH ESI                            ; 00479796
    LEA ESI,[ESP + 0x408]               ; 00479797
    PUSH ESI                            ; 0047979e
    LEA ESI,[ESP + 0x50c]               ; 0047979f
    PUSH ESI                            ; 004797a6
    PUSH EDI                            ; 004797a7
    CALL engine_dosio.cpp_splitPath_FUN_00479580 ; 004797a8
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00479580(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004797ad
    CMP byte ptr [ESP + 0x500],0x0      ; 004797b0
    JNZ 0x0047987f                      ; 004797b8
        ;   XREF to: 0047987f (CONDITIONAL_JUMP)  ; LAB_0047987f
    MOV DL,byte ptr [ESP + 0x400]       ; 004797be
    CMP DL,0x5c                         ; 004797c5
    JNZ 0x00479871                      ; 004797c8
        ;   XREF to: 00479871 (CONDITIONAL_JUMP)  ; LAB_00479871
    MOV CL,byte ptr [ESP + 0x401]       ; 004797ce
        ;   Label: LAB_004797ce
    CMP CL,0x5c                         ; 004797d5
    JZ 0x0047987f                       ; 004797d8
        ;   XREF to: 0047987f (CONDITIONAL_JUMP)  ; LAB_0047987f
    CMP CL,0x2f                         ; 004797de
    JZ 0x0047987f                       ; 004797e1
        ;   XREF to: 0047987f (CONDITIONAL_JUMP)  ; LAB_0047987f
    MOV ESI,ESP                         ; 004797e7
        ;   Label: LAB_004797e7
    PUSH ESI                            ; 004797e9
    LEA ESI,[ESP + 0x508]               ; 004797ea
    PUSH ESI                            ; 004797f1
    MOV EDX,dword ptr [ESP + 0x520]     ; 004797f2
    PUSH EDX                            ; 004797f9
    CALL engine_dosio.cpp_FUN_004795e0  ; 004797fa
        ;   XREF to: 004795e0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_004795e0(char * input_path, char * drive, char * output_path)
    ADD ESP,0xc                         ; 004797ff
    MOV AL,byte ptr [ESP + 0x400]       ; 00479802
    CMP AL,0x2f                         ; 00479809
    JNZ 0x004798a7                      ; 0047980b
        ;   XREF to: 004798a7 (CONDITIONAL_JUMP)  ; LAB_004798a7
    XOR DL,DL                           ; 00479811
        ;   Label: LAB_00479811
    MOV byte ptr [ESP],DL               ; 00479813
    LEA ESI,[ESP + 0x400]               ; 00479816
        ;   Label: LAB_00479816
    MOV EDI,ESP                         ; 0047981d
    PUSH EDI                            ; 0047981f
    SUB ECX,ECX                         ; 00479820
    DEC ECX                             ; 00479822
    MOV AL,0x0                          ; 00479823
    SCASB.REPNE ES:EDI                  ; 00479825
    DEC EDI                             ; 00479827
    MOV AL,byte ptr [ESI]               ; 00479828
        ;   Label: LAB_00479828
    MOV byte ptr [EDI],AL               ; 0047982a
    CMP AL,0x0                          ; 0047982c
    JZ 0x00479840                       ; 0047982e
        ;   XREF to: 00479840 (CONDITIONAL_JUMP)  ; LAB_00479840
    MOV AL,byte ptr [ESI + 0x1]         ; 00479830
    ADD ESI,0x2                         ; 00479833
    MOV byte ptr [EDI + 0x1],AL         ; 00479836
    ADD EDI,0x2                         ; 00479839
    CMP AL,0x0                          ; 0047983c
    JNZ 0x00479828                      ; 0047983e
        ;   XREF to: 00479828 (CONDITIONAL_JUMP)  ; LAB_00479828
    POP EDI                             ; 00479840
        ;   Label: LAB_00479840
    LEA ESI,[ESP + 0x200]               ; 00479841
    PUSH ESI                            ; 00479848
    LEA ESI,[ESP + 0x304]               ; 00479849
    PUSH ESI                            ; 00479850
    LEA ESI,[ESP + 0x8]                 ; 00479851
    PUSH ESI                            ; 00479855
    LEA ESI,[ESP + 0x510]               ; 00479856
    PUSH ESI                            ; 0047985d
    PUSH EBX                            ; 0047985e
    CALL engine_dosio.cpp_makePath_FUN_004795b0 ; 0047985f
        ;   XREF to: 004795b0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_makePath_FUN_004795b0(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00479864
    ADD ESP,0x508                       ; 00479867
    POP EDI                             ; 0047986d
    POP ESI                             ; 0047986e
    POP EBX                             ; 0047986f
    RET                                 ; 00479870
    CMP DL,0x2f                         ; 00479871
        ;   Label: LAB_00479871
    JZ 0x004797ce                       ; 00479874
        ;   XREF to: 004797ce (CONDITIONAL_JUMP)  ; LAB_004797ce
    JMP 0x004797e7                      ; 0047987a
        ;   XREF to: 004797e7 (UNCONDITIONAL_JUMP)  ; LAB_004797e7
    MOV ESI,EDI                         ; 0047987f
        ;   Label: LAB_0047987f
    MOV EDI,EBX                         ; 00479881
    PUSH EDI                            ; 00479883
    MOV AL,byte ptr [ESI]               ; 00479884
        ;   Label: LAB_00479884
    MOV byte ptr [EDI],AL               ; 00479886
    CMP AL,0x0                          ; 00479888
    JZ 0x0047989c                       ; 0047988a
        ;   XREF to: 0047989c (CONDITIONAL_JUMP)  ; LAB_0047989c
    MOV AL,byte ptr [ESI + 0x1]         ; 0047988c
    ADD ESI,0x2                         ; 0047988f
    MOV byte ptr [EDI + 0x1],AL         ; 00479892
    ADD EDI,0x2                         ; 00479895
    CMP AL,0x0                          ; 00479898
    JNZ 0x00479884                      ; 0047989a
        ;   XREF to: 00479884 (CONDITIONAL_JUMP)  ; LAB_00479884
    POP EDI                             ; 0047989c
        ;   Label: LAB_0047989c
    ADD ESP,0x508                       ; 0047989d
    POP EDI                             ; 004798a3
    POP ESI                             ; 004798a4
    POP EBX                             ; 004798a5
    RET                                 ; 004798a6
    CMP AL,0x5c                         ; 004798a7
        ;   Label: LAB_004798a7
    JZ 0x00479811                       ; 004798a9
        ;   XREF to: 00479811 (CONDITIONAL_JUMP)  ; LAB_00479811
    JMP 0x00479816                      ; 004798af
        ;   XREF to: 00479816 (UNCONDITIONAL_JUMP)  ; LAB_00479816

