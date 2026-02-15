; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_file_c_extract_path_component_FUN_00610400(char **component_ptr,char *buffer,char *source,char *buffer_end)
;
; Parameters:
; char * *         Stack[0x4]:4   component_ptr
; char *           Stack[0x8]:4   buffer
; char *           Stack[0xc]:4   source
; char *           Stack[0x10]:4   buffer_end
;
; XREF[1]:
;   crt_file.c_splitpath_s_FUN_00610460 at 00610588
;
; Called Functions:
;   crt_string.c_mbstrnbytes_FUN_00605ec0
;   crt_string.c_mbstrncpy_FUN_00605e90
;   crt_string.c_mbstrnlen_FUN_00605e50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00610400
        ;   Label: crt_file.c_extract_path_component_FUN_00610400
    PUSH ESI                            ; 00610401
    PUSH EDI                            ; 00610402
    MOV EAX,dword ptr [ESP + 0x10]      ; 00610403
    MOV EBX,dword ptr [ESP + 0x14]      ; 00610407
    MOV EDI,dword ptr [ESP + 0x18]      ; 0061040b
    TEST EAX,EAX                        ; 0061040f
    JZ 0x0061045a                       ; 00610411
        ;   XREF to: 0061045a (CONDITIONAL_JUMP)  ; LAB_0061045a
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00610413
    SUB ESI,EDI                         ; 00610417
    MOV dword ptr [EAX],EBX             ; 00610419
    CMP ESI,0x107                       ; 0061041b
    JC 0x00610428                       ; 00610421
        ;   XREF to: 00610428 (CONDITIONAL_JUMP)  ; LAB_00610428
    MOV ESI,0x106                       ; 00610423
    PUSH ESI                            ; 00610428
        ;   Label: LAB_00610428
    PUSH EDI                            ; 00610429
    CALL crt_string.c_mbstrnlen_FUN_00605e50 ; 0061042a
        ;   XREF to: 00605e50 (UNCONDITIONAL_CALL)  ; int crt_string.c_mbstrnlen_FUN_00605e50(char * str, int max_bytes)
    ADD ESP,0x8                         ; 0061042f
    PUSH EAX                            ; 00610432
    PUSH EDI                            ; 00610433
    PUSH EBX                            ; 00610434
    MOV ESI,EAX                         ; 00610435
    CALL crt_string.c_mbstrncpy_FUN_00605e90 ; 00610437
        ;   XREF to: 00605e90 (UNCONDITIONAL_CALL)  ; char * crt_string.c_mbstrncpy_FUN_00605e90(char * dest, char * src, int char_count)
    ADD ESP,0xc                         ; 0061043c
    PUSH ESI                            ; 0061043f
    PUSH EBX                            ; 00610440
    CALL crt_string.c_mbstrnbytes_FUN_00605ec0 ; 00610441
        ;   XREF to: 00605ec0 (UNCONDITIONAL_CALL)  ; int crt_string.c_mbstrnbytes_FUN_00605ec0(char * str, int char_count)
    ADD ESP,0x8                         ; 00610446
    PUSH ESI                            ; 00610449
    PUSH EBX                            ; 0061044a
    MOV byte ptr [EBX + EAX*0x1],0x0    ; 0061044b
    CALL crt_string.c_mbstrnbytes_FUN_00605ec0 ; 0061044f
        ;   XREF to: 00605ec0 (UNCONDITIONAL_CALL)  ; int crt_string.c_mbstrnbytes_FUN_00605ec0(char * str, int char_count)
    ADD EBX,EAX                         ; 00610454
    ADD ESP,0x8                         ; 00610456
    INC EBX                             ; 00610459
    MOV EAX,EBX                         ; 0061045a
        ;   Label: LAB_0061045a
    POP EDI                             ; 0061045c
    POP ESI                             ; 0061045d
    POP EBX                             ; 0061045e
    RET                                 ; 0061045f

