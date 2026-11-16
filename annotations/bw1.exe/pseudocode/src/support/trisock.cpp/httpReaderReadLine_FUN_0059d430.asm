; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_httpReaderReadLine_FUN_0059d430(void *reader,char *line_out,int line_size,void *status_callback,char *status_text)
;
; Parameters:
; void *           Stack[0x4]:4   reader
; char *           Stack[0x8]:4   line_out
; int              Stack[0xc]:4   line_size
; void *           Stack[0x10]:4   status_callback
; char *           Stack[0x14]:4   status_text
;
; XREF[1]:
;   support_trisock.cpp_httpReceiveResponse_FUN_0059d4b0 at 0059d4f1
;
; Called Functions:
;   support_trisock.cpp_httpReaderGetChar_FUN_0059d360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059d430
        ;   Label: support_trisock.cpp_httpReaderReadLine_FUN_0059d430
    PUSH ESI                            ; 0059d431
    PUSH EDI                            ; 0059d432
    PUSH EBP                            ; 0059d433
    MOV EBP,dword ptr [ESP + 0x14]      ; 0059d434
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0059d438
    MOV ESI,dword ptr [ESP + 0x18]      ; 0059d43c
    XOR EBX,EBX                         ; 0059d440
    DEC EDI                             ; 0059d442
    MOV EDX,dword ptr [ESP + 0x24]      ; 0059d443
        ;   Label: LAB_0059d443
    PUSH EDX                            ; 0059d447
    MOV ECX,dword ptr [ESP + 0x24]      ; 0059d448
    PUSH ECX                            ; 0059d44c
    PUSH EBP                            ; 0059d44d
    CALL support_trisock.cpp_httpReaderGetChar_FUN_0059d360 ; 0059d44e
        ;   XREF to: 0059d360 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_httpReaderGetChar_FUN_0059d360(void * reader, void * status_callback, char * status_text)
    ADD ESP,0xc                         ; 0059d453
    MOV EDX,EAX                         ; 0059d456
    TEST EAX,EAX                        ; 0059d458
    JL 0x0059d486                       ; 0059d45a
        ;   XREF to: 0059d486 (CONDITIONAL_JUMP)  ; LAB_0059d486
    CMP EAX,0xd                         ; 0059d45c
    JZ 0x0059d443                       ; 0059d45f
        ;   XREF to: 0059d443 (CONDITIONAL_JUMP)  ; LAB_0059d443
    CMP EAX,0xa                         ; 0059d461
    JZ 0x0059d493                       ; 0059d464
        ;   XREF to: 0059d493 (CONDITIONAL_JUMP)  ; LAB_0059d493
    INC AL                              ; 0059d466
    AND EAX,0xff                        ; 0059d468
    TEST byte ptr [EAX + 0x626114],0x2  ; 0059d46d
    JZ 0x0059d47b                       ; 0059d474
        ;   XREF to: 0059d47b (CONDITIONAL_JUMP)  ; LAB_0059d47b
    MOV EDX,0x20                        ; 0059d476
    CMP EBX,EDI                         ; 0059d47b
        ;   Label: LAB_0059d47b
    JGE 0x0059d443                      ; 0059d47d
        ;   XREF to: 0059d443 (CONDITIONAL_JUMP)  ; LAB_0059d443
    INC ESI                             ; 0059d47f
    INC EBX                             ; 0059d480
    MOV byte ptr [ESI + -0x1],DL        ; 0059d481
    JMP 0x0059d443                      ; 0059d484
        ;   XREF to: 0059d443 (UNCONDITIONAL_JUMP)  ; LAB_0059d443
    CMP dword ptr [EBP],0x0             ; 0059d486
        ;   Label: LAB_0059d486
    JNZ 0x0059d493                      ; 0059d48a
        ;   XREF to: 0059d493 (CONDITIONAL_JUMP)  ; LAB_0059d493
    XOR EAX,EAX                         ; 0059d48c
    POP EBP                             ; 0059d48e
    POP EDI                             ; 0059d48f
    POP ESI                             ; 0059d490
    POP EBX                             ; 0059d491
    RET                                 ; 0059d492
    ADD EBX,dword ptr [ESP + 0x18]      ; 0059d493
        ;   Label: LAB_0059d493
    MOV EAX,0x1                         ; 0059d497
    MOV byte ptr [EBX],0x0              ; 0059d49c
    POP EBP                             ; 0059d49f
    POP EDI                             ; 0059d4a0
    POP ESI                             ; 0059d4a1
    POP EBX                             ; 0059d4a2
    RET                                 ; 0059d4a3

