; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CStrList_findByFirstField_FUN_00481340(CStrList *this_ptr,char *search_field)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   search_field
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005b8130
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00481240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481340
        ;   Label: shape_edittool.cpp_CStrList_findByFirstField_FUN_00481340
    PUSH ESI                            ; 00481341
    PUSH EDI                            ; 00481342
    SUB ESP,0x190                       ; 00481343
    MOV EDI,dword ptr [ESP + 0x1a0]     ; 00481349
    MOV ECX,dword ptr [ESP + 0x1a4]     ; 00481350
    LEA EDX,[ESP + 0xc8]                ; 00481357
    MOV BL,byte ptr [ECX]               ; 0048135e
    MOV EAX,ECX                         ; 00481360
    TEST BL,BL                          ; 00481362
    JZ 0x0048136b                       ; 00481364
        ;   XREF to: 0048136b (CONDITIONAL_JUMP)  ; LAB_0048136b
    CMP byte ptr [EAX],0x9              ; 00481366
        ;   Label: LAB_00481366
    JNZ 0x004813bf                      ; 00481369
        ;   XREF to: 004813bf (CONDITIONAL_JUMP)  ; LAB_004813bf
    MOV byte ptr [EDX],0x0              ; 0048136b
        ;   Label: LAB_0048136b
    MOV EDX,dword ptr [EDI]             ; 0048136e
    XOR ESI,ESI                         ; 00481370
    TEST EDX,EDX                        ; 00481372
    JLE 0x004813b0                      ; 00481374
        ;   XREF to: 004813b0 (CONDITIONAL_JUMP)  ; LAB_004813b0
    PUSH ESI                            ; 00481376
        ;   Label: LAB_00481376
    PUSH EDI                            ; 00481377
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00481240 ; 00481378
        ;   XREF to: 00481240 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00481240(CStrList * this_ptr, int index)
    LEA EDX,[ESP + 0x8]                 ; 0048137d
    MOV BL,byte ptr [EAX]               ; 00481381
    ADD ESP,0x8                         ; 00481383
    TEST BL,BL                          ; 00481386
    JZ 0x0048138f                       ; 00481388
        ;   XREF to: 0048138f (CONDITIONAL_JUMP)  ; LAB_0048138f
    CMP byte ptr [EAX],0x9              ; 0048138a
        ;   Label: LAB_0048138a
    JNZ 0x004813cd                      ; 0048138d
        ;   XREF to: 004813cd (CONDITIONAL_JUMP)  ; LAB_004813cd
    MOV byte ptr [EDX],0x0              ; 0048138f
        ;   Label: LAB_0048138f
    LEA EAX,[ESP + 0xc8]                ; 00481392
    PUSH EAX                            ; 00481399
    LEA EAX,[ESP + 0x4]                 ; 0048139a
    PUSH EAX                            ; 0048139e
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0048139f
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004813a4
    TEST EAX,EAX                        ; 004813a7
    JZ 0x004813db                       ; 004813a9
        ;   XREF to: 004813db (CONDITIONAL_JUMP)  ; LAB_004813db
    INC ESI                             ; 004813ab
    CMP ESI,dword ptr [EDI]             ; 004813ac
    JL 0x00481376                       ; 004813ae
        ;   XREF to: 00481376 (CONDITIONAL_JUMP)  ; LAB_00481376
    MOV EAX,0xffffffff                  ; 004813b0
        ;   Label: LAB_004813b0
    ADD ESP,0x190                       ; 004813b5
    POP EDI                             ; 004813bb
    POP ESI                             ; 004813bc
    POP EBX                             ; 004813bd
    RET                                 ; 004813be
    MOV BL,byte ptr [EAX]               ; 004813bf
        ;   Label: LAB_004813bf
    INC EAX                             ; 004813c1
    MOV byte ptr [EDX],BL               ; 004813c2
    MOV BH,byte ptr [EAX]               ; 004813c4
    INC EDX                             ; 004813c6
    TEST BH,BH                          ; 004813c7
    JNZ 0x00481366                      ; 004813c9
        ;   XREF to: 00481366 (CONDITIONAL_JUMP)  ; LAB_00481366
    JMP 0x0048136b                      ; 004813cb
        ;   XREF to: 0048136b (UNCONDITIONAL_JUMP)  ; LAB_0048136b
    MOV BL,byte ptr [EAX]               ; 004813cd
        ;   Label: LAB_004813cd
    INC EAX                             ; 004813cf
    MOV byte ptr [EDX],BL               ; 004813d0
    MOV BH,byte ptr [EAX]               ; 004813d2
    INC EDX                             ; 004813d4
    TEST BH,BH                          ; 004813d5
    JNZ 0x0048138a                      ; 004813d7
        ;   XREF to: 0048138a (CONDITIONAL_JUMP)  ; LAB_0048138a
    JMP 0x0048138f                      ; 004813d9
        ;   XREF to: 0048138f (UNCONDITIONAL_JUMP)  ; LAB_0048138f
    MOV EAX,ESI                         ; 004813db
        ;   Label: LAB_004813db
    ADD ESP,0x190                       ; 004813dd
    POP EDI                             ; 004813e3
    POP ESI                             ; 004813e4
    POP EBX                             ; 004813e5
    RET                                 ; 004813e6

