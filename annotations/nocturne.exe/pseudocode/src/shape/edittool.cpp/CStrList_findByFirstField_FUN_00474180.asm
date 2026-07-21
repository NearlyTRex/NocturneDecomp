; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int shape_edittool_cpp_CStrList_findByFirstField_FUN_00474180(int *param_1,char *param_2)
;
;
; Called Functions:
;   crt_string.c__stricmp_FUN_00564520
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00474080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00474180
        ;   Label: shape_edittool.cpp_CStrList_findByFirstField_FUN_00474180
    PUSH ESI                            ; 00474181
    PUSH EDI                            ; 00474182
    SUB ESP,0x190                       ; 00474183
    MOV EDI,dword ptr [ESP + 0x1a0]     ; 00474189
    MOV ECX,dword ptr [ESP + 0x1a4]     ; 00474190
    LEA EDX,[ESP + 0xc8]                ; 00474197
    MOV BL,byte ptr [ECX]               ; 0047419e
    MOV EAX,ECX                         ; 004741a0
    TEST BL,BL                          ; 004741a2
    JZ 0x004741ab                       ; 004741a4
        ;   XREF to: 004741ab (CONDITIONAL_JUMP)  ; LAB_004741ab
    CMP byte ptr [EAX],0x9              ; 004741a6
        ;   Label: LAB_004741a6
    JNZ 0x004741ff                      ; 004741a9
        ;   XREF to: 004741ff (CONDITIONAL_JUMP)  ; LAB_004741ff
    MOV byte ptr [EDX],0x0              ; 004741ab
        ;   Label: LAB_004741ab
    MOV EDX,dword ptr [EDI]             ; 004741ae
    XOR ESI,ESI                         ; 004741b0
    TEST EDX,EDX                        ; 004741b2
    JLE 0x004741f0                      ; 004741b4
        ;   XREF to: 004741f0 (CONDITIONAL_JUMP)  ; LAB_004741f0
    PUSH ESI                            ; 004741b6
        ;   Label: LAB_004741b6
    PUSH EDI                            ; 004741b7
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00474080 ; 004741b8
        ;   XREF to: 00474080 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_getStringAt_FUN_00474080()
    LEA EDX,[ESP + 0x8]                 ; 004741bd
    MOV BL,byte ptr [EAX]               ; 004741c1
    ADD ESP,0x8                         ; 004741c3
    TEST BL,BL                          ; 004741c6
    JZ 0x004741cf                       ; 004741c8
        ;   XREF to: 004741cf (CONDITIONAL_JUMP)  ; LAB_004741cf
    CMP byte ptr [EAX],0x9              ; 004741ca
        ;   Label: LAB_004741ca
    JNZ 0x0047420d                      ; 004741cd
        ;   XREF to: 0047420d (CONDITIONAL_JUMP)  ; LAB_0047420d
    MOV byte ptr [EDX],0x0              ; 004741cf
        ;   Label: LAB_004741cf
    LEA EAX,[ESP + 0xc8]                ; 004741d2
    PUSH EAX                            ; 004741d9
    LEA EAX,[ESP + 0x4]                 ; 004741da
    PUSH EAX                            ; 004741de
    CALL crt_string.c__stricmp_FUN_00564520 ; 004741df
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 004741e4
    TEST EAX,EAX                        ; 004741e7
    JZ 0x0047421b                       ; 004741e9
        ;   XREF to: 0047421b (CONDITIONAL_JUMP)  ; LAB_0047421b
    INC ESI                             ; 004741eb
    CMP ESI,dword ptr [EDI]             ; 004741ec
    JL 0x004741b6                       ; 004741ee
        ;   XREF to: 004741b6 (CONDITIONAL_JUMP)  ; LAB_004741b6
    MOV EAX,0xffffffff                  ; 004741f0
        ;   Label: LAB_004741f0
    ADD ESP,0x190                       ; 004741f5
    POP EDI                             ; 004741fb
    POP ESI                             ; 004741fc
    POP EBX                             ; 004741fd
    RET                                 ; 004741fe
    MOV BL,byte ptr [EAX]               ; 004741ff
        ;   Label: LAB_004741ff
    INC EAX                             ; 00474201
    MOV byte ptr [EDX],BL               ; 00474202
    MOV BH,byte ptr [EAX]               ; 00474204
    INC EDX                             ; 00474206
    TEST BH,BH                          ; 00474207
    JNZ 0x004741a6                      ; 00474209
        ;   XREF to: 004741a6 (CONDITIONAL_JUMP)  ; LAB_004741a6
    JMP 0x004741ab                      ; 0047420b
        ;   XREF to: 004741ab (UNCONDITIONAL_JUMP)  ; LAB_004741ab
    MOV BL,byte ptr [EAX]               ; 0047420d
        ;   Label: LAB_0047420d
    INC EAX                             ; 0047420f
    MOV byte ptr [EDX],BL               ; 00474210
    MOV BH,byte ptr [EAX]               ; 00474212
    INC EDX                             ; 00474214
    TEST BH,BH                          ; 00474215
    JNZ 0x004741ca                      ; 00474217
        ;   XREF to: 004741ca (CONDITIONAL_JUMP)  ; LAB_004741ca
    JMP 0x004741cf                      ; 00474219
        ;   XREF to: 004741cf (UNCONDITIONAL_JUMP)  ; LAB_004741cf
    MOV EAX,ESI                         ; 0047421b
        ;   Label: LAB_0047421b
    ADD ESP,0x190                       ; 0047421d
    POP EDI                             ; 00474223
    POP ESI                             ; 00474224
    POP EBX                             ; 00474225
    RET                                 ; 00474226

