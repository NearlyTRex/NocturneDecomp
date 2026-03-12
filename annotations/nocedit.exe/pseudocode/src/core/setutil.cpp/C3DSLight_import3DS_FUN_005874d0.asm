; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSLight_import3DS_FUN_005874d0(C3DSLight *this_ptr,_FILE *file_handle)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; char[255]        Stack[-0x188]:255  local_188
; undefined1       Stack[-0x89]:1  uStack_89
; char[80]         Stack[-0x88]:80  acStack_88
; float            Stack[-0x38]:4  fStack_38
; float            Stack[-0x34]:4  fStack_34
; float[4]         Stack[-0x30]:16  afStack_30
; float[2]         Stack[-0x20]:8  afStack_20
; undefined1[4]    Stack[-0x18]:4  auStack_18
; char *           Stack[-0x14]:4  local_14
;
; Called Functions:
;   crt_stdio.c_fgets_FUN_005fefd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005874d0
        ;   Label: core_setutil.cpp_C3DSLight_import3DS_FUN_005874d0
    PUSH ESI                            ; 005874d1
    PUSH EDI                            ; 005874d2
    PUSH EBP                            ; 005874d3
    MOV EBP,ESP                         ; 005874d4
    SUB ESP,0x178                       ; 005874d6
    AND ESP,0xfffffff8                  ; 005874dc
    MOV EBX,dword ptr [EBP + 0x14]      ; 005874df
    MOV EDX,dword ptr [EBP + 0x18]      ; 005874e2
    PUSH EDX                            ; 005874e5
    MOV ESI,0xff                        ; 005874e6
    LEA EAX,[EBX + 0x4]                 ; 005874eb
    PUSH ESI                            ; 005874ee
    MOV dword ptr [ESP + 0x17c],EAX     ; 005874ef
    LEA EAX,[ESP + 0x8]                 ; 005874f6
    PUSH EAX                            ; 005874fa
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 005874fb
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00587500
    MOV EDI,ESP                         ; 00587503
    SUB ECX,ECX                         ; 00587505
    DEC ECX                             ; 00587507
    XOR EAX,EAX                         ; 00587508
    SCASB.REPNE ES:EDI                  ; 0058750a
    NOT ECX                             ; 0058750c
    DEC ECX                             ; 0058750e
    TEST ECX,ECX                        ; 0058750f
    JLE 0x00587519                      ; 00587511
        ;   XREF to: 00587519 (CONDITIONAL_JUMP)  ; LAB_00587519
    XOR AH,AH                           ; 00587513
    MOV byte ptr [ESP + ECX*0x1 + -0x1],AH ; 00587515
    MOV EDI,ESP                         ; 00587519
        ;   Label: LAB_00587519
    SUB ECX,ECX                         ; 0058751b
    DEC ECX                             ; 0058751d
    XOR EAX,EAX                         ; 0058751e
    SCASB.REPNE ES:EDI                  ; 00587520
    NOT ECX                             ; 00587522
    DEC ECX                             ; 00587524
    XOR DL,DL                           ; 00587525
    MOV EDI,dword ptr [ESP + 0x174]     ; 00587527
    MOV byte ptr [ESP + ESI*0x1],DL     ; 0058752e
    MOV ESI,ESP                         ; 00587531
    PUSH EDI                            ; 00587533
    MOV AL,byte ptr [ESI]               ; 00587534
        ;   Label: LAB_00587534
    MOV byte ptr [EDI],AL               ; 00587536
    CMP AL,0x0                          ; 00587538
    JZ 0x0058754c                       ; 0058753a
        ;   XREF to: 0058754c (CONDITIONAL_JUMP)  ; LAB_0058754c
    MOV AL,byte ptr [ESI + 0x1]         ; 0058753c
    ADD ESI,0x2                         ; 0058753f
    MOV byte ptr [EDI + 0x1],AL         ; 00587542
    ADD EDI,0x2                         ; 00587545
    CMP AL,0x0                          ; 00587548
    JNZ 0x00587534                      ; 0058754a
        ;   XREF to: 00587534 (CONDITIONAL_JUMP)  ; LAB_00587534
    POP EDI                             ; 0058754c
        ;   Label: LAB_0058754c
    PUSH EBX                            ; 0058754d

