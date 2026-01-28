; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dpart_cpp_CDemonPart_write_FUN_00482330(CDemonPart *this_ptr,FILE *file_handle)
;
; Parameters:
; CDemonPart *     Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
;
; Referenced Globals:
;   TerminatedCString s_newformat_00621777
;   undefined4 s_ewformat_00621778
;   undefined4 s_wformat_00621779
;   undefined4 s_format_0062177a
;
; Called Functions:
;   crt_stdio.c_fwrite_FUN_005fdc00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482330
        ;   Label: core_dpart.cpp_CDemonPart_write_FUN_00482330
    PUSH ESI                            ; 00482331
    PUSH EDI                            ; 00482332
    PUSH EBP                            ; 00482333
    MOV EBP,dword ptr [ESP + 0x14]      ; 00482334
    MOV ESI,0x621777                    ; 00482338 | = "newformat"
    MOV EDI,EBP                         ; 0048233d
    MOV EDX,dword ptr [ESP + 0x18]      ; 0048233f
    PUSH EDI                            ; 00482343
    MOV AL,byte ptr [ESI]               ; 00482344 | = "newformat" | s_wformat_00621779
        ;   Label: LAB_00482344
    MOV byte ptr [EDI],AL               ; 00482346
    CMP AL,0x0                          ; 00482348
    JZ 0x0048235c                       ; 0048234a
        ;   XREF to: 0048235c (CONDITIONAL_JUMP)  ; LAB_0048235c
    MOV AL,byte ptr [ESI + 0x1]         ; 0048234c | s_ewformat_00621778 | s_format_0062177a
    ADD ESI,0x2                         ; 0048234f
    MOV byte ptr [EDI + 0x1],AL         ; 00482352
    ADD EDI,0x2                         ; 00482355
    CMP AL,0x0                          ; 00482358
    JNZ 0x00482344                      ; 0048235a
        ;   XREF to: 00482344 (CONDITIONAL_JUMP)  ; LAB_00482344
    POP EDI                             ; 0048235c
        ;   Label: LAB_0048235c
    PUSH EDX                            ; 0048235d
    PUSH 0x1                            ; 0048235e
    PUSH 0x20                           ; 00482360
    PUSH EBP                            ; 00482362
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 00482363
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 00482368
    MOV ECX,dword ptr [ESP + 0x18]      ; 0048236b
    PUSH ECX                            ; 0048236f
    PUSH 0x1                            ; 00482370
    PUSH 0x4                            ; 00482372
    LEA EBX,[EBP + 0x20]                ; 00482374
    PUSH EBX                            ; 00482377
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 00482378
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 0048237d
    MOV EBX,dword ptr [ESP + 0x18]      ; 00482380
    PUSH EBX                            ; 00482384
    PUSH 0x1                            ; 00482385
    PUSH 0x4                            ; 00482387
    LEA EBX,[EBP + 0x24]                ; 00482389
    PUSH EBX                            ; 0048238c
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0048238d
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 00482392
    MOV ESI,dword ptr [ESP + 0x18]      ; 00482395
    PUSH ESI                            ; 00482399
    PUSH 0x1                            ; 0048239a
    PUSH 0xc                            ; 0048239c
    LEA EBX,[EBP + 0x33c]               ; 0048239e
    PUSH EBX                            ; 004823a4
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 004823a5
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 004823aa
    PUSH ESI                            ; 004823ad
    PUSH 0x1                            ; 004823ae
    PUSH 0xc                            ; 004823b0
    LEA EBX,[EBP + 0x348]               ; 004823b2
    PUSH EBX                            ; 004823b8
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 004823b9
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 004823be
    PUSH ESI                            ; 004823c1
    PUSH 0x1                            ; 004823c2
    PUSH 0xc                            ; 004823c4
    LEA EBX,[EBP + 0x354]               ; 004823c6
    PUSH EBX                            ; 004823cc
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 004823cd
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 004823d2
    PUSH ESI                            ; 004823d5
    PUSH 0x1                            ; 004823d6
    PUSH 0xc                            ; 004823d8
    LEA EBX,[EBP + 0x360]               ; 004823da
    PUSH EBX                            ; 004823e0
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 004823e1
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 004823e6
    PUSH ESI                            ; 004823e9
    PUSH 0x1                            ; 004823ea
    PUSH 0x4                            ; 004823ec
    LEA EBX,[EBP + 0x38]                ; 004823ee
    PUSH EBX                            ; 004823f1
    XOR ESI,ESI                         ; 004823f2
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 004823f4
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
    MOV EBX,dword ptr [EBP + 0x38]      ; 004823f9
    ADD ESP,0x10                        ; 004823fc
    TEST EBX,EBX                        ; 004823ff
    JLE 0x00482430                      ; 00482401
        ;   XREF to: 00482430 (CONDITIONAL_JUMP)  ; LAB_00482430
    MOV EDI,dword ptr [ESP + 0x18]      ; 00482403
    LEA EBX,[EBP + 0x44]                ; 00482407
    PUSH EDI                            ; 0048240a
        ;   Label: LAB_0048240a
    PUSH 0x1                            ; 0048240b
    PUSH 0x10                           ; 0048240d
    PUSH EBX                            ; 0048240f
    INC ESI                             ; 00482410
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 00482411
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 00482416
    MOV EAX,dword ptr [EBP + 0x38]      ; 00482419
    ADD EBX,0x18                        ; 0048241c
    CMP ESI,EAX                         ; 0048241f
    JL 0x0048240a                       ; 00482421
        ;   XREF to: 0048240a (CONDITIONAL_JUMP)  ; LAB_0048240a
    LEA EAX,[EAX]                       ; 00482423
    LEA EDX,[EDX]                       ; 00482429
    NOP                                 ; 0048242f
    MOV EDX,dword ptr [ESP + 0x18]      ; 00482430
        ;   Label: LAB_00482430
    PUSH EDX                            ; 00482434
    PUSH 0x1                            ; 00482435
    PUSH 0x4                            ; 00482437
    LEA EBX,[EBP + 0x28]                ; 00482439
    PUSH EBX                            ; 0048243c
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0048243d
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 00482442
    MOV ECX,dword ptr [ESP + 0x18]      ; 00482445
    PUSH ECX                            ; 00482449
    MOV EBX,dword ptr [EBP + 0x20]      ; 0048244a
    PUSH EBX                            ; 0048244d
    PUSH 0xc                            ; 0048244e
    MOV ESI,dword ptr [EBP + 0x2c]      ; 00482450
    PUSH ESI                            ; 00482453
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 00482454
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 00482459
    MOV EDI,dword ptr [ESP + 0x18]      ; 0048245c
    PUSH EDI                            ; 00482460
    MOV EAX,dword ptr [EBP + 0x20]      ; 00482461
    PUSH EAX                            ; 00482464
    PUSH 0xc                            ; 00482465
    MOV EDX,dword ptr [EBP + 0x30]      ; 00482467
    PUSH EDX                            ; 0048246a
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0048246b
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 00482470
    PUSH EDI                            ; 00482473
    MOV EBX,dword ptr [EBP + 0x24]      ; 00482474
    PUSH EBX                            ; 00482477
    PUSH 0x20                           ; 00482478
    MOV ESI,dword ptr [EBP + 0x34]      ; 0048247a
    PUSH ESI                            ; 0048247d
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0048247e
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 00482483
    POP EBP                             ; 00482486
    POP EDI                             ; 00482487
    POP ESI                             ; 00482488
    POP EBX                             ; 00482489
    RET                                 ; 0048248a

