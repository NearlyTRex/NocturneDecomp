; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_codec_cpp_CCodec_process_FUN_0043ea10(CCodec *this_ptr,_FILE *input_file,int byte_count,_FILE *output_file)
;
; Parameters:
; CCodec *         Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   input_file
; int              Stack[0xc]:4   byte_count
; _FILE *          Stack[0x10]:4   output_file
; Local Variables:
; undefined1       Stack[-0x14]:1  local_14
;
; Called Functions:
;   crt_iostream.cpp_istream_get_FUN_005ff245
;   crt_iostream.cpp_ostream_put_FUN_005ff2d7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043ea10
        ;   Label: support_codec.cpp_CCodec_process_FUN_0043ea10
    PUSH ESI                            ; 0043ea11
    PUSH EDI                            ; 0043ea12
    PUSH EBP                            ; 0043ea13
    SUB ESP,0x4                         ; 0043ea14
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0043ea17
    MOV EDI,dword ptr [ESP + 0x20]      ; 0043ea1b
    MOV EBP,dword ptr [ESP + 0x24]      ; 0043ea1f
    MOV EDX,dword ptr [EDI]             ; 0043ea23
        ;   Label: LAB_0043ea23
    MOV EBX,EDI                         ; 0043ea25
    CMP EDX,0x1                         ; 0043ea27
    JGE 0x0043ea44                      ; 0043ea2a
        ;   XREF to: 0043ea44 (CONDITIONAL_JUMP)  ; LAB_0043ea44
    MOV EAX,0xffffffff                  ; 0043ea2c
        ;   Label: LAB_0043ea2c
    MOV EBX,EAX                         ; 0043ea31
        ;   Label: LAB_0043ea31
    TEST EAX,EAX                        ; 0043ea33
    JGE 0x0043ea66                      ; 0043ea35
        ;   XREF to: 0043ea66 (CONDITIONAL_JUMP)  ; LAB_0043ea66
    MOV EAX,0x1                         ; 0043ea37
    ADD ESP,0x4                         ; 0043ea3c
    POP EBP                             ; 0043ea3f
    POP EDI                             ; 0043ea40
    POP ESI                             ; 0043ea41
    POP EBX                             ; 0043ea42
    RET                                 ; 0043ea43
    MOV EAX,ESP                         ; 0043ea44
        ;   Label: LAB_0043ea44
    PUSH EAX                            ; 0043ea46
    PUSH ESI                            ; 0043ea47
    CALL crt_iostream.cpp_istream_get_FUN_005ff245 ; 0043ea48
        ;   XREF to: 005ff245 (UNCONDITIONAL_CALL)  ; istream * crt_iostream.cpp_istream_get_FUN_005ff245(istream * this_ptr, char * c)
    MOV EAX,dword ptr [ESI]             ; 0043ea4d
    MOV EAX,dword ptr [EAX + 0x4]       ; 0043ea4f
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x10] ; 0043ea52
    ADD ESP,0x8                         ; 0043ea56
    TEST ECX,ECX                        ; 0043ea59
    JNZ 0x0043ea2c                      ; 0043ea5b
        ;   XREF to: 0043ea2c (CONDITIONAL_JUMP)  ; LAB_0043ea2c
    DEC dword ptr [EDI]                 ; 0043ea5d
    XOR EAX,EAX                         ; 0043ea5f
    MOV AL,byte ptr [ESP]               ; 0043ea61
    JMP 0x0043ea31                      ; 0043ea64
        ;   XREF to: 0043ea31 (UNCONDITIONAL_JUMP)  ; LAB_0043ea31
    XOR EAX,EAX                         ; 0043ea66
        ;   Label: LAB_0043ea66
    MOV AL,BL                           ; 0043ea68
    PUSH EAX                            ; 0043ea6a
    PUSH EBP                            ; 0043ea6b
    CALL crt_iostream.cpp_ostream_put_FUN_005ff2d7 ; 0043ea6c
        ;   XREF to: 005ff2d7 (UNCONDITIONAL_CALL)  ; ostream * crt_iostream.cpp_ostream_put_FUN_005ff2d7(ostream * this_ptr, int character)
    ADD ESP,0x8                         ; 0043ea71
    JMP 0x0043ea23                      ; 0043ea74
        ;   XREF to: 0043ea23 (UNCONDITIONAL_JUMP)  ; LAB_0043ea23

