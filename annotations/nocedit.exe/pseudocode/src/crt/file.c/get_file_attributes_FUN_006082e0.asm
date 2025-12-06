; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl DWORD crt_file.c_get_file_attributes_FUN_006082e0(char * filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
;
; XREF[1]:
;   crt_file.c_setReadonlyAttribute_FUN_00600c30 at 00600c36
;
; Referenced Globals:
;   FindFirstFileA* PTR_FindFirstFileA_0061154c = 00211d84
;
; Called Functions:
;   FindFirstFileA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006082e0
        ;   Label: crt_file.c_get_file_attributes_FUN_006082e0
    PUSH ESI                            ; 006082e1
    SUB ESP,0x140                       ; 006082e2
    MOV EBX,dword ptr [ESP + 0x14c]     ; 006082e8
    MOV DL,0x2a                         ; 006082ef
    MOV ESI,EBX                         ; 006082f1
    MOV AL,byte ptr [ESI]               ; 006082f3
        ;   Label: LAB_006082f3
    CMP AL,DL                           ; 006082f5
    JZ 0x0060830b                       ; 006082f7 | LAB_0060830b
        ;   XREF to: 0060830b (CONDITIONAL_JUMP)
    CMP AL,0x0                          ; 006082f9
    JZ 0x00608309                       ; 006082fb | LAB_00608309
        ;   XREF to: 00608309 (CONDITIONAL_JUMP)
    INC ESI                             ; 006082fd
    MOV AL,byte ptr [ESI]               ; 006082fe
    CMP AL,DL                           ; 00608300
    JZ 0x0060830b                       ; 00608302 | LAB_0060830b
        ;   XREF to: 0060830b (CONDITIONAL_JUMP)
    INC ESI                             ; 00608304
    CMP AL,0x0                          ; 00608305
    JNZ 0x006082f3                      ; 00608307 | LAB_006082f3
        ;   XREF to: 006082f3 (CONDITIONAL_JUMP)
    SUB ESI,ESI                         ; 00608309
        ;   Label: LAB_00608309
    TEST ESI,ESI                        ; 0060830b
        ;   Label: LAB_0060830b
    JNZ 0x0060832f                      ; 0060830d | LAB_0060832f
        ;   XREF to: 0060832f (CONDITIONAL_JUMP)
    MOV DL,0x3f                         ; 0060830f
    MOV ESI,EBX                         ; 00608311
    MOV AL,byte ptr [ESI]               ; 00608313
        ;   Label: LAB_00608313
    CMP AL,DL                           ; 00608315
    JZ 0x0060832b                       ; 00608317 | LAB_0060832b
        ;   XREF to: 0060832b (CONDITIONAL_JUMP)
    CMP AL,0x0                          ; 00608319
    JZ 0x00608329                       ; 0060831b | LAB_00608329
        ;   XREF to: 00608329 (CONDITIONAL_JUMP)
    INC ESI                             ; 0060831d
    MOV AL,byte ptr [ESI]               ; 0060831e
    CMP AL,DL                           ; 00608320
    JZ 0x0060832b                       ; 00608322 | LAB_0060832b
        ;   XREF to: 0060832b (CONDITIONAL_JUMP)
    INC ESI                             ; 00608324
    CMP AL,0x0                          ; 00608325
    JNZ 0x00608313                      ; 00608327 | LAB_00608313
        ;   XREF to: 00608313 (CONDITIONAL_JUMP)
    SUB ESI,ESI                         ; 00608329
        ;   Label: LAB_00608329
    TEST ESI,ESI                        ; 0060832b
        ;   Label: LAB_0060832b
    JZ 0x00608336                       ; 0060832d | LAB_00608336
        ;   XREF to: 00608336 (CONDITIONAL_JUMP)
    MOV EAX,0xffffffff                  ; 0060832f
        ;   Label: LAB_0060832f
    JMP 0x00608349                      ; 00608334 | LAB_00608349
        ;   XREF to: 00608349 (UNCONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 00608336
        ;   Label: LAB_00608336
    PUSH EAX                            ; 00608338
    PUSH EBX                            ; 00608339
    CALL dword ptr CS:[0x61154c]        ; 0060833a | FindFirstFileA * PTR_FindFirstFileA_0061154c
    CMP EAX,-0x1                        ; 00608341
    JZ 0x00608349                       ; 00608344 | LAB_00608349
        ;   XREF to: 00608349 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP]             ; 00608346
    ADD ESP,0x140                       ; 00608349
        ;   Label: LAB_00608349
    POP ESI                             ; 0060834f
    POP EBX                             ; 00608350
    RET                                 ; 00608351

