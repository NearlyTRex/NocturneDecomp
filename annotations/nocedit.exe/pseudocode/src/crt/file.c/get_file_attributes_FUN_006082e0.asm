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
;   FindFirstFileA* g_FindFirstFileAFunc = 00211d84
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
    JZ 0x0060830b                       ; 006082f7
        ;   XREF to: 0060830b (CONDITIONAL_JUMP)  ; LAB_0060830b
    CMP AL,0x0                          ; 006082f9
    JZ 0x00608309                       ; 006082fb
        ;   XREF to: 00608309 (CONDITIONAL_JUMP)  ; LAB_00608309
    INC ESI                             ; 006082fd
    MOV AL,byte ptr [ESI]               ; 006082fe
    CMP AL,DL                           ; 00608300
    JZ 0x0060830b                       ; 00608302
        ;   XREF to: 0060830b (CONDITIONAL_JUMP)  ; LAB_0060830b
    INC ESI                             ; 00608304
    CMP AL,0x0                          ; 00608305
    JNZ 0x006082f3                      ; 00608307
        ;   XREF to: 006082f3 (CONDITIONAL_JUMP)  ; LAB_006082f3
    SUB ESI,ESI                         ; 00608309
        ;   Label: LAB_00608309
    TEST ESI,ESI                        ; 0060830b
        ;   Label: LAB_0060830b
    JNZ 0x0060832f                      ; 0060830d
        ;   XREF to: 0060832f (CONDITIONAL_JUMP)  ; LAB_0060832f
    MOV DL,0x3f                         ; 0060830f
    MOV ESI,EBX                         ; 00608311
    MOV AL,byte ptr [ESI]               ; 00608313
        ;   Label: LAB_00608313
    CMP AL,DL                           ; 00608315
    JZ 0x0060832b                       ; 00608317
        ;   XREF to: 0060832b (CONDITIONAL_JUMP)  ; LAB_0060832b
    CMP AL,0x0                          ; 00608319
    JZ 0x00608329                       ; 0060831b
        ;   XREF to: 00608329 (CONDITIONAL_JUMP)  ; LAB_00608329
    INC ESI                             ; 0060831d
    MOV AL,byte ptr [ESI]               ; 0060831e
    CMP AL,DL                           ; 00608320
    JZ 0x0060832b                       ; 00608322
        ;   XREF to: 0060832b (CONDITIONAL_JUMP)  ; LAB_0060832b
    INC ESI                             ; 00608324
    CMP AL,0x0                          ; 00608325
    JNZ 0x00608313                      ; 00608327
        ;   XREF to: 00608313 (CONDITIONAL_JUMP)  ; LAB_00608313
    SUB ESI,ESI                         ; 00608329
        ;   Label: LAB_00608329
    TEST ESI,ESI                        ; 0060832b
        ;   Label: LAB_0060832b
    JZ 0x00608336                       ; 0060832d
        ;   XREF to: 00608336 (CONDITIONAL_JUMP)  ; LAB_00608336
    MOV EAX,0xffffffff                  ; 0060832f
        ;   Label: LAB_0060832f
    JMP 0x00608349                      ; 00608334
        ;   XREF to: 00608349 (UNCONDITIONAL_JUMP)  ; LAB_00608349
    MOV EAX,ESP                         ; 00608336
        ;   Label: LAB_00608336
    PUSH EAX                            ; 00608338
    PUSH EBX                            ; 00608339
    CALL dword ptr CS:[0x61154c]        ; 0060833a | g_FindFirstFileAFunc
    CMP EAX,-0x1                        ; 00608341
    JZ 0x00608349                       ; 00608344
        ;   XREF to: 00608349 (CONDITIONAL_JUMP)  ; LAB_00608349
    MOV EAX,dword ptr [ESP]             ; 00608346
    ADD ESP,0x140                       ; 00608349
        ;   Label: LAB_00608349
    POP ESI                             ; 0060834f
    POP EBX                             ; 00608350
    RET                                 ; 00608351

